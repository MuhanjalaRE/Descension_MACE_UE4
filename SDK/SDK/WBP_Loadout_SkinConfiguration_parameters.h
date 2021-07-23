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

// Function WBP_Loadout_SkinConfiguration.WBP_Loadout_SkinConfiguration_C.Get Steam-Locked Class
struct UWBP_Loadout_SkinConfiguration_C_Get_Steam_Locked_Class_Params
{
	class UClass*                                      Locked;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_Loadout_SkinConfiguration.WBP_Loadout_SkinConfiguration_C.Set Selected Effects Button
struct UWBP_Loadout_SkinConfiguration_C_Set_Selected_Effects_Button_Params
{
	class UWBP_Loadouts_SkinListItem_C*                Jet_Button;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_Loadout_SkinConfiguration.WBP_Loadout_SkinConfiguration_C.Set Selected Skin Button
struct UWBP_Loadout_SkinConfiguration_C_Set_Selected_Skin_Button_Params
{
	class UWBP_Loadouts_SkinListItem_C*                Skin_Button;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_Loadout_SkinConfiguration.WBP_Loadout_SkinConfiguration_C.Update Skin List
struct UWBP_Loadout_SkinConfiguration_C_Update_Skin_List_Params
{
	class UClass*                                      Current_Cosmetic;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UClass*                                      Current_Object;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_Loadout_SkinConfiguration.WBP_Loadout_SkinConfiguration_C.CosmeticSelected
struct UWBP_Loadout_SkinConfiguration_C_CosmeticSelected_Params
{
	class UClass*                                      Cosmetic;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_Loadout_SkinConfiguration.WBP_Loadout_SkinConfiguration_C.Character Skin Selected
struct UWBP_Loadout_SkinConfiguration_C_Character_Skin_Selected_Params
{
	class UWBP_SelectableButton_C*                     Button;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_Loadout_SkinConfiguration.WBP_Loadout_SkinConfiguration_C.Confirm Selection
struct UWBP_Loadout_SkinConfiguration_C_Confirm_Selection_Params
{
};

// Function WBP_Loadout_SkinConfiguration.WBP_Loadout_SkinConfiguration_C.Jump to Skin on Store
struct UWBP_Loadout_SkinConfiguration_C_Jump_to_Skin_on_Store_Params
{
	class UClass*                                      Skin_Class;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_Loadout_SkinConfiguration.WBP_Loadout_SkinConfiguration_C.Jet Selected
struct UWBP_Loadout_SkinConfiguration_C_Jet_Selected_Params
{
	class UWBP_SelectableButton_C*                     Button;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_Loadout_SkinConfiguration.WBP_Loadout_SkinConfiguration_C.ExecuteUbergraph_WBP_Loadout_SkinConfiguration
struct UWBP_Loadout_SkinConfiguration_C_ExecuteUbergraph_WBP_Loadout_SkinConfiguration_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_Loadout_SkinConfiguration.WBP_Loadout_SkinConfiguration_C.Skin Selected__DelegateSignature
struct UWBP_Loadout_SkinConfiguration_C_Skin_Selected__DelegateSignature_Params
{
	class UClass*                                      Skin_Configuration;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_Loadout_SkinConfiguration.WBP_Loadout_SkinConfiguration_C.Skin Equipped__DelegateSignature
struct UWBP_Loadout_SkinConfiguration_C_Skin_Equipped__DelegateSignature_Params
{
	class UClass*                                      Skin_Configuration;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
