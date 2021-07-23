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

// Function EasyColorPicker.ECP_Slider.OnValueChangedFunction
// (Final, Native, Private)
// Parameters:
// float                          NewValue                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UECP_Slider::OnValueChangedFunction(float NewValue)
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function EasyColorPicker.ECP_Slider.OnValueChangedFunction");
	}

	UECP_Slider_OnValueChangedFunction_Params params;
	params.NewValue = NewValue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function EasyColorPicker.ECP_WheelAndSlider.SetColor
// (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// struct FColor                  NewColor                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UECP_WheelAndSlider::SetColor(const struct FColor& NewColor)
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function EasyColorPicker.ECP_WheelAndSlider.SetColor");
	}

	UECP_WheelAndSlider_SetColor_Params params;
	params.NewColor = NewColor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function EasyColorPicker.ECP_WheelAndSlider.OnWheelPickerValueChanged
// (Final, Native, Private, HasOutParms, HasDefaults)
// Parameters:
// struct FColor                  NewColor                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UECP_WheelAndSlider::OnWheelPickerValueChanged(const struct FColor& NewColor)
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function EasyColorPicker.ECP_WheelAndSlider.OnWheelPickerValueChanged");
	}

	UECP_WheelAndSlider_OnWheelPickerValueChanged_Params params;
	params.NewColor = NewColor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function EasyColorPicker.ECP_WheelAndSlider.OnSecondSliderValueChanged
// (Final, Native, Private, HasOutParms, HasDefaults)
// Parameters:
// struct FColor                  NewColor                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UECP_WheelAndSlider::OnSecondSliderValueChanged(const struct FColor& NewColor)
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function EasyColorPicker.ECP_WheelAndSlider.OnSecondSliderValueChanged");
	}

	UECP_WheelAndSlider_OnSecondSliderValueChanged_Params params;
	params.NewColor = NewColor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function EasyColorPicker.ECP_WheelAndSlider.OnFirstSliderValueChanged
// (Final, Native, Private, HasOutParms, HasDefaults)
// Parameters:
// struct FColor                  NewColor                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UECP_WheelAndSlider::OnFirstSliderValueChanged(const struct FColor& NewColor)
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function EasyColorPicker.ECP_WheelAndSlider.OnFirstSliderValueChanged");
	}

	UECP_WheelAndSlider_OnFirstSliderValueChanged_Params params;
	params.NewColor = NewColor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function EasyColorPicker.ECP_WheelAndSlider.GetColor
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FColor                  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FColor UECP_WheelAndSlider::GetColor()
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function EasyColorPicker.ECP_WheelAndSlider.GetColor");
	}

	UECP_WheelAndSlider_GetColor_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
