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

// Function WBP_BindKey.WBP_BindKey_C.GetVisibility_1
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// UMG_ESlateVisibility           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
UMG_ESlateVisibility UWBP_BindKey_C::GetVisibility_1()
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function WBP_BindKey.WBP_BindKey_C.GetVisibility_1");
	}

	UWBP_BindKey_C_GetVisibility_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function WBP_BindKey.WBP_BindKey_C.GetBrushColor_1
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FLinearColor            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
struct FLinearColor UWBP_BindKey_C::GetBrushColor_1()
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function WBP_BindKey.WBP_BindKey_C.GetBrushColor_1");
	}

	UWBP_BindKey_C_GetBrushColor_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function WBP_BindKey.WBP_BindKey_C.BroadcastBindChanged
// (Public, BlueprintCallable, BlueprintEvent)
void UWBP_BindKey_C::BroadcastBindChanged()
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function WBP_BindKey.WBP_BindKey_C.BroadcastBindChanged");
	}

	UWBP_BindKey_C_BroadcastBindChanged_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WBP_BindKey.WBP_BindKey_C.ClearModifiersForAxis
// (Public, BlueprintCallable, BlueprintEvent)
void UWBP_BindKey_C::ClearModifiersForAxis()
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function WBP_BindKey.WBP_BindKey_C.ClearModifiersForAxis");
	}

	UWBP_BindKey_C_ClearModifiersForAxis_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WBP_BindKey.WBP_BindKey_C.OnKeyDown
// (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// struct FKeyEvent               InKeyEvent                     (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)
struct FEventReply UWBP_BindKey_C::OnKeyDown(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent)
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function WBP_BindKey.WBP_BindKey_C.OnKeyDown");
	}

	UWBP_BindKey_C_OnKeyDown_Params params;
	params.MyGeometry = MyGeometry;
	params.InKeyEvent = InKeyEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function WBP_BindKey.WBP_BindKey_C.OnMouseButtonDown
// (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// struct FPointerEvent           MouseEvent                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)
struct FEventReply UWBP_BindKey_C::OnMouseButtonDown(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent)
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function WBP_BindKey.WBP_BindKey_C.OnMouseButtonDown");
	}

	UWBP_BindKey_C_OnMouseButtonDown_Params params;
	params.MyGeometry = MyGeometry;
	params.MouseEvent = MouseEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function WBP_BindKey.WBP_BindKey_C.OnMouseButtonUp
// (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// struct FPointerEvent           MouseEvent                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)
struct FEventReply UWBP_BindKey_C::OnMouseButtonUp(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent)
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function WBP_BindKey.WBP_BindKey_C.OnMouseButtonUp");
	}

	UWBP_BindKey_C_OnMouseButtonUp_Params params;
	params.MyGeometry = MyGeometry;
	params.MouseEvent = MouseEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function WBP_BindKey.WBP_BindKey_C.OnKeyUp
// (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// struct FKeyEvent               InKeyEvent                     (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)
struct FEventReply UWBP_BindKey_C::OnKeyUp(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent)
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function WBP_BindKey.WBP_BindKey_C.OnKeyUp");
	}

	UWBP_BindKey_C_OnKeyUp_Params params;
	params.MyGeometry = MyGeometry;
	params.InKeyEvent = InKeyEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function WBP_BindKey.WBP_BindKey_C.GetActionBindingInfo
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FInputActionKeyMapping  Action_Key_Mapping             (Parm, OutParm)
void UWBP_BindKey_C::GetActionBindingInfo(struct FInputActionKeyMapping* Action_Key_Mapping)
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function WBP_BindKey.WBP_BindKey_C.GetActionBindingInfo");
	}

	UWBP_BindKey_C_GetActionBindingInfo_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Action_Key_Mapping != nullptr)
		*Action_Key_Mapping = params.Action_Key_Mapping;

}


// Function WBP_BindKey.WBP_BindKey_C.OnMouse
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry               Geometry                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// struct FPointerEvent           Mouse_Event                    (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FEventReply             Result                         (Parm, OutParm)
void UWBP_BindKey_C::OnMouse(const struct FGeometry& Geometry, const struct FPointerEvent& Mouse_Event, struct FEventReply* Result)
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function WBP_BindKey.WBP_BindKey_C.OnMouse");
	}

	UWBP_BindKey_C_OnMouse_Params params;
	params.Geometry = Geometry;
	params.Mouse_Event = Mouse_Event;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;

}


// Function WBP_BindKey.WBP_BindKey_C.OnMouseWheel
// (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// struct FPointerEvent           MouseEvent                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)
struct FEventReply UWBP_BindKey_C::OnMouseWheel(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent)
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function WBP_BindKey.WBP_BindKey_C.OnMouseWheel");
	}

	UWBP_BindKey_C_OnMouseWheel_Params params;
	params.MyGeometry = MyGeometry;
	params.MouseEvent = MouseEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function WBP_BindKey.WBP_BindKey_C.FinishLoading
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Loaded_Default                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UWBP_BindKey_C::FinishLoading(bool* Loaded_Default)
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function WBP_BindKey.WBP_BindKey_C.FinishLoading");
	}

	UWBP_BindKey_C_FinishLoading_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Loaded_Default != nullptr)
		*Loaded_Default = params.Loaded_Default;

}


// Function WBP_BindKey.WBP_BindKey_C.GetColorAndOpacity_1
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FSlateColor             ReturnValue                    (Parm, OutParm, ReturnParm)
struct FSlateColor UWBP_BindKey_C::GetColorAndOpacity_1()
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function WBP_BindKey.WBP_BindKey_C.GetColorAndOpacity_1");
	}

	UWBP_BindKey_C_GetColorAndOpacity_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function WBP_BindKey.WBP_BindKey_C.GetText_1
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)
struct FText UWBP_BindKey_C::GetText_1()
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function WBP_BindKey.WBP_BindKey_C.GetText_1");
	}

	UWBP_BindKey_C_GetText_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function WBP_BindKey.WBP_BindKey_C.OnFocusLost
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FFocusEvent             InFocusEvent                   (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
void UWBP_BindKey_C::OnFocusLost(const struct FFocusEvent& InFocusEvent)
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function WBP_BindKey.WBP_BindKey_C.OnFocusLost");
	}

	UWBP_BindKey_C_OnFocusLost_Params params;
	params.InFocusEvent = InFocusEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WBP_BindKey.WBP_BindKey_C.OnMouseLeave
// (BlueprintCosmetic, Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// struct FPointerEvent           MouseEvent                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
void UWBP_BindKey_C::OnMouseLeave(const struct FPointerEvent& MouseEvent)
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function WBP_BindKey.WBP_BindKey_C.OnMouseLeave");
	}

	UWBP_BindKey_C_OnMouseLeave_Params params;
	params.MouseEvent = MouseEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WBP_BindKey.WBP_BindKey_C.BndEvt__Button_2_K2Node_ComponentBoundEvent_120_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
void UWBP_BindKey_C::BndEvt__Button_2_K2Node_ComponentBoundEvent_120_OnButtonClickedEvent__DelegateSignature()
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function WBP_BindKey.WBP_BindKey_C.BndEvt__Button_2_K2Node_ComponentBoundEvent_120_OnButtonClickedEvent__DelegateSignature");
	}

	UWBP_BindKey_C_BndEvt__Button_2_K2Node_ComponentBoundEvent_120_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WBP_BindKey.WBP_BindKey_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UWBP_BindKey_C::Construct()
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function WBP_BindKey.WBP_BindKey_C.Construct");
	}

	UWBP_BindKey_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WBP_BindKey.WBP_BindKey_C.UpdateDisplayText
// (BlueprintCallable, BlueprintEvent)
void UWBP_BindKey_C::UpdateDisplayText()
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function WBP_BindKey.WBP_BindKey_C.UpdateDisplayText");
	}

	UWBP_BindKey_C_UpdateDisplayText_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WBP_BindKey.WBP_BindKey_C.OnMouseEnter
// (BlueprintCosmetic, Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// struct FPointerEvent           MouseEvent                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
void UWBP_BindKey_C::OnMouseEnter(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent)
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function WBP_BindKey.WBP_BindKey_C.OnMouseEnter");
	}

	UWBP_BindKey_C_OnMouseEnter_Params params;
	params.MyGeometry = MyGeometry;
	params.MouseEvent = MouseEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WBP_BindKey.WBP_BindKey_C.ExecuteUbergraph_WBP_BindKey
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_BindKey_C::ExecuteUbergraph_WBP_BindKey(int EntryPoint)
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function WBP_BindKey.WBP_BindKey_C.ExecuteUbergraph_WBP_BindKey");
	}

	UWBP_BindKey_C_ExecuteUbergraph_WBP_BindKey_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WBP_BindKey.WBP_BindKey_C.TryResetKey__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWBP_BindKey_C*          Widget                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_BindKey_C::TryResetKey__DelegateSignature(class UWBP_BindKey_C* Widget)
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function WBP_BindKey.WBP_BindKey_C.TryResetKey__DelegateSignature");
	}

	UWBP_BindKey_C_TryResetKey__DelegateSignature_Params params;
	params.Widget = Widget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WBP_BindKey.WBP_BindKey_C.TryBindKey__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWBP_BindKey_C*          Widget                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FInputActionKeyMapping  NewBind                        (BlueprintVisible, BlueprintReadOnly, Parm)
void UWBP_BindKey_C::TryBindKey__DelegateSignature(class UWBP_BindKey_C* Widget, const struct FInputActionKeyMapping& NewBind)
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function WBP_BindKey.WBP_BindKey_C.TryBindKey__DelegateSignature");
	}

	UWBP_BindKey_C_TryBindKey__DelegateSignature_Params params;
	params.Widget = Widget;
	params.NewBind = NewBind;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WBP_BindKey.WBP_BindKey_C.TryClearKey__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWBP_BindKey_C*          Widget                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_BindKey_C::TryClearKey__DelegateSignature(class UWBP_BindKey_C* Widget)
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function WBP_BindKey.WBP_BindKey_C.TryClearKey__DelegateSignature");
	}

	UWBP_BindKey_C_TryClearKey__DelegateSignature_Params params;
	params.Widget = Widget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
