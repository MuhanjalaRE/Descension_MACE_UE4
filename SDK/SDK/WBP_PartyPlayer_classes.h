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

// WidgetBlueprintGeneratedClass WBP_PartyPlayer.WBP_PartyPlayer_C
// 0x00C1 (FullSize[0x02F9] - InheritedSize[0x0238])
class UWBP_PartyPlayer_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0238(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UButton*                                     ButtonFindGame;                                            // 0x0240(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                                     ButtonMatchOptions;                                        // 0x0248(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCheckBox*                                   CheckBoxArena;                                             // 0x0250(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCheckBox*                                   CheckBoxBaseCTF;                                           // 0x0258(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCheckBox*                                   CheckBoxLightCTF;                                          // 0x0260(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCheckBox*                                   CheckBoxNonOfficialServer;                                 // 0x0268(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCheckBox*                                   CheckBoxWarmup;                                            // 0x0270(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMenuAnchor*                                 MenuAnchor_1;                                              // 0x0278(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                                  TextFindGame;                                              // 0x0280(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_PartyPlayerRow_C*                       WBP_PartyPlayerRow;                                        // 0x0288(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_PartyPlayerRow_C*                       WBP_PartyPlayerRow_1;                                      // 0x0290(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_PartyPlayerRow_C*                       WBP_PartyPlayerRow_2;                                      // 0x0298(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_PartyPlayerRow_C*                       WBP_PartyPlayerRow_3;                                      // 0x02A0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FScriptMulticastDelegate                    On_Player_Selected;                                        // 0x02A8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	TArray<TEnumAsByte<MidairCE_EMAMatchType>>         MatchType;                                                 // 0x02B8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	class UWBP_PlayPanel_C*                            Parent;                                                    // 0x02C8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ASteamBeaconState*                           PartyBeaconState;                                          // 0x02D0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	SteamParty_EPartyStatus                            CurrentPartyStatus;                                        // 0x02D8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_O87R[0x7];                                     // 0x02D9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UWBP_PartyPlayerRow_C*                       SelectedPartyPlayerRow;                                    // 0x02E0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class UWBP_PartyPlayerRow_C*>               PartyPlayerRowArray;                                       // 0x02E8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, ContainsInstancedReference)
	TEnumAsByte<E_PartyPlayerState_E_PartyPlayerState> PartyState;                                                // 0x02F8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr){
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WBP_PartyPlayer.WBP_PartyPlayer_C");
		}
		return ptr;
	}



	void UpdateMatchTypes();
	struct FText Get_TextFindGame_Text_1();
	void IsLeader(bool* Return);
	void IsUpdated(class ASteamBeaconPlayerState* BeaconPlayerState, bool* Return);
	void UpdateEmptySlot(class ASteamBeaconPlayerState* BeaconPlayerState);
	void UpdateReservedSlot(class ASteamBeaconPlayerState* BeaconPlayerState, bool* Return);
	void LeftPlayer(class ASteamBeaconPlayerState* SteamBeaconPlayerState);
	void UpdateCurrentPatryStatus();
	void ClearAllMembers();
	void HideParyFriendWidgets();
	void PartyStateChanged();
	void UpdatePartyPanel();
	void SetSelectedPlayer(class UWBP_PartyPlayerRow_C* PartyPlayerRow);
	void Construct();
	void BndEvt__ButtonFindGame_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature();
	void OnLobbyChatUpdate_Event_1(TEnumAsByte<MidairCE_EMAMatchType> MatchType, TEnumAsByte<MidairCE_EMAChatMemberStateChange> ChatMemberStateChange, const struct FPlayerInfo& PlayerInfo);
	void BndEvt__ButtonMatchOptions_K2Node_ComponentBoundEvent_76_OnButtonClickedEvent__DelegateSignature();
	void OnPartyPlayerStateChangedDelegate();
	void OnPartyPlayerClearDelegate();
	void OnPartyPlayerJoinDelegate(class ASteamBeaconPlayerState* SteamBeaconPlayerState);
	void OnPartyPlayerLeftDelegate(class ASteamBeaconPlayerState* SteamBeaconPlayerState);
	void ExecuteUbergraph_WBP_PartyPlayer(int EntryPoint);
	void On_Player_Selected__DelegateSignature(class APlayerState* Player);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
