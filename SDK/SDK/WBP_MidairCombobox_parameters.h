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

// Function WBP_MidairCombobox.WBP_MidairCombobox_C.ChildSelected
struct UWBP_MidairCombobox_C_ChildSelected_Params
{
	int                                                Ident;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FString                                     Option;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
};

// Function WBP_MidairCombobox.WBP_MidairCombobox_C.RemoveChildAt
struct UWBP_MidairCombobox_C_RemoveChildAt_Params
{
	int                                                Index;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function WBP_MidairCombobox.WBP_MidairCombobox_C.Open
struct UWBP_MidairCombobox_C_Open_Params
{
};

// Function WBP_MidairCombobox.WBP_MidairCombobox_C.CloseAndClear
struct UWBP_MidairCombobox_C_CloseAndClear_Params
{
};

// Function WBP_MidairCombobox.WBP_MidairCombobox_C.SetOptions
struct UWBP_MidairCombobox_C_SetOptions_Params
{
	TArray<struct FString>                             Options;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function WBP_MidairCombobox.WBP_MidairCombobox_C.RemoveChild
struct UWBP_MidairCombobox_C_RemoveChild_Params
{
	class UWidget*                                     Content;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function WBP_MidairCombobox.WBP_MidairCombobox_C.AddChild
struct UWBP_MidairCombobox_C_AddChild_Params
{
	class UWidget*                                     Content;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UVerticalBoxSlot*                            ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_MidairCombobox.WBP_MidairCombobox_C.OptionSelected__DelegateSignature
struct UWBP_MidairCombobox_C_OptionSelected__DelegateSignature_Params
{
	int                                                Ident;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FString                                     Option;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
