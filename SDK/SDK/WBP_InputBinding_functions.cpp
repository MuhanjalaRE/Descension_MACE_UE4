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

// Function WBP_InputBinding.WBP_InputBinding_C.GetToolTipWidget
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UWidget*                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
class UWidget* UWBP_InputBinding_C::GetToolTipWidget()
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function WBP_InputBinding.WBP_InputBinding_C.GetToolTipWidget");
	}

	UWBP_InputBinding_C_GetToolTipWidget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function WBP_InputBinding.WBP_InputBinding_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UWBP_InputBinding_C::Construct()
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function WBP_InputBinding.WBP_InputBinding_C.Construct");
	}

	UWBP_InputBinding_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WBP_InputBinding.WBP_InputBinding_C.BndEvt__PrimaryKey_K2Node_ComponentBoundEvent_0_TryClearKey__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UWBP_BindKey_C*          Widget                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_InputBinding_C::BndEvt__PrimaryKey_K2Node_ComponentBoundEvent_0_TryClearKey__DelegateSignature(class UWBP_BindKey_C* Widget)
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function WBP_InputBinding.WBP_InputBinding_C.BndEvt__PrimaryKey_K2Node_ComponentBoundEvent_0_TryClearKey__DelegateSignature");
	}

	UWBP_InputBinding_C_BndEvt__PrimaryKey_K2Node_ComponentBoundEvent_0_TryClearKey__DelegateSignature_Params params;
	params.Widget = Widget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WBP_InputBinding.WBP_InputBinding_C.BndEvt__PrimaryKey_K2Node_ComponentBoundEvent_8_TryBindKey__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UWBP_BindKey_C*          Widget                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FInputActionKeyMapping  NewBind                        (BlueprintVisible, BlueprintReadOnly, Parm)
void UWBP_InputBinding_C::BndEvt__PrimaryKey_K2Node_ComponentBoundEvent_8_TryBindKey__DelegateSignature(class UWBP_BindKey_C* Widget, const struct FInputActionKeyMapping& NewBind)
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function WBP_InputBinding.WBP_InputBinding_C.BndEvt__PrimaryKey_K2Node_ComponentBoundEvent_8_TryBindKey__DelegateSignature");
	}

	UWBP_InputBinding_C_BndEvt__PrimaryKey_K2Node_ComponentBoundEvent_8_TryBindKey__DelegateSignature_Params params;
	params.Widget = Widget;
	params.NewBind = NewBind;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WBP_InputBinding.WBP_InputBinding_C.BndEvt__PrimaryKey_K2Node_ComponentBoundEvent_14_TryResetKey__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UWBP_BindKey_C*          Widget                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_InputBinding_C::BndEvt__PrimaryKey_K2Node_ComponentBoundEvent_14_TryResetKey__DelegateSignature(class UWBP_BindKey_C* Widget)
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function WBP_InputBinding.WBP_InputBinding_C.BndEvt__PrimaryKey_K2Node_ComponentBoundEvent_14_TryResetKey__DelegateSignature");
	}

	UWBP_InputBinding_C_BndEvt__PrimaryKey_K2Node_ComponentBoundEvent_14_TryResetKey__DelegateSignature_Params params;
	params.Widget = Widget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WBP_InputBinding.WBP_InputBinding_C.BndEvt__SecondaryKey_K2Node_ComponentBoundEvent_18_TryClearKey__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UWBP_BindKey_C*          Widget                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_InputBinding_C::BndEvt__SecondaryKey_K2Node_ComponentBoundEvent_18_TryClearKey__DelegateSignature(class UWBP_BindKey_C* Widget)
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function WBP_InputBinding.WBP_InputBinding_C.BndEvt__SecondaryKey_K2Node_ComponentBoundEvent_18_TryClearKey__DelegateSignature");
	}

	UWBP_InputBinding_C_BndEvt__SecondaryKey_K2Node_ComponentBoundEvent_18_TryClearKey__DelegateSignature_Params params;
	params.Widget = Widget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WBP_InputBinding.WBP_InputBinding_C.BndEvt__SecondaryKey_K2Node_ComponentBoundEvent_29_TryBindKey__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UWBP_BindKey_C*          Widget                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FInputActionKeyMapping  NewBind                        (BlueprintVisible, BlueprintReadOnly, Parm)
void UWBP_InputBinding_C::BndEvt__SecondaryKey_K2Node_ComponentBoundEvent_29_TryBindKey__DelegateSignature(class UWBP_BindKey_C* Widget, const struct FInputActionKeyMapping& NewBind)
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function WBP_InputBinding.WBP_InputBinding_C.BndEvt__SecondaryKey_K2Node_ComponentBoundEvent_29_TryBindKey__DelegateSignature");
	}

	UWBP_InputBinding_C_BndEvt__SecondaryKey_K2Node_ComponentBoundEvent_29_TryBindKey__DelegateSignature_Params params;
	params.Widget = Widget;
	params.NewBind = NewBind;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WBP_InputBinding.WBP_InputBinding_C.BndEvt__SecondaryKey_K2Node_ComponentBoundEvent_38_TryResetKey__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UWBP_BindKey_C*          Widget                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_InputBinding_C::BndEvt__SecondaryKey_K2Node_ComponentBoundEvent_38_TryResetKey__DelegateSignature(class UWBP_BindKey_C* Widget)
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function WBP_InputBinding.WBP_InputBinding_C.BndEvt__SecondaryKey_K2Node_ComponentBoundEvent_38_TryResetKey__DelegateSignature");
	}

	UWBP_InputBinding_C_BndEvt__SecondaryKey_K2Node_ComponentBoundEvent_38_TryResetKey__DelegateSignature_Params params;
	params.Widget = Widget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WBP_InputBinding.WBP_InputBinding_C.Update
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FMidairInputMapping     New_Mapping                    (BlueprintVisible, BlueprintReadOnly, Parm)
void UWBP_InputBinding_C::Update(const struct FMidairInputMapping& New_Mapping)
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function WBP_InputBinding.WBP_InputBinding_C.Update");
	}

	UWBP_InputBinding_C_Update_Params params;
	params.New_Mapping = New_Mapping;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WBP_InputBinding.WBP_InputBinding_C.ExecuteUbergraph_WBP_InputBinding
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_InputBinding_C::ExecuteUbergraph_WBP_InputBinding(int EntryPoint)
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function WBP_InputBinding.WBP_InputBinding_C.ExecuteUbergraph_WBP_InputBinding");
	}

	UWBP_InputBinding_C_ExecuteUbergraph_WBP_InputBinding_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WBP_InputBinding.WBP_InputBinding_C.TryResetKey__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   Name                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// MidairCE_EMappingPriority      Priority                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_InputBinding_C::TryResetKey__DelegateSignature(const struct FName& Name, MidairCE_EMappingPriority Priority)
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function WBP_InputBinding.WBP_InputBinding_C.TryResetKey__DelegateSignature");
	}

	UWBP_InputBinding_C_TryResetKey__DelegateSignature_Params params;
	params.Name = Name;
	params.Priority = Priority;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WBP_InputBinding.WBP_InputBinding_C.TryBindKey__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   Name                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FInputActionKeyMapping  NewKey                         (BlueprintVisible, BlueprintReadOnly, Parm)
// MidairCE_EMappingPriority      Priority                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_InputBinding_C::TryBindKey__DelegateSignature(const struct FName& Name, const struct FInputActionKeyMapping& NewKey, MidairCE_EMappingPriority Priority)
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function WBP_InputBinding.WBP_InputBinding_C.TryBindKey__DelegateSignature");
	}

	UWBP_InputBinding_C_TryBindKey__DelegateSignature_Params params;
	params.Name = Name;
	params.NewKey = NewKey;
	params.Priority = Priority;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WBP_InputBinding.WBP_InputBinding_C.TryClearKey__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   Name                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// MidairCE_EMappingPriority      Priority                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_InputBinding_C::TryClearKey__DelegateSignature(const struct FName& Name, MidairCE_EMappingPriority Priority)
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function WBP_InputBinding.WBP_InputBinding_C.TryClearKey__DelegateSignature");
	}

	UWBP_InputBinding_C_TryClearKey__DelegateSignature_Params params;
	params.Name = Name;
	params.Priority = Priority;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
