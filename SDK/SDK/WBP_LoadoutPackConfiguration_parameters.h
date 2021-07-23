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

// Function WBP_LoadoutPackConfiguration.WBP_LoadoutPackConfiguration_C.Hacky Get Packs
struct UWBP_LoadoutPackConfiguration_C_Hacky_Get_Packs_Params
{
	TArray<class UClass*>                              Array;                                                     // (Parm, OutParm, ZeroConstructor)
};

// Function WBP_LoadoutPackConfiguration.WBP_LoadoutPackConfiguration_C.CosmeticSelected
struct UWBP_LoadoutPackConfiguration_C_CosmeticSelected_Params
{
	class UClass*                                      Cosmetic;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_LoadoutPackConfiguration.WBP_LoadoutPackConfiguration_C.Update
struct UWBP_LoadoutPackConfiguration_C_Update_Params
{
};

// Function WBP_LoadoutPackConfiguration.WBP_LoadoutPackConfiguration_C.Pack Clicked
struct UWBP_LoadoutPackConfiguration_C_Pack_Clicked_Params
{
	class UWBP_SelectableButton_C*                     Clicked_Button;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_LoadoutPackConfiguration.WBP_LoadoutPackConfiguration_C.Jump To Object
struct UWBP_LoadoutPackConfiguration_C_Jump_To_Object_Params
{
	class UClass*                                      Object_Info;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_LoadoutPackConfiguration.WBP_LoadoutPackConfiguration_C.Confirm Selection
struct UWBP_LoadoutPackConfiguration_C_Confirm_Selection_Params
{
};

// Function WBP_LoadoutPackConfiguration.WBP_LoadoutPackConfiguration_C.ExecuteUbergraph_WBP_LoadoutPackConfiguration
struct UWBP_LoadoutPackConfiguration_C_ExecuteUbergraph_WBP_LoadoutPackConfiguration_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_LoadoutPackConfiguration.WBP_LoadoutPackConfiguration_C.PackEquipped__DelegateSignature
struct UWBP_LoadoutPackConfiguration_C_PackEquipped__DelegateSignature_Params
{
};

// Function WBP_LoadoutPackConfiguration.WBP_LoadoutPackConfiguration_C.DismissToast__DelegateSignature
struct UWBP_LoadoutPackConfiguration_C_DismissToast__DelegateSignature_Params
{
};

// Function WBP_LoadoutPackConfiguration.WBP_LoadoutPackConfiguration_C.UpdatePack__DelegateSignature
struct UWBP_LoadoutPackConfiguration_C_UpdatePack__DelegateSignature_Params
{
	class UClass*                                      New_Pack;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FText                                       Suffix;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function WBP_LoadoutPackConfiguration.WBP_LoadoutPackConfiguration_C.JumpToObject__DelegateSignature
struct UWBP_LoadoutPackConfiguration_C_JumpToObject__DelegateSignature_Params
{
	class UClass*                                      NewParam;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
