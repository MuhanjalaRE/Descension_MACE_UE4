#pragma once
#pragma comment(lib, "d3d11.lib")
#include "d3d11.h"

namespace dx11 {
extern HANDLE game_dx_mutex;
extern bool imgui_show_menu;

bool Hook(void);
}