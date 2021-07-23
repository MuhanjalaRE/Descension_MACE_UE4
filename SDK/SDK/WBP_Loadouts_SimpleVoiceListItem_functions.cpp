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

// Function WBP_Loadouts_SimpleVoiceListItem.WBP_Loadouts_SimpleVoiceListItem_C.Get_UnlockButton_Visibility_1
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// UMG_ESlateVisibility           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
UMG_ESlateVisibility UWBP_Loadouts_SimpleVoiceListItem_C::Get_UnlockButton_Visibility_1()
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function WBP_Loadouts_SimpleVoiceListItem.WBP_Loadouts_SimpleVoiceListItem_C.Get_UnlockButton_Visibility_1");
	}

	UWBP_Loadouts_SimpleVoiceListItem_C_Get_UnlockButton_Visibility_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function WBP_Loadouts_SimpleVoiceListItem.WBP_Loadouts_SimpleVoiceListItem_C.GetHasValidColor
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Return                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UWBP_Loadouts_SimpleVoiceListItem_C::GetHasValidColor(bool* Return)
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function WBP_Loadouts_SimpleVoiceListItem.WBP_Loadouts_SimpleVoiceListItem_C.GetHasValidColor");
	}

	UWBP_Loadouts_SimpleVoiceListItem_C_GetHasValidColor_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Return != nullptr)
		*Return = params.Return;

}


// Function WBP_Loadouts_SimpleVoiceListItem.WBP_Loadouts_SimpleVoiceListItem_C.GetBrushColor_1
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FLinearColor            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
struct FLinearColor UWBP_Loadouts_SimpleVoiceListItem_C::GetBrushColor_1()
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function WBP_Loadouts_SimpleVoiceListItem.WBP_Loadouts_SimpleVoiceListItem_C.GetBrushColor_1");
	}

	UWBP_Loadouts_SimpleVoiceListItem_C_GetBrushColor_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function WBP_Loadouts_SimpleVoiceListItem.WBP_Loadouts_SimpleVoiceListItem_C.OnMouseMove_1
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// struct FPointerEvent           MouseEvent                     (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)
struct FEventReply UWBP_Loadouts_SimpleVoiceListItem_C::OnMouseMove_1(const struct FGeometry& MyGeometry, struct FPointerEvent* MouseEvent)
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function WBP_Loadouts_SimpleVoiceListItem.WBP_Loadouts_SimpleVoiceListItem_C.OnMouseMove_1");
	}

	UWBP_Loadouts_SimpleVoiceListItem_C_OnMouseMove_1_Params params;
	params.MyGeometry = MyGeometry;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (MouseEvent != nullptr)
		*MouseEvent = params.MouseEvent;


	return params.ReturnValue;
}


// Function WBP_Loadouts_SimpleVoiceListItem.WBP_Loadouts_SimpleVoiceListItem_C.OnMouseButtonUp_1
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// struct FPointerEvent           MouseEvent                     (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)
struct FEventReply UWBP_Loadouts_SimpleVoiceListItem_C::OnMouseButtonUp_1(const struct FGeometry& MyGeometry, struct FPointerEvent* MouseEvent)
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function WBP_Loadouts_SimpleVoiceListItem.WBP_Loadouts_SimpleVoiceListItem_C.OnMouseButtonUp_1");
	}

	UWBP_Loadouts_SimpleVoiceListItem_C_OnMouseButtonUp_1_Params params;
	params.MyGeometry = MyGeometry;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (MouseEvent != nullptr)
		*MouseEvent = params.MouseEvent;


	return params.ReturnValue;
}


// Function WBP_Loadouts_SimpleVoiceListItem.WBP_Loadouts_SimpleVoiceListItem_C.OnMouseButtonDown_1
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// struct FPointerEvent           MouseEvent                     (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)
struct FEventReply UWBP_Loadouts_SimpleVoiceListItem_C::OnMouseButtonDown_1(const struct FGeometry& MyGeometry, struct FPointerEvent* MouseEvent)
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function WBP_Loadouts_SimpleVoiceListItem.WBP_Loadouts_SimpleVoiceListItem_C.OnMouseButtonDown_1");
	}

	UWBP_Loadouts_SimpleVoiceListItem_C_OnMouseButtonDown_1_Params params;
	params.MyGeometry = MyGeometry;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (MouseEvent != nullptr)
		*MouseEvent = params.MouseEvent;


	return params.ReturnValue;
}


// Function WBP_Loadouts_SimpleVoiceListItem.WBP_Loadouts_SimpleVoiceListItem_C.Get_ItemName_ColorAndOpacity_1
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FSlateColor             ReturnValue                    (Parm, OutParm, ReturnParm)
struct FSlateColor UWBP_Loadouts_SimpleVoiceListItem_C::Get_ItemName_ColorAndOpacity_1()
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function WBP_Loadouts_SimpleVoiceListItem.WBP_Loadouts_SimpleVoiceListItem_C.Get_ItemName_ColorAndOpacity_1");
	}

	UWBP_Loadouts_SimpleVoiceListItem_C_Get_ItemName_ColorAndOpacity_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function WBP_Loadouts_SimpleVoiceListItem.WBP_Loadouts_SimpleVoiceListItem_C.Update Item Info
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass*                  Item_Info_Class                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_Loadouts_SimpleVoiceListItem_C::Update_Item_Info(class UClass* Item_Info_Class)
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function WBP_Loadouts_SimpleVoiceListItem.WBP_Loadouts_SimpleVoiceListItem_C.Update Item Info");
	}

	UWBP_Loadouts_SimpleVoiceListItem_C_Update_Item_Info_Params params;
	params.Item_Info_Class = Item_Info_Class;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WBP_Loadouts_SimpleVoiceListItem.WBP_Loadouts_SimpleVoiceListItem_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UWBP_Loadouts_SimpleVoiceListItem_C::Construct()
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function WBP_Loadouts_SimpleVoiceListItem.WBP_Loadouts_SimpleVoiceListItem_C.Construct");
	}

	UWBP_Loadouts_SimpleVoiceListItem_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WBP_Loadouts_SimpleVoiceListItem.WBP_Loadouts_SimpleVoiceListItem_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// float                          InDeltaTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_Loadouts_SimpleVoiceListItem_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function WBP_Loadouts_SimpleVoiceListItem.WBP_Loadouts_SimpleVoiceListItem_C.Tick");
	}

	UWBP_Loadouts_SimpleVoiceListItem_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WBP_Loadouts_SimpleVoiceListItem.WBP_Loadouts_SimpleVoiceListItem_C.BndEvt__UnlockButton_K2Node_ComponentBoundEvent_35_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
void UWBP_Loadouts_SimpleVoiceListItem_C::BndEvt__UnlockButton_K2Node_ComponentBoundEvent_35_OnButtonClickedEvent__DelegateSignature()
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function WBP_Loadouts_SimpleVoiceListItem.WBP_Loadouts_SimpleVoiceListItem_C.BndEvt__UnlockButton_K2Node_ComponentBoundEvent_35_OnButtonClickedEvent__DelegateSignature");
	}

	UWBP_Loadouts_SimpleVoiceListItem_C_BndEvt__UnlockButton_K2Node_ComponentBoundEvent_35_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WBP_Loadouts_SimpleVoiceListItem.WBP_Loadouts_SimpleVoiceListItem_C.OnMouseEnter
// (BlueprintCosmetic, Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// struct FPointerEvent           MouseEvent                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
void UWBP_Loadouts_SimpleVoiceListItem_C::OnMouseEnter(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent)
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function WBP_Loadouts_SimpleVoiceListItem.WBP_Loadouts_SimpleVoiceListItem_C.OnMouseEnter");
	}

	UWBP_Loadouts_SimpleVoiceListItem_C_OnMouseEnter_Params params;
	params.MyGeometry = MyGeometry;
	params.MouseEvent = MouseEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WBP_Loadouts_SimpleVoiceListItem.WBP_Loadouts_SimpleVoiceListItem_C.ExecuteUbergraph_WBP_Loadouts_SimpleVoiceListItem
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_Loadouts_SimpleVoiceListItem_C::ExecuteUbergraph_WBP_Loadouts_SimpleVoiceListItem(int EntryPoint)
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function WBP_Loadouts_SimpleVoiceListItem.WBP_Loadouts_SimpleVoiceListItem_C.ExecuteUbergraph_WBP_Loadouts_SimpleVoiceListItem");
	}

	UWBP_Loadouts_SimpleVoiceListItem_C_ExecuteUbergraph_WBP_Loadouts_SimpleVoiceListItem_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WBP_Loadouts_SimpleVoiceListItem.WBP_Loadouts_SimpleVoiceListItem_C.JumpToAugment__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass*                  Object_Info                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_Loadouts_SimpleVoiceListItem_C::JumpToAugment__DelegateSignature(class UClass* Object_Info)
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function WBP_Loadouts_SimpleVoiceListItem.WBP_Loadouts_SimpleVoiceListItem_C.JumpToAugment__DelegateSignature");
	}

	UWBP_Loadouts_SimpleVoiceListItem_C_JumpToAugment__DelegateSignature_Params params;
	params.Object_Info = Object_Info;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
