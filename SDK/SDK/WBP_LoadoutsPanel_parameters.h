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

// Function WBP_LoadoutsPanel.WBP_LoadoutsPanel_C.HandleDirectNamedHotkey
struct UWBP_LoadoutsPanel_C_HandleDirectNamedHotkey_Params
{
	struct FString                                     Hotkey;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function WBP_LoadoutsPanel.WBP_LoadoutsPanel_C.HandleNamedHotkeyWithInt
struct UWBP_LoadoutsPanel_C_HandleNamedHotkeyWithInt_Params
{
	struct FString                                     Hotkey;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	int                                                Int;                                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function WBP_LoadoutsPanel.WBP_LoadoutsPanel_C.Get Accept Button Locked Class
struct UWBP_LoadoutsPanel_C_Get_Accept_Button_Locked_Class_Params
{
	class UClass*                                      Object;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               Needs_Buy;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function WBP_LoadoutsPanel.WBP_LoadoutsPanel_C.Update Accept Button Text
struct UWBP_LoadoutsPanel_C_Update_Accept_Button_Text_Params
{
};

// Function WBP_LoadoutsPanel.WBP_LoadoutsPanel_C.PutAppearanceBackOnWeapons
struct UWBP_LoadoutsPanel_C_PutAppearanceBackOnWeapons_Params
{
};

// Function WBP_LoadoutsPanel.WBP_LoadoutsPanel_C.PutAppearanceBackOnOverview
struct UWBP_LoadoutsPanel_C_PutAppearanceBackOnOverview_Params
{
};

// Function WBP_LoadoutsPanel.WBP_LoadoutsPanel_C.Get_GamemodeSelection_Visibility_1
struct UWBP_LoadoutsPanel_C_Get_GamemodeSelection_Visibility_1_Params
{
	UMG_ESlateVisibility                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_LoadoutsPanel.WBP_LoadoutsPanel_C.Cache Last Menu Info
struct UWBP_LoadoutsPanel_C_Cache_Last_Menu_Info_Params
{
};

// Function WBP_LoadoutsPanel.WBP_LoadoutsPanel_C.Update Preview Scene
struct UWBP_LoadoutsPanel_C_Update_Preview_Scene_Params
{
	class UClass*                                      Object_Info;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UClass*                                      Cosmetic;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_LoadoutsPanel.WBP_LoadoutsPanel_C.OnMouseButtonDown
struct UWBP_LoadoutsPanel_C_OnMouseButtonDown_Params
{
	struct FGeometry                                   MyGeometry;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	struct FPointerEvent                               MouseEvent;                                                // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FEventReply                                 ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function WBP_LoadoutsPanel.WBP_LoadoutsPanel_C.OnMouseMove
struct UWBP_LoadoutsPanel_C_OnMouseMove_Params
{
	struct FGeometry                                   MyGeometry;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	struct FPointerEvent                               MouseEvent;                                                // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FEventReply                                 ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function WBP_LoadoutsPanel.WBP_LoadoutsPanel_C.IsAtOverview
struct UWBP_LoadoutsPanel_C_IsAtOverview_Params
{
	bool                                               bAtOverview;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function WBP_LoadoutsPanel.WBP_LoadoutsPanel_C.Get Cancel Visibility
struct UWBP_LoadoutsPanel_C_Get_Cancel_Visibility_Params
{
	UMG_ESlateVisibility                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_LoadoutsPanel.WBP_LoadoutsPanel_C.Select Gamemode Internal
struct UWBP_LoadoutsPanel_C_Select_Gamemode_Internal_Params
{
	class UClass*                                      GameModeClass;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_LoadoutsPanel.WBP_LoadoutsPanel_C.Select Gamemode
struct UWBP_LoadoutsPanel_C_Select_Gamemode_Params
{
	struct FString                                     Gamemode_Prefix;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	bool                                               Success;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function WBP_LoadoutsPanel.WBP_LoadoutsPanel_C.Bind Basic Events Function
struct UWBP_LoadoutsPanel_C_Bind_Basic_Events_Function_Params
{
};

// Function WBP_LoadoutsPanel.WBP_LoadoutsPanel_C.Get Accept Visibility
struct UWBP_LoadoutsPanel_C_Get_Accept_Visibility_Params
{
	UMG_ESlateVisibility                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_LoadoutsPanel.WBP_LoadoutsPanel_C.Cache and Bind Loadouts Save
struct UWBP_LoadoutsPanel_C_Cache_and_Bind_Loadouts_Save_Params
{
	class UPlayerLoadoutsSave*                         Save;                                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_LoadoutsPanel.WBP_LoadoutsPanel_C.ProcessWeapons
struct UWBP_LoadoutsPanel_C_ProcessWeapons_Params
{
	class AMATeamState*                                TeamState;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class UClass*>                              InputPin;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	TArray<class UClass*>                              OutputPin;                                                 // (Parm, OutParm, ZeroConstructor)
};

// Function WBP_LoadoutsPanel.WBP_LoadoutsPanel_C.GetNewWeaponClass
struct UWBP_LoadoutsPanel_C_GetNewWeaponClass_Params
{
	class UClass*                                      Character;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class UClass*>                              CurrentWeapons;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	class UClass*                                      NewWeapon;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_LoadoutsPanel.WBP_LoadoutsPanel_C.Get_GamemodeSwitcher_Visibility_1
struct UWBP_LoadoutsPanel_C_Get_GamemodeSwitcher_Visibility_1_Params
{
	UMG_ESlateVisibility                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_LoadoutsPanel.WBP_LoadoutsPanel_C.Get_Revert_ToolTipWidget_1
struct UWBP_LoadoutsPanel_C_Get_Revert_ToolTipWidget_1_Params
{
	class UWidget*                                     ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_LoadoutsPanel.WBP_LoadoutsPanel_C.GetResetChangesTooltip
struct UWBP_LoadoutsPanel_C_GetResetChangesTooltip_Params
{
	class UWidget*                                     ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_LoadoutsPanel.WBP_LoadoutsPanel_C.GetSaveLoadoutTooltip
struct UWBP_LoadoutsPanel_C_GetSaveLoadoutTooltip_Params
{
	class UWidget*                                     ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_LoadoutsPanel.WBP_LoadoutsPanel_C.TrySelectLoadout
struct UWBP_LoadoutsPanel_C_TrySelectLoadout_Params
{
	int                                                Index;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_LoadoutsPanel.WBP_LoadoutsPanel_C.ObjectInfoArraysEqual
struct UWBP_LoadoutsPanel_C_ObjectInfoArraysEqual_Params
{
	TArray<class UClass*>                              A;                                                         // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	TArray<class UClass*>                              B;                                                         // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	bool                                               Equal;                                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function WBP_LoadoutsPanel.WBP_LoadoutsPanel_C.AnyDifference?
struct UWBP_LoadoutsPanel_C_AnyDifference__Params
{
	TArray<struct FMALoadout>                          A;                                                         // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	TArray<struct FMALoadout>                          B;                                                         // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	bool                                               AnyDifference;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function WBP_LoadoutsPanel.WBP_LoadoutsPanel_C.Get_Button_2_Visibility_1
struct UWBP_LoadoutsPanel_C_Get_Button_2_Visibility_1_Params
{
	UMG_ESlateVisibility                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_LoadoutsPanel.WBP_LoadoutsPanel_C.UnbindDelegatesForLoadoutEntry
struct UWBP_LoadoutsPanel_C_UnbindDelegatesForLoadoutEntry_Params
{
	class UWBP_SingleLoadoutEntry_C*                   _;                                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWBP_SingleLoadoutEntry_C*                   __;                                                        // (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_LoadoutsPanel.WBP_LoadoutsPanel_C.Get_SaveChanges_Visibility_1
struct UWBP_LoadoutsPanel_C_Get_SaveChanges_Visibility_1_Params
{
	UMG_ESlateVisibility                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_LoadoutsPanel.WBP_LoadoutsPanel_C.OverrideGamemodeDefaults
struct UWBP_LoadoutsPanel_C_OverrideGamemodeDefaults_Params
{
	TArray<struct FMALoadout>                          Base;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	TArray<struct FMALoadout>                          Override;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	TArray<struct FMALoadout>                          _LocalBase;                                                // (Parm, OutParm, ZeroConstructor)
};

// Function WBP_LoadoutsPanel.WBP_LoadoutsPanel_C.Get_TextBlock_9_Text_1
struct UWBP_LoadoutsPanel_C_Get_TextBlock_9_Text_1_Params
{
	struct FText                                       ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function WBP_LoadoutsPanel.WBP_LoadoutsPanel_C.GetNewLoadoutTooltip
struct UWBP_LoadoutsPanel_C_GetNewLoadoutTooltip_Params
{
	class UWidget*                                     ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_LoadoutsPanel.WBP_LoadoutsPanel_C.GetVisibility_1
struct UWBP_LoadoutsPanel_C_GetVisibility_1_Params
{
	UMG_ESlateVisibility                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_LoadoutsPanel.WBP_LoadoutsPanel_C.GetIneditableToolTip
struct UWBP_LoadoutsPanel_C_GetIneditableToolTip_Params
{
	class UWidget*                                     ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_LoadoutsPanel.WBP_LoadoutsPanel_C.Get_SelectEditLoadout_Text_1
struct UWBP_LoadoutsPanel_C_Get_SelectEditLoadout_Text_1_Params
{
	struct FText                                       ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function WBP_LoadoutsPanel.WBP_LoadoutsPanel_C.GetBestDefaultLoadout
struct UWBP_LoadoutsPanel_C_GetBestDefaultLoadout_Params
{
	struct FMALoadout                                  Loadout;                                                   // (Parm, OutParm)
};

// Function WBP_LoadoutsPanel.WBP_LoadoutsPanel_C.Get_TextBlock_14_ColorAndOpacity_1
struct UWBP_LoadoutsPanel_C_Get_TextBlock_14_ColorAndOpacity_1_Params
{
	struct FSlateColor                                 ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function WBP_LoadoutsPanel.WBP_LoadoutsPanel_C.Get_TextBlock_9_ColorAndOpacity_1
struct UWBP_LoadoutsPanel_C_Get_TextBlock_9_ColorAndOpacity_1_Params
{
	struct FSlateColor                                 ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function WBP_LoadoutsPanel.WBP_LoadoutsPanel_C.BindDelegatesForLoadoutEntry
struct UWBP_LoadoutsPanel_C_BindDelegatesForLoadoutEntry_Params
{
	class UWBP_SingleLoadoutEntry_C*                   _;                                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWBP_SingleLoadoutEntry_C*                   __;                                                        // (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_LoadoutsPanel.WBP_LoadoutsPanel_C.Get_Defaults_Visibility_1
struct UWBP_LoadoutsPanel_C_Get_Defaults_Visibility_1_Params
{
	UMG_ESlateVisibility                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_LoadoutsPanel.WBP_LoadoutsPanel_C.IsWeaponRestricted
struct UWBP_LoadoutsPanel_C_IsWeaponRestricted_Params
{
	class UClass*                                      Weapon;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               NewParam;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function WBP_LoadoutsPanel.WBP_LoadoutsPanel_C.VerifyTeamSpawnableWeapons
struct UWBP_LoadoutsPanel_C_VerifyTeamSpawnableWeapons_Params
{
	class AMATeamState*                                Team;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class UClass*>                              Weapons;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	TArray<class UClass*>                              Verified;                                                  // (Parm, OutParm, ZeroConstructor)
};

// Function WBP_LoadoutsPanel.WBP_LoadoutsPanel_C.FindAugmentWithRequirementsMet
struct UWBP_LoadoutsPanel_C_FindAugmentWithRequirementsMet_Params
{
	class UAugmentInfo*                                CompareAgainst;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class UClass*>                              Augments;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	class UClass*                                      Passes;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_LoadoutsPanel.WBP_LoadoutsPanel_C.Sanitize Augment
struct UWBP_LoadoutsPanel_C_Sanitize_Augment_Params
{
	class UWBP_Loadouts_ItemSlot_C*                    Augment_Slot;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UClass*                                      Backpack_Info;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                Augment_Index;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_LoadoutsPanel.WBP_LoadoutsPanel_C.OnGenerateWidget_1
struct UWBP_LoadoutsPanel_C_OnGenerateWidget_1_Params
{
	struct FString                                     Item;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	class UWidget*                                     ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_LoadoutsPanel.WBP_LoadoutsPanel_C.Try Load Item Array
struct UWBP_LoadoutsPanel_C_Try_Load_Item_Array_Params
{
	TArray<class UClass*>                              Loaded_Items;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	TArray<class UClass*>                              Items_Array;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function WBP_LoadoutsPanel.WBP_LoadoutsPanel_C.Try Restore Loadout
struct UWBP_LoadoutsPanel_C_Try_Restore_Loadout_Params
{
	struct FMALoadout                                  Saved_Loadout;                                             // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FMALoadout                                  Local_Loadout;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function WBP_LoadoutsPanel.WBP_LoadoutsPanel_C.Update Weapon Slot
struct UWBP_LoadoutsPanel_C_Update_Weapon_Slot_Params
{
	class UWBP_Loadouts_ItemSlot_C*                    Item_Slot;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UClass*                                      New_Item_Info;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_LoadoutsPanel.WBP_LoadoutsPanel_C.Create Filtered Item list
struct UWBP_LoadoutsPanel_C_Create_Filtered_Item_list_Params
{
	TArray<class UClass*>                              Items;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	TArray<class UClass*>                              Filtered_Items;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	bool                                               ReturnInBoth;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	TArray<class UClass*>                              outResult;                                                 // (Parm, OutParm, ZeroConstructor)
};

// Function WBP_LoadoutsPanel.WBP_LoadoutsPanel_C.GetRootCanvas
struct UWBP_LoadoutsPanel_C_GetRootCanvas_Params
{
	class UWidget*                                     Widget;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCanvasPanel*                                Canvas;                                                    // (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_LoadoutsPanel.WBP_LoadoutsPanel_C.GetCurrentLoadoutCopy
struct UWBP_LoadoutsPanel_C_GetCurrentLoadoutCopy_Params
{
	struct FMALoadout                                  CurrentLoadout;                                            // (Parm, OutParm)
};

// Function WBP_LoadoutsPanel.WBP_LoadoutsPanel_C.GetWeaponClass
struct UWBP_LoadoutsPanel_C_GetWeaponClass_Params
{
	struct FString                                     Selection;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	class UClass*                                      Return;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_LoadoutsPanel.WBP_LoadoutsPanel_C.GetPackClass
struct UWBP_LoadoutsPanel_C_GetPackClass_Params
{
	struct FString                                     Name;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	class UClass*                                      Item_Info;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_LoadoutsPanel.WBP_LoadoutsPanel_C.Update Widgets for new Character
struct UWBP_LoadoutsPanel_C_Update_Widgets_for_new_Character_Params
{
};

// Function WBP_LoadoutsPanel.WBP_LoadoutsPanel_C.Construct
struct UWBP_LoadoutsPanel_C_Construct_Params
{
};

// Function WBP_LoadoutsPanel.WBP_LoadoutsPanel_C.On Item Clicked
struct UWBP_LoadoutsPanel_C_On_Item_Clicked_Params
{
	class UWBP_Loadouts_ItemSlot_C*                    Item_Slot;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_LoadoutsPanel.WBP_LoadoutsPanel_C.New Item Selected
struct UWBP_LoadoutsPanel_C_New_Item_Selected_Params
{
	class UClass*                                      New_Item;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_LoadoutsPanel.WBP_LoadoutsPanel_C.SelectLoadout
struct UWBP_LoadoutsPanel_C_SelectLoadout_Params
{
	class UWBP_SingleLoadoutEntry_C*                   Loadout;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_LoadoutsPanel.WBP_LoadoutsPanel_C.RefreshCustomLoadouts
struct UWBP_LoadoutsPanel_C_RefreshCustomLoadouts_Params
{
};

// Function WBP_LoadoutsPanel.WBP_LoadoutsPanel_C.FindDefaultLoadout
struct UWBP_LoadoutsPanel_C_FindDefaultLoadout_Params
{
};

// Function WBP_LoadoutsPanel.WBP_LoadoutsPanel_C.BndEvt__RenameLoadout_K2Node_ComponentBoundEvent_343_OnButtonClickedEvent__DelegateSignature
struct UWBP_LoadoutsPanel_C_BndEvt__RenameLoadout_K2Node_ComponentBoundEvent_343_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function WBP_LoadoutsPanel.WBP_LoadoutsPanel_C.RenameSelectedLoadout
struct UWBP_LoadoutsPanel_C_RenameSelectedLoadout_Params
{
	struct FString                                     Name;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
};

// Function WBP_LoadoutsPanel.WBP_LoadoutsPanel_C.CancelRename
struct UWBP_LoadoutsPanel_C_CancelRename_Params
{
};

// Function WBP_LoadoutsPanel.WBP_LoadoutsPanel_C.RefreshDefaultLoadouts
struct UWBP_LoadoutsPanel_C_RefreshDefaultLoadouts_Params
{
};

// Function WBP_LoadoutsPanel.WBP_LoadoutsPanel_C.Enforce Visual Selection Highlight
struct UWBP_LoadoutsPanel_C_Enforce_Visual_Selection_Highlight_Params
{
};

// Function WBP_LoadoutsPanel.WBP_LoadoutsPanel_C.ProcessGamemodeLoadoutsForDisplay
struct UWBP_LoadoutsPanel_C_ProcessGamemodeLoadoutsForDisplay_Params
{
};

// Function WBP_LoadoutsPanel.WBP_LoadoutsPanel_C.Loadout Updated
struct UWBP_LoadoutsPanel_C_Loadout_Updated_Params
{
};

// Function WBP_LoadoutsPanel.WBP_LoadoutsPanel_C.BndEvt__WBP_Loadouts_SelectArmor_K2Node_ComponentBoundEvent_1038_OnClicked__DelegateSignature
struct UWBP_LoadoutsPanel_C_BndEvt__WBP_Loadouts_SelectArmor_K2Node_ComponentBoundEvent_1038_OnClicked__DelegateSignature_Params
{
};

// Function WBP_LoadoutsPanel.WBP_LoadoutsPanel_C.BndEvt__WBP_Loadouts_SelectArmor_C_0_K2Node_ComponentBoundEvent_1046_OnClicked__DelegateSignature
struct UWBP_LoadoutsPanel_C_BndEvt__WBP_Loadouts_SelectArmor_C_0_K2Node_ComponentBoundEvent_1046_OnClicked__DelegateSignature_Params
{
};

// Function WBP_LoadoutsPanel.WBP_LoadoutsPanel_C.BndEvt__WBP_Loadouts_SelectArmor_C_1_K2Node_ComponentBoundEvent_1055_OnClicked__DelegateSignature
struct UWBP_LoadoutsPanel_C_BndEvt__WBP_Loadouts_SelectArmor_C_1_K2Node_ComponentBoundEvent_1055_OnClicked__DelegateSignature_Params
{
};

// Function WBP_LoadoutsPanel.WBP_LoadoutsPanel_C.BndEvt__EditableTextBox_0_K2Node_ComponentBoundEvent_473_OnEditableTextBoxCommittedEvent__DelegateSignature
struct UWBP_LoadoutsPanel_C_BndEvt__EditableTextBox_0_K2Node_ComponentBoundEvent_473_OnEditableTextBoxCommittedEvent__DelegateSignature_Params
{
	struct FText                                       Text;                                                      // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	TEnumAsByte<SlateCore_ETextCommit>                 CommitMethod;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_LoadoutsPanel.WBP_LoadoutsPanel_C.Update Basic Info
struct UWBP_LoadoutsPanel_C_Update_Basic_Info_Params
{
	class UClass*                                      Object_Info_Class;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FText                                       Name_Suffix;                                               // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function WBP_LoadoutsPanel.WBP_LoadoutsPanel_C.Switch to Overview
struct UWBP_LoadoutsPanel_C_Switch_to_Overview_Params
{
};

// Function WBP_LoadoutsPanel.WBP_LoadoutsPanel_C.Switch to Weapon Selection
struct UWBP_LoadoutsPanel_C_Switch_to_Weapon_Selection_Params
{
	int                                                For_Slot;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_LoadoutsPanel.WBP_LoadoutsPanel_C.Switch to Throwable Selection
struct UWBP_LoadoutsPanel_C_Switch_to_Throwable_Selection_Params
{
};

// Function WBP_LoadoutsPanel.WBP_LoadoutsPanel_C.OnWeaponSlotClicked
struct UWBP_LoadoutsPanel_C_OnWeaponSlotClicked_Params
{
	class UWBP_Loadouts_ItemSlot_C*                    Item_Slot;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_LoadoutsPanel.WBP_LoadoutsPanel_C.BndEvt__EditableLoadoutName_K2Node_ComponentBoundEvent_0_OnEditableTextBoxChangedEvent__DelegateSignature
struct UWBP_LoadoutsPanel_C_BndEvt__EditableLoadoutName_K2Node_ComponentBoundEvent_0_OnEditableTextBoxChangedEvent__DelegateSignature_Params
{
	struct FText                                       Text;                                                      // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function WBP_LoadoutsPanel.WBP_LoadoutsPanel_C.DisplayInvalidWeaponToast
struct UWBP_LoadoutsPanel_C_DisplayInvalidWeaponToast_Params
{
	struct FText                                       Error_Message;                                             // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function WBP_LoadoutsPanel.WBP_LoadoutsPanel_C.DisplayInvalidAugmentToast
struct UWBP_LoadoutsPanel_C_DisplayInvalidAugmentToast_Params
{
	struct FText                                       Error_Message;                                             // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function WBP_LoadoutsPanel.WBP_LoadoutsPanel_C.DismissToast
struct UWBP_LoadoutsPanel_C_DismissToast_Params
{
};

// Function WBP_LoadoutsPanel.WBP_LoadoutsPanel_C.InvalidPackToast
struct UWBP_LoadoutsPanel_C_InvalidPackToast_Params
{
	struct FText                                       Error_Text;                                                // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function WBP_LoadoutsPanel.WBP_LoadoutsPanel_C.InvalidCharacterToast
struct UWBP_LoadoutsPanel_C_InvalidCharacterToast_Params
{
	struct FText                                       Error_Text;                                                // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function WBP_LoadoutsPanel.WBP_LoadoutsPanel_C.InvalidThrowableToast
struct UWBP_LoadoutsPanel_C_InvalidThrowableToast_Params
{
	struct FText                                       Error_Text;                                                // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function WBP_LoadoutsPanel.WBP_LoadoutsPanel_C.BndEvt__ThrowableSlot_K2Node_ComponentBoundEvent_1430_ButtonClicked__DelegateSignature
struct UWBP_LoadoutsPanel_C_BndEvt__ThrowableSlot_K2Node_ComponentBoundEvent_1430_ButtonClicked__DelegateSignature_Params
{
	class UWBP_SelectableButton_C*                     Clicked_Button;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_LoadoutsPanel.WBP_LoadoutsPanel_C.OnConfiguratorManualApply
struct UWBP_LoadoutsPanel_C_OnConfiguratorManualApply_Params
{
};

// Function WBP_LoadoutsPanel.WBP_LoadoutsPanel_C.DismissLoadout
struct UWBP_LoadoutsPanel_C_DismissLoadout_Params
{
};

// Function WBP_LoadoutsPanel.WBP_LoadoutsPanel_C.BndEvt__WBP_SelectableButtonWithText_0_K2Node_ComponentBoundEvent_311_ButtonClicked__DelegateSignature
struct UWBP_LoadoutsPanel_C_BndEvt__WBP_SelectableButtonWithText_0_K2Node_ComponentBoundEvent_311_ButtonClicked__DelegateSignature_Params
{
	class UWBP_SelectableButton_C*                     Clicked_Button;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_LoadoutsPanel.WBP_LoadoutsPanel_C.BndEvt__WBP_SelectableButtonWithText_K2Node_ComponentBoundEvent_331_ButtonClicked__DelegateSignature
struct UWBP_LoadoutsPanel_C_BndEvt__WBP_SelectableButtonWithText_K2Node_ComponentBoundEvent_331_ButtonClicked__DelegateSignature_Params
{
	class UWBP_SelectableButton_C*                     Clicked_Button;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_LoadoutsPanel.WBP_LoadoutsPanel_C.Jump To Object
struct UWBP_LoadoutsPanel_C_Jump_To_Object_Params
{
	class UClass*                                      Object;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_LoadoutsPanel.WBP_LoadoutsPanel_C.BndEvt__WBP_LoadoutWeaponConfiguration_K2Node_ComponentBoundEvent_4_Jump to Object__DelegateSignature
struct UWBP_LoadoutsPanel_C_BndEvt__WBP_LoadoutWeaponConfiguration_K2Node_ComponentBoundEvent_4_Jump_to_Object__DelegateSignature_Params
{
	class UClass*                                      Object_Info;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_LoadoutsPanel.WBP_LoadoutsPanel_C.Jump to Weapon Slot Unlock
struct UWBP_LoadoutsPanel_C_Jump_to_Weapon_Slot_Unlock_Params
{
};

// Function WBP_LoadoutsPanel.WBP_LoadoutsPanel_C.Update Basic Info With Skin
struct UWBP_LoadoutsPanel_C_Update_Basic_Info_With_Skin_Params
{
	class UClass*                                      Object_Info_Class;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UClass*                                      Skin_Class;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FText                                       Name_Suffix;                                               // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function WBP_LoadoutsPanel.WBP_LoadoutsPanel_C.Switch Back
struct UWBP_LoadoutsPanel_C_Switch_Back_Params
{
	bool                                               Revert_Displayed_Object;                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function WBP_LoadoutsPanel.WBP_LoadoutsPanel_C.BndEvt__WBP_Loadout_SkinConfiguration_K2Node_ComponentBoundEvent_1013_Skin Selected__DelegateSignature
struct UWBP_LoadoutsPanel_C_BndEvt__WBP_Loadout_SkinConfiguration_K2Node_ComponentBoundEvent_1013_Skin_Selected__DelegateSignature_Params
{
	class UClass*                                      Skin_Configuration;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_LoadoutsPanel.WBP_LoadoutsPanel_C.BndEvt__WBP_Loadout_SkinConfiguration_K2Node_ComponentBoundEvent_157_Skin Equipped__DelegateSignature
struct UWBP_LoadoutsPanel_C_BndEvt__WBP_Loadout_SkinConfiguration_K2Node_ComponentBoundEvent_157_Skin_Equipped__DelegateSignature_Params
{
	class UClass*                                      Skin_Configuration;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_LoadoutsPanel.WBP_LoadoutsPanel_C.BndEvt__WBP_AppearanceMenu_K2Node_ComponentBoundEvent_173_TryOpenSkins__DelegateSignature
struct UWBP_LoadoutsPanel_C_BndEvt__WBP_AppearanceMenu_K2Node_ComponentBoundEvent_173_TryOpenSkins__DelegateSignature_Params
{
};

// Function WBP_LoadoutsPanel.WBP_LoadoutsPanel_C.Switched To
struct UWBP_LoadoutsPanel_C_Switched_To_Params
{
};

// Function WBP_LoadoutsPanel.WBP_LoadoutsPanel_C.BndEvt__WBP_Loadouts_PackButton_K2Node_ComponentBoundEvent_1_ButtonClicked__DelegateSignature
struct UWBP_LoadoutsPanel_C_BndEvt__WBP_Loadouts_PackButton_K2Node_ComponentBoundEvent_1_ButtonClicked__DelegateSignature_Params
{
	class UWBP_SelectableButton_C*                     Clicked_Button;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_LoadoutsPanel.WBP_LoadoutsPanel_C.Switch To Pack Selection
struct UWBP_LoadoutsPanel_C_Switch_To_Pack_Selection_Params
{
};

// Function WBP_LoadoutsPanel.WBP_LoadoutsPanel_C.Pack Updated
struct UWBP_LoadoutsPanel_C_Pack_Updated_Params
{
	class UClass*                                      Pack;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FText                                       Suffix_Text;                                               // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FText                                       Error_Text;                                                // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function WBP_LoadoutsPanel.WBP_LoadoutsPanel_C.ExecuteUbergraph_WBP_LoadoutsPanel
struct UWBP_LoadoutsPanel_C_ExecuteUbergraph_WBP_LoadoutsPanel_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_LoadoutsPanel.WBP_LoadoutsPanel_C.JumpToWeaponSlotForArmor__DelegateSignature
struct UWBP_LoadoutsPanel_C_JumpToWeaponSlotForArmor__DelegateSignature_Params
{
	class UClass*                                      Armor_Type;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_LoadoutsPanel.WBP_LoadoutsPanel_C.JumpToProgressionObject__DelegateSignature
struct UWBP_LoadoutsPanel_C_JumpToProgressionObject__DelegateSignature_Params
{
	class UClass*                                      Object_Info;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
