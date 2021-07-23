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

// WidgetBlueprintGeneratedClass WBP_PartyPlayerRow.WBP_PartyPlayerRow_C
// 0x00E9 (FullSize[0x0321] - InheritedSize[0x0238])
class UWBP_PartyPlayerRow_C : public UUserWidget
{
public:
	class UButton*                                     ButtonGiveLeader;                                          // 0x0238(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                                     ButtonKickOrAdd;                                           // 0x0240(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                      Img_Avatar;                                                // 0x0248(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                      LockImage;                                                 // 0x0250(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                                  TxtDisplayName;                                            // 0x0258(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                                  TxtInviteFriend;                                           // 0x0260(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCircularThrobber*                           WaitingCircularThrobber;                                   // 0x0268(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_PartyFriends_C*                         WBP_PartyFriends;                                          // 0x0270(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FString                                     Gametype;                                                  // 0x0278(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)
	struct FString                                     Map;                                                       // 0x0288(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)
	struct FString                                     Rules;                                                     // 0x0298(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)
	struct FSlateColor                                 Background;                                                // 0x02A8(0x0028) (Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                               Selected;                                                  // 0x02D0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_3UE6[0x7];                                     // 0x02D1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UWBP_PartyPlayer_C*                          PartyPlayer;                                               // 0x02D8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	class ASteamBeaconPlayerState*                     SteamBeaconPlayerState;                                    // 0x02E0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FUniqueNetIdRepl                            UniqueNetIdRepl;                                           // 0x02E8(0x0028) (Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	TEnumAsByte<PartySlotStatus_EPartySlotStatus>      PartySlotStatus;                                           // 0x0310(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_GSTR[0x7];                                     // 0x0311(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UWBP_KickPlayer_C*                           WBP_KickPlayer;                                            // 0x0318(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<E_PartyPlayerState_E_PartyPlayerState> PartyState;                                                // 0x0320(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr){
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WBP_PartyPlayerRow.WBP_PartyPlayerRow_C");
		}
		return ptr;
	}



	void ReserveSlot(const struct FSteamFriendInfo& SteamFriend);
	void IsEmpty(bool* IsEmptyReturn);
	void SetPlayerState(class ASteamBeaconPlayerState* SteamBeaconPlayerState);
	void IsInvited(class ASteamBeaconPlayerState* BeaconPlayerStates, bool* ret);
	void UpdatePlayerState(class ASteamBeaconPlayerState* SteamBeaconPlayerState);
	void Clear();
	void HideParyFriendWidget();
	void CheckEmptySlot(bool IsALeader);
	void Unselect();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
