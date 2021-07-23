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

// Function WBP_ModalMenu.WBP_ModalMenu_C.HandleDirectNamedHotkey
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 Hotkey                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
bool UWBP_ModalMenu_C::HandleDirectNamedHotkey(const struct FString& Hotkey)
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function WBP_ModalMenu.WBP_ModalMenu_C.HandleDirectNamedHotkey");
	}

	UWBP_ModalMenu_C_HandleDirectNamedHotkey_Params params;
	params.Hotkey = Hotkey;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function WBP_ModalMenu.WBP_ModalMenu_C.HandleNamedHotkeyWithInt
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 Hotkey                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// int                            Int                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
bool UWBP_ModalMenu_C::HandleNamedHotkeyWithInt(const struct FString& Hotkey, int Int)
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function WBP_ModalMenu.WBP_ModalMenu_C.HandleNamedHotkeyWithInt");
	}

	UWBP_ModalMenu_C_HandleNamedHotkeyWithInt_Params params;
	params.Hotkey = Hotkey;
	params.Int = Int;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function WBP_ModalMenu.WBP_ModalMenu_C.Remove
// (Public, BlueprintCallable, BlueprintEvent)
void UWBP_ModalMenu_C::Remove()
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function WBP_ModalMenu.WBP_ModalMenu_C.Remove");
	}

	UWBP_ModalMenu_C_Remove_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
