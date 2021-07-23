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

// Function WBP_LoadoutThrowableConfiguration.WBP_LoadoutThrowableConfiguration_C.CheckThrowableSlot
struct UWBP_LoadoutThrowableConfiguration_C_CheckThrowableSlot_Params
{
	class UWBP_Loadouts_ItemSlot_C*                    InputPin;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_LoadoutThrowableConfiguration.WBP_LoadoutThrowableConfiguration_C.GetMostRelevantError
struct UWBP_LoadoutThrowableConfiguration_C_GetMostRelevantError_Params
{
	struct FText                                       Error_Text;                                                // (Parm, OutParm)
};

// Function WBP_LoadoutThrowableConfiguration.WBP_LoadoutThrowableConfiguration_C.HackyGetAllThrowables
struct UWBP_LoadoutThrowableConfiguration_C_HackyGetAllThrowables_Params
{
	TArray<class UClass*>                              Array;                                                     // (Parm, OutParm, ZeroConstructor)
};

// Function WBP_LoadoutThrowableConfiguration.WBP_LoadoutThrowableConfiguration_C.CosmeticSelected
struct UWBP_LoadoutThrowableConfiguration_C_CosmeticSelected_Params
{
	class UClass*                                      Cosmetic;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_LoadoutThrowableConfiguration.WBP_LoadoutThrowableConfiguration_C.Update Throwables List
struct UWBP_LoadoutThrowableConfiguration_C_Update_Throwables_List_Params
{
	int                                                Throwable_Index;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_LoadoutThrowableConfiguration.WBP_LoadoutThrowableConfiguration_C.OnNewButtonSelected
struct UWBP_LoadoutThrowableConfiguration_C_OnNewButtonSelected_Params
{
	class UWBP_SelectableButton_C*                     Clicked_Button;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_LoadoutThrowableConfiguration.WBP_LoadoutThrowableConfiguration_C.ThrowableSelected
struct UWBP_LoadoutThrowableConfiguration_C_ThrowableSelected_Params
{
	class UWBP_SelectableButton_C*                     Clicked_Button;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_LoadoutThrowableConfiguration.WBP_LoadoutThrowableConfiguration_C.Jump To Object
struct UWBP_LoadoutThrowableConfiguration_C_Jump_To_Object_Params
{
	class UClass*                                      Object_Info;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_LoadoutThrowableConfiguration.WBP_LoadoutThrowableConfiguration_C.Confirm Selection
struct UWBP_LoadoutThrowableConfiguration_C_Confirm_Selection_Params
{
};

// Function WBP_LoadoutThrowableConfiguration.WBP_LoadoutThrowableConfiguration_C.ExecuteUbergraph_WBP_LoadoutThrowableConfiguration
struct UWBP_LoadoutThrowableConfiguration_C_ExecuteUbergraph_WBP_LoadoutThrowableConfiguration_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_LoadoutThrowableConfiguration.WBP_LoadoutThrowableConfiguration_C.Jump to Throwable__DelegateSignature
struct UWBP_LoadoutThrowableConfiguration_C_Jump_to_Throwable__DelegateSignature_Params
{
	class UClass*                                      Object_Info;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_LoadoutThrowableConfiguration.WBP_LoadoutThrowableConfiguration_C.ConfiguratorApplied__DelegateSignature
struct UWBP_LoadoutThrowableConfiguration_C_ConfiguratorApplied__DelegateSignature_Params
{
};

// Function WBP_LoadoutThrowableConfiguration.WBP_LoadoutThrowableConfiguration_C.DismissToast__DelegateSignature
struct UWBP_LoadoutThrowableConfiguration_C_DismissToast__DelegateSignature_Params
{
};

// Function WBP_LoadoutThrowableConfiguration.WBP_LoadoutThrowableConfiguration_C.InvalidThrowableToast__DelegateSignature
struct UWBP_LoadoutThrowableConfiguration_C_InvalidThrowableToast__DelegateSignature_Params
{
	struct FText                                       Error_Message;                                             // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function WBP_LoadoutThrowableConfiguration.WBP_LoadoutThrowableConfiguration_C.UpdateThrowableInfo__DelegateSignature
struct UWBP_LoadoutThrowableConfiguration_C_UpdateThrowableInfo__DelegateSignature_Params
{
	class UClass*                                      Object_Info_Class;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FText                                       Name_Suffix;                                               // (BlueprintVisible, BlueprintReadOnly, Parm)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
