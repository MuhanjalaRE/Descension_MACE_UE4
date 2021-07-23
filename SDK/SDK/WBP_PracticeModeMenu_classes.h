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

// WidgetBlueprintGeneratedClass WBP_PracticeModeMenu.WBP_PracticeModeMenu_C
// 0x01B1 (FullSize[0x03E9] - InheritedSize[0x0238])
class UWBP_PracticeModeMenu_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0238(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UButton*                                     AddRouteToDrillButton;                                     // 0x0240(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                                     AutoFollowButton;                                          // 0x0248(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCheckBox*                                   BotsMovableCheckbox;                                       // 0x0250(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UComboBoxString*                             BotSpawnTypeCombo;                                         // 0x0258(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCheckBox*                                   BotsTakeDamageCheckbox;                                    // 0x0260(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                                     Button_3;                                                  // 0x0268(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                                     CloseButton;                                               // 0x0270(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMultiLineEditableTextBox*                   DrillDescriptionTextInput;                                 // 0x0278(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UEditableTextBox*                            DrillLengthTextInput;                                      // 0x0280(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UScrollBox*                                  DrillListScrollBox;                                        // 0x0288(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UEditableTextBox*                            DrillNameTextInput;                                        // 0x0290(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UEditableTextBox*                            DrillNumberOfBotsTextInput;                                // 0x0298(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                                DrillsListVBox;                                            // 0x02A0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UEditableTextBox*                            DrillSpawnDelayTExtInput;                                  // 0x02A8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHorizontalBox*                              DrillsViewHBox;                                            // 0x02B0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                                     EasyButton;                                                // 0x02B8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                                     ExpertButton;                                              // 0x02C0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                                     GoToMarkerButton;                                          // 0x02C8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                                     GoToNextMarkerButton;                                      // 0x02D0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                                     GoToRouteTrailStartButton;                                 // 0x02D8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                                     HideRoutesButton;                                          // 0x02E0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                                  HitMarkersText;                                            // 0x02E8(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                                     LoadRoutesFromFileButton;                                  // 0x02F0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                                     MediumButton;                                              // 0x02F8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UEditableTextBox*                            PositionMarkerTextInput;                                   // 0x0300(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                                     RemoveRouteFromDrillButton;                                // 0x0308(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCheckBox*                                   ResetFlagsCheckbox;                                        // 0x0310(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHorizontalBox*                              RouteListViewHbox;                                         // 0x0318(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UComboBoxString*                             RoutesInDrillCombo;                                        // 0x0320(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UScrollBox*                                  RoutesListScrollBox;                                       // 0x0328(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UComboBoxString*                             RoutesNotYetInDrillCombo;                                  // 0x0330(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMultiLineEditableTextBox*                   RouteTrailDescriptionTextInput;                            // 0x0338(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UEditableTextBox*                            RouteTrailNameTextInput;                                   // 0x0340(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                                     SaveRoutesToFileButton;                                    // 0x0348(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                                     SaveRouteTrailButton;                                      // 0x0350(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                                     SaveRouteTrailButton_2;                                    // 0x0358(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                                  SelectedRouteTrailAverageSpeed;                            // 0x0360(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                                  SelectedRouteTrailCaptureSpeed;                            // 0x0368(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                                  SelectedRouteTrailCaptureTIme;                             // 0x0370(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                                  SelectedRouteTrailGrabSpeed;                               // 0x0378(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                                  SelectedRouteTrailGrabTime;                                // 0x0380(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                                  SelectedRouteTrailMaxSpeed;                                // 0x0388(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                                  SelectedRouteTrailTotalTime;                               // 0x0390(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                                     ShowDrillsButton;                                          // 0x0398(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                                     ShowRoutesButton;                                          // 0x03A0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                                     SpawnBotButton;                                            // 0x03A8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHorizontalBox*                              SpawnDelayHBox;                                            // 0x03B0(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                                  TotalMarkersText;                                          // 0x03B8(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                                  UsedSavedPositionText;                                     // 0x03C0(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                                     UseSavedPosition;                                          // 0x03C8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHorizontalBox*                              VictoryAmountHbox;                                         // 0x03D0(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UEditableTextBox*                            VictoryAmountTextInput;                                    // 0x03D8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UComboBoxString*                             VictoryTypeCombo;                                          // 0x03E0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	bool                                               bIsPracticeMenuInitialized;                                // 0x03E8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr){
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WBP_PracticeModeMenu.WBP_PracticeModeMenu_C");
		}
		return ptr;
	}



	void UpdateSelectedRouteDisplay();
	UMG_ESlateVisibility Get_SpawnDelayHBox_Visibility_1();
	UMG_ESlateVisibility Get_VictoryAmountHbox_Visibility_1();
	struct FText Get_VictoryAmountTextInput_Text_1();
	struct FText Get_UsedSavedPositionText_Text_1();
	struct FText Get_DrillNumberOfBotsTextInput_Text_2();
	struct FText Get_DrillLengthTextInput_Text_2();
	struct FText Get_DrillSpawnDelayTExtInput_Text_2();
	struct FText Get_DrillSpawnDelayTExtInput_Text_1();
	void RefreshSelectedDrillDisplay();
	struct FText Get_DrillLengthTextInput_Text_1();
	struct FText Get_DrillNumberOfBotsTextInput_Text_1();
	struct FText Get_DrillNameTextInput_Text_1();
	void UpdateRoutesInDrillCombo(class UMAPracticeComponent* PracticeComponent);
	void UpdateDrillsList(class UMAPracticeComponent* PracticeComponent, class APlayerController* OwningPlayer);
	void UpdateAvailableRoutesForDrillCombo(class UMAPracticeComponent* PracticeComponent);
	struct FEventReply OnKeyChar(const struct FGeometry& MyGeometry, const struct FCharacterEvent& InCharacterEvent);
	struct FEventReply OnKeyUp(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent);
	void UpdateRouteList(class UMAPracticeComponent* PracticeComponent, class APlayerController* OwningPlayer);
	struct FEventReply OnKeyDown(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent);
	struct FText Get_RouteTrailDescriptionText_Text_1();
	struct FText Get_HitMarkersText_Text_1();
	struct FText Get_TotalMarkersText_Text_1();
	struct FText Get_SelectedRouteTrailAverageSpeed_Text_1();
	struct FText Get_SelectedRouteTrailMaxSpeed_Text_1();
	struct FText Get_SelectedRouteTrailCaptureSpeed_Text_1();
	struct FText Get_SelectedRouteTrailTotalTime_Text_1();
	struct FText Get_SelectedRouteTrailCaptureTIme_Text_1();
	void GetMAPracticeComponentForWidget(class UMAPracticeComponent** MAPracticeComponent);
	struct FText Get_SelectedRouteTrailGrabTime_Text_1();
	struct FText Get_SelectedRouteTrailGrabSpeed_Text_1();
	struct FText Get_SelectedRouteTrailName_Text_1();
	void Get_RouteNamesText_Text_1();
	void BndEvt__LoadRoutesFromFileButton_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__SaveRouteTrailButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__SaveRoutesToFileButton_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__LoadSingleRouteTrailButton_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__CloseButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__GoToRouteTrailStartButton_K2Node_ComponentBoundEvent_6_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__GoToMarkerButton_K2Node_ComponentBoundEvent_7_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__GoToRouteTrailGrabButton_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__PositionMarkerTextInput_K2Node_ComponentBoundEvent_8_OnEditableTextBoxChangedEvent__DelegateSignature(const struct FText& Text);
	void BndEvt__Button_2_K2Node_ComponentBoundEvent_9_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__GoToNextMarkerButton_K2Node_ComponentBoundEvent_10_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__EasyButton_K2Node_ComponentBoundEvent_11_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__MediumButton_K2Node_ComponentBoundEvent_12_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__ExpertButton_K2Node_ComponentBoundEvent_13_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__HideRoutesButton_K2Node_ComponentBoundEvent_16_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__AutoFollowButton_K2Node_ComponentBoundEvent_17_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__SpawnBotButton_K2Node_ComponentBoundEvent_18_OnButtonClickedEvent__DelegateSignature();
	void OnInitialized();
	void OnTogglePracticeMenu();
	void BndEvt__ShowDrillsButton_K2Node_ComponentBoundEvent_20_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__ShowRoutesButton_K2Node_ComponentBoundEvent_23_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__DrillNameTextInput_K2Node_ComponentBoundEvent_20_OnEditableTextBoxChangedEvent__DelegateSignature(const struct FText& Text);
	void BndEvt__DrillDescriptionTextInput_K2Node_ComponentBoundEvent_22_OnMultiLineEditableTextBoxChangedEvent__DelegateSignature(const struct FText& Text);
	void BndEvt__AddRouteToDrillButton_K2Node_ComponentBoundEvent_24_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__RemoveRouteFromDrillButton_K2Node_ComponentBoundEvent_25_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__SaveRouteTrailButton_1_K2Node_ComponentBoundEvent_26_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__DrillSpawnDelayTExtInput_K2Node_ComponentBoundEvent_27_OnEditableTextBoxChangedEvent__DelegateSignature(const struct FText& Text);
	void BndEvt__DrillLengthTextInput_K2Node_ComponentBoundEvent_28_OnEditableTextBoxChangedEvent__DelegateSignature(const struct FText& Text);
	void BndEvt__DrillNumberOfBotsTextInput_K2Node_ComponentBoundEvent_29_OnEditableTextBoxChangedEvent__DelegateSignature(const struct FText& Text);
	void BndEvt__VictoryTypeCombo_K2Node_ComponentBoundEvent_30_OnSelectionChangedEvent__DelegateSignature(const struct FString& SelectedItem, TEnumAsByte<SlateCore_ESelectInfo> SelectionType);
	void BndEvt__BotSpawnTypeCombo_K2Node_ComponentBoundEvent_31_OnSelectionChangedEvent__DelegateSignature(const struct FString& SelectedItem, TEnumAsByte<SlateCore_ESelectInfo> SelectionType);
	void BndEvt__ResetFlagsCheckbox_K2Node_ComponentBoundEvent_32_OnCheckBoxComponentStateChanged__DelegateSignature(bool bIsChecked);
	void BndEvt__BotsTakeDamageCheckbox_K2Node_ComponentBoundEvent_33_OnCheckBoxComponentStateChanged__DelegateSignature(bool bIsChecked);
	void BndEvt__BotsMovableCheckbox_K2Node_ComponentBoundEvent_34_OnCheckBoxComponentStateChanged__DelegateSignature(bool bIsChecked);
	void BndEvt__UseSavedPosition_K2Node_ComponentBoundEvent_19_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__VictoryAmountTextInput_K2Node_ComponentBoundEvent_35_OnEditableTextBoxChangedEvent__DelegateSignature(const struct FText& Text);
	void ExecuteUbergraph_WBP_PracticeModeMenu(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
