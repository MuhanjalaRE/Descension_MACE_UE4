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

// Function WBP_SelectableButtonWithText.WBP_SelectableButtonWithText_C.UpdateSlotAnchor
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWidget*                 Item                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D               InPosition                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D               InSize                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_SelectableButtonWithText_C::UpdateSlotAnchor(class UWidget* Item, const struct FVector2D& InPosition, const struct FVector2D& InSize)
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function WBP_SelectableButtonWithText.WBP_SelectableButtonWithText_C.UpdateSlotAnchor");
	}

	UWBP_SelectableButtonWithText_C_UpdateSlotAnchor_Params params;
	params.Item = Item;
	params.InPosition = InPosition;
	params.InSize = InSize;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WBP_SelectableButtonWithText.WBP_SelectableButtonWithText_C.Get_NewItemBadge_Visibility_1
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// UMG_ESlateVisibility           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
UMG_ESlateVisibility UWBP_SelectableButtonWithText_C::Get_NewItemBadge_Visibility_1()
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function WBP_SelectableButtonWithText.WBP_SelectableButtonWithText_C.Get_NewItemBadge_Visibility_1");
	}

	UWBP_SelectableButtonWithText_C_Get_NewItemBadge_Visibility_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function WBP_SelectableButtonWithText.WBP_SelectableButtonWithText_C.GetVisibility_1
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// UMG_ESlateVisibility           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
UMG_ESlateVisibility UWBP_SelectableButtonWithText_C::GetVisibility_1()
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function WBP_SelectableButtonWithText.WBP_SelectableButtonWithText_C.GetVisibility_1");
	}

	UWBP_SelectableButtonWithText_C_GetVisibility_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function WBP_SelectableButtonWithText.WBP_SelectableButtonWithText_C.Get_DefaultTextBlock_Text_1
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)
struct FText UWBP_SelectableButtonWithText_C::Get_DefaultTextBlock_Text_1()
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function WBP_SelectableButtonWithText.WBP_SelectableButtonWithText_C.Get_DefaultTextBlock_Text_1");
	}

	UWBP_SelectableButtonWithText_C_Get_DefaultTextBlock_Text_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function WBP_SelectableButtonWithText.WBP_SelectableButtonWithText_C.Get_DefaultTextBlock_ColorAndOpacity_1
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FSlateColor             ReturnValue                    (Parm, OutParm, ReturnParm)
struct FSlateColor UWBP_SelectableButtonWithText_C::Get_DefaultTextBlock_ColorAndOpacity_1()
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function WBP_SelectableButtonWithText.WBP_SelectableButtonWithText_C.Get_DefaultTextBlock_ColorAndOpacity_1");
	}

	UWBP_SelectableButtonWithText_C_Get_DefaultTextBlock_ColorAndOpacity_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function WBP_SelectableButtonWithText.WBP_SelectableButtonWithText_C.Get_DefaultBorder_BrushColor_0_1
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FLinearColor            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
struct FLinearColor UWBP_SelectableButtonWithText_C::Get_DefaultBorder_BrushColor_0_1()
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function WBP_SelectableButtonWithText.WBP_SelectableButtonWithText_C.Get_DefaultBorder_BrushColor_0_1");
	}

	UWBP_SelectableButtonWithText_C_Get_DefaultBorder_BrushColor_0_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function WBP_SelectableButtonWithText.WBP_SelectableButtonWithText_C.OnSelected
// (BlueprintCallable, BlueprintEvent)
void UWBP_SelectableButtonWithText_C::OnSelected()
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function WBP_SelectableButtonWithText.WBP_SelectableButtonWithText_C.OnSelected");
	}

	UWBP_SelectableButtonWithText_C_OnSelected_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WBP_SelectableButtonWithText.WBP_SelectableButtonWithText_C.OnActive
// (BlueprintCallable, BlueprintEvent)
void UWBP_SelectableButtonWithText_C::OnActive()
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function WBP_SelectableButtonWithText.WBP_SelectableButtonWithText_C.OnActive");
	}

	UWBP_SelectableButtonWithText_C_OnActive_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WBP_SelectableButtonWithText.WBP_SelectableButtonWithText_C.OnPressed
// (BlueprintCallable, BlueprintEvent)
void UWBP_SelectableButtonWithText_C::OnPressed()
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function WBP_SelectableButtonWithText.WBP_SelectableButtonWithText_C.OnPressed");
	}

	UWBP_SelectableButtonWithText_C_OnPressed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WBP_SelectableButtonWithText.WBP_SelectableButtonWithText_C.OnUpdateDisabled
// (BlueprintCallable, BlueprintEvent)
void UWBP_SelectableButtonWithText_C::OnUpdateDisabled()
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function WBP_SelectableButtonWithText.WBP_SelectableButtonWithText_C.OnUpdateDisabled");
	}

	UWBP_SelectableButtonWithText_C_OnUpdateDisabled_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WBP_SelectableButtonWithText.WBP_SelectableButtonWithText_C.BndEvt__DefaultButton_K2Node_ComponentBoundEvent_45_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
void UWBP_SelectableButtonWithText_C::BndEvt__DefaultButton_K2Node_ComponentBoundEvent_45_OnButtonClickedEvent__DelegateSignature()
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function WBP_SelectableButtonWithText.WBP_SelectableButtonWithText_C.BndEvt__DefaultButton_K2Node_ComponentBoundEvent_45_OnButtonClickedEvent__DelegateSignature");
	}

	UWBP_SelectableButtonWithText_C_BndEvt__DefaultButton_K2Node_ComponentBoundEvent_45_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WBP_SelectableButtonWithText.WBP_SelectableButtonWithText_C.BndEvt__DefaultButton_K2Node_ComponentBoundEvent_58_OnButtonPressedEvent__DelegateSignature
// (BlueprintEvent)
void UWBP_SelectableButtonWithText_C::BndEvt__DefaultButton_K2Node_ComponentBoundEvent_58_OnButtonPressedEvent__DelegateSignature()
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function WBP_SelectableButtonWithText.WBP_SelectableButtonWithText_C.BndEvt__DefaultButton_K2Node_ComponentBoundEvent_58_OnButtonPressedEvent__DelegateSignature");
	}

	UWBP_SelectableButtonWithText_C_BndEvt__DefaultButton_K2Node_ComponentBoundEvent_58_OnButtonPressedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WBP_SelectableButtonWithText.WBP_SelectableButtonWithText_C.BndEvt__DefaultButton_K2Node_ComponentBoundEvent_69_OnButtonReleasedEvent__DelegateSignature
// (BlueprintEvent)
void UWBP_SelectableButtonWithText_C::BndEvt__DefaultButton_K2Node_ComponentBoundEvent_69_OnButtonReleasedEvent__DelegateSignature()
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function WBP_SelectableButtonWithText.WBP_SelectableButtonWithText_C.BndEvt__DefaultButton_K2Node_ComponentBoundEvent_69_OnButtonReleasedEvent__DelegateSignature");
	}

	UWBP_SelectableButtonWithText_C_BndEvt__DefaultButton_K2Node_ComponentBoundEvent_69_OnButtonReleasedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WBP_SelectableButtonWithText.WBP_SelectableButtonWithText_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                           IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UWBP_SelectableButtonWithText_C::PreConstruct(bool IsDesignTime)
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function WBP_SelectableButtonWithText.WBP_SelectableButtonWithText_C.PreConstruct");
	}

	UWBP_SelectableButtonWithText_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WBP_SelectableButtonWithText.WBP_SelectableButtonWithText_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UWBP_SelectableButtonWithText_C::Construct()
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function WBP_SelectableButtonWithText.WBP_SelectableButtonWithText_C.Construct");
	}

	UWBP_SelectableButtonWithText_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WBP_SelectableButtonWithText.WBP_SelectableButtonWithText_C.BndEvt__DefaultButton_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)
void UWBP_SelectableButtonWithText_C::BndEvt__DefaultButton_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature()
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function WBP_SelectableButtonWithText.WBP_SelectableButtonWithText_C.BndEvt__DefaultButton_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature");
	}

	UWBP_SelectableButtonWithText_C_BndEvt__DefaultButton_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WBP_SelectableButtonWithText.WBP_SelectableButtonWithText_C.ExecuteUbergraph_WBP_SelectableButtonWithText
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_SelectableButtonWithText_C::ExecuteUbergraph_WBP_SelectableButtonWithText(int EntryPoint)
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function WBP_SelectableButtonWithText.WBP_SelectableButtonWithText_C.ExecuteUbergraph_WBP_SelectableButtonWithText");
	}

	UWBP_SelectableButtonWithText_C_ExecuteUbergraph_WBP_SelectableButtonWithText_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
