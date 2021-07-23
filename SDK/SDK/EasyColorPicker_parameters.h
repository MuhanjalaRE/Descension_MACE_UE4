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

// Function EasyColorPicker.ECP_Slider.OnValueChangedFunction
struct UECP_Slider_OnValueChangedFunction_Params
{
	float                                              NewValue;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function EasyColorPicker.ECP_WheelAndSlider.SetColor
struct UECP_WheelAndSlider_SetColor_Params
{
	struct FColor                                      NewColor;                                                  // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function EasyColorPicker.ECP_WheelAndSlider.OnWheelPickerValueChanged
struct UECP_WheelAndSlider_OnWheelPickerValueChanged_Params
{
	struct FColor                                      NewColor;                                                  // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function EasyColorPicker.ECP_WheelAndSlider.OnSecondSliderValueChanged
struct UECP_WheelAndSlider_OnSecondSliderValueChanged_Params
{
	struct FColor                                      NewColor;                                                  // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function EasyColorPicker.ECP_WheelAndSlider.OnFirstSliderValueChanged
struct UECP_WheelAndSlider_OnFirstSliderValueChanged_Params
{
	struct FColor                                      NewColor;                                                  // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function EasyColorPicker.ECP_WheelAndSlider.GetColor
struct UECP_WheelAndSlider_GetColor_Params
{
	struct FColor                                      ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
