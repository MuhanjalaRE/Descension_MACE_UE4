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

// Function WBP_DetectedStatus.WBP_DetectedStatus_C.SetDetectedState
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// MidairCE_EDetectedState        NewState                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_DetectedStatus_C::SetDetectedState(MidairCE_EDetectedState NewState)
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function WBP_DetectedStatus.WBP_DetectedStatus_C.SetDetectedState");
	}

	UWBP_DetectedStatus_C_SetDetectedState_Params params;
	params.NewState = NewState;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WBP_DetectedStatus.WBP_DetectedStatus_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UWBP_DetectedStatus_C::Construct()
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function WBP_DetectedStatus.WBP_DetectedStatus_C.Construct");
	}

	UWBP_DetectedStatus_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WBP_DetectedStatus.WBP_DetectedStatus_C.CustomEvent_1
// (BlueprintCallable, BlueprintEvent)
void UWBP_DetectedStatus_C::CustomEvent_1()
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function WBP_DetectedStatus.WBP_DetectedStatus_C.CustomEvent_1");
	}

	UWBP_DetectedStatus_C_CustomEvent_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WBP_DetectedStatus.WBP_DetectedStatus_C.ExecuteUbergraph_WBP_DetectedStatus
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_DetectedStatus_C::ExecuteUbergraph_WBP_DetectedStatus(int EntryPoint)
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function WBP_DetectedStatus.WBP_DetectedStatus_C.ExecuteUbergraph_WBP_DetectedStatus");
	}

	UWBP_DetectedStatus_C_ExecuteUbergraph_WBP_DetectedStatus_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
