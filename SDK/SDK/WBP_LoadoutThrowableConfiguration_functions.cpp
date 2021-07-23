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

// Function WBP_LoadoutThrowableConfiguration.WBP_LoadoutThrowableConfiguration_C.CheckThrowableSlot
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWBP_Loadouts_ItemSlot_C* InputPin                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_LoadoutThrowableConfiguration_C::CheckThrowableSlot(class UWBP_Loadouts_ItemSlot_C* InputPin)
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function WBP_LoadoutThrowableConfiguration.WBP_LoadoutThrowableConfiguration_C.CheckThrowableSlot");
	}

	UWBP_LoadoutThrowableConfiguration_C_CheckThrowableSlot_Params params;
	params.InputPin = InputPin;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WBP_LoadoutThrowableConfiguration.WBP_LoadoutThrowableConfiguration_C.GetMostRelevantError
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText                   Error_Text                     (Parm, OutParm)
void UWBP_LoadoutThrowableConfiguration_C::GetMostRelevantError(struct FText* Error_Text)
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function WBP_LoadoutThrowableConfiguration.WBP_LoadoutThrowableConfiguration_C.GetMostRelevantError");
	}

	UWBP_LoadoutThrowableConfiguration_C_GetMostRelevantError_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Error_Text != nullptr)
		*Error_Text = params.Error_Text;

}


// Function WBP_LoadoutThrowableConfiguration.WBP_LoadoutThrowableConfiguration_C.HackyGetAllThrowables
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// TArray<class UClass*>          Array                          (Parm, OutParm, ZeroConstructor)
void UWBP_LoadoutThrowableConfiguration_C::HackyGetAllThrowables(TArray<class UClass*>* Array)
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function WBP_LoadoutThrowableConfiguration.WBP_LoadoutThrowableConfiguration_C.HackyGetAllThrowables");
	}

	UWBP_LoadoutThrowableConfiguration_C_HackyGetAllThrowables_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Array != nullptr)
		*Array = params.Array;

}


// Function WBP_LoadoutThrowableConfiguration.WBP_LoadoutThrowableConfiguration_C.CosmeticSelected
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass*                  Cosmetic                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_LoadoutThrowableConfiguration_C::CosmeticSelected(class UClass* Cosmetic)
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function WBP_LoadoutThrowableConfiguration.WBP_LoadoutThrowableConfiguration_C.CosmeticSelected");
	}

	UWBP_LoadoutThrowableConfiguration_C_CosmeticSelected_Params params;
	params.Cosmetic = Cosmetic;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WBP_LoadoutThrowableConfiguration.WBP_LoadoutThrowableConfiguration_C.Update Throwables List
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Throwable_Index                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_LoadoutThrowableConfiguration_C::Update_Throwables_List(int Throwable_Index)
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function WBP_LoadoutThrowableConfiguration.WBP_LoadoutThrowableConfiguration_C.Update Throwables List");
	}

	UWBP_LoadoutThrowableConfiguration_C_Update_Throwables_List_Params params;
	params.Throwable_Index = Throwable_Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WBP_LoadoutThrowableConfiguration.WBP_LoadoutThrowableConfiguration_C.OnNewButtonSelected
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWBP_SelectableButton_C* Clicked_Button                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_LoadoutThrowableConfiguration_C::OnNewButtonSelected(class UWBP_SelectableButton_C* Clicked_Button)
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function WBP_LoadoutThrowableConfiguration.WBP_LoadoutThrowableConfiguration_C.OnNewButtonSelected");
	}

	UWBP_LoadoutThrowableConfiguration_C_OnNewButtonSelected_Params params;
	params.Clicked_Button = Clicked_Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WBP_LoadoutThrowableConfiguration.WBP_LoadoutThrowableConfiguration_C.ThrowableSelected
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWBP_SelectableButton_C* Clicked_Button                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_LoadoutThrowableConfiguration_C::ThrowableSelected(class UWBP_SelectableButton_C* Clicked_Button)
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function WBP_LoadoutThrowableConfiguration.WBP_LoadoutThrowableConfiguration_C.ThrowableSelected");
	}

	UWBP_LoadoutThrowableConfiguration_C_ThrowableSelected_Params params;
	params.Clicked_Button = Clicked_Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WBP_LoadoutThrowableConfiguration.WBP_LoadoutThrowableConfiguration_C.Jump To Object
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass*                  Object_Info                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_LoadoutThrowableConfiguration_C::Jump_To_Object(class UClass* Object_Info)
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function WBP_LoadoutThrowableConfiguration.WBP_LoadoutThrowableConfiguration_C.Jump To Object");
	}

	UWBP_LoadoutThrowableConfiguration_C_Jump_To_Object_Params params;
	params.Object_Info = Object_Info;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WBP_LoadoutThrowableConfiguration.WBP_LoadoutThrowableConfiguration_C.Confirm Selection
// (Public, BlueprintCallable, BlueprintEvent)
void UWBP_LoadoutThrowableConfiguration_C::Confirm_Selection()
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function WBP_LoadoutThrowableConfiguration.WBP_LoadoutThrowableConfiguration_C.Confirm Selection");
	}

	UWBP_LoadoutThrowableConfiguration_C_Confirm_Selection_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WBP_LoadoutThrowableConfiguration.WBP_LoadoutThrowableConfiguration_C.ExecuteUbergraph_WBP_LoadoutThrowableConfiguration
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_LoadoutThrowableConfiguration_C::ExecuteUbergraph_WBP_LoadoutThrowableConfiguration(int EntryPoint)
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function WBP_LoadoutThrowableConfiguration.WBP_LoadoutThrowableConfiguration_C.ExecuteUbergraph_WBP_LoadoutThrowableConfiguration");
	}

	UWBP_LoadoutThrowableConfiguration_C_ExecuteUbergraph_WBP_LoadoutThrowableConfiguration_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WBP_LoadoutThrowableConfiguration.WBP_LoadoutThrowableConfiguration_C.Jump to Throwable__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass*                  Object_Info                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_LoadoutThrowableConfiguration_C::Jump_to_Throwable__DelegateSignature(class UClass* Object_Info)
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function WBP_LoadoutThrowableConfiguration.WBP_LoadoutThrowableConfiguration_C.Jump to Throwable__DelegateSignature");
	}

	UWBP_LoadoutThrowableConfiguration_C_Jump_to_Throwable__DelegateSignature_Params params;
	params.Object_Info = Object_Info;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WBP_LoadoutThrowableConfiguration.WBP_LoadoutThrowableConfiguration_C.ConfiguratorApplied__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
void UWBP_LoadoutThrowableConfiguration_C::ConfiguratorApplied__DelegateSignature()
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function WBP_LoadoutThrowableConfiguration.WBP_LoadoutThrowableConfiguration_C.ConfiguratorApplied__DelegateSignature");
	}

	UWBP_LoadoutThrowableConfiguration_C_ConfiguratorApplied__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WBP_LoadoutThrowableConfiguration.WBP_LoadoutThrowableConfiguration_C.DismissToast__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
void UWBP_LoadoutThrowableConfiguration_C::DismissToast__DelegateSignature()
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function WBP_LoadoutThrowableConfiguration.WBP_LoadoutThrowableConfiguration_C.DismissToast__DelegateSignature");
	}

	UWBP_LoadoutThrowableConfiguration_C_DismissToast__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WBP_LoadoutThrowableConfiguration.WBP_LoadoutThrowableConfiguration_C.InvalidThrowableToast__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText                   Error_Message                  (BlueprintVisible, BlueprintReadOnly, Parm)
void UWBP_LoadoutThrowableConfiguration_C::InvalidThrowableToast__DelegateSignature(const struct FText& Error_Message)
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function WBP_LoadoutThrowableConfiguration.WBP_LoadoutThrowableConfiguration_C.InvalidThrowableToast__DelegateSignature");
	}

	UWBP_LoadoutThrowableConfiguration_C_InvalidThrowableToast__DelegateSignature_Params params;
	params.Error_Message = Error_Message;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WBP_LoadoutThrowableConfiguration.WBP_LoadoutThrowableConfiguration_C.UpdateThrowableInfo__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass*                  Object_Info_Class              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FText                   Name_Suffix                    (BlueprintVisible, BlueprintReadOnly, Parm)
void UWBP_LoadoutThrowableConfiguration_C::UpdateThrowableInfo__DelegateSignature(class UClass* Object_Info_Class, const struct FText& Name_Suffix)
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function WBP_LoadoutThrowableConfiguration.WBP_LoadoutThrowableConfiguration_C.UpdateThrowableInfo__DelegateSignature");
	}

	UWBP_LoadoutThrowableConfiguration_C_UpdateThrowableInfo__DelegateSignature_Params params;
	params.Object_Info_Class = Object_Info_Class;
	params.Name_Suffix = Name_Suffix;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
