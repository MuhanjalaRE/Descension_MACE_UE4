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

// Function WBP_QuickPlayMenu.WBP_QuickPlayMenu_C.OnFailure_7EDE06084DF7C81904EF1E982FDBD12A
// (BlueprintCallable, BlueprintEvent)
void UWBP_QuickPlayMenu_C::OnFailure_7EDE06084DF7C81904EF1E982FDBD12A()
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function WBP_QuickPlayMenu.WBP_QuickPlayMenu_C.OnFailure_7EDE06084DF7C81904EF1E982FDBD12A");
	}

	UWBP_QuickPlayMenu_C_OnFailure_7EDE06084DF7C81904EF1E982FDBD12A_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WBP_QuickPlayMenu.WBP_QuickPlayMenu_C.OnSuccess_7EDE06084DF7C81904EF1E982FDBD12A
// (BlueprintCallable, BlueprintEvent)
void UWBP_QuickPlayMenu_C::OnSuccess_7EDE06084DF7C81904EF1E982FDBD12A()
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function WBP_QuickPlayMenu.WBP_QuickPlayMenu_C.OnSuccess_7EDE06084DF7C81904EF1E982FDBD12A");
	}

	UWBP_QuickPlayMenu_C_OnSuccess_7EDE06084DF7C81904EF1E982FDBD12A_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WBP_QuickPlayMenu.WBP_QuickPlayMenu_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UWBP_QuickPlayMenu_C::Construct()
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function WBP_QuickPlayMenu.WBP_QuickPlayMenu_C.Construct");
	}

	UWBP_QuickPlayMenu_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WBP_QuickPlayMenu.WBP_QuickPlayMenu_C.BndEvt__WBP_SelectableButtonWithText_K2Node_ComponentBoundEvent_0_ButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UWBP_SelectableButton_C* Clicked_Button                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_QuickPlayMenu_C::BndEvt__WBP_SelectableButtonWithText_K2Node_ComponentBoundEvent_0_ButtonClicked__DelegateSignature(class UWBP_SelectableButton_C* Clicked_Button)
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function WBP_QuickPlayMenu.WBP_QuickPlayMenu_C.BndEvt__WBP_SelectableButtonWithText_K2Node_ComponentBoundEvent_0_ButtonClicked__DelegateSignature");
	}

	UWBP_QuickPlayMenu_C_BndEvt__WBP_SelectableButtonWithText_K2Node_ComponentBoundEvent_0_ButtonClicked__DelegateSignature_Params params;
	params.Clicked_Button = Clicked_Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WBP_QuickPlayMenu.WBP_QuickPlayMenu_C.Found sessions
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FBlueprintSessionResult> Results                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
void UWBP_QuickPlayMenu_C::Found_sessions(TArray<struct FBlueprintSessionResult> Results)
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function WBP_QuickPlayMenu.WBP_QuickPlayMenu_C.Found sessions");
	}

	UWBP_QuickPlayMenu_C_Found_sessions_Params params;
	params.Results = Results;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WBP_QuickPlayMenu.WBP_QuickPlayMenu_C.ExecuteUbergraph_WBP_QuickPlayMenu
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_QuickPlayMenu_C::ExecuteUbergraph_WBP_QuickPlayMenu(int EntryPoint)
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function WBP_QuickPlayMenu.WBP_QuickPlayMenu_C.ExecuteUbergraph_WBP_QuickPlayMenu");
	}

	UWBP_QuickPlayMenu_C_ExecuteUbergraph_WBP_QuickPlayMenu_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
