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

// Function WBP_PracticeModeMenu.WBP_PracticeModeMenu_C.UpdateSelectedRouteDisplay
struct UWBP_PracticeModeMenu_C_UpdateSelectedRouteDisplay_Params
{
};

// Function WBP_PracticeModeMenu.WBP_PracticeModeMenu_C.Get_SpawnDelayHBox_Visibility_1
struct UWBP_PracticeModeMenu_C_Get_SpawnDelayHBox_Visibility_1_Params
{
	UMG_ESlateVisibility                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_PracticeModeMenu.WBP_PracticeModeMenu_C.Get_VictoryAmountHbox_Visibility_1
struct UWBP_PracticeModeMenu_C_Get_VictoryAmountHbox_Visibility_1_Params
{
	UMG_ESlateVisibility                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_PracticeModeMenu.WBP_PracticeModeMenu_C.Get_VictoryAmountTextInput_Text_1
struct UWBP_PracticeModeMenu_C_Get_VictoryAmountTextInput_Text_1_Params
{
	struct FText                                       ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function WBP_PracticeModeMenu.WBP_PracticeModeMenu_C.Get_UsedSavedPositionText_Text_1
struct UWBP_PracticeModeMenu_C_Get_UsedSavedPositionText_Text_1_Params
{
	struct FText                                       ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function WBP_PracticeModeMenu.WBP_PracticeModeMenu_C.Get_DrillNumberOfBotsTextInput_Text_2
struct UWBP_PracticeModeMenu_C_Get_DrillNumberOfBotsTextInput_Text_2_Params
{
	struct FText                                       ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function WBP_PracticeModeMenu.WBP_PracticeModeMenu_C.Get_DrillLengthTextInput_Text_2
struct UWBP_PracticeModeMenu_C_Get_DrillLengthTextInput_Text_2_Params
{
	struct FText                                       ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function WBP_PracticeModeMenu.WBP_PracticeModeMenu_C.Get_DrillSpawnDelayTExtInput_Text_2
struct UWBP_PracticeModeMenu_C_Get_DrillSpawnDelayTExtInput_Text_2_Params
{
	struct FText                                       ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function WBP_PracticeModeMenu.WBP_PracticeModeMenu_C.Get_DrillSpawnDelayTExtInput_Text_1
struct UWBP_PracticeModeMenu_C_Get_DrillSpawnDelayTExtInput_Text_1_Params
{
	struct FText                                       ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function WBP_PracticeModeMenu.WBP_PracticeModeMenu_C.RefreshSelectedDrillDisplay
struct UWBP_PracticeModeMenu_C_RefreshSelectedDrillDisplay_Params
{
};

// Function WBP_PracticeModeMenu.WBP_PracticeModeMenu_C.Get_DrillLengthTextInput_Text_1
struct UWBP_PracticeModeMenu_C_Get_DrillLengthTextInput_Text_1_Params
{
	struct FText                                       ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function WBP_PracticeModeMenu.WBP_PracticeModeMenu_C.Get_DrillNumberOfBotsTextInput_Text_1
struct UWBP_PracticeModeMenu_C_Get_DrillNumberOfBotsTextInput_Text_1_Params
{
	struct FText                                       ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function WBP_PracticeModeMenu.WBP_PracticeModeMenu_C.Get_DrillNameTextInput_Text_1
struct UWBP_PracticeModeMenu_C_Get_DrillNameTextInput_Text_1_Params
{
	struct FText                                       ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function WBP_PracticeModeMenu.WBP_PracticeModeMenu_C.UpdateRoutesInDrillCombo
struct UWBP_PracticeModeMenu_C_UpdateRoutesInDrillCombo_Params
{
	class UMAPracticeComponent*                        PracticeComponent;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_PracticeModeMenu.WBP_PracticeModeMenu_C.UpdateDrillsList
struct UWBP_PracticeModeMenu_C_UpdateDrillsList_Params
{
	class UMAPracticeComponent*                        PracticeComponent;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APlayerController*                           OwningPlayer;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_PracticeModeMenu.WBP_PracticeModeMenu_C.UpdateAvailableRoutesForDrillCombo
struct UWBP_PracticeModeMenu_C_UpdateAvailableRoutesForDrillCombo_Params
{
	class UMAPracticeComponent*                        PracticeComponent;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_PracticeModeMenu.WBP_PracticeModeMenu_C.OnKeyChar
struct UWBP_PracticeModeMenu_C_OnKeyChar_Params
{
	struct FGeometry                                   MyGeometry;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	struct FCharacterEvent                             InCharacterEvent;                                          // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FEventReply                                 ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function WBP_PracticeModeMenu.WBP_PracticeModeMenu_C.OnKeyUp
struct UWBP_PracticeModeMenu_C_OnKeyUp_Params
{
	struct FGeometry                                   MyGeometry;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	struct FKeyEvent                                   InKeyEvent;                                                // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FEventReply                                 ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function WBP_PracticeModeMenu.WBP_PracticeModeMenu_C.UpdateRouteList
struct UWBP_PracticeModeMenu_C_UpdateRouteList_Params
{
	class UMAPracticeComponent*                        PracticeComponent;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APlayerController*                           OwningPlayer;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_PracticeModeMenu.WBP_PracticeModeMenu_C.OnKeyDown
struct UWBP_PracticeModeMenu_C_OnKeyDown_Params
{
	struct FGeometry                                   MyGeometry;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	struct FKeyEvent                                   InKeyEvent;                                                // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FEventReply                                 ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function WBP_PracticeModeMenu.WBP_PracticeModeMenu_C.Get_RouteTrailDescriptionText_Text_1
struct UWBP_PracticeModeMenu_C_Get_RouteTrailDescriptionText_Text_1_Params
{
	struct FText                                       ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function WBP_PracticeModeMenu.WBP_PracticeModeMenu_C.Get_HitMarkersText_Text_1
struct UWBP_PracticeModeMenu_C_Get_HitMarkersText_Text_1_Params
{
	struct FText                                       ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function WBP_PracticeModeMenu.WBP_PracticeModeMenu_C.Get_TotalMarkersText_Text_1
struct UWBP_PracticeModeMenu_C_Get_TotalMarkersText_Text_1_Params
{
	struct FText                                       ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function WBP_PracticeModeMenu.WBP_PracticeModeMenu_C.Get_SelectedRouteTrailAverageSpeed_Text_1
struct UWBP_PracticeModeMenu_C_Get_SelectedRouteTrailAverageSpeed_Text_1_Params
{
	struct FText                                       ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function WBP_PracticeModeMenu.WBP_PracticeModeMenu_C.Get_SelectedRouteTrailMaxSpeed_Text_1
struct UWBP_PracticeModeMenu_C_Get_SelectedRouteTrailMaxSpeed_Text_1_Params
{
	struct FText                                       ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function WBP_PracticeModeMenu.WBP_PracticeModeMenu_C.Get_SelectedRouteTrailCaptureSpeed_Text_1
struct UWBP_PracticeModeMenu_C_Get_SelectedRouteTrailCaptureSpeed_Text_1_Params
{
	struct FText                                       ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function WBP_PracticeModeMenu.WBP_PracticeModeMenu_C.Get_SelectedRouteTrailTotalTime_Text_1
struct UWBP_PracticeModeMenu_C_Get_SelectedRouteTrailTotalTime_Text_1_Params
{
	struct FText                                       ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function WBP_PracticeModeMenu.WBP_PracticeModeMenu_C.Get_SelectedRouteTrailCaptureTIme_Text_1
struct UWBP_PracticeModeMenu_C_Get_SelectedRouteTrailCaptureTIme_Text_1_Params
{
	struct FText                                       ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function WBP_PracticeModeMenu.WBP_PracticeModeMenu_C.GetMAPracticeComponentForWidget
struct UWBP_PracticeModeMenu_C_GetMAPracticeComponentForWidget_Params
{
	class UMAPracticeComponent*                        MAPracticeComponent;                                       // (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_PracticeModeMenu.WBP_PracticeModeMenu_C.Get_SelectedRouteTrailGrabTime_Text_1
struct UWBP_PracticeModeMenu_C_Get_SelectedRouteTrailGrabTime_Text_1_Params
{
	struct FText                                       ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function WBP_PracticeModeMenu.WBP_PracticeModeMenu_C.Get_SelectedRouteTrailGrabSpeed_Text_1
struct UWBP_PracticeModeMenu_C_Get_SelectedRouteTrailGrabSpeed_Text_1_Params
{
	struct FText                                       ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function WBP_PracticeModeMenu.WBP_PracticeModeMenu_C.Get_SelectedRouteTrailName_Text_1
struct UWBP_PracticeModeMenu_C_Get_SelectedRouteTrailName_Text_1_Params
{
	struct FText                                       ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function WBP_PracticeModeMenu.WBP_PracticeModeMenu_C.Get_RouteNamesText_Text_1
struct UWBP_PracticeModeMenu_C_Get_RouteNamesText_Text_1_Params
{
};

// Function WBP_PracticeModeMenu.WBP_PracticeModeMenu_C.BndEvt__LoadRoutesFromFileButton_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature
struct UWBP_PracticeModeMenu_C_BndEvt__LoadRoutesFromFileButton_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function WBP_PracticeModeMenu.WBP_PracticeModeMenu_C.BndEvt__SaveRouteTrailButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
struct UWBP_PracticeModeMenu_C_BndEvt__SaveRouteTrailButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function WBP_PracticeModeMenu.WBP_PracticeModeMenu_C.BndEvt__SaveRoutesToFileButton_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature
struct UWBP_PracticeModeMenu_C_BndEvt__SaveRoutesToFileButton_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function WBP_PracticeModeMenu.WBP_PracticeModeMenu_C.BndEvt__LoadSingleRouteTrailButton_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature
struct UWBP_PracticeModeMenu_C_BndEvt__LoadSingleRouteTrailButton_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function WBP_PracticeModeMenu.WBP_PracticeModeMenu_C.BndEvt__CloseButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
struct UWBP_PracticeModeMenu_C_BndEvt__CloseButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function WBP_PracticeModeMenu.WBP_PracticeModeMenu_C.BndEvt__GoToRouteTrailStartButton_K2Node_ComponentBoundEvent_6_OnButtonClickedEvent__DelegateSignature
struct UWBP_PracticeModeMenu_C_BndEvt__GoToRouteTrailStartButton_K2Node_ComponentBoundEvent_6_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function WBP_PracticeModeMenu.WBP_PracticeModeMenu_C.BndEvt__GoToMarkerButton_K2Node_ComponentBoundEvent_7_OnButtonClickedEvent__DelegateSignature
struct UWBP_PracticeModeMenu_C_BndEvt__GoToMarkerButton_K2Node_ComponentBoundEvent_7_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function WBP_PracticeModeMenu.WBP_PracticeModeMenu_C.BndEvt__GoToRouteTrailGrabButton_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature
struct UWBP_PracticeModeMenu_C_BndEvt__GoToRouteTrailGrabButton_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function WBP_PracticeModeMenu.WBP_PracticeModeMenu_C.BndEvt__PositionMarkerTextInput_K2Node_ComponentBoundEvent_8_OnEditableTextBoxChangedEvent__DelegateSignature
struct UWBP_PracticeModeMenu_C_BndEvt__PositionMarkerTextInput_K2Node_ComponentBoundEvent_8_OnEditableTextBoxChangedEvent__DelegateSignature_Params
{
	struct FText                                       Text;                                                      // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function WBP_PracticeModeMenu.WBP_PracticeModeMenu_C.BndEvt__Button_2_K2Node_ComponentBoundEvent_9_OnButtonClickedEvent__DelegateSignature
struct UWBP_PracticeModeMenu_C_BndEvt__Button_2_K2Node_ComponentBoundEvent_9_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function WBP_PracticeModeMenu.WBP_PracticeModeMenu_C.BndEvt__GoToNextMarkerButton_K2Node_ComponentBoundEvent_10_OnButtonClickedEvent__DelegateSignature
struct UWBP_PracticeModeMenu_C_BndEvt__GoToNextMarkerButton_K2Node_ComponentBoundEvent_10_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function WBP_PracticeModeMenu.WBP_PracticeModeMenu_C.BndEvt__EasyButton_K2Node_ComponentBoundEvent_11_OnButtonClickedEvent__DelegateSignature
struct UWBP_PracticeModeMenu_C_BndEvt__EasyButton_K2Node_ComponentBoundEvent_11_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function WBP_PracticeModeMenu.WBP_PracticeModeMenu_C.BndEvt__MediumButton_K2Node_ComponentBoundEvent_12_OnButtonClickedEvent__DelegateSignature
struct UWBP_PracticeModeMenu_C_BndEvt__MediumButton_K2Node_ComponentBoundEvent_12_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function WBP_PracticeModeMenu.WBP_PracticeModeMenu_C.BndEvt__ExpertButton_K2Node_ComponentBoundEvent_13_OnButtonClickedEvent__DelegateSignature
struct UWBP_PracticeModeMenu_C_BndEvt__ExpertButton_K2Node_ComponentBoundEvent_13_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function WBP_PracticeModeMenu.WBP_PracticeModeMenu_C.BndEvt__HideRoutesButton_K2Node_ComponentBoundEvent_16_OnButtonClickedEvent__DelegateSignature
struct UWBP_PracticeModeMenu_C_BndEvt__HideRoutesButton_K2Node_ComponentBoundEvent_16_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function WBP_PracticeModeMenu.WBP_PracticeModeMenu_C.BndEvt__AutoFollowButton_K2Node_ComponentBoundEvent_17_OnButtonClickedEvent__DelegateSignature
struct UWBP_PracticeModeMenu_C_BndEvt__AutoFollowButton_K2Node_ComponentBoundEvent_17_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function WBP_PracticeModeMenu.WBP_PracticeModeMenu_C.BndEvt__SpawnBotButton_K2Node_ComponentBoundEvent_18_OnButtonClickedEvent__DelegateSignature
struct UWBP_PracticeModeMenu_C_BndEvt__SpawnBotButton_K2Node_ComponentBoundEvent_18_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function WBP_PracticeModeMenu.WBP_PracticeModeMenu_C.OnInitialized
struct UWBP_PracticeModeMenu_C_OnInitialized_Params
{
};

// Function WBP_PracticeModeMenu.WBP_PracticeModeMenu_C.OnTogglePracticeMenu
struct UWBP_PracticeModeMenu_C_OnTogglePracticeMenu_Params
{
};

// Function WBP_PracticeModeMenu.WBP_PracticeModeMenu_C.BndEvt__ShowDrillsButton_K2Node_ComponentBoundEvent_20_OnButtonClickedEvent__DelegateSignature
struct UWBP_PracticeModeMenu_C_BndEvt__ShowDrillsButton_K2Node_ComponentBoundEvent_20_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function WBP_PracticeModeMenu.WBP_PracticeModeMenu_C.BndEvt__ShowRoutesButton_K2Node_ComponentBoundEvent_23_OnButtonClickedEvent__DelegateSignature
struct UWBP_PracticeModeMenu_C_BndEvt__ShowRoutesButton_K2Node_ComponentBoundEvent_23_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function WBP_PracticeModeMenu.WBP_PracticeModeMenu_C.BndEvt__DrillNameTextInput_K2Node_ComponentBoundEvent_20_OnEditableTextBoxChangedEvent__DelegateSignature
struct UWBP_PracticeModeMenu_C_BndEvt__DrillNameTextInput_K2Node_ComponentBoundEvent_20_OnEditableTextBoxChangedEvent__DelegateSignature_Params
{
	struct FText                                       Text;                                                      // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function WBP_PracticeModeMenu.WBP_PracticeModeMenu_C.BndEvt__DrillDescriptionTextInput_K2Node_ComponentBoundEvent_22_OnMultiLineEditableTextBoxChangedEvent__DelegateSignature
struct UWBP_PracticeModeMenu_C_BndEvt__DrillDescriptionTextInput_K2Node_ComponentBoundEvent_22_OnMultiLineEditableTextBoxChangedEvent__DelegateSignature_Params
{
	struct FText                                       Text;                                                      // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function WBP_PracticeModeMenu.WBP_PracticeModeMenu_C.BndEvt__AddRouteToDrillButton_K2Node_ComponentBoundEvent_24_OnButtonClickedEvent__DelegateSignature
struct UWBP_PracticeModeMenu_C_BndEvt__AddRouteToDrillButton_K2Node_ComponentBoundEvent_24_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function WBP_PracticeModeMenu.WBP_PracticeModeMenu_C.BndEvt__RemoveRouteFromDrillButton_K2Node_ComponentBoundEvent_25_OnButtonClickedEvent__DelegateSignature
struct UWBP_PracticeModeMenu_C_BndEvt__RemoveRouteFromDrillButton_K2Node_ComponentBoundEvent_25_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function WBP_PracticeModeMenu.WBP_PracticeModeMenu_C.BndEvt__SaveRouteTrailButton_1_K2Node_ComponentBoundEvent_26_OnButtonClickedEvent__DelegateSignature
struct UWBP_PracticeModeMenu_C_BndEvt__SaveRouteTrailButton_1_K2Node_ComponentBoundEvent_26_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function WBP_PracticeModeMenu.WBP_PracticeModeMenu_C.BndEvt__DrillSpawnDelayTExtInput_K2Node_ComponentBoundEvent_27_OnEditableTextBoxChangedEvent__DelegateSignature
struct UWBP_PracticeModeMenu_C_BndEvt__DrillSpawnDelayTExtInput_K2Node_ComponentBoundEvent_27_OnEditableTextBoxChangedEvent__DelegateSignature_Params
{
	struct FText                                       Text;                                                      // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function WBP_PracticeModeMenu.WBP_PracticeModeMenu_C.BndEvt__DrillLengthTextInput_K2Node_ComponentBoundEvent_28_OnEditableTextBoxChangedEvent__DelegateSignature
struct UWBP_PracticeModeMenu_C_BndEvt__DrillLengthTextInput_K2Node_ComponentBoundEvent_28_OnEditableTextBoxChangedEvent__DelegateSignature_Params
{
	struct FText                                       Text;                                                      // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function WBP_PracticeModeMenu.WBP_PracticeModeMenu_C.BndEvt__DrillNumberOfBotsTextInput_K2Node_ComponentBoundEvent_29_OnEditableTextBoxChangedEvent__DelegateSignature
struct UWBP_PracticeModeMenu_C_BndEvt__DrillNumberOfBotsTextInput_K2Node_ComponentBoundEvent_29_OnEditableTextBoxChangedEvent__DelegateSignature_Params
{
	struct FText                                       Text;                                                      // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function WBP_PracticeModeMenu.WBP_PracticeModeMenu_C.BndEvt__VictoryTypeCombo_K2Node_ComponentBoundEvent_30_OnSelectionChangedEvent__DelegateSignature
struct UWBP_PracticeModeMenu_C_BndEvt__VictoryTypeCombo_K2Node_ComponentBoundEvent_30_OnSelectionChangedEvent__DelegateSignature_Params
{
	struct FString                                     SelectedItem;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	TEnumAsByte<SlateCore_ESelectInfo>                 SelectionType;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_PracticeModeMenu.WBP_PracticeModeMenu_C.BndEvt__BotSpawnTypeCombo_K2Node_ComponentBoundEvent_31_OnSelectionChangedEvent__DelegateSignature
struct UWBP_PracticeModeMenu_C_BndEvt__BotSpawnTypeCombo_K2Node_ComponentBoundEvent_31_OnSelectionChangedEvent__DelegateSignature_Params
{
	struct FString                                     SelectedItem;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	TEnumAsByte<SlateCore_ESelectInfo>                 SelectionType;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_PracticeModeMenu.WBP_PracticeModeMenu_C.BndEvt__ResetFlagsCheckbox_K2Node_ComponentBoundEvent_32_OnCheckBoxComponentStateChanged__DelegateSignature
struct UWBP_PracticeModeMenu_C_BndEvt__ResetFlagsCheckbox_K2Node_ComponentBoundEvent_32_OnCheckBoxComponentStateChanged__DelegateSignature_Params
{
	bool                                               bIsChecked;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function WBP_PracticeModeMenu.WBP_PracticeModeMenu_C.BndEvt__BotsTakeDamageCheckbox_K2Node_ComponentBoundEvent_33_OnCheckBoxComponentStateChanged__DelegateSignature
struct UWBP_PracticeModeMenu_C_BndEvt__BotsTakeDamageCheckbox_K2Node_ComponentBoundEvent_33_OnCheckBoxComponentStateChanged__DelegateSignature_Params
{
	bool                                               bIsChecked;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function WBP_PracticeModeMenu.WBP_PracticeModeMenu_C.BndEvt__BotsMovableCheckbox_K2Node_ComponentBoundEvent_34_OnCheckBoxComponentStateChanged__DelegateSignature
struct UWBP_PracticeModeMenu_C_BndEvt__BotsMovableCheckbox_K2Node_ComponentBoundEvent_34_OnCheckBoxComponentStateChanged__DelegateSignature_Params
{
	bool                                               bIsChecked;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function WBP_PracticeModeMenu.WBP_PracticeModeMenu_C.BndEvt__UseSavedPosition_K2Node_ComponentBoundEvent_19_OnButtonClickedEvent__DelegateSignature
struct UWBP_PracticeModeMenu_C_BndEvt__UseSavedPosition_K2Node_ComponentBoundEvent_19_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function WBP_PracticeModeMenu.WBP_PracticeModeMenu_C.BndEvt__VictoryAmountTextInput_K2Node_ComponentBoundEvent_35_OnEditableTextBoxChangedEvent__DelegateSignature
struct UWBP_PracticeModeMenu_C_BndEvt__VictoryAmountTextInput_K2Node_ComponentBoundEvent_35_OnEditableTextBoxChangedEvent__DelegateSignature_Params
{
	struct FText                                       Text;                                                      // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function WBP_PracticeModeMenu.WBP_PracticeModeMenu_C.ExecuteUbergraph_WBP_PracticeModeMenu
struct UWBP_PracticeModeMenu_C_ExecuteUbergraph_WBP_PracticeModeMenu_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
