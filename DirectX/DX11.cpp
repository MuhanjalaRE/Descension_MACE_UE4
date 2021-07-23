#include <iostream>
#include <string>

#include "DX11.h"
#include "ue.h"

#include "detours.h"

#include "imgui.h"
#include "imgui_impl_dx11.h"
#include "imgui_impl_win32.h"

extern LRESULT ImGui_ImplWin32_WndProcHandler(HWND hWnd, UINT msg, WPARAM wParam, LPARAM lParam);
LRESULT CALLBACK hWndProc(HWND hWnd, UINT uMsg, WPARAM wParam, LPARAM lParam);
static WNDPROC original_wndproc_handler = NULL;

extern bool ue::frame_is_ready = false;

namespace dx11 {

typedef HRESULT(__stdcall* _IDXGISwapChainPresent)(IDXGISwapChain*, UINT, UINT);
typedef HRESULT(__stdcall* _IDXGISwapChainResizeBuffers)(IDXGISwapChain*, UINT, UINT, UINT, DXGI_FORMAT, UINT);
typedef HRESULT(__stdcall* _ID3D11DeviceContextDrawIndexed)(ID3D11DeviceContext*, UINT, UINT, INT);

_IDXGISwapChainPresent original_swapchain_present = NULL;
_IDXGISwapChainResizeBuffers original_swapchain_resizebuffers = NULL;
_ID3D11DeviceContextDrawIndexed original_devicecontext_drawindexed = NULL;

HRESULT __stdcall IDXGISwapChainPresent(IDXGISwapChain* swapchain, UINT sync_interval, UINT flags);
HRESULT __stdcall IDXGISwapChainResizeBuffers(IDXGISwapChain* swapchain, UINT BufferCount, UINT Width, UINT Height, DXGI_FORMAT NewFormat, UINT SwapChainFlags);

HRESULT __stdcall ID3D11DeviceContextDrawIndexed(ID3D11DeviceContext* pContext, UINT IndexCount, UINT StartIndexLocation, INT BaseVertexLocation);

extern HANDLE game_dx_mutex = CreateMutex(NULL, false, NULL);

extern bool imgui_show_menu = false;
static bool initialised = false;
static HWND hwnd = NULL;

static ID3D11Device* main_device = NULL;
static ID3D11DeviceContext* main_device_context = NULL;
static IDXGISwapChain* main_swapchain = NULL;
static ID3D11RenderTargetView* main_render_target_view = NULL;

HRESULT __stdcall IDXGISwapChainPresent(IDXGISwapChain* swapchain, UINT sync_interval_, UINT flags_) {
    if (!initialised) {
        main_swapchain = swapchain;
        main_swapchain->GetDevice(__uuidof(main_device), (void**)&main_device);
        main_device->GetImmediateContext(&main_device_context);

        IMGUI_CHECKVERSION();
        ImGui::CreateContext();

        ImGuiIO& io = ImGui::GetIO();
        io.IniFilename = NULL;  // disable ini loading
        // io.ConfigFlags |= ImGuiConfigFlags_NavEnableKeyboard;

        ImGui_ImplWin32_Init(hwnd);
        ImGui_ImplDX11_Init(main_device, main_device_context);

        ID3D11Texture2D* p_back_buffer;
        main_swapchain->GetBuffer(0, __uuidof(ID3D11Texture2D), (LPVOID*)&p_back_buffer);
        main_device->CreateRenderTargetView(p_back_buffer, NULL, &main_render_target_view);
        p_back_buffer->Release();

        original_wndproc_handler = (WNDPROC)SetWindowLongPtr(hwnd, GWLP_WNDPROC, (LONG_PTR)hWndProc);

        ue::HookUnrealEngine4();

        initialised = true;

        DWORD64* swapchain_vmt_pointer = (DWORD64*)swapchain;
        DWORD64 swapchain_vmt = *swapchain_vmt_pointer;
        DWORD64 swapchain_vmt_resizebuffers = swapchain_vmt + sizeof(void*) * 13;
        DWORD64 swapchain_resizebuffers_first_instruction = *((DWORD64*)swapchain_vmt_resizebuffers);
        original_swapchain_resizebuffers = (_IDXGISwapChainResizeBuffers)swapchain_resizebuffers_first_instruction;

        DetourTransactionBegin();
        DetourUpdateThread(GetCurrentThread());
        DetourAttach(&(PVOID&)original_swapchain_resizebuffers, IDXGISwapChainResizeBuffers);
        DetourTransactionCommit();
    }

    DWORD dwWaitResult = WaitForSingleObject(game_dx_mutex, INFINITE);

    ImGui_ImplDX11_NewFrame();
    ImGui_ImplWin32_NewFrame();
    ImGui::NewFrame();

    ue::DrawImGuiInUE4();

    ImGui::EndFrame();
    ImGui::Render();

    main_device_context->OMSetRenderTargets(1, &main_render_target_view, NULL);
    ImGui_ImplDX11_RenderDrawData(ImGui::GetDrawData());

    ue::frame_is_ready = true;
    ReleaseMutex(game_dx_mutex);

    HRESULT res = original_swapchain_present(swapchain, sync_interval_, flags_);
    return res;
}

HRESULT IDXGISwapChainResizeBuffers(IDXGISwapChain* pThis, UINT BufferCount, UINT Width, UINT Height, DXGI_FORMAT NewFormat, UINT SwapChainFlags) {
    if (main_render_target_view) {
        main_device_context->OMSetRenderTargets(0, 0, 0);
        main_render_target_view->Release();
    }

    HRESULT hr = original_swapchain_resizebuffers(pThis, BufferCount, Width, Height, NewFormat, SwapChainFlags);

    ID3D11Texture2D* pBuffer;
    pThis->GetBuffer(0, __uuidof(ID3D11Texture2D), (void**)&pBuffer);
    // Perform error handling here!

    main_device->CreateRenderTargetView(pBuffer, NULL, &main_render_target_view);
    // Perform error handling here!
    pBuffer->Release();

    main_device_context->OMSetRenderTargets(1, &main_render_target_view, NULL);

    // Set up the viewport.
    D3D11_VIEWPORT vp;
    vp.Width = Width;
    vp.Height = Height;
    vp.MinDepth = 0.0f;
    vp.MaxDepth = 1.0f;
    vp.TopLeftX = 0;
    vp.TopLeftY = 0;
    main_device_context->RSSetViewports(1, &vp);

    return hr;
}

IDXGISwapChain* CreateSwapchain(void) {
    DWORD64 base_address = (DWORD64)GetModuleHandle(0);

    DXGI_SWAP_CHAIN_DESC sd;
    ZeroMemory(&sd, sizeof(sd));
    sd.BufferCount = 1;
    sd.BufferDesc.Width = 640;
    sd.BufferDesc.Height = 480;
    sd.BufferDesc.Format = DXGI_FORMAT_R8G8B8A8_UNORM;
    sd.BufferDesc.RefreshRate.Numerator = 60;
    sd.BufferDesc.RefreshRate.Denominator = 1;
    sd.BufferUsage = DXGI_USAGE_RENDER_TARGET_OUTPUT;
    sd.OutputWindow = hwnd;
    sd.SampleDesc.Count = 1;
    sd.SampleDesc.Quality = 0;
    sd.Windowed = TRUE;

    D3D_FEATURE_LEVEL FeatureLevelsRequested = D3D_FEATURE_LEVEL_11_0;
    UINT numLevelsRequested = 1;
    D3D_FEATURE_LEVEL FeatureLevelsSupported;

    HRESULT hr;

    ID3D11Device* device = NULL;
    ID3D11DeviceContext* device_context = NULL;
    IDXGISwapChain* swapchain = NULL;

    if (FAILED(hr = D3D11CreateDeviceAndSwapChain(NULL, D3D_DRIVER_TYPE_HARDWARE, NULL, 0, &FeatureLevelsRequested, numLevelsRequested, D3D11_SDK_VERSION, &sd, &swapchain, &device, &FeatureLevelsSupported, &device_context))) {
        return false;
    } else {
        device->Release();
        device_context->Release();
        return swapchain;
    }
}

bool Hook(void) {
    hwnd = FindWindow(NULL, "MidairCE (64-bit Test PCD3D_SM5) ");
    if (hwnd == NULL) {
        return false;
    }

    IDXGISwapChain* swapchain = CreateSwapchain();

    if (swapchain) {
        DWORD64* swapchain_vmt_pointer = (DWORD64*)swapchain;
        DWORD64 swapchain_vmt = *swapchain_vmt_pointer;
        DWORD64 swapchain_vmt_present = swapchain_vmt + sizeof(void*) * 8;
        DWORD64 swapchain_present_first_instruction = *((DWORD64*)swapchain_vmt_present);
        original_swapchain_present = (_IDXGISwapChainPresent)swapchain_present_first_instruction;

        DetourTransactionBegin();
        DetourUpdateThread(GetCurrentThread());
        DetourAttach(&(PVOID&)original_swapchain_present, IDXGISwapChainPresent);
        DetourTransactionCommit();

        return true;
    }
    return false;
}
}  // namespace dx11

LRESULT CALLBACK hWndProc(HWND hWnd, UINT uMsg, WPARAM wParam, LPARAM lParam) {
    ImGuiIO& io = ImGui::GetIO();
    POINT mPos;
    GetCursorPos(&mPos);
    ScreenToClient(hWnd, &mPos);
    ImGui::GetIO().MousePos.x = mPos.x;
    ImGui::GetIO().MousePos.y = mPos.y;

    if (uMsg == WM_KEYDOWN) {
        if (wParam == VK_INSERT) {
            dx11::imgui_show_menu = !dx11::imgui_show_menu;
        }
        if (wParam == VK_CONTROL) {
            aimbot::Reset();
        }
    }

    if (dx11::imgui_show_menu) {
        io.MouseDrawCursor = true;

        ImGui_ImplWin32_WndProcHandler(hWnd, uMsg, wParam, lParam);
        return true;  // Uncomment this line to block game input when window open. Leave commented to allow game input when window open.
    } else {
        io.MouseDrawCursor = false;
    }

    return CallWindowProc(original_wndproc_handler, hWnd, uMsg, wParam, lParam);
}