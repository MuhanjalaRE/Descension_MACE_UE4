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

// WidgetBlueprintGeneratedClass WBP_GeneralSettings.WBP_GeneralSettings_C
// 0x00BC (FullSize[0x02F4] - InheritedSize[0x0238])
class UWBP_GeneralSettings_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0238(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UButton*                                     ApplyButton;                                               // 0x0240(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UComboBoxString*                             CrosshairColor;                                            // 0x0248(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UComboBoxString*                             CrosshairType;                                             // 0x0250(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UECP_Picker_C*                               EnemyPicker;                                               // 0x0258(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UECP_Picker_C*                               FriendlyPicker;                                            // 0x0260(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                      Image_1;                                                   // 0x0268(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Settings_CheckboxItem_C*                RelativeTeamColors;                                        // 0x0270(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                                     ResetButton;                                               // 0x0278(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Settings_CheckboxItem_C*                ShowFlagDistance;                                          // 0x0280(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Settings_CheckboxItem_C*                ShowPersonalScore;                                         // 0x0288(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Settings_CheckboxItem_C*                SpectatorStickOnePerson;                                   // 0x0290(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                                  TextBlock;                                                 // 0x0298(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                                  TextBlock_3;                                               // 0x02A0(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                             WidgetSwitcher_1;                                          // 0x02A8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FLinearColor                                ComboBoxTextColor;                                         // 0x02B0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AMAPlayerControllerBase*                     OurController;                                             // 0x02C0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UTexture*                                    CurrentCrosshair;                                          // 0x02C8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AMAPlayerControllerBase*                     GameUserSettings;                                          // 0x02D0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FScriptMulticastDelegate                    ShowColourPicker;                                          // 0x02D8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	bool                                               bRelativeTeamColors;                                       // 0x02E8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               NewVar_1;                                                  // 0x02E9(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               NewVar_2;                                                  // 0x02EA(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_275E[0x1];                                     // 0x02EB(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FColor                                      Team0Color;                                                // 0x02EC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FColor                                      Team1Color;                                                // 0x02F0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr){
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WBP_GeneralSettings.WBP_GeneralSettings_C");
		}
		return ptr;
	}



	struct FText GetFriendlyOrArcturus();
	struct FText GetEnemyOrManatech();
	void NewFunction_2(bool bRelativeTeamColors, class UMAGameUserSettings* self2);
	void NewFunction_1(bool bRelativeTeamColors, class UMAGameUserSettings* self2);
	struct FLinearColor GetColorAndOpacity_2();
	struct FLinearColor GetColorAndOpacity_1();
	UMG_ESlateVisibility GetVisibility_1();
	struct FSlateBrush GetBrush_1();
	class UWidget* On_CrosshairType_GenerateWidget_1(const struct FString& Item);
	class UWidget* Get_SpectatorStickOnePerson_ToolTipWidget();
	void Apply_Settings(bool Save);
	void BndEvt__CrosshairType_K2Node_ComponentBoundEvent_3_OnSelectionChangedEvent__DelegateSignature(const struct FString& SelectedItem, TEnumAsByte<SlateCore_ESelectInfo> SelectionType);
	void Reset();
	void BndEvt__ResetButton_K2Node_ComponentBoundEvent_57_OnButtonClickedEvent__DelegateSignature();
	void Construct();
	void BndEvt__CrosshairColor_K2Node_ComponentBoundEvent_17_OnSelectionChangedEvent__DelegateSignature(const struct FString& SelectedItem, TEnumAsByte<SlateCore_ESelectInfo> SelectionType);
	void BndEvt__ApplyButton_K2Node_ComponentBoundEvent_40_OnButtonClickedEvent__DelegateSignature();
	void ExecuteUbergraph_WBP_GeneralSettings(int EntryPoint);
	void ShowColourPicker__DelegateSignature();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
