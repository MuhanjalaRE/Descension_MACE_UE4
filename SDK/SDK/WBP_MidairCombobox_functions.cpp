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

// Function WBP_MidairCombobox.WBP_MidairCombobox_C.ChildSelected
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Ident                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FString                 Option                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
void UWBP_MidairCombobox_C::ChildSelected(int Ident, const struct FString& Option)
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function WBP_MidairCombobox.WBP_MidairCombobox_C.ChildSelected");
	}

	UWBP_MidairCombobox_C_ChildSelected_Params params;
	params.Ident = Ident;
	params.Option = Option;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WBP_MidairCombobox.WBP_MidairCombobox_C.RemoveChildAt
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
bool UWBP_MidairCombobox_C::RemoveChildAt(int Index)
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function WBP_MidairCombobox.WBP_MidairCombobox_C.RemoveChildAt");
	}

	UWBP_MidairCombobox_C_RemoveChildAt_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function WBP_MidairCombobox.WBP_MidairCombobox_C.Open
// (Public, BlueprintCallable, BlueprintEvent)
void UWBP_MidairCombobox_C::Open()
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function WBP_MidairCombobox.WBP_MidairCombobox_C.Open");
	}

	UWBP_MidairCombobox_C_Open_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WBP_MidairCombobox.WBP_MidairCombobox_C.CloseAndClear
// (Public, BlueprintCallable, BlueprintEvent)
void UWBP_MidairCombobox_C::CloseAndClear()
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function WBP_MidairCombobox.WBP_MidairCombobox_C.CloseAndClear");
	}

	UWBP_MidairCombobox_C_CloseAndClear_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WBP_MidairCombobox.WBP_MidairCombobox_C.SetOptions
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FString>         Options                        (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
void UWBP_MidairCombobox_C::SetOptions(TArray<struct FString>* Options)
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function WBP_MidairCombobox.WBP_MidairCombobox_C.SetOptions");
	}

	UWBP_MidairCombobox_C_SetOptions_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Options != nullptr)
		*Options = params.Options;

}


// Function WBP_MidairCombobox.WBP_MidairCombobox_C.RemoveChild
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWidget*                 Content                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
bool UWBP_MidairCombobox_C::RemoveChild(class UWidget* Content)
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function WBP_MidairCombobox.WBP_MidairCombobox_C.RemoveChild");
	}

	UWBP_MidairCombobox_C_RemoveChild_Params params;
	params.Content = Content;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function WBP_MidairCombobox.WBP_MidairCombobox_C.AddChild
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWidget*                 Content                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UVerticalBoxSlot*        ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
class UVerticalBoxSlot* UWBP_MidairCombobox_C::AddChild(class UWidget* Content)
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function WBP_MidairCombobox.WBP_MidairCombobox_C.AddChild");
	}

	UWBP_MidairCombobox_C_AddChild_Params params;
	params.Content = Content;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function WBP_MidairCombobox.WBP_MidairCombobox_C.OptionSelected__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Ident                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FString                 Option                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
void UWBP_MidairCombobox_C::OptionSelected__DelegateSignature(int Ident, const struct FString& Option)
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function WBP_MidairCombobox.WBP_MidairCombobox_C.OptionSelected__DelegateSignature");
	}

	UWBP_MidairCombobox_C_OptionSelected__DelegateSignature_Params params;
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
