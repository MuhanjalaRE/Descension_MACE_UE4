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

// Function WBP_LoadoutNamingWidget.WBP_LoadoutNamingWidget_C.Get_Border_2_Visibility_1
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// UMG_ESlateVisibility           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
UMG_ESlateVisibility UWBP_LoadoutNamingWidget_C::Get_Border_2_Visibility_1()
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function WBP_LoadoutNamingWidget.WBP_LoadoutNamingWidget_C.Get_Border_2_Visibility_1");
	}

	UWBP_LoadoutNamingWidget_C_Get_Border_2_Visibility_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function WBP_LoadoutNamingWidget.WBP_LoadoutNamingWidget_C.GetValidityDisplayText
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)
struct FText UWBP_LoadoutNamingWidget_C::GetValidityDisplayText()
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function WBP_LoadoutNamingWidget.WBP_LoadoutNamingWidget_C.GetValidityDisplayText");
	}

	UWBP_LoadoutNamingWidget_C_GetValidityDisplayText_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function WBP_LoadoutNamingWidget.WBP_LoadoutNamingWidget_C.GetBrushColor_1
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FLinearColor            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
struct FLinearColor UWBP_LoadoutNamingWidget_C::GetBrushColor_1()
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function WBP_LoadoutNamingWidget.WBP_LoadoutNamingWidget_C.GetBrushColor_1");
	}

	UWBP_LoadoutNamingWidget_C_GetBrushColor_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function WBP_LoadoutNamingWidget.WBP_LoadoutNamingWidget_C.GetToolTipWidget_1
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UWidget*                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
class UWidget* UWBP_LoadoutNamingWidget_C::GetToolTipWidget_1()
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function WBP_LoadoutNamingWidget.WBP_LoadoutNamingWidget_C.GetToolTipWidget_1");
	}

	UWBP_LoadoutNamingWidget_C_GetToolTipWidget_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function WBP_LoadoutNamingWidget.WBP_LoadoutNamingWidget_C.BndEvt__EditableTextBox_0_K2Node_ComponentBoundEvent_0_OnEditableTextBoxChangedEvent__DelegateSignature
// (HasOutParms, BlueprintEvent)
// Parameters:
// struct FText                   Text                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
void UWBP_LoadoutNamingWidget_C::BndEvt__EditableTextBox_0_K2Node_ComponentBoundEvent_0_OnEditableTextBoxChangedEvent__DelegateSignature(const struct FText& Text)
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function WBP_LoadoutNamingWidget.WBP_LoadoutNamingWidget_C.BndEvt__EditableTextBox_0_K2Node_ComponentBoundEvent_0_OnEditableTextBoxChangedEvent__DelegateSignature");
	}

	UWBP_LoadoutNamingWidget_C_BndEvt__EditableTextBox_0_K2Node_ComponentBoundEvent_0_OnEditableTextBoxChangedEvent__DelegateSignature_Params params;
	params.Text = Text;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WBP_LoadoutNamingWidget.WBP_LoadoutNamingWidget_C.SetNameStatus
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText                   Input                          (BlueprintVisible, BlueprintReadOnly, Parm)
void UWBP_LoadoutNamingWidget_C::SetNameStatus(const struct FText& Input)
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function WBP_LoadoutNamingWidget.WBP_LoadoutNamingWidget_C.SetNameStatus");
	}

	UWBP_LoadoutNamingWidget_C_SetNameStatus_Params params;
	params.Input = Input;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WBP_LoadoutNamingWidget.WBP_LoadoutNamingWidget_C.BndEvt__EditableTextBox_0_K2Node_ComponentBoundEvent_1_OnEditableTextBoxCommittedEvent__DelegateSignature
// (HasOutParms, BlueprintEvent)
// Parameters:
// struct FText                   Text                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// TEnumAsByte<SlateCore_ETextCommit> CommitMethod                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_LoadoutNamingWidget_C::BndEvt__EditableTextBox_0_K2Node_ComponentBoundEvent_1_OnEditableTextBoxCommittedEvent__DelegateSignature(const struct FText& Text, TEnumAsByte<SlateCore_ETextCommit> CommitMethod)
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function WBP_LoadoutNamingWidget.WBP_LoadoutNamingWidget_C.BndEvt__EditableTextBox_0_K2Node_ComponentBoundEvent_1_OnEditableTextBoxCommittedEvent__DelegateSignature");
	}

	UWBP_LoadoutNamingWidget_C_BndEvt__EditableTextBox_0_K2Node_ComponentBoundEvent_1_OnEditableTextBoxCommittedEvent__DelegateSignature_Params params;
	params.Text = Text;
	params.CommitMethod = CommitMethod;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WBP_LoadoutNamingWidget.WBP_LoadoutNamingWidget_C.BndEvt__Cancel_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
void UWBP_LoadoutNamingWidget_C::BndEvt__Cancel_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature()
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function WBP_LoadoutNamingWidget.WBP_LoadoutNamingWidget_C.BndEvt__Cancel_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature");
	}

	UWBP_LoadoutNamingWidget_C_BndEvt__Cancel_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WBP_LoadoutNamingWidget.WBP_LoadoutNamingWidget_C.BndEvt__SubmitButton_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
void UWBP_LoadoutNamingWidget_C::BndEvt__SubmitButton_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature()
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function WBP_LoadoutNamingWidget.WBP_LoadoutNamingWidget_C.BndEvt__SubmitButton_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature");
	}

	UWBP_LoadoutNamingWidget_C_BndEvt__SubmitButton_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WBP_LoadoutNamingWidget.WBP_LoadoutNamingWidget_C.TextCommited
// (BlueprintCallable, BlueprintEvent)
void UWBP_LoadoutNamingWidget_C::TextCommited()
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function WBP_LoadoutNamingWidget.WBP_LoadoutNamingWidget_C.TextCommited");
	}

	UWBP_LoadoutNamingWidget_C_TextCommited_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WBP_LoadoutNamingWidget.WBP_LoadoutNamingWidget_C.ExecuteUbergraph_WBP_LoadoutNamingWidget
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_LoadoutNamingWidget_C::ExecuteUbergraph_WBP_LoadoutNamingWidget(int EntryPoint)
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function WBP_LoadoutNamingWidget.WBP_LoadoutNamingWidget_C.ExecuteUbergraph_WBP_LoadoutNamingWidget");
	}

	UWBP_LoadoutNamingWidget_C_ExecuteUbergraph_WBP_LoadoutNamingWidget_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WBP_LoadoutNamingWidget.WBP_LoadoutNamingWidget_C.OnValidTextCommitted__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 Name                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
void UWBP_LoadoutNamingWidget_C::OnValidTextCommitted__DelegateSignature(const struct FString& Name)
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function WBP_LoadoutNamingWidget.WBP_LoadoutNamingWidget_C.OnValidTextCommitted__DelegateSignature");
	}

	UWBP_LoadoutNamingWidget_C_OnValidTextCommitted__DelegateSignature_Params params;
	params.Name = Name;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WBP_LoadoutNamingWidget.WBP_LoadoutNamingWidget_C.OnTextCancel__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
void UWBP_LoadoutNamingWidget_C::OnTextCancel__DelegateSignature()
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function WBP_LoadoutNamingWidget.WBP_LoadoutNamingWidget_C.OnTextCancel__DelegateSignature");
	}

	UWBP_LoadoutNamingWidget_C_OnTextCancel__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
