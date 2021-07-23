#pragma once
namespace ue {
extern bool frame_is_ready;
extern const char* ufunction_to_hook;

void HookUnrealEngine4(void);
void DrawImGuiInUE4(void);
}

namespace aimbot {
void Reset(void);
}