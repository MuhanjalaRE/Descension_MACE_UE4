#pragma once

// Name: mace, Version: 1.9.1.12285


/*!!DEFINE!!*/

/*!!HELPER_DEF!!*/

/*!!HELPER_INC!!*/

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
//---------------------------------------------------------------------------
// Parameters
//---------------------------------------------------------------------------

// Function WBP_ModalMenu.WBP_ModalMenu_C.HandleDirectNamedHotkey
struct UWBP_ModalMenu_C_HandleDirectNamedHotkey_Params
{
	struct FString                                     Hotkey;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function WBP_ModalMenu.WBP_ModalMenu_C.HandleNamedHotkeyWithInt
struct UWBP_ModalMenu_C_HandleNamedHotkeyWithInt_Params
{
	struct FString                                     Hotkey;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	int                                                Int;                                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function WBP_ModalMenu.WBP_ModalMenu_C.Remove
struct UWBP_ModalMenu_C_Remove_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
