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

// Function WBP_VideoSettings.WBP_VideoSettings_C.Get_ResolutionBox_bIsEnabled_1
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
bool UWBP_VideoSettings_C::Get_ResolutionBox_bIsEnabled_1()
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function WBP_VideoSettings.WBP_VideoSettings_C.Get_ResolutionBox_bIsEnabled_1");
	}

	UWBP_VideoSettings_C_Get_ResolutionBox_bIsEnabled_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function WBP_VideoSettings.WBP_VideoSettings_C.On_ResolutionBox_GenerateWidget_1
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 Item                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// class UWidget*                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
class UWidget* UWBP_VideoSettings_C::On_ResolutionBox_GenerateWidget_1(const struct FString& Item)
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function WBP_VideoSettings.WBP_VideoSettings_C.On_ResolutionBox_GenerateWidget_1");
	}

	UWBP_VideoSettings_C_On_ResolutionBox_GenerateWidget_1_Params params;
	params.Item = Item;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function WBP_VideoSettings.WBP_VideoSettings_C.Apply Settings
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Save                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UWBP_VideoSettings_C::Apply_Settings(bool Save)
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function WBP_VideoSettings.WBP_VideoSettings_C.Apply Settings");
	}

	UWBP_VideoSettings_C_Apply_Settings_Params params;
	params.Save = Save;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WBP_VideoSettings.WBP_VideoSettings_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UWBP_VideoSettings_C::Construct()
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function WBP_VideoSettings.WBP_VideoSettings_C.Construct");
	}

	UWBP_VideoSettings_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WBP_VideoSettings.WBP_VideoSettings_C.BndEvt__FOV_Slider_K2Node_ComponentBoundEvent_36_ValueAdjusted__DelegateSignature
// (BlueprintEvent)
// Parameters:
// float                          NewValue                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_VideoSettings_C::BndEvt__FOV_Slider_K2Node_ComponentBoundEvent_36_ValueAdjusted__DelegateSignature(float NewValue)
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function WBP_VideoSettings.WBP_VideoSettings_C.BndEvt__FOV_Slider_K2Node_ComponentBoundEvent_36_ValueAdjusted__DelegateSignature");
	}

	UWBP_VideoSettings_C_BndEvt__FOV_Slider_K2Node_ComponentBoundEvent_36_ValueAdjusted__DelegateSignature_Params params;
	params.NewValue = NewValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WBP_VideoSettings.WBP_VideoSettings_C.BndEvt__FOV_Slider_K2Node_ComponentBoundEvent_41_ValueApplied__DelegateSignature
// (BlueprintEvent)
// Parameters:
// float                          NewValue                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_VideoSettings_C::BndEvt__FOV_Slider_K2Node_ComponentBoundEvent_41_ValueApplied__DelegateSignature(float NewValue)
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function WBP_VideoSettings.WBP_VideoSettings_C.BndEvt__FOV_Slider_K2Node_ComponentBoundEvent_41_ValueApplied__DelegateSignature");
	}

	UWBP_VideoSettings_C_BndEvt__FOV_Slider_K2Node_ComponentBoundEvent_41_ValueApplied__DelegateSignature_Params params;
	params.NewValue = NewValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WBP_VideoSettings.WBP_VideoSettings_C.FOV_Value
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Value                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_VideoSettings_C::FOV_Value(float Value)
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function WBP_VideoSettings.WBP_VideoSettings_C.FOV_Value");
	}

	UWBP_VideoSettings_C_FOV_Value_Params params;
	params.Value = Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WBP_VideoSettings.WBP_VideoSettings_C.Reset
// (BlueprintCallable, BlueprintEvent)
void UWBP_VideoSettings_C::Reset()
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function WBP_VideoSettings.WBP_VideoSettings_C.Reset");
	}

	UWBP_VideoSettings_C_Reset_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WBP_VideoSettings.WBP_VideoSettings_C.Set Radio Option to Default
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWBP_RadioItem_C*        Option                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_VideoSettings_C::Set_Radio_Option_to_Default(class UWBP_RadioItem_C* Option)
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function WBP_VideoSettings.WBP_VideoSettings_C.Set Radio Option to Default");
	}

	UWBP_VideoSettings_C_Set_Radio_Option_to_Default_Params params;
	params.Option = Option;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WBP_VideoSettings.WBP_VideoSettings_C.BndEvt__ApplyButton_K2Node_ComponentBoundEvent_40_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
void UWBP_VideoSettings_C::BndEvt__ApplyButton_K2Node_ComponentBoundEvent_40_OnButtonClickedEvent__DelegateSignature()
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function WBP_VideoSettings.WBP_VideoSettings_C.BndEvt__ApplyButton_K2Node_ComponentBoundEvent_40_OnButtonClickedEvent__DelegateSignature");
	}

	UWBP_VideoSettings_C_BndEvt__ApplyButton_K2Node_ComponentBoundEvent_40_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WBP_VideoSettings.WBP_VideoSettings_C.BndEvt__ResetButton_K2Node_ComponentBoundEvent_57_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
void UWBP_VideoSettings_C::BndEvt__ResetButton_K2Node_ComponentBoundEvent_57_OnButtonClickedEvent__DelegateSignature()
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function WBP_VideoSettings.WBP_VideoSettings_C.BndEvt__ResetButton_K2Node_ComponentBoundEvent_57_OnButtonClickedEvent__DelegateSignature");
	}

	UWBP_VideoSettings_C_BndEvt__ResetButton_K2Node_ComponentBoundEvent_57_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WBP_VideoSettings.WBP_VideoSettings_C.BndEvt__FPS_Slider_K2Node_ComponentBoundEvent_1_ValueApplied__DelegateSignature
// (BlueprintEvent)
// Parameters:
// float                          NewValue                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_VideoSettings_C::BndEvt__FPS_Slider_K2Node_ComponentBoundEvent_1_ValueApplied__DelegateSignature(float NewValue)
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function WBP_VideoSettings.WBP_VideoSettings_C.BndEvt__FPS_Slider_K2Node_ComponentBoundEvent_1_ValueApplied__DelegateSignature");
	}

	UWBP_VideoSettings_C_BndEvt__FPS_Slider_K2Node_ComponentBoundEvent_1_ValueApplied__DelegateSignature_Params params;
	params.NewValue = NewValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WBP_VideoSettings.WBP_VideoSettings_C.BndEvt__FPS_Slider_K2Node_ComponentBoundEvent_2_ValueAdjusted__DelegateSignature
// (BlueprintEvent)
// Parameters:
// float                          NewValue                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_VideoSettings_C::BndEvt__FPS_Slider_K2Node_ComponentBoundEvent_2_ValueAdjusted__DelegateSignature(float NewValue)
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function WBP_VideoSettings.WBP_VideoSettings_C.BndEvt__FPS_Slider_K2Node_ComponentBoundEvent_2_ValueAdjusted__DelegateSignature");
	}

	UWBP_VideoSettings_C_BndEvt__FPS_Slider_K2Node_ComponentBoundEvent_2_ValueAdjusted__DelegateSignature_Params params;
	params.NewValue = NewValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WBP_VideoSettings.WBP_VideoSettings_C.ExecuteUbergraph_WBP_VideoSettings
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_VideoSettings_C::ExecuteUbergraph_WBP_VideoSettings(int EntryPoint)
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function WBP_VideoSettings.WBP_VideoSettings_C.ExecuteUbergraph_WBP_VideoSettings");
	}

	UWBP_VideoSettings_C_ExecuteUbergraph_WBP_VideoSettings_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
