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

// Function WBP_Loadouts_ItemSlot.WBP_Loadouts_ItemSlot_C.Get_BindingButton_ToolTipText_1
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)
struct FText UWBP_Loadouts_ItemSlot_C::Get_BindingButton_ToolTipText_1()
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function WBP_Loadouts_ItemSlot.WBP_Loadouts_ItemSlot_C.Get_BindingButton_ToolTipText_1");
	}

	UWBP_Loadouts_ItemSlot_C_Get_BindingButton_ToolTipText_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function WBP_Loadouts_ItemSlot.WBP_Loadouts_ItemSlot_C.GetTextColor
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FSlateColor             ReturnValue                    (Parm, OutParm, ReturnParm)
struct FSlateColor UWBP_Loadouts_ItemSlot_C::GetTextColor()
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function WBP_Loadouts_ItemSlot.WBP_Loadouts_ItemSlot_C.GetTextColor");
	}

	UWBP_Loadouts_ItemSlot_C_GetTextColor_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function WBP_Loadouts_ItemSlot.WBP_Loadouts_ItemSlot_C.GetBrushColor
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FSlateColor             ReturnValue                    (Parm, OutParm, ReturnParm)
struct FSlateColor UWBP_Loadouts_ItemSlot_C::GetBrushColor()
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function WBP_Loadouts_ItemSlot.WBP_Loadouts_ItemSlot_C.GetBrushColor");
	}

	UWBP_Loadouts_ItemSlot_C_GetBrushColor_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function WBP_Loadouts_ItemSlot.WBP_Loadouts_ItemSlot_C.GetImageColor
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FLinearColor            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
struct FLinearColor UWBP_Loadouts_ItemSlot_C::GetImageColor()
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function WBP_Loadouts_ItemSlot.WBP_Loadouts_ItemSlot_C.GetImageColor");
	}

	UWBP_Loadouts_ItemSlot_C_GetImageColor_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function WBP_Loadouts_ItemSlot.WBP_Loadouts_ItemSlot_C.GetToolTipWidget_1
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UWidget*                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
class UWidget* UWBP_Loadouts_ItemSlot_C::GetToolTipWidget_1()
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function WBP_Loadouts_ItemSlot.WBP_Loadouts_ItemSlot_C.GetToolTipWidget_1");
	}

	UWBP_Loadouts_ItemSlot_C_GetToolTipWidget_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function WBP_Loadouts_ItemSlot.WBP_Loadouts_ItemSlot_C.SetItemInfo
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass*                  ItemInfo                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FName                   BindingName                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_Loadouts_ItemSlot_C::SetItemInfo(class UClass* ItemInfo, const struct FName& BindingName)
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function WBP_Loadouts_ItemSlot.WBP_Loadouts_ItemSlot_C.SetItemInfo");
	}

	UWBP_Loadouts_ItemSlot_C_SetItemInfo_Params params;
	params.ItemInfo = ItemInfo;
	params.BindingName = BindingName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WBP_Loadouts_ItemSlot.WBP_Loadouts_ItemSlot_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_68_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
void UWBP_Loadouts_ItemSlot_C::BndEvt__Button_0_K2Node_ComponentBoundEvent_68_OnButtonClickedEvent__DelegateSignature()
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function WBP_Loadouts_ItemSlot.WBP_Loadouts_ItemSlot_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_68_OnButtonClickedEvent__DelegateSignature");
	}

	UWBP_Loadouts_ItemSlot_C_BndEvt__Button_0_K2Node_ComponentBoundEvent_68_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WBP_Loadouts_ItemSlot.WBP_Loadouts_ItemSlot_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UWBP_Loadouts_ItemSlot_C::Construct()
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function WBP_Loadouts_ItemSlot.WBP_Loadouts_ItemSlot_C.Construct");
	}

	UWBP_Loadouts_ItemSlot_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WBP_Loadouts_ItemSlot.WBP_Loadouts_ItemSlot_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_119_OnButtonPressedEvent__DelegateSignature
// (BlueprintEvent)
void UWBP_Loadouts_ItemSlot_C::BndEvt__Button_0_K2Node_ComponentBoundEvent_119_OnButtonPressedEvent__DelegateSignature()
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function WBP_Loadouts_ItemSlot.WBP_Loadouts_ItemSlot_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_119_OnButtonPressedEvent__DelegateSignature");
	}

	UWBP_Loadouts_ItemSlot_C_BndEvt__Button_0_K2Node_ComponentBoundEvent_119_OnButtonPressedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WBP_Loadouts_ItemSlot.WBP_Loadouts_ItemSlot_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_129_OnButtonReleasedEvent__DelegateSignature
// (BlueprintEvent)
void UWBP_Loadouts_ItemSlot_C::BndEvt__Button_0_K2Node_ComponentBoundEvent_129_OnButtonReleasedEvent__DelegateSignature()
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function WBP_Loadouts_ItemSlot.WBP_Loadouts_ItemSlot_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_129_OnButtonReleasedEvent__DelegateSignature");
	}

	UWBP_Loadouts_ItemSlot_C_BndEvt__Button_0_K2Node_ComponentBoundEvent_129_OnButtonReleasedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WBP_Loadouts_ItemSlot.WBP_Loadouts_ItemSlot_C.OnSelected
// (BlueprintCallable, BlueprintEvent)
void UWBP_Loadouts_ItemSlot_C::OnSelected()
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function WBP_Loadouts_ItemSlot.WBP_Loadouts_ItemSlot_C.OnSelected");
	}

	UWBP_Loadouts_ItemSlot_C_OnSelected_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WBP_Loadouts_ItemSlot.WBP_Loadouts_ItemSlot_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_54_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)
void UWBP_Loadouts_ItemSlot_C::BndEvt__Button_0_K2Node_ComponentBoundEvent_54_OnButtonHoverEvent__DelegateSignature()
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function WBP_Loadouts_ItemSlot.WBP_Loadouts_ItemSlot_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_54_OnButtonHoverEvent__DelegateSignature");
	}

	UWBP_Loadouts_ItemSlot_C_BndEvt__Button_0_K2Node_ComponentBoundEvent_54_OnButtonHoverEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WBP_Loadouts_ItemSlot.WBP_Loadouts_ItemSlot_C.BndEvt__BindingButton_K2Node_ComponentBoundEvent_66_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
void UWBP_Loadouts_ItemSlot_C::BndEvt__BindingButton_K2Node_ComponentBoundEvent_66_OnButtonClickedEvent__DelegateSignature()
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function WBP_Loadouts_ItemSlot.WBP_Loadouts_ItemSlot_C.BndEvt__BindingButton_K2Node_ComponentBoundEvent_66_OnButtonClickedEvent__DelegateSignature");
	}

	UWBP_Loadouts_ItemSlot_C_BndEvt__BindingButton_K2Node_ComponentBoundEvent_66_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WBP_Loadouts_ItemSlot.WBP_Loadouts_ItemSlot_C.Click
// (BlueprintCallable, BlueprintEvent)
void UWBP_Loadouts_ItemSlot_C::Click()
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function WBP_Loadouts_ItemSlot.WBP_Loadouts_ItemSlot_C.Click");
	}

	UWBP_Loadouts_ItemSlot_C_Click_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WBP_Loadouts_ItemSlot.WBP_Loadouts_ItemSlot_C.ExecuteUbergraph_WBP_Loadouts_ItemSlot
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_Loadouts_ItemSlot_C::ExecuteUbergraph_WBP_Loadouts_ItemSlot(int EntryPoint)
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function WBP_Loadouts_ItemSlot.WBP_Loadouts_ItemSlot_C.ExecuteUbergraph_WBP_Loadouts_ItemSlot");
	}

	UWBP_Loadouts_ItemSlot_C_ExecuteUbergraph_WBP_Loadouts_ItemSlot_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WBP_Loadouts_ItemSlot.WBP_Loadouts_ItemSlot_C.QuickEquipped__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWBP_SelectableButton_C* Selected_Button                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_Loadouts_ItemSlot_C::QuickEquipped__DelegateSignature(class UWBP_SelectableButton_C* Selected_Button)
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function WBP_Loadouts_ItemSlot.WBP_Loadouts_ItemSlot_C.QuickEquipped__DelegateSignature");
	}

	UWBP_Loadouts_ItemSlot_C_QuickEquipped__DelegateSignature_Params params;
	params.Selected_Button = Selected_Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WBP_Loadouts_ItemSlot.WBP_Loadouts_ItemSlot_C.Jump to Slot Unlock__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
void UWBP_Loadouts_ItemSlot_C::Jump_to_Slot_Unlock__DelegateSignature()
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function WBP_Loadouts_ItemSlot.WBP_Loadouts_ItemSlot_C.Jump to Slot Unlock__DelegateSignature");
	}

	UWBP_Loadouts_ItemSlot_C_Jump_to_Slot_Unlock__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WBP_Loadouts_ItemSlot.WBP_Loadouts_ItemSlot_C.Jump to Item__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass*                  Object_Info                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_Loadouts_ItemSlot_C::Jump_to_Item__DelegateSignature(class UClass* Object_Info)
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function WBP_Loadouts_ItemSlot.WBP_Loadouts_ItemSlot_C.Jump to Item__DelegateSignature");
	}

	UWBP_Loadouts_ItemSlot_C_Jump_to_Item__DelegateSignature_Params params;
	params.Object_Info = Object_Info;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WBP_Loadouts_ItemSlot.WBP_Loadouts_ItemSlot_C.OnNewItemSelected__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass*                  New_Item                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_Loadouts_ItemSlot_C::OnNewItemSelected__DelegateSignature(class UClass* New_Item)
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function WBP_Loadouts_ItemSlot.WBP_Loadouts_ItemSlot_C.OnNewItemSelected__DelegateSignature");
	}

	UWBP_Loadouts_ItemSlot_C_OnNewItemSelected__DelegateSignature_Params params;
	params.New_Item = New_Item;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WBP_Loadouts_ItemSlot.WBP_Loadouts_ItemSlot_C.OnClicked__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWBP_Loadouts_ItemSlot_C* Item_Slot                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_Loadouts_ItemSlot_C::OnClicked__DelegateSignature(class UWBP_Loadouts_ItemSlot_C* Item_Slot)
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function WBP_Loadouts_ItemSlot.WBP_Loadouts_ItemSlot_C.OnClicked__DelegateSignature");
	}

	UWBP_Loadouts_ItemSlot_C_OnClicked__DelegateSignature_Params params;
	params.Item_Slot = Item_Slot;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
