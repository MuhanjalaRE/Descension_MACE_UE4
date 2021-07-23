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

// Function BP_MAHUD.BP_MAHUD_C.ProcessPlayerExpressionInput
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
// bool                           IsAbortKey                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
bool ABP_MAHUD_C::ProcessPlayerExpressionInput(const struct FKey& Key, bool IsAbortKey)
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function BP_MAHUD.BP_MAHUD_C.ProcessPlayerExpressionInput");
	}

	ABP_MAHUD_C_ProcessPlayerExpressionInput_Params params;
	params.Key = Key;
	params.IsAbortKey = IsAbortKey;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function BP_MAHUD.BP_MAHUD_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
void ABP_MAHUD_C::ReceiveBeginPlay()
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function BP_MAHUD.BP_MAHUD_C.ReceiveBeginPlay");
	}

	ABP_MAHUD_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_MAHUD.BP_MAHUD_C.StartQuickVoice
// (Event, Public, BlueprintEvent)
void ABP_MAHUD_C::StartQuickVoice()
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function BP_MAHUD.BP_MAHUD_C.StartQuickVoice");
	}

	ABP_MAHUD_C_StartQuickVoice_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_MAHUD.BP_MAHUD_C.BP_OnScoreApplied
// (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// struct FText                   ScoreText                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// float                          Value                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_MAHUD_C::BP_OnScoreApplied(const struct FText& ScoreText, float Value)
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function BP_MAHUD.BP_MAHUD_C.BP_OnScoreApplied");
	}

	ABP_MAHUD_C_BP_OnScoreApplied_Params params;
	params.ScoreText = ScoreText;
	params.Value = Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_MAHUD.BP_MAHUD_C.ExecuteUbergraph_BP_MAHUD
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_MAHUD_C::ExecuteUbergraph_BP_MAHUD(int EntryPoint)
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function BP_MAHUD.BP_MAHUD_C.ExecuteUbergraph_BP_MAHUD");
	}

	ABP_MAHUD_C_ExecuteUbergraph_BP_MAHUD_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
