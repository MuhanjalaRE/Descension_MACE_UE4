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

// Function WBP_ControlSettings.WBP_ControlSettings_C.Find Category Widget by Name
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   Name                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWBP_InputCategory_C*    Widget                         (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_ControlSettings_C::Find_Category_Widget_by_Name(const struct FName& Name, class UWBP_InputCategory_C** Widget)
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function WBP_ControlSettings.WBP_ControlSettings_C.Find Category Widget by Name");
	}

	UWBP_ControlSettings_C_Find_Category_Widget_by_Name_Params params;
	params.Name = Name;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Widget != nullptr)
		*Widget = params.Widget;

}


// Function WBP_ControlSettings.WBP_ControlSettings_C.Reset
// (Public, BlueprintCallable, BlueprintEvent)
void UWBP_ControlSettings_C::Reset()
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function WBP_ControlSettings.WBP_ControlSettings_C.Reset");
	}

	UWBP_ControlSettings_C_Reset_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WBP_ControlSettings.WBP_ControlSettings_C.Save
// (Public, BlueprintCallable, BlueprintEvent)
void UWBP_ControlSettings_C::Save()
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function WBP_ControlSettings.WBP_ControlSettings_C.Save");
	}

	UWBP_ControlSettings_C_Save_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WBP_ControlSettings.WBP_ControlSettings_C.Load
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
void UWBP_ControlSettings_C::Load()
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function WBP_ControlSettings.WBP_ControlSettings_C.Load");
	}

	UWBP_ControlSettings_C_Load_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WBP_ControlSettings.WBP_ControlSettings_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UWBP_ControlSettings_C::Construct()
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function WBP_ControlSettings.WBP_ControlSettings_C.Construct");
	}

	UWBP_ControlSettings_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WBP_ControlSettings.WBP_ControlSettings_C.OnAttemptResolve
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// MidairCE_EMappingConflictResolution Resolution                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_ControlSettings_C::OnAttemptResolve(MidairCE_EMappingConflictResolution Resolution)
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function WBP_ControlSettings.WBP_ControlSettings_C.OnAttemptResolve");
	}

	UWBP_ControlSettings_C_OnAttemptResolve_Params params;
	params.Resolution = Resolution;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WBP_ControlSettings.WBP_ControlSettings_C.BndEvt__SpectatorMouseSensitivity_K2Node_ComponentBoundEvent_110_OnSpinBoxValueChangedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:
// float                          InValue                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_ControlSettings_C::BndEvt__SpectatorMouseSensitivity_K2Node_ComponentBoundEvent_110_OnSpinBoxValueChangedEvent__DelegateSignature(float InValue)
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function WBP_ControlSettings.WBP_ControlSettings_C.BndEvt__SpectatorMouseSensitivity_K2Node_ComponentBoundEvent_110_OnSpinBoxValueChangedEvent__DelegateSignature");
	}

	UWBP_ControlSettings_C_BndEvt__SpectatorMouseSensitivity_K2Node_ComponentBoundEvent_110_OnSpinBoxValueChangedEvent__DelegateSignature_Params params;
	params.InValue = InValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WBP_ControlSettings.WBP_ControlSettings_C.BndEvt__SpectatorMouseSensitivity_K2Node_ComponentBoundEvent_125_OnSpinBoxValueCommittedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:
// float                          InValue                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TEnumAsByte<SlateCore_ETextCommit> CommitMethod                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_ControlSettings_C::BndEvt__SpectatorMouseSensitivity_K2Node_ComponentBoundEvent_125_OnSpinBoxValueCommittedEvent__DelegateSignature(float InValue, TEnumAsByte<SlateCore_ETextCommit> CommitMethod)
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function WBP_ControlSettings.WBP_ControlSettings_C.BndEvt__SpectatorMouseSensitivity_K2Node_ComponentBoundEvent_125_OnSpinBoxValueCommittedEvent__DelegateSignature");
	}

	UWBP_ControlSettings_C_BndEvt__SpectatorMouseSensitivity_K2Node_ComponentBoundEvent_125_OnSpinBoxValueCommittedEvent__DelegateSignature_Params params;
	params.InValue = InValue;
	params.CommitMethod = CommitMethod;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WBP_ControlSettings.WBP_ControlSettings_C.BndEvt__CheckBox_0_K2Node_ComponentBoundEvent_188_OnCheckBoxComponentStateChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:
// bool                           bIsChecked                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UWBP_ControlSettings_C::BndEvt__CheckBox_0_K2Node_ComponentBoundEvent_188_OnCheckBoxComponentStateChanged__DelegateSignature(bool bIsChecked)
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function WBP_ControlSettings.WBP_ControlSettings_C.BndEvt__CheckBox_0_K2Node_ComponentBoundEvent_188_OnCheckBoxComponentStateChanged__DelegateSignature");
	}

	UWBP_ControlSettings_C_BndEvt__CheckBox_0_K2Node_ComponentBoundEvent_188_OnCheckBoxComponentStateChanged__DelegateSignature_Params params;
	params.bIsChecked = bIsChecked;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WBP_ControlSettings.WBP_ControlSettings_C.BndEvt__RegularMouseSensitivity_K2Node_ComponentBoundEvent_58_OnSpinBoxValueChangedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:
// float                          InValue                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_ControlSettings_C::BndEvt__RegularMouseSensitivity_K2Node_ComponentBoundEvent_58_OnSpinBoxValueChangedEvent__DelegateSignature(float InValue)
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function WBP_ControlSettings.WBP_ControlSettings_C.BndEvt__RegularMouseSensitivity_K2Node_ComponentBoundEvent_58_OnSpinBoxValueChangedEvent__DelegateSignature");
	}

	UWBP_ControlSettings_C_BndEvt__RegularMouseSensitivity_K2Node_ComponentBoundEvent_58_OnSpinBoxValueChangedEvent__DelegateSignature_Params params;
	params.InValue = InValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WBP_ControlSettings.WBP_ControlSettings_C.BndEvt__RegularMouseSensitivity_K2Node_ComponentBoundEvent_76_OnSpinBoxValueCommittedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:
// float                          InValue                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TEnumAsByte<SlateCore_ETextCommit> CommitMethod                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_ControlSettings_C::BndEvt__RegularMouseSensitivity_K2Node_ComponentBoundEvent_76_OnSpinBoxValueCommittedEvent__DelegateSignature(float InValue, TEnumAsByte<SlateCore_ETextCommit> CommitMethod)
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function WBP_ControlSettings.WBP_ControlSettings_C.BndEvt__RegularMouseSensitivity_K2Node_ComponentBoundEvent_76_OnSpinBoxValueCommittedEvent__DelegateSignature");
	}

	UWBP_ControlSettings_C_BndEvt__RegularMouseSensitivity_K2Node_ComponentBoundEvent_76_OnSpinBoxValueCommittedEvent__DelegateSignature_Params params;
	params.InValue = InValue;
	params.CommitMethod = CommitMethod;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WBP_ControlSettings.WBP_ControlSettings_C.BndEvt__CheckBox_0_K2Node_ComponentBoundEvent_84_OnCheckBoxComponentStateChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:
// bool                           bIsChecked                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UWBP_ControlSettings_C::BndEvt__CheckBox_0_K2Node_ComponentBoundEvent_84_OnCheckBoxComponentStateChanged__DelegateSignature(bool bIsChecked)
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function WBP_ControlSettings.WBP_ControlSettings_C.BndEvt__CheckBox_0_K2Node_ComponentBoundEvent_84_OnCheckBoxComponentStateChanged__DelegateSignature");
	}

	UWBP_ControlSettings_C_BndEvt__CheckBox_0_K2Node_ComponentBoundEvent_84_OnCheckBoxComponentStateChanged__DelegateSignature_Params params;
	params.bIsChecked = bIsChecked;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WBP_ControlSettings.WBP_ControlSettings_C.BindingChanged
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   CategoryName                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FMidairInputMapping     NewMapping                     (BlueprintVisible, BlueprintReadOnly, Parm)
void UWBP_ControlSettings_C::BindingChanged(const struct FName& CategoryName, const struct FMidairInputMapping& NewMapping)
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function WBP_ControlSettings.WBP_ControlSettings_C.BindingChanged");
	}

	UWBP_ControlSettings_C_BindingChanged_Params params;
	params.CategoryName = CategoryName;
	params.NewMapping = NewMapping;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WBP_ControlSettings.WBP_ControlSettings_C.OnBindsConflict_Event_1
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FName>           ConflictingBindNames           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// struct FInputActionKeyMapping  Key                            (BlueprintVisible, BlueprintReadOnly, Parm)
void UWBP_ControlSettings_C::OnBindsConflict_Event_1(TArray<struct FName> ConflictingBindNames, const struct FInputActionKeyMapping& Key)
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function WBP_ControlSettings.WBP_ControlSettings_C.OnBindsConflict_Event_1");
	}

	UWBP_ControlSettings_C_OnBindsConflict_Event_1_Params params;
	params.ConflictingBindNames = ConflictingBindNames;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WBP_ControlSettings.WBP_ControlSettings_C.BndEvt__ToggleSkate_K2Node_ComponentBoundEvent_0_OnCheckBoxComponentStateChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:
// bool                           bIsChecked                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UWBP_ControlSettings_C::BndEvt__ToggleSkate_K2Node_ComponentBoundEvent_0_OnCheckBoxComponentStateChanged__DelegateSignature(bool bIsChecked)
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function WBP_ControlSettings.WBP_ControlSettings_C.BndEvt__ToggleSkate_K2Node_ComponentBoundEvent_0_OnCheckBoxComponentStateChanged__DelegateSignature");
	}

	UWBP_ControlSettings_C_BndEvt__ToggleSkate_K2Node_ComponentBoundEvent_0_OnCheckBoxComponentStateChanged__DelegateSignature_Params params;
	params.bIsChecked = bIsChecked;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WBP_ControlSettings.WBP_ControlSettings_C.ExecuteUbergraph_WBP_ControlSettings
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_ControlSettings_C::ExecuteUbergraph_WBP_ControlSettings(int EntryPoint)
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function WBP_ControlSettings.WBP_ControlSettings_C.ExecuteUbergraph_WBP_ControlSettings");
	}

	UWBP_ControlSettings_C_ExecuteUbergraph_WBP_ControlSettings_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
