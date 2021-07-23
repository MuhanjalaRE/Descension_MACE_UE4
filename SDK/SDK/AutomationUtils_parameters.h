#pragma once

// Name: mace, Version: 1.9.1.12285


/*!!DEFINE!!*/

/*!!HELPER_DEF!!*/

/*!!HELPER_INC!!*/

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
//---------------------------------------------------------------------------
// Parameters
//---------------------------------------------------------------------------

// Function AutomationUtils.AutomationUtilsBlueprintLibrary.TakeGameplayAutomationScreenshot
struct UAutomationUtilsBlueprintLibrary_TakeGameplayAutomationScreenshot_Params
{
	struct FString                                     ScreenShotName;                                            // (ConstParm, Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              MaxGlobalError;                                            // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              MaxLocalError;                                             // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     MapNameOverride;                                           // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
