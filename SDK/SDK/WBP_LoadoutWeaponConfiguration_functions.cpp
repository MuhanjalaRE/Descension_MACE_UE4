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

// Function WBP_LoadoutWeaponConfiguration.WBP_LoadoutWeaponConfiguration_C.AddNoneWeapon
// (Public, BlueprintCallable, BlueprintEvent)
void UWBP_LoadoutWeaponConfiguration_C::AddNoneWeapon()
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function WBP_LoadoutWeaponConfiguration.WBP_LoadoutWeaponConfiguration_C.AddNoneWeapon");
	}

	UWBP_LoadoutWeaponConfiguration_C_AddNoneWeapon_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WBP_LoadoutWeaponConfiguration.WBP_LoadoutWeaponConfiguration_C.CheckWeaponSlot
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWBP_Loadouts_ItemSlot_C* InputPin                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_LoadoutWeaponConfiguration_C::CheckWeaponSlot(class UWBP_Loadouts_ItemSlot_C* InputPin)
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function WBP_LoadoutWeaponConfiguration.WBP_LoadoutWeaponConfiguration_C.CheckWeaponSlot");
	}

	UWBP_LoadoutWeaponConfiguration_C_CheckWeaponSlot_Params params;
	params.InputPin = InputPin;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WBP_LoadoutWeaponConfiguration.WBP_LoadoutWeaponConfiguration_C.GetMostRelevantError
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText                   Error_Text                     (Parm, OutParm)
void UWBP_LoadoutWeaponConfiguration_C::GetMostRelevantError(struct FText* Error_Text)
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function WBP_LoadoutWeaponConfiguration.WBP_LoadoutWeaponConfiguration_C.GetMostRelevantError");
	}

	UWBP_LoadoutWeaponConfiguration_C_GetMostRelevantError_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Error_Text != nullptr)
		*Error_Text = params.Error_Text;

}


// Function WBP_LoadoutWeaponConfiguration.WBP_LoadoutWeaponConfiguration_C.HackyGetAllWeapons
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// TArray<class UClass*>          Array                          (Parm, OutParm, ZeroConstructor)
void UWBP_LoadoutWeaponConfiguration_C::HackyGetAllWeapons(TArray<class UClass*>* Array)
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function WBP_LoadoutWeaponConfiguration.WBP_LoadoutWeaponConfiguration_C.HackyGetAllWeapons");
	}

	UWBP_LoadoutWeaponConfiguration_C_HackyGetAllWeapons_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Array != nullptr)
		*Array = params.Array;

}


// Function WBP_LoadoutWeaponConfiguration.WBP_LoadoutWeaponConfiguration_C.Weapon Selected
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWBP_SelectableButton_C* Clicked_Button                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_LoadoutWeaponConfiguration_C::Weapon_Selected(class UWBP_SelectableButton_C* Clicked_Button)
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function WBP_LoadoutWeaponConfiguration.WBP_LoadoutWeaponConfiguration_C.Weapon Selected");
	}

	UWBP_LoadoutWeaponConfiguration_C_Weapon_Selected_Params params;
	params.Clicked_Button = Clicked_Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WBP_LoadoutWeaponConfiguration.WBP_LoadoutWeaponConfiguration_C.OnNewButtonSelected
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWBP_SelectableButton_C* Clicked_Button                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_LoadoutWeaponConfiguration_C::OnNewButtonSelected(class UWBP_SelectableButton_C* Clicked_Button)
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function WBP_LoadoutWeaponConfiguration.WBP_LoadoutWeaponConfiguration_C.OnNewButtonSelected");
	}

	UWBP_LoadoutWeaponConfiguration_C_OnNewButtonSelected_Params params;
	params.Clicked_Button = Clicked_Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WBP_LoadoutWeaponConfiguration.WBP_LoadoutWeaponConfiguration_C.Update Weapon List
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Weapon_Index                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_LoadoutWeaponConfiguration_C::Update_Weapon_List(int Weapon_Index)
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function WBP_LoadoutWeaponConfiguration.WBP_LoadoutWeaponConfiguration_C.Update Weapon List");
	}

	UWBP_LoadoutWeaponConfiguration_C_Update_Weapon_List_Params params;
	params.Weapon_Index = Weapon_Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WBP_LoadoutWeaponConfiguration.WBP_LoadoutWeaponConfiguration_C.Jump to Weapon
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass*                  Object_Info                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_LoadoutWeaponConfiguration_C::Jump_to_Weapon(class UClass* Object_Info)
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function WBP_LoadoutWeaponConfiguration.WBP_LoadoutWeaponConfiguration_C.Jump to Weapon");
	}

	UWBP_LoadoutWeaponConfiguration_C_Jump_to_Weapon_Params params;
	params.Object_Info = Object_Info;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WBP_LoadoutWeaponConfiguration.WBP_LoadoutWeaponConfiguration_C.Confirm Selection
// (Public, BlueprintCallable, BlueprintEvent)
void UWBP_LoadoutWeaponConfiguration_C::Confirm_Selection()
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function WBP_LoadoutWeaponConfiguration.WBP_LoadoutWeaponConfiguration_C.Confirm Selection");
	}

	UWBP_LoadoutWeaponConfiguration_C_Confirm_Selection_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WBP_LoadoutWeaponConfiguration.WBP_LoadoutWeaponConfiguration_C.CosmeticSelected
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass*                  Cosmetic                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_LoadoutWeaponConfiguration_C::CosmeticSelected(class UClass* Cosmetic)
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function WBP_LoadoutWeaponConfiguration.WBP_LoadoutWeaponConfiguration_C.CosmeticSelected");
	}

	UWBP_LoadoutWeaponConfiguration_C_CosmeticSelected_Params params;
	params.Cosmetic = Cosmetic;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WBP_LoadoutWeaponConfiguration.WBP_LoadoutWeaponConfiguration_C.ExecuteUbergraph_WBP_LoadoutWeaponConfiguration
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_LoadoutWeaponConfiguration_C::ExecuteUbergraph_WBP_LoadoutWeaponConfiguration(int EntryPoint)
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function WBP_LoadoutWeaponConfiguration.WBP_LoadoutWeaponConfiguration_C.ExecuteUbergraph_WBP_LoadoutWeaponConfiguration");
	}

	UWBP_LoadoutWeaponConfiguration_C_ExecuteUbergraph_WBP_LoadoutWeaponConfiguration_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WBP_LoadoutWeaponConfiguration.WBP_LoadoutWeaponConfiguration_C.Jump to Object__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass*                  Object_Info                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_LoadoutWeaponConfiguration_C::Jump_to_Object__DelegateSignature(class UClass* Object_Info)
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function WBP_LoadoutWeaponConfiguration.WBP_LoadoutWeaponConfiguration_C.Jump to Object__DelegateSignature");
	}

	UWBP_LoadoutWeaponConfiguration_C_Jump_to_Object__DelegateSignature_Params params;
	params.Object_Info = Object_Info;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WBP_LoadoutWeaponConfiguration.WBP_LoadoutWeaponConfiguration_C.ConfiguratorApplied__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
void UWBP_LoadoutWeaponConfiguration_C::ConfiguratorApplied__DelegateSignature()
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function WBP_LoadoutWeaponConfiguration.WBP_LoadoutWeaponConfiguration_C.ConfiguratorApplied__DelegateSignature");
	}

	UWBP_LoadoutWeaponConfiguration_C_ConfiguratorApplied__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WBP_LoadoutWeaponConfiguration.WBP_LoadoutWeaponConfiguration_C.DismissToast__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
void UWBP_LoadoutWeaponConfiguration_C::DismissToast__DelegateSignature()
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function WBP_LoadoutWeaponConfiguration.WBP_LoadoutWeaponConfiguration_C.DismissToast__DelegateSignature");
	}

	UWBP_LoadoutWeaponConfiguration_C_DismissToast__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WBP_LoadoutWeaponConfiguration.WBP_LoadoutWeaponConfiguration_C.InvalidWeaponToast__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText                   Error_Message                  (BlueprintVisible, BlueprintReadOnly, Parm)
void UWBP_LoadoutWeaponConfiguration_C::InvalidWeaponToast__DelegateSignature(const struct FText& Error_Message)
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function WBP_LoadoutWeaponConfiguration.WBP_LoadoutWeaponConfiguration_C.InvalidWeaponToast__DelegateSignature");
	}

	UWBP_LoadoutWeaponConfiguration_C_InvalidWeaponToast__DelegateSignature_Params params;
	params.Error_Message = Error_Message;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WBP_LoadoutWeaponConfiguration.WBP_LoadoutWeaponConfiguration_C.UpdateWeaponInfo__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass*                  Object_Info_Class              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UClass*                  Skin_Configuration             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FText                   Name_Suffix                    (BlueprintVisible, BlueprintReadOnly, Parm)
void UWBP_LoadoutWeaponConfiguration_C::UpdateWeaponInfo__DelegateSignature(class UClass* Object_Info_Class, class UClass* Skin_Configuration, const struct FText& Name_Suffix)
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function WBP_LoadoutWeaponConfiguration.WBP_LoadoutWeaponConfiguration_C.UpdateWeaponInfo__DelegateSignature");
	}

	UWBP_LoadoutWeaponConfiguration_C_UpdateWeaponInfo__DelegateSignature_Params params;
	params.Object_Info_Class = Object_Info_Class;
	params.Skin_Configuration = Skin_Configuration;
	params.Name_Suffix = Name_Suffix;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
