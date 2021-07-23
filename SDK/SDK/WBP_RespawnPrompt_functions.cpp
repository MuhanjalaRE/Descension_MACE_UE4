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

// Function WBP_RespawnPrompt.WBP_RespawnPrompt_C.GetRespawnLeaderText
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)
struct FText UWBP_RespawnPrompt_C::GetRespawnLeaderText()
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function WBP_RespawnPrompt.WBP_RespawnPrompt_C.GetRespawnLeaderText");
	}

	UWBP_RespawnPrompt_C_GetRespawnLeaderText_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function WBP_RespawnPrompt.WBP_RespawnPrompt_C.GetEntireWidgetVisibility
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// UMG_ESlateVisibility           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
UMG_ESlateVisibility UWBP_RespawnPrompt_C::GetEntireWidgetVisibility()
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function WBP_RespawnPrompt.WBP_RespawnPrompt_C.GetEntireWidgetVisibility");
	}

	UWBP_RespawnPrompt_C_GetEntireWidgetVisibility_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function WBP_RespawnPrompt.WBP_RespawnPrompt_C.GetLoadoutName
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)
struct FText UWBP_RespawnPrompt_C::GetLoadoutName()
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function WBP_RespawnPrompt.WBP_RespawnPrompt_C.GetLoadoutName");
	}

	UWBP_RespawnPrompt_C_GetLoadoutName_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function WBP_RespawnPrompt.WBP_RespawnPrompt_C.GetQuickSpawnButtonLeadingText
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)
struct FText UWBP_RespawnPrompt_C::GetQuickSpawnButtonLeadingText()
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function WBP_RespawnPrompt.WBP_RespawnPrompt_C.GetQuickSpawnButtonLeadingText");
	}

	UWBP_RespawnPrompt_C_GetQuickSpawnButtonLeadingText_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function WBP_RespawnPrompt.WBP_RespawnPrompt_C.GetFullSpawnButtonLeadingText
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)
struct FText UWBP_RespawnPrompt_C::GetFullSpawnButtonLeadingText()
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function WBP_RespawnPrompt.WBP_RespawnPrompt_C.GetFullSpawnButtonLeadingText");
	}

	UWBP_RespawnPrompt_C_GetFullSpawnButtonLeadingText_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function WBP_RespawnPrompt.WBP_RespawnPrompt_C.CommonFloatToText
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                          Value                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)
struct FText UWBP_RespawnPrompt_C::CommonFloatToText(float Value)
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function WBP_RespawnPrompt.WBP_RespawnPrompt_C.CommonFloatToText");
	}

	UWBP_RespawnPrompt_C_CommonFloatToText_Params params;
	params.Value = Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function WBP_RespawnPrompt.WBP_RespawnPrompt_C.GetBasicSpawnVisibility
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// UMG_ESlateVisibility           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
UMG_ESlateVisibility UWBP_RespawnPrompt_C::GetBasicSpawnVisibility()
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function WBP_RespawnPrompt.WBP_RespawnPrompt_C.GetBasicSpawnVisibility");
	}

	UWBP_RespawnPrompt_C_GetBasicSpawnVisibility_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function WBP_RespawnPrompt.WBP_RespawnPrompt_C.GetPressSpawnVisibility
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// UMG_ESlateVisibility           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
UMG_ESlateVisibility UWBP_RespawnPrompt_C::GetPressSpawnVisibility()
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function WBP_RespawnPrompt.WBP_RespawnPrompt_C.GetPressSpawnVisibility");
	}

	UWBP_RespawnPrompt_C_GetPressSpawnVisibility_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
