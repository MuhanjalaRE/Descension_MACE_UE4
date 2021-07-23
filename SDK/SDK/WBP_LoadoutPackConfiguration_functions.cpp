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

// Function WBP_LoadoutPackConfiguration.WBP_LoadoutPackConfiguration_C.Hacky Get Packs
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// TArray<class UClass*>          Array                          (Parm, OutParm, ZeroConstructor)
void UWBP_LoadoutPackConfiguration_C::Hacky_Get_Packs(TArray<class UClass*>* Array)
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function WBP_LoadoutPackConfiguration.WBP_LoadoutPackConfiguration_C.Hacky Get Packs");
	}

	UWBP_LoadoutPackConfiguration_C_Hacky_Get_Packs_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Array != nullptr)
		*Array = params.Array;

}


// Function WBP_LoadoutPackConfiguration.WBP_LoadoutPackConfiguration_C.CosmeticSelected
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass*                  Cosmetic                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_LoadoutPackConfiguration_C::CosmeticSelected(class UClass* Cosmetic)
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function WBP_LoadoutPackConfiguration.WBP_LoadoutPackConfiguration_C.CosmeticSelected");
	}

	UWBP_LoadoutPackConfiguration_C_CosmeticSelected_Params params;
	params.Cosmetic = Cosmetic;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WBP_LoadoutPackConfiguration.WBP_LoadoutPackConfiguration_C.Update
// (BlueprintCallable, BlueprintEvent)
void UWBP_LoadoutPackConfiguration_C::Update()
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function WBP_LoadoutPackConfiguration.WBP_LoadoutPackConfiguration_C.Update");
	}

	UWBP_LoadoutPackConfiguration_C_Update_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WBP_LoadoutPackConfiguration.WBP_LoadoutPackConfiguration_C.Pack Clicked
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWBP_SelectableButton_C* Clicked_Button                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_LoadoutPackConfiguration_C::Pack_Clicked(class UWBP_SelectableButton_C* Clicked_Button)
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function WBP_LoadoutPackConfiguration.WBP_LoadoutPackConfiguration_C.Pack Clicked");
	}

	UWBP_LoadoutPackConfiguration_C_Pack_Clicked_Params params;
	params.Clicked_Button = Clicked_Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WBP_LoadoutPackConfiguration.WBP_LoadoutPackConfiguration_C.Jump To Object
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass*                  Object_Info                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_LoadoutPackConfiguration_C::Jump_To_Object(class UClass* Object_Info)
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function WBP_LoadoutPackConfiguration.WBP_LoadoutPackConfiguration_C.Jump To Object");
	}

	UWBP_LoadoutPackConfiguration_C_Jump_To_Object_Params params;
	params.Object_Info = Object_Info;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WBP_LoadoutPackConfiguration.WBP_LoadoutPackConfiguration_C.Confirm Selection
// (Public, BlueprintCallable, BlueprintEvent)
void UWBP_LoadoutPackConfiguration_C::Confirm_Selection()
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function WBP_LoadoutPackConfiguration.WBP_LoadoutPackConfiguration_C.Confirm Selection");
	}

	UWBP_LoadoutPackConfiguration_C_Confirm_Selection_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WBP_LoadoutPackConfiguration.WBP_LoadoutPackConfiguration_C.ExecuteUbergraph_WBP_LoadoutPackConfiguration
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_LoadoutPackConfiguration_C::ExecuteUbergraph_WBP_LoadoutPackConfiguration(int EntryPoint)
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function WBP_LoadoutPackConfiguration.WBP_LoadoutPackConfiguration_C.ExecuteUbergraph_WBP_LoadoutPackConfiguration");
	}

	UWBP_LoadoutPackConfiguration_C_ExecuteUbergraph_WBP_LoadoutPackConfiguration_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WBP_LoadoutPackConfiguration.WBP_LoadoutPackConfiguration_C.PackEquipped__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
void UWBP_LoadoutPackConfiguration_C::PackEquipped__DelegateSignature()
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function WBP_LoadoutPackConfiguration.WBP_LoadoutPackConfiguration_C.PackEquipped__DelegateSignature");
	}

	UWBP_LoadoutPackConfiguration_C_PackEquipped__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WBP_LoadoutPackConfiguration.WBP_LoadoutPackConfiguration_C.DismissToast__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
void UWBP_LoadoutPackConfiguration_C::DismissToast__DelegateSignature()
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function WBP_LoadoutPackConfiguration.WBP_LoadoutPackConfiguration_C.DismissToast__DelegateSignature");
	}

	UWBP_LoadoutPackConfiguration_C_DismissToast__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WBP_LoadoutPackConfiguration.WBP_LoadoutPackConfiguration_C.UpdatePack__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass*                  New_Pack                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FText                   Suffix                         (BlueprintVisible, BlueprintReadOnly, Parm)
void UWBP_LoadoutPackConfiguration_C::UpdatePack__DelegateSignature(class UClass* New_Pack, const struct FText& Suffix)
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function WBP_LoadoutPackConfiguration.WBP_LoadoutPackConfiguration_C.UpdatePack__DelegateSignature");
	}

	UWBP_LoadoutPackConfiguration_C_UpdatePack__DelegateSignature_Params params;
	params.New_Pack = New_Pack;
	params.Suffix = Suffix;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WBP_LoadoutPackConfiguration.WBP_LoadoutPackConfiguration_C.JumpToObject__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass*                  NewParam                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_LoadoutPackConfiguration_C::JumpToObject__DelegateSignature(class UClass* NewParam)
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function WBP_LoadoutPackConfiguration.WBP_LoadoutPackConfiguration_C.JumpToObject__DelegateSignature");
	}

	UWBP_LoadoutPackConfiguration_C_JumpToObject__DelegateSignature_Params params;
	params.NewParam = NewParam;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
