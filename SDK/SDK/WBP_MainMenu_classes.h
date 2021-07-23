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

// WidgetBlueprintGeneratedClass WBP_MainMenu.WBP_MainMenu_C
// 0x02A0 (FullSize[0x04D8] - InheritedSize[0x0238])
class UWBP_MainMenu_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0238(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UBorder*                                     Border_1;                                                  // 0x0240(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_SelectableButtonWithText_C*             ChangeMapButton;                                           // 0x0248(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_SelectableButtonWithText_C*             ChangeTeamButton;                                          // 0x0250(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UNamedSlot*                                  ChatWidgetSlot;                                            // 0x0258(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_SelectableButtonWithText_C*             ClanButton;                                                // 0x0260(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHorizontalBox*                              ClanPanelMenu;                                             // 0x0268(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_CosmeticPanel_C*                        CosmeticPanel;                                             // 0x0270(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_SelectableButtonWithText_C*             CustomizeButton;                                           // 0x0278(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHorizontalBox*                              CustomizePanelMenu;                                        // 0x0280(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBorder*                                     DefaultBackground;                                         // 0x0288(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_SelectableButtonWithText_C*             DisablePracticeModeButton;                                 // 0x0290(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                                    DisablePracticeModeSizeBox;                                // 0x0298(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_SelectableButtonWithText_C*             DisableTournamentModeButton;                               // 0x02A0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                                    DisableTournamentModeSizeBox;                              // 0x02A8(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                                    EnablePracticeModeSizeGroup;                               // 0x02B0(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_SelectableButtonWithIcon_C*             ExitButton;                                                // 0x02B8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                                ExitOptions;                                               // 0x02C0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_SelectableButtonWithText_C*             LeaderboardsButton;                                        // 0x02C8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_SelectableButtonWithText_C*             LoadoutsButton;                                            // 0x02D0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UNamedSlot*                                  LoadoutsPanelSlot;                                         // 0x02D8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHorizontalBox*                              LootPanelMenu;                                             // 0x02E0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                             MainPanelMenuSwitcher;                                     // 0x02E8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_SelectableButtonWithText_C*             MatchHistoryButton;                                        // 0x02F0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_SelectableButtonWithText_C*             MatchMakingButton;                                         // 0x02F8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                                MatchMenu;                                                 // 0x0300(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMenuAnchor*                                 MenuAnchor;                                                // 0x0308(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMenuAnchor*                                 MenuAnchor_2;                                              // 0x0310(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMenuAnchor*                                 MenuAnchor_3;                                              // 0x0318(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMenuAnchor*                                 MenuAnchor_5;                                              // 0x0320(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMenuAnchor*                                 MenuAnchor_6;                                              // 0x0328(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMenuAnchor*                                 MenuAnchor_8;                                              // 0x0330(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_SelectableButtonWithText_C*             MyClanButton;                                              // 0x0338(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_SelectableButtonWithText_C*             MyInvitesButton;                                           // 0x0340(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                                NonPRMatchMenu;                                            // 0x0348(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_SelectableButtonWithText_C*             OpenLootButton;                                            // 0x0350(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_SelectableButtonWithText_C*             PlayButton;                                                // 0x0358(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_SelectableButtonWithText_C*             PlayerButton;                                              // 0x0360(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_SelectableButtonWithText_C*             PlayerListButton;                                          // 0x0368(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_PlayPanel_C*                            PlayPanel;                                                 // 0x0370(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHorizontalBox*                              PlayPanelMenu;                                             // 0x0378(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_SelectableButtonWithText_C*             PracticeModeButton;                                        // 0x0380(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_SelectableButtonWithText_C*             QuickPlayButton;                                           // 0x0388(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_SelectableButtonWithText_C*             ReportButton;                                              // 0x0390(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_SelectableButtonWithText_C*             ServersButton;                                             // 0x0398(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBorder*                                     ServiceFailedOSS;                                          // 0x03A0(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBorder*                                     ServiceFailedRetrying;                                     // 0x03A8(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_SelectableButtonWithIcon_C*             SettingsButton;                                            // 0x03B0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_SettingsMenu_C*                         SettingsMenu;                                              // 0x03B8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_SelectableButtonWithText_C*             SpectateButton;                                            // 0x03C0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_SelectableButtonWithText_C*             SpraysButton;                                              // 0x03C8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_SelectableButtonWithText_C*             StatsButton;                                               // 0x03D0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_StatsPanel_C*                           StatsPanel;                                                // 0x03D8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHorizontalBox*                              StatsPanelMenu;                                            // 0x03E0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_SelectableButtonWithText_C*             StoreButton;                                               // 0x03E8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_SelectableButtonWithText_C*             TournamentModeButton;                                      // 0x03F0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                                    TournamentModeSizeBox;                                     // 0x03F8(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_SelectableButtonWithText_C*             TutorialsButton;                                           // 0x0400(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBorder*                                     UpdateAvailable;                                           // 0x0408(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                                  VersionNumber;                                             // 0x0410(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_SelectableButtonWithText_C*             VoteAdminButton;                                           // 0x0418(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Chat_C*                                 WBP_Chat;                                                  // 0x0420(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_LoadoutsPanel_C*                        WBP_LoadoutsPanel;                                         // 0x0428(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Party_C*                                WBP_Party;                                                 // 0x0430(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                             WidgetSwitcherRight;                                       // 0x0438(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	bool                                               IsInMatch;                                                 // 0x0440(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_GWKA[0x3];                                     // 0x0441(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FLinearColor                                ColorServiceError;                                         // 0x0444(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                                ColorServiceWarning;                                       // 0x0454(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_MPZT[0x4];                                     // 0x0464(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UUserWidget*                                 UserReportWidget;                                          // 0x0468(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWBP_MidmatchVoteDisplay_C*                  MidmatchVoteDisplay;                                       // 0x0470(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWBP_MidairCombobox_C*                       MidmatchVoteComboBox;                                      // 0x0478(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               HasMouse;                                                  // 0x0480(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_SP1W[0x7];                                     // 0x0481(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UWBP_ServerPassword_C*                       WBP_ServerPassword;                                        // 0x0488(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               AlreadyOnPlay;                                             // 0x0490(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_YUXO[0x7];                                     // 0x0491(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UObject*                                     Progression_Save_Cache;                                    // 0x0498(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAudioComponent*                             InGameMusic;                                               // 0x04A0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              InGameMusicVolume;                                         // 0x04A8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_ZLZH[0x4];                                     // 0x04AC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UWBP_ConfirmWithMatchTimer_C*                LastConfirmationDialog;                                    // 0x04B0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWBP_ConfirmWithMatchTimer_C*                ExitToDesktopConfirmationDialog;                           // 0x04B8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWBP_PlayerList_C*                           PlayerList;                                                // 0x04C0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FString>                             PlayerNames;                                               // 0x04C8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr){
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WBP_MainMenu.WBP_MainMenu_C");
		}
		return ptr;
	}



	bool HandleDirectNamedHotkey(const struct FString& Hotkey);
	bool HandleNamedHotkeyWithInt(const struct FString& Hotkey, int Int);
	UMG_ESlateVisibility Get_TournamentModeSizeBox_Visibility_1();
	UMG_ESlateVisibility Get_DisableTournamentModeSizeBox_Visibility_1();
	UMG_ESlateVisibility Get_EnablePracticeModeSizeGroup_Visibility_1();
	UMG_ESlateVisibility Get_DisablePracticeModeSizeBox_Visibility_1();
	UMG_ESlateVisibility Get_SizeBox_13_Visibility_1();
	UMG_ESlateVisibility Get_PracticeModeButton_Visibility_1();
	bool Get_TournamentModeButton_bIsEnabled_1();
	UMG_ESlateVisibility GetVisibility_2();
	void PopulateAvatars();
	void CleanupConfirmations();
	void PopulateSprays();
	UMG_ESlateVisibility Get_DefaultBackground_Visibility_1();
	void Setup_Gamemode_Button(class UWBP_SelectableButton_C* Button, const struct FString& Gamemode_Prefix, bool Default);
	void SetOpacityOnBorder(class UBorder* InputPin, float A);
	void AddHangToast(const struct FText& Message);
	struct FEventReply OnPreviewMouseButtonDown(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent);
	void AddConfirmationDialog(const struct FText& PromptText, struct FScriptDelegate* Event);
	void AddExitOptionAndBindDelegate(const struct FText& Button_Text, struct FScriptDelegate* Event);
	UMG_ESlateVisibility GetExitOptionsBorderVisibility();
	struct FText Get_TextBlock_13_Text_1();
	UMG_ESlateVisibility Get_MainPanelMenuSwitcher_Visibility_1();
	UMG_ESlateVisibility Get_NonPRMatchMenu_Visibility_1();
	class UWidget* OnGetMenuContent_1();
	class UWidget* OnGenerateWidget_1(const struct FString& Item);
	UMG_ESlateVisibility Get_ServiceFailedRetrying_Visibility_1();
	UMG_ESlateVisibility Get_ServiceFailedOSS_Visibility_1();
	UMG_ESlateVisibility Get_UpdateAvailable_Visibility_1();
	UMG_ESlateVisibility GetVisibility_1();
	struct FText GetText_2();
	bool Get_VoteEndmatch_bIsEnabled_1();
	struct FText GetText_1();
	void SwitchToCustomizeTab();
	void Construct();
	void Fade_to_Background_Level();
	void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
	void MidmatchVoteSelectionMade(int Selection, const struct FString& DisplayString);
	void JoinFromPassword(const struct FText& Password);
	void OnInputJoinPassword_Event_1(const struct FString& RichPresence);
	void Destruct();
	void Switch_To_Stats();
	void Switch_to_Loadouts();
	void Switch_To_Play();
	void ToggleMenu();
	void ExitGame();
	void ReturnToMenu();
	void Get_Confirmation_Exit_Desktop(class UWBP_SelectableButton_C* Clicked_Button);
	void Return_To_Match(class UWBP_SelectableButton_C* Clicked_Button);
	void Get_Confirmation_Exit_Match(class UWBP_SelectableButton_C* Clicked_Button);
	void CleanupExitOptions();
	void BndEvt__WBP_SelectableButton2_K2Node_ComponentBoundEvent_499_ButtonClicked__DelegateSignature(class UWBP_SelectableButton_C* Clicked_Button);
	void BndEvt__WBP_SelectableButton2_0_K2Node_ComponentBoundEvent_508_ButtonClicked__DelegateSignature(class UWBP_SelectableButton_C* Clicked_Button);
	void BndEvt__WBP_SelectableButton2_1_K2Node_ComponentBoundEvent_539_ButtonClicked__DelegateSignature(class UWBP_SelectableButton_C* Clicked_Button);
	void BndEvt__WBP_SelectableButton2_K2Node_ComponentBoundEvent_954_ButtonClicked__DelegateSignature(class UWBP_SelectableButton_C* Clicked_Button);
	void BndEvt__TutorialsButton_K2Node_ComponentBoundEvent_1636_ButtonClicked__DelegateSignature(class UWBP_SelectableButton_C* Clicked_Button);
	void BndEvt__MatchMakingButton_K2Node_ComponentBoundEvent_1645_ButtonClicked__DelegateSignature(class UWBP_SelectableButton_C* Clicked_Button);
	void BndEvt__ServersButton_K2Node_ComponentBoundEvent_1676_ButtonClicked__DelegateSignature(class UWBP_SelectableButton_C* Clicked_Button);
	void BndEvt__PlayerButton_K2Node_ComponentBoundEvent_1993_ButtonClicked__DelegateSignature(class UWBP_SelectableButton_C* Clicked_Button);
	void BndEvt__MatchHistoryButton_K2Node_ComponentBoundEvent_2026_ButtonClicked__DelegateSignature(class UWBP_SelectableButton_C* Clicked_Button);
	void BndEvt__LeaderboardsButton_K2Node_ComponentBoundEvent_2060_ButtonClicked__DelegateSignature(class UWBP_SelectableButton_C* Clicked_Button);
	void Main_Menu_Button_Selected(class UWBP_SelectableButton_C* Selected_Button);
	void Switch_to_Tutorials();
	void Switch_to_Servers();
	void Switch_to_Match_History();
	void Play_Menu_Button_Selected(class UWBP_SelectableButton_C* Selected_Button);
	void Stats_Menu_Button_Selected(class UWBP_SelectableButton_C* Selected_Button);
	void BndEvt__WBP_SelectableButton2_K2Node_ComponentBoundEvent_3364_ButtonClicked__DelegateSignature(class UWBP_SelectableButton_C* Clicked_Button);
	void BndEvt__WBP_SelectableButton2_1_K2Node_ComponentBoundEvent_3477_ButtonClicked__DelegateSignature(class UWBP_SelectableButton_C* Clicked_Button);
	void BndEvt__WBP_SelectableButton2_2_K2Node_ComponentBoundEvent_3509_ButtonClicked__DelegateSignature(class UWBP_SelectableButton_C* Clicked_Button);
	void BndEvt__WBP_SelectableButton2_0_K2Node_ComponentBoundEvent_3446_ButtonClicked__DelegateSignature(class UWBP_SelectableButton_C* Clicked_Button);
	void BndEvt__WBP_SelectableButton2_K2Node_ComponentBoundEvent_3959_ButtonClicked__DelegateSignature(class UWBP_SelectableButton_C* Clicked_Button);
	void BndEvt__ExitButton_K2Node_ComponentBoundEvent_4350_ButtonClicked__DelegateSignature(class UWBP_SelectableButton_C* Clicked_Button);
	void BndEvt__SettingsButton_K2Node_ComponentBoundEvent_4341_ButtonClicked__DelegateSignature(class UWBP_SelectableButton_C* Clicked_Button);
	void Switch_to_Customize();
	void Customize_Menu_Button_Selected(class UWBP_SelectableButton_C* Selected_Button);
	void BndEvt__ProgressionPanel_K2Node_ComponentBoundEvent_0_BackToLoadouts__DelegateSignature();
	void BndEvt__WBP_SelectableButtonWithText_C_4_K2Node_ComponentBoundEvent_257_ButtonClicked__DelegateSignature(class UWBP_SelectableButton_C* Clicked_Button);
	void BndEvt__SpraysButton_K2Node_ComponentBoundEvent_32_ButtonClicked__DelegateSignature(class UWBP_SelectableButton_C* Clicked_Button);
	void In_Game_Music_Loop();
	void BndEvt__TournamentModeButton_K2Node_ComponentBoundEvent_0_ButtonClicked__DelegateSignature(class UWBP_SelectableButton_C* Clicked_Button);
	void BndEvt__ChangeMapButton_1_K2Node_ComponentBoundEvent_1_ButtonClicked__DelegateSignature(class UWBP_SelectableButton_C* Clicked_Button);
	void CustomEvent(int Selection, const struct FString& DisplayString);
	void BndEvt__QuickPlayButton_K2Node_ComponentBoundEvent_3_ButtonClicked__DelegateSignature(class UWBP_SelectableButton_C* Clicked_Button);
	void Switch_To_QuickPlay();
	void BndEvt__PracticeModeButton_K2Node_ComponentBoundEvent_6_ButtonClicked__DelegateSignature(class UWBP_SelectableButton_C* Clicked_Button);
	void BndEvt__DisableTournamentModeButton_K2Node_ComponentBoundEvent_0_ButtonClicked__DelegateSignature(class UWBP_SelectableButton_C* Clicked_Button);
	void BndEvt__DisablePracticeModeButton_K2Node_ComponentBoundEvent_5_ButtonClicked__DelegateSignature(class UWBP_SelectableButton_C* Clicked_Button);
	void ExecuteUbergraph_WBP_MainMenu(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
