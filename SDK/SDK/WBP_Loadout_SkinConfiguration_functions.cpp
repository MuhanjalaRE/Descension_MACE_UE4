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

// Function WBP_Loadout_SkinConfiguration.WBP_Loadout_SkinConfiguration_C.Get Steam-Locked Class
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UClass*                  Locked                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_Loadout_SkinConfiguration_C::Get_Steam_Locked_Class(class UClass** Locked)
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function WBP_Loadout_SkinConfiguration.WBP_Loadout_SkinConfiguration_C.Get Steam-Locked Class");
	}

	UWBP_Loadout_SkinConfiguration_C_Get_Steam_Locked_Class_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Locked != nullptr)
		*Locked = params.Locked;

}


// Function WBP_Loadout_SkinConfiguration.WBP_Loadout_SkinConfiguration_C.Set Selected Effects Button
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWBP_Loadouts_SkinListItem_C* Jet_Button                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_Loadout_SkinConfiguration_C::Set_Selected_Effects_Button(class UWBP_Loadouts_SkinListItem_C* Jet_Button)
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function WBP_Loadout_SkinConfiguration.WBP_Loadout_SkinConfiguration_C.Set Selected Effects Button");
	}

	UWBP_Loadout_SkinConfiguration_C_Set_Selected_Effects_Button_Params params;
	params.Jet_Button = Jet_Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WBP_Loadout_SkinConfiguration.WBP_Loadout_SkinConfiguration_C.Set Selected Skin Button
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWBP_Loadouts_SkinListItem_C* Skin_Button                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_Loadout_SkinConfiguration_C::Set_Selected_Skin_Button(class UWBP_Loadouts_SkinListItem_C* Skin_Button)
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function WBP_Loadout_SkinConfiguration.WBP_Loadout_SkinConfiguration_C.Set Selected Skin Button");
	}

	UWBP_Loadout_SkinConfiguration_C_Set_Selected_Skin_Button_Params params;
	params.Skin_Button = Skin_Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WBP_Loadout_SkinConfiguration.WBP_Loadout_SkinConfiguration_C.Update Skin List
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass*                  Current_Cosmetic               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UClass*                  Current_Object                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_Loadout_SkinConfiguration_C::Update_Skin_List(class UClass* Current_Cosmetic, class UClass* Current_Object)
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function WBP_Loadout_SkinConfiguration.WBP_Loadout_SkinConfiguration_C.Update Skin List");
	}

	UWBP_Loadout_SkinConfiguration_C_Update_Skin_List_Params params;
	params.Current_Cosmetic = Current_Cosmetic;
	params.Current_Object = Current_Object;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WBP_Loadout_SkinConfiguration.WBP_Loadout_SkinConfiguration_C.CosmeticSelected
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass*                  Cosmetic                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_Loadout_SkinConfiguration_C::CosmeticSelected(class UClass* Cosmetic)
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function WBP_Loadout_SkinConfiguration.WBP_Loadout_SkinConfiguration_C.CosmeticSelected");
	}

	UWBP_Loadout_SkinConfiguration_C_CosmeticSelected_Params params;
	params.Cosmetic = Cosmetic;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WBP_Loadout_SkinConfiguration.WBP_Loadout_SkinConfiguration_C.Character Skin Selected
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWBP_SelectableButton_C* Button                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_Loadout_SkinConfiguration_C::Character_Skin_Selected(class UWBP_SelectableButton_C* Button)
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function WBP_Loadout_SkinConfiguration.WBP_Loadout_SkinConfiguration_C.Character Skin Selected");
	}

	UWBP_Loadout_SkinConfiguration_C_Character_Skin_Selected_Params params;
	params.Button = Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WBP_Loadout_SkinConfiguration.WBP_Loadout_SkinConfiguration_C.Confirm Selection
// (Public, BlueprintCallable, BlueprintEvent)
void UWBP_Loadout_SkinConfiguration_C::Confirm_Selection()
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function WBP_Loadout_SkinConfiguration.WBP_Loadout_SkinConfiguration_C.Confirm Selection");
	}

	UWBP_Loadout_SkinConfiguration_C_Confirm_Selection_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WBP_Loadout_SkinConfiguration.WBP_Loadout_SkinConfiguration_C.Jump to Skin on Store
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass*                  Skin_Class                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_Loadout_SkinConfiguration_C::Jump_to_Skin_on_Store(class UClass* Skin_Class)
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function WBP_Loadout_SkinConfiguration.WBP_Loadout_SkinConfiguration_C.Jump to Skin on Store");
	}

	UWBP_Loadout_SkinConfiguration_C_Jump_to_Skin_on_Store_Params params;
	params.Skin_Class = Skin_Class;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WBP_Loadout_SkinConfiguration.WBP_Loadout_SkinConfiguration_C.Jet Selected
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWBP_SelectableButton_C* Button                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_Loadout_SkinConfiguration_C::Jet_Selected(class UWBP_SelectableButton_C* Button)
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function WBP_Loadout_SkinConfiguration.WBP_Loadout_SkinConfiguration_C.Jet Selected");
	}

	UWBP_Loadout_SkinConfiguration_C_Jet_Selected_Params params;
	params.Button = Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WBP_Loadout_SkinConfiguration.WBP_Loadout_SkinConfiguration_C.ExecuteUbergraph_WBP_Loadout_SkinConfiguration
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_Loadout_SkinConfiguration_C::ExecuteUbergraph_WBP_Loadout_SkinConfiguration(int EntryPoint)
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function WBP_Loadout_SkinConfiguration.WBP_Loadout_SkinConfiguration_C.ExecuteUbergraph_WBP_Loadout_SkinConfiguration");
	}

	UWBP_Loadout_SkinConfiguration_C_ExecuteUbergraph_WBP_Loadout_SkinConfiguration_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WBP_Loadout_SkinConfiguration.WBP_Loadout_SkinConfiguration_C.Skin Selected__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass*                  Skin_Configuration             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_Loadout_SkinConfiguration_C::Skin_Selected__DelegateSignature(class UClass* Skin_Configuration)
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function WBP_Loadout_SkinConfiguration.WBP_Loadout_SkinConfiguration_C.Skin Selected__DelegateSignature");
	}

	UWBP_Loadout_SkinConfiguration_C_Skin_Selected__DelegateSignature_Params params;
	params.Skin_Configuration = Skin_Configuration;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WBP_Loadout_SkinConfiguration.WBP_Loadout_SkinConfiguration_C.Skin Equipped__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass*                  Skin_Configuration             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_Loadout_SkinConfiguration_C::Skin_Equipped__DelegateSignature(class UClass* Skin_Configuration)
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function WBP_Loadout_SkinConfiguration.WBP_Loadout_SkinConfiguration_C.Skin Equipped__DelegateSignature");
	}

	UWBP_Loadout_SkinConfiguration_C_Skin_Equipped__DelegateSignature_Params params;
	params.Skin_Configuration = Skin_Configuration;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
