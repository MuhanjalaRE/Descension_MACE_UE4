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

// Function WBP_MidairCombobox_Item.WBP_MidairCombobox_Item_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UWBP_MidairCombobox_Item_C::Construct()
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function WBP_MidairCombobox_Item.WBP_MidairCombobox_Item_C.Construct");
	}

	UWBP_MidairCombobox_Item_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WBP_MidairCombobox_Item.WBP_MidairCombobox_Item_C.BndEvt__WBP_StyledButton_K2Node_ComponentBoundEvent_0_Clicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// int                            Ident                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_MidairCombobox_Item_C::BndEvt__WBP_StyledButton_K2Node_ComponentBoundEvent_0_Clicked__DelegateSignature(int Ident)
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function WBP_MidairCombobox_Item.WBP_MidairCombobox_Item_C.BndEvt__WBP_StyledButton_K2Node_ComponentBoundEvent_0_Clicked__DelegateSignature");
	}

	UWBP_MidairCombobox_Item_C_BndEvt__WBP_StyledButton_K2Node_ComponentBoundEvent_0_Clicked__DelegateSignature_Params params;
	params.Ident = Ident;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WBP_MidairCombobox_Item.WBP_MidairCombobox_Item_C.ExecuteUbergraph_WBP_MidairCombobox_Item
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_MidairCombobox_Item_C::ExecuteUbergraph_WBP_MidairCombobox_Item(int EntryPoint)
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function WBP_MidairCombobox_Item.WBP_MidairCombobox_Item_C.ExecuteUbergraph_WBP_MidairCombobox_Item");
	}

	UWBP_MidairCombobox_Item_C_ExecuteUbergraph_WBP_MidairCombobox_Item_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WBP_MidairCombobox_Item.WBP_MidairCombobox_Item_C.Selected__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Ident                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FString                 Option                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
void UWBP_MidairCombobox_Item_C::Selected__DelegateSignature(int Ident, const struct FString& Option)
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function WBP_MidairCombobox_Item.WBP_MidairCombobox_Item_C.Selected__DelegateSignature");
	}

	UWBP_MidairCombobox_Item_C_Selected__DelegateSignature_Params params;
	params.Ident = Ident;
	params.Option = Option;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
