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

// Function WBP_Settings_SliderItem.WBP_Settings_SliderItem_C.GetVisibility_1
struct UWBP_Settings_SliderItem_C_GetVisibility_1_Params
{
	UMG_ESlateVisibility                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_Settings_SliderItem.WBP_Settings_SliderItem_C.SetLiteralSliderSetting
struct UWBP_Settings_SliderItem_C_SetLiteralSliderSetting_Params
{
	float                                              NewSliderSetting;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_Settings_SliderItem.WBP_Settings_SliderItem_C.SetSliderSetting
struct UWBP_Settings_SliderItem_C_SetSliderSetting_Params
{
	float                                              NewSliderSetting;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_Settings_SliderItem.WBP_Settings_SliderItem_C.InvertSettingFromRange
struct UWBP_Settings_SliderItem_C_InvertSettingFromRange_Params
{
	float                                              Setting;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              MappedValue;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_Settings_SliderItem.WBP_Settings_SliderItem_C.MapSettingToRange
struct UWBP_Settings_SliderItem_C_MapSettingToRange_Params
{
	float                                              Setting;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              MappedValue;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_Settings_SliderItem.WBP_Settings_SliderItem_C.SetupSliderRangeValues
struct UWBP_Settings_SliderItem_C_SetupSliderRangeValues_Params
{
};

// Function WBP_Settings_SliderItem.WBP_Settings_SliderItem_C.GetText_1
struct UWBP_Settings_SliderItem_C_GetText_1_Params
{
	struct FText                                       ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function WBP_Settings_SliderItem.WBP_Settings_SliderItem_C.Construct
struct UWBP_Settings_SliderItem_C_Construct_Params
{
};

// Function WBP_Settings_SliderItem.WBP_Settings_SliderItem_C.BndEvt__EditableTextBox_166_K2Node_ComponentBoundEvent_381_OnEditableTextBoxCommittedEvent__DelegateSignature
struct UWBP_Settings_SliderItem_C_BndEvt__EditableTextBox_166_K2Node_ComponentBoundEvent_381_OnEditableTextBoxCommittedEvent__DelegateSignature_Params
{
	struct FText                                       Text;                                                      // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	TEnumAsByte<SlateCore_ETextCommit>                 CommitMethod;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_Settings_SliderItem.WBP_Settings_SliderItem_C.BndEvt__Slider_51_K2Node_ComponentBoundEvent_429_OnFloatValueChangedEvent__DelegateSignature
struct UWBP_Settings_SliderItem_C_BndEvt__Slider_51_K2Node_ComponentBoundEvent_429_OnFloatValueChangedEvent__DelegateSignature_Params
{
	float                                              Value;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_Settings_SliderItem.WBP_Settings_SliderItem_C.BndEvt__Slider_51_K2Node_ComponentBoundEvent_494_OnMouseCaptureBeginEvent__DelegateSignature
struct UWBP_Settings_SliderItem_C_BndEvt__Slider_51_K2Node_ComponentBoundEvent_494_OnMouseCaptureBeginEvent__DelegateSignature_Params
{
};

// Function WBP_Settings_SliderItem.WBP_Settings_SliderItem_C.BndEvt__Slider_51_K2Node_ComponentBoundEvent_21_OnMouseCaptureEndEvent__DelegateSignature
struct UWBP_Settings_SliderItem_C_BndEvt__Slider_51_K2Node_ComponentBoundEvent_21_OnMouseCaptureEndEvent__DelegateSignature_Params
{
};

// Function WBP_Settings_SliderItem.WBP_Settings_SliderItem_C.ExecuteUbergraph_WBP_Settings_SliderItem
struct UWBP_Settings_SliderItem_C_ExecuteUbergraph_WBP_Settings_SliderItem_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_Settings_SliderItem.WBP_Settings_SliderItem_C.ValueApplied__DelegateSignature
struct UWBP_Settings_SliderItem_C_ValueApplied__DelegateSignature_Params
{
	float                                              NewValue;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_Settings_SliderItem.WBP_Settings_SliderItem_C.ValueAdjusted__DelegateSignature
struct UWBP_Settings_SliderItem_C_ValueAdjusted__DelegateSignature_Params
{
	float                                              NewValue;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
