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

// Function WBP_LocalPlayerDetails.WBP_LocalPlayerDetails_C.GetText_1
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)
struct FText UWBP_LocalPlayerDetails_C::GetText_1()
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function WBP_LocalPlayerDetails.WBP_LocalPlayerDetails_C.GetText_1");
	}

	UWBP_LocalPlayerDetails_C_GetText_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function WBP_LocalPlayerDetails.WBP_LocalPlayerDetails_C.Get_NameBlock_Text_1
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)
struct FText UWBP_LocalPlayerDetails_C::Get_NameBlock_Text_1()
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function WBP_LocalPlayerDetails.WBP_LocalPlayerDetails_C.Get_NameBlock_Text_1");
	}

	UWBP_LocalPlayerDetails_C_Get_NameBlock_Text_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function WBP_LocalPlayerDetails.WBP_LocalPlayerDetails_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UWBP_LocalPlayerDetails_C::Construct()
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function WBP_LocalPlayerDetails.WBP_LocalPlayerDetails_C.Construct");
	}

	UWBP_LocalPlayerDetails_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WBP_LocalPlayerDetails.WBP_LocalPlayerDetails_C.BndEvt__Button_320_K2Node_ComponentBoundEvent_0_OnButtonPressedEvent__DelegateSignature
// (BlueprintEvent)
void UWBP_LocalPlayerDetails_C::BndEvt__Button_320_K2Node_ComponentBoundEvent_0_OnButtonPressedEvent__DelegateSignature()
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function WBP_LocalPlayerDetails.WBP_LocalPlayerDetails_C.BndEvt__Button_320_K2Node_ComponentBoundEvent_0_OnButtonPressedEvent__DelegateSignature");
	}

	UWBP_LocalPlayerDetails_C_BndEvt__Button_320_K2Node_ComponentBoundEvent_0_OnButtonPressedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WBP_LocalPlayerDetails.WBP_LocalPlayerDetails_C.ExecuteUbergraph_WBP_LocalPlayerDetails
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_LocalPlayerDetails_C::ExecuteUbergraph_WBP_LocalPlayerDetails(int EntryPoint)
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function WBP_LocalPlayerDetails.WBP_LocalPlayerDetails_C.ExecuteUbergraph_WBP_LocalPlayerDetails");
	}

	UWBP_LocalPlayerDetails_C_ExecuteUbergraph_WBP_LocalPlayerDetails_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
