// Name: mace, Version: 1.9.1.12285

#include "../pch.h"

/*!!DEFINE!!*/

/*!!HELPER_DEF!!*/

/*!!HELPER_INC!!*/

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
//---------------------------------------------------------------------------
// Functions
//---------------------------------------------------------------------------

// Function AutomationUtils.AutomationUtilsBlueprintLibrary.TakeGameplayAutomationScreenshot
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FString                 ScreenShotName                 (ConstParm, Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          MaxGlobalError                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          MaxLocalError                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 MapNameOverride                (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UAutomationUtilsBlueprintLibrary::STATIC_TakeGameplayAutomationScreenshot(const struct FString& ScreenShotName, float MaxGlobalError, float MaxLocalError, const struct FString& MapNameOverride)
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function AutomationUtils.AutomationUtilsBlueprintLibrary.TakeGameplayAutomationScreenshot");
	}

	UAutomationUtilsBlueprintLibrary_TakeGameplayAutomationScreenshot_Params params;
	params.ScreenShotName = ScreenShotName;
	params.MaxGlobalError = MaxGlobalError;
	params.MaxLocalError = MaxLocalError;
	params.MapNameOverride = MapNameOverride;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
