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
// Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass WBP_LoadoutsPanel.WBP_LoadoutsPanel_C
// 0x0250 (FullSize[0x0488] - InheritedSize[0x0238])
class UWBP_LoadoutsPanel_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0238(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UWBP_SelectableButtonWithText_C*             ACCEPTBUTTON;                                              // 0x0240(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_SelectableButtonWithText_C*             CancelButton;                                              // 0x0248(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                                DefaultsBox;                                               // 0x0250(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UEditableTextBox*                            EditableLoadoutName;                                       // 0x0258(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                                LoadoutOverview;                                           // 0x0260(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UNamedSlot*                                  LoadoutOverview_APPEARANCESlot;                            // 0x0268(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                             LoadoutSelectionInfoSwitcher;                              // 0x0270(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                             MainLoadoutsMenuSwitcher;                                  // 0x0278(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Loadouts_PackInfo_C*                    PackInfo;                                                  // 0x0280(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_MenuToast_C*                            PersistentMenuToast;                                       // 0x0288(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Loadouts_SelectArmor_C*                 SelectHeavyArmor;                                          // 0x0290(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Loadouts_SelectArmor_C*                 SelectLightArmor;                                          // 0x0298(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Loadouts_SelectArmor_C*                 SelectMediumArmor;                                         // 0x02A0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Loadouts_ItemSlot_C*                    ThrowableSlot;                                             // 0x02A8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_AppearanceMenu_C*                       WBP_AppearanceMenu;                                        // 0x02B0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_CharacterInfo_C*                        WBP_CharacterInfo;                                         // 0x02B8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Loadout_SkinConfiguration_C*            WBP_Loadout_SkinConfiguration;                             // 0x02C0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_LoadoutPackConfiguration_C*             WBP_LoadoutPackConfiguration;                              // 0x02C8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Loadouts_PackButton_C*                  WBP_Loadouts_PackButton;                                   // 0x02D0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_LoadoutThrowableConfiguration_C*        WBP_LoadoutThrowableConfiguration;                         // 0x02D8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_LoadoutWeaponConfiguration_C*           WBP_LoadoutWeaponConfiguration;                            // 0x02E0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_SingleLoadoutEntry_C*                   WBP_SingleLoadoutEntry_62;                                 // 0x02E8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_WeaponInfo_C*                           WBP_WeaponInfo;                                            // 0x02F0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                                WeaponSlots;                                               // 0x02F8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                             WidgetSwitcher_77;                                         // 0x0300(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	bool                                               bDirty;                                                    // 0x0308(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_6G2B[0x7];                                     // 0x0309(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UPlayerLoadoutsSave*                         LoadoutsSave;                                              // 0x0310(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                                LoadoutCategoryInactiveColor;                              // 0x0318(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                                LoadoutCategoryActiveColor;                                // 0x0328(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FMALoadout                                  LoadoutToView;                                             // 0x0338(0x00A0) (Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                               bCanEditLoadoutToView;                                     // 0x03D8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               SeperateCustomLoadouts;                                    // 0x03D9(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               ManualSave;                                                // 0x03DA(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_SG8F[0x5];                                     // 0x03DB(0x0005) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UWBP_SingleLoadoutEntry_C*                   LastSelected;                                              // 0x03E0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWidget*                                     __MacroVariable_ManuallyRemoveAllChildren_DONTDELETE_;     // 0x03E8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               bHasValidGM;                                               // 0x03F0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_ZTBF[0x7];                                     // 0x03F1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     TempEditSuffix;                                            // 0x03F8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)
	int                                                Loadout_Name_Limit;                                        // 0x0408(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               SelectionIsLocked;                                         // 0x040C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_TNQM[0x3];                                     // 0x040D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FScriptMulticastDelegate                    JumpToProgressionObject;                                   // 0x0410(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	class UClass*                                      Selected_Object;                                           // 0x0420(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UClass*                                      Selected_Skin;                                             // 0x0428(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FText                                       Selected_Object_Suffix;                                    // 0x0430(0x0018) (Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                               IsPracticeMode;                                            // 0x0448(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_DAXX[0x7];                                     // 0x0449(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FScriptMulticastDelegate                    JumpToWeaponSlotForArmor;                                  // 0x0450(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	int                                                Last_Loadout_Menu_Index;                                   // 0x0460(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_L9TE[0x4];                                     // 0x0464(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<struct FCachedSubPanelInfo>                 Menu_Stack;                                                // 0x0468(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	bool                                               InMatch;                                                   // 0x0478(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_KSID[0x7];                                     // 0x0479(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UClass*                                      LastSelectedJet;                                           // 0x0480(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr){
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WBP_LoadoutsPanel.WBP_LoadoutsPanel_C");
		}
		return ptr;
	}



	bool HandleDirectNamedHotkey(const struct FString& Hotkey);
	bool HandleNamedHotkeyWithInt(const struct FString& Hotkey, int Int);
	void Get_Accept_Button_Locked_Class(class UClass** Object, bool* Needs_Buy);
	void Update_Accept_Button_Text();
	void PutAppearanceBackOnWeapons();
	void PutAppearanceBackOnOverview();
	UMG_ESlateVisibility Get_GamemodeSelection_Visibility_1();
	void Cache_Last_Menu_Info();
	void Update_Preview_Scene(class UClass* Object_Info, class UClass* Cosmetic);
	struct FEventReply OnMouseButtonDown(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent);
	struct FEventReply OnMouseMove(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent);
	void IsAtOverview(bool* bAtOverview);
	UMG_ESlateVisibility Get_Cancel_Visibility();
	void Select_Gamemode_Internal(class UClass* GameModeClass);
	void Select_Gamemode(const struct FString& Gamemode_Prefix, bool* Success);
	void Bind_Basic_Events_Function();
	UMG_ESlateVisibility Get_Accept_Visibility();
	void Cache_and_Bind_Loadouts_Save(class UPlayerLoadoutsSave** Save);
	void ProcessWeapons(class AMATeamState* TeamState, TArray<class UClass*>* InputPin, TArray<class UClass*>* OutputPin);
	void GetNewWeaponClass(class UClass* Character, TArray<class UClass*>* CurrentWeapons, class UClass** NewWeapon);
	UMG_ESlateVisibility Get_GamemodeSwitcher_Visibility_1();
	class UWidget* Get_Revert_ToolTipWidget_1();
	class UWidget* GetResetChangesTooltip();
	class UWidget* GetSaveLoadoutTooltip();
	void TrySelectLoadout(int Index);
	void ObjectInfoArraysEqual(TArray<class UClass*>* A, TArray<class UClass*>* B, bool* Equal);
	void AnyDifference_(TArray<struct FMALoadout>* A, TArray<struct FMALoadout>* B, bool* AnyDifference);
	UMG_ESlateVisibility Get_Button_2_Visibility_1();
	void UnbindDelegatesForLoadoutEntry(class UWBP_SingleLoadoutEntry_C* _, class UWBP_SingleLoadoutEntry_C** __);
	UMG_ESlateVisibility Get_SaveChanges_Visibility_1();
	void OverrideGamemodeDefaults(TArray<struct FMALoadout>* Base, TArray<struct FMALoadout>* Override, TArray<struct FMALoadout>* _LocalBase);
	struct FText Get_TextBlock_9_Text_1();
	class UWidget* GetNewLoadoutTooltip();
	UMG_ESlateVisibility GetVisibility_1();
	class UWidget* GetIneditableToolTip();
	struct FText Get_SelectEditLoadout_Text_1();
	void GetBestDefaultLoadout(struct FMALoadout* Loadout);
	struct FSlateColor Get_TextBlock_14_ColorAndOpacity_1();
	struct FSlateColor Get_TextBlock_9_ColorAndOpacity_1();
	void BindDelegatesForLoadoutEntry(class UWBP_SingleLoadoutEntry_C* _, class UWBP_SingleLoadoutEntry_C** __);
	UMG_ESlateVisibility Get_Defaults_Visibility_1();
	void IsWeaponRestricted(class UClass* Weapon, bool* NewParam);
	void VerifyTeamSpawnableWeapons(class AMATeamState* Team, TArray<class UClass*>* Weapons, TArray<class UClass*>* Verified);
	void FindAugmentWithRequirementsMet(class UAugmentInfo* CompareAgainst, TArray<class UClass*>* Augments, class UClass** Passes);
	void Sanitize_Augment(class UWBP_Loadouts_ItemSlot_C* Augment_Slot, class UClass* Backpack_Info, int Augment_Index);
	class UWidget* OnGenerateWidget_1(const struct FString& Item);
	void Try_Load_Item_Array(TArray<class UClass*>* Loaded_Items, TArray<class UClass*>* Items_Array);
	void Try_Restore_Loadout(const struct FMALoadout& Saved_Loadout, struct FMALoadout* Local_Loadout);
	void Update_Weapon_Slot(class UWBP_Loadouts_ItemSlot_C* Item_Slot, class UClass* New_Item_Info);
	void Create_Filtered_Item_list(TArray<class UClass*>* Items, TArray<class UClass*>* Filtered_Items, bool ReturnInBoth, TArray<class UClass*>* outResult);
	void GetRootCanvas(class UWidget* Widget, class UCanvasPanel** Canvas);
	void GetCurrentLoadoutCopy(struct FMALoadout* CurrentLoadout);
	void GetWeaponClass(const struct FString& Selection, class UClass** Return);
	void GetPackClass(const struct FString& Name, class UClass** Item_Info);
	void Update_Widgets_for_new_Character();
	void Construct();
	void On_Item_Clicked(class UWBP_Loadouts_ItemSlot_C* Item_Slot);
	void New_Item_Selected(class UClass* New_Item);
	void SelectLoadout(class UWBP_SingleLoadoutEntry_C* Loadout);
	void RefreshCustomLoadouts();
	void FindDefaultLoadout();
	void BndEvt__RenameLoadout_K2Node_ComponentBoundEvent_343_OnButtonClickedEvent__DelegateSignature();
	void RenameSelectedLoadout(const struct FString& Name);
	void CancelRename();
	void RefreshDefaultLoadouts();
	void Enforce_Visual_Selection_Highlight();
	void ProcessGamemodeLoadoutsForDisplay();
	void Loadout_Updated();
	void BndEvt__WBP_Loadouts_SelectArmor_K2Node_ComponentBoundEvent_1038_OnClicked__DelegateSignature();
	void BndEvt__WBP_Loadouts_SelectArmor_C_0_K2Node_ComponentBoundEvent_1046_OnClicked__DelegateSignature();
	void BndEvt__WBP_Loadouts_SelectArmor_C_1_K2Node_ComponentBoundEvent_1055_OnClicked__DelegateSignature();
	void BndEvt__EditableTextBox_0_K2Node_ComponentBoundEvent_473_OnEditableTextBoxCommittedEvent__DelegateSignature(const struct FText& Text, TEnumAsByte<SlateCore_ETextCommit> CommitMethod);
	void Update_Basic_Info(class UClass* Object_Info_Class, const struct FText& Name_Suffix);
	void Switch_to_Overview();
	void Switch_to_Weapon_Selection(int For_Slot);
	void Switch_to_Throwable_Selection();
	void OnWeaponSlotClicked(class UWBP_Loadouts_ItemSlot_C* Item_Slot);
	void BndEvt__EditableLoadoutName_K2Node_ComponentBoundEvent_0_OnEditableTextBoxChangedEvent__DelegateSignature(const struct FText& Text);
	void DisplayInvalidWeaponToast(const struct FText& Error_Message);
	void DisplayInvalidAugmentToast(const struct FText& Error_Message);
	void DismissToast();
	void InvalidPackToast(const struct FText& Error_Text);
	void InvalidCharacterToast(const struct FText& Error_Text);
	void InvalidThrowableToast(const struct FText& Error_Text);
	void BndEvt__ThrowableSlot_K2Node_ComponentBoundEvent_1430_ButtonClicked__DelegateSignature(class UWBP_SelectableButton_C* Clicked_Button);
	void OnConfiguratorManualApply();
	void DismissLoadout();
	void BndEvt__WBP_SelectableButtonWithText_0_K2Node_ComponentBoundEvent_311_ButtonClicked__DelegateSignature(class UWBP_SelectableButton_C* Clicked_Button);
	void BndEvt__WBP_SelectableButtonWithText_K2Node_ComponentBoundEvent_331_ButtonClicked__DelegateSignature(class UWBP_SelectableButton_C* Clicked_Button);
	void Jump_To_Object(class UClass* Object);
	void BndEvt__WBP_LoadoutWeaponConfiguration_K2Node_ComponentBoundEvent_4_Jump_to_Object__DelegateSignature(class UClass* Object_Info);
	void Jump_to_Weapon_Slot_Unlock();
	void Update_Basic_Info_With_Skin(class UClass* Object_Info_Class, class UClass* Skin_Class, const struct FText& Name_Suffix);
	void Switch_Back(bool Revert_Displayed_Object);
	void BndEvt__WBP_Loadout_SkinConfiguration_K2Node_ComponentBoundEvent_1013_Skin_Selected__DelegateSignature(class UClass* Skin_Configuration);
	void BndEvt__WBP_Loadout_SkinConfiguration_K2Node_ComponentBoundEvent_157_Skin_Equipped__DelegateSignature(class UClass* Skin_Configuration);
	void BndEvt__WBP_AppearanceMenu_K2Node_ComponentBoundEvent_173_TryOpenSkins__DelegateSignature();
	void Switched_To();
	void BndEvt__WBP_Loadouts_PackButton_K2Node_ComponentBoundEvent_1_ButtonClicked__DelegateSignature(class UWBP_SelectableButton_C* Clicked_Button);
	void Switch_To_Pack_Selection();
	void Pack_Updated(class UClass* Pack, const struct FText& Suffix_Text, const struct FText& Error_Text);
	void ExecuteUbergraph_WBP_LoadoutsPanel(int EntryPoint);
	void JumpToWeaponSlotForArmor__DelegateSignature(class UClass* Armor_Type);
	void JumpToProgressionObject__DelegateSignature(class UClass* Object_Info);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
