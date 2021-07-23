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

// Function WBP_RadioItem.WBP_RadioItem_C.GetSelectedValue
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                          Value                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_RadioItem_C::GetSelectedValue(float* Value)
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function WBP_RadioItem.WBP_RadioItem_C.GetSelectedValue");
	}

	UWBP_RadioItem_C_GetSelectedValue_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Value != nullptr)
		*Value = params.Value;

}


// Function WBP_RadioItem.WBP_RadioItem_C.SelectLiteralValueIfPossible
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          LiteralValue                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_RadioItem_C::SelectLiteralValueIfPossible(float LiteralValue)
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function WBP_RadioItem.WBP_RadioItem_C.SelectLiteralValueIfPossible");
	}

	UWBP_RadioItem_C_SelectLiteralValueIfPossible_Params params;
	params.LiteralValue = LiteralValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WBP_RadioItem.WBP_RadioItem_C.Option Selected
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWBP_SelectableButton_C* Clicked_Button                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_RadioItem_C::Option_Selected(class UWBP_SelectableButton_C* Clicked_Button)
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function WBP_RadioItem.WBP_RadioItem_C.Option Selected");
	}

	UWBP_RadioItem_C_Option_Selected_Params params;
	params.Clicked_Button = Clicked_Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WBP_RadioItem.WBP_RadioItem_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                           IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UWBP_RadioItem_C::PreConstruct(bool IsDesignTime)
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function WBP_RadioItem.WBP_RadioItem_C.PreConstruct");
	}

	UWBP_RadioItem_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WBP_RadioItem.WBP_RadioItem_C.ExecuteUbergraph_WBP_RadioItem
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_RadioItem_C::ExecuteUbergraph_WBP_RadioItem(int EntryPoint)
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function WBP_RadioItem.WBP_RadioItem_C.ExecuteUbergraph_WBP_RadioItem");
	}

	UWBP_RadioItem_C_ExecuteUbergraph_WBP_RadioItem_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WBP_RadioItem.WBP_RadioItem_C.ValueApplied__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          NewValue                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_RadioItem_C::ValueApplied__DelegateSignature(float NewValue)
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function WBP_RadioItem.WBP_RadioItem_C.ValueApplied__DelegateSignature");
	}

	UWBP_RadioItem_C_ValueApplied__DelegateSignature_Params params;
	params.NewValue = NewValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
