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

// Function WBP_Loadouts_PackButton.WBP_Loadouts_PackButton_C.SetPackInfoFromLoadout
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FMALoadout              Loadout                        (BlueprintVisible, BlueprintReadOnly, Parm)
void UWBP_Loadouts_PackButton_C::SetPackInfoFromLoadout(const struct FMALoadout& Loadout)
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function WBP_Loadouts_PackButton.WBP_Loadouts_PackButton_C.SetPackInfoFromLoadout");
	}

	UWBP_Loadouts_PackButton_C_SetPackInfoFromLoadout_Params params;
	params.Loadout = Loadout;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WBP_Loadouts_PackButton.WBP_Loadouts_PackButton_C.GetForegroundColor_1
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FSlateColor             ReturnValue                    (Parm, OutParm, ReturnParm)
struct FSlateColor UWBP_Loadouts_PackButton_C::GetForegroundColor_1()
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function WBP_Loadouts_PackButton.WBP_Loadouts_PackButton_C.GetForegroundColor_1");
	}

	UWBP_Loadouts_PackButton_C_GetForegroundColor_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function WBP_Loadouts_PackButton.WBP_Loadouts_PackButton_C.GetBackgroundColor_1
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FLinearColor            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
struct FLinearColor UWBP_Loadouts_PackButton_C::GetBackgroundColor_1()
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function WBP_Loadouts_PackButton.WBP_Loadouts_PackButton_C.GetBackgroundColor_1");
	}

	UWBP_Loadouts_PackButton_C_GetBackgroundColor_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function WBP_Loadouts_PackButton.WBP_Loadouts_PackButton_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_26_OnButtonPressedEvent__DelegateSignature
// (BlueprintEvent)
void UWBP_Loadouts_PackButton_C::BndEvt__Button_0_K2Node_ComponentBoundEvent_26_OnButtonPressedEvent__DelegateSignature()
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function WBP_Loadouts_PackButton.WBP_Loadouts_PackButton_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_26_OnButtonPressedEvent__DelegateSignature");
	}

	UWBP_Loadouts_PackButton_C_BndEvt__Button_0_K2Node_ComponentBoundEvent_26_OnButtonPressedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WBP_Loadouts_PackButton.WBP_Loadouts_PackButton_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_40_OnButtonReleasedEvent__DelegateSignature
// (BlueprintEvent)
void UWBP_Loadouts_PackButton_C::BndEvt__Button_0_K2Node_ComponentBoundEvent_40_OnButtonReleasedEvent__DelegateSignature()
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function WBP_Loadouts_PackButton.WBP_Loadouts_PackButton_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_40_OnButtonReleasedEvent__DelegateSignature");
	}

	UWBP_Loadouts_PackButton_C_BndEvt__Button_0_K2Node_ComponentBoundEvent_40_OnButtonReleasedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WBP_Loadouts_PackButton.WBP_Loadouts_PackButton_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_22_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
void UWBP_Loadouts_PackButton_C::BndEvt__Button_0_K2Node_ComponentBoundEvent_22_OnButtonClickedEvent__DelegateSignature()
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function WBP_Loadouts_PackButton.WBP_Loadouts_PackButton_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_22_OnButtonClickedEvent__DelegateSignature");
	}

	UWBP_Loadouts_PackButton_C_BndEvt__Button_0_K2Node_ComponentBoundEvent_22_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WBP_Loadouts_PackButton.WBP_Loadouts_PackButton_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)
void UWBP_Loadouts_PackButton_C::BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature()
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function WBP_Loadouts_PackButton.WBP_Loadouts_PackButton_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature");
	}

	UWBP_Loadouts_PackButton_C_BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WBP_Loadouts_PackButton.WBP_Loadouts_PackButton_C.ExecuteUbergraph_WBP_Loadouts_PackButton
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_Loadouts_PackButton_C::ExecuteUbergraph_WBP_Loadouts_PackButton(int EntryPoint)
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function WBP_Loadouts_PackButton.WBP_Loadouts_PackButton_C.ExecuteUbergraph_WBP_Loadouts_PackButton");
	}

	UWBP_Loadouts_PackButton_C_ExecuteUbergraph_WBP_Loadouts_PackButton_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WBP_Loadouts_PackButton.WBP_Loadouts_PackButton_C.OnClicked__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
void UWBP_Loadouts_PackButton_C::OnClicked__DelegateSignature()
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function WBP_Loadouts_PackButton.WBP_Loadouts_PackButton_C.OnClicked__DelegateSignature");
	}

	UWBP_Loadouts_PackButton_C_OnClicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
