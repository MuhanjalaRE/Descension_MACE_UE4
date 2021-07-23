#pragma once

// Name: mace, Version: 1.9.1.12285


/*!!DEFINE!!*/

/*!!HELPER_DEF!!*/

/*!!HELPER_INC!!*/

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
//---------------------------------------------------------------------------
// Parameters
//---------------------------------------------------------------------------

// Function WBP_BindKey.WBP_BindKey_C.GetVisibility_1
struct UWBP_BindKey_C_GetVisibility_1_Params
{
	UMG_ESlateVisibility                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_BindKey.WBP_BindKey_C.GetBrushColor_1
struct UWBP_BindKey_C_GetBrushColor_1_Params
{
	struct FLinearColor                                ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_BindKey.WBP_BindKey_C.BroadcastBindChanged
struct UWBP_BindKey_C_BroadcastBindChanged_Params
{
};

// Function WBP_BindKey.WBP_BindKey_C.ClearModifiersForAxis
struct UWBP_BindKey_C_ClearModifiersForAxis_Params
{
};

// Function WBP_BindKey.WBP_BindKey_C.OnKeyDown
struct UWBP_BindKey_C_OnKeyDown_Params
{
	struct FGeometry                                   MyGeometry;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	struct FKeyEvent                                   InKeyEvent;                                                // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FEventReply                                 ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function WBP_BindKey.WBP_BindKey_C.OnMouseButtonDown
struct UWBP_BindKey_C_OnMouseButtonDown_Params
{
	struct FGeometry                                   MyGeometry;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	struct FPointerEvent                               MouseEvent;                                                // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FEventReply                                 ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function WBP_BindKey.WBP_BindKey_C.OnMouseButtonUp
struct UWBP_BindKey_C_OnMouseButtonUp_Params
{
	struct FGeometry                                   MyGeometry;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	struct FPointerEvent                               MouseEvent;                                                // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FEventReply                                 ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function WBP_BindKey.WBP_BindKey_C.OnKeyUp
struct UWBP_BindKey_C_OnKeyUp_Params
{
	struct FGeometry                                   MyGeometry;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	struct FKeyEvent                                   InKeyEvent;                                                // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FEventReply                                 ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function WBP_BindKey.WBP_BindKey_C.GetActionBindingInfo
struct UWBP_BindKey_C_GetActionBindingInfo_Params
{
	struct FInputActionKeyMapping                      Action_Key_Mapping;                                        // (Parm, OutParm)
};

// Function WBP_BindKey.WBP_BindKey_C.OnMouse
struct UWBP_BindKey_C_OnMouse_Params
{
	struct FGeometry                                   Geometry;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	struct FPointerEvent                               Mouse_Event;                                               // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FEventReply                                 Result;                                                    // (Parm, OutParm)
};

// Function WBP_BindKey.WBP_BindKey_C.OnMouseWheel
struct UWBP_BindKey_C_OnMouseWheel_Params
{
	struct FGeometry                                   MyGeometry;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	struct FPointerEvent                               MouseEvent;                                                // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FEventReply                                 ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function WBP_BindKey.WBP_BindKey_C.FinishLoading
struct UWBP_BindKey_C_FinishLoading_Params
{
	bool                                               Loaded_Default;                                            // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function WBP_BindKey.WBP_BindKey_C.GetColorAndOpacity_1
struct UWBP_BindKey_C_GetColorAndOpacity_1_Params
{
	struct FSlateColor                                 ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function WBP_BindKey.WBP_BindKey_C.GetText_1
struct UWBP_BindKey_C_GetText_1_Params
{
	struct FText                                       ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function WBP_BindKey.WBP_BindKey_C.OnFocusLost
struct UWBP_BindKey_C_OnFocusLost_Params
{
	struct FFocusEvent                                 InFocusEvent;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
};

// Function WBP_BindKey.WBP_BindKey_C.OnMouseLeave
struct UWBP_BindKey_C_OnMouseLeave_Params
{
	struct FPointerEvent                               MouseEvent;                                                // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function WBP_BindKey.WBP_BindKey_C.BndEvt__Button_2_K2Node_ComponentBoundEvent_120_OnButtonClickedEvent__DelegateSignature
struct UWBP_BindKey_C_BndEvt__Button_2_K2Node_ComponentBoundEvent_120_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function WBP_BindKey.WBP_BindKey_C.Construct
struct UWBP_BindKey_C_Construct_Params
{
};

// Function WBP_BindKey.WBP_BindKey_C.UpdateDisplayText
struct UWBP_BindKey_C_UpdateDisplayText_Params
{
};

// Function WBP_BindKey.WBP_BindKey_C.OnMouseEnter
struct UWBP_BindKey_C_OnMouseEnter_Params
{
	struct FGeometry                                   MyGeometry;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	struct FPointerEvent                               MouseEvent;                                                // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function WBP_BindKey.WBP_BindKey_C.ExecuteUbergraph_WBP_BindKey
struct UWBP_BindKey_C_ExecuteUbergraph_WBP_BindKey_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_BindKey.WBP_BindKey_C.TryResetKey__DelegateSignature
struct UWBP_BindKey_C_TryResetKey__DelegateSignature_Params
{
	class UWBP_BindKey_C*                              Widget;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_BindKey.WBP_BindKey_C.TryBindKey__DelegateSignature
struct UWBP_BindKey_C_TryBindKey__DelegateSignature_Params
{
	class UWBP_BindKey_C*                              Widget;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FInputActionKeyMapping                      NewBind;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function WBP_BindKey.WBP_BindKey_C.TryClearKey__DelegateSignature
struct UWBP_BindKey_C_TryClearKey__DelegateSignature_Params
{
	class UWBP_BindKey_C*                              Widget;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
