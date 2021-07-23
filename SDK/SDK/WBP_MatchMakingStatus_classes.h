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

// WidgetBlueprintGeneratedClass WBP_MatchMakingStatus.WBP_MatchMakingStatus_C
// 0x006E (FullSize[0x02CE] - InheritedSize[0x0260])
class UWBP_MatchMakingStatus_C : public UMatchMakingStatusWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0260(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UScrollBox*                                  ScrollBoxMatchType;                                        // 0x0268(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                                  TextLobbyStatus;                                           // 0x0270(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_MatchType_C*                            WBP_MatchType_1;                                           // 0x0278(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_MatchType_C*                            WBP_MatchType_2;                                           // 0x0280(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_MatchType_C*                            WBP_MatchType_3;                                           // 0x0288(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FSlateColor                                 Background;                                                // 0x0290(0x0028) (Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<struct FPlayerInfo>                         PlayerInfo;                                                // 0x02B8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	int                                                LobbyPlayerCount;                                          // 0x02C8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<MidairCE_EMAMatchLobbyStatus>          LobbyMatchStatus;                                          // 0x02CC(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<MidairCE_EMAMatchType>                 MatchType;                                                 // 0x02CD(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr){
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WBP_MatchMakingStatus.WBP_MatchMakingStatus_C");
		}
		return ptr;
	}



	void RefreshMatchType();
	void DeleteMatchType(TEnumAsByte<MidairCE_EMAMatchType> MatchType);
	void AddMatchType(TEnumAsByte<MidairCE_EMAMatchType> MatchType);
	void UpdateMatchType(TEnumAsByte<MidairCE_EMAMatchType> MatchType);
	UMG_ESlateVisibility GetVisibility_3();
	UMG_ESlateVisibility GetVisibility_2();
	UMG_ESlateVisibility GetVisibility_1();
	struct FText Get_TextLobbyStatus_Text_1();
	void Construct();
	void OnLobbyChatUpdate_Event_1(TEnumAsByte<MidairCE_EMAMatchType> MatchType, TEnumAsByte<MidairCE_EMAChatMemberStateChange> ChatMemberStateChange, const struct FPlayerInfo& PlayerInfo);
	void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
	void ExecuteUbergraph_WBP_MatchMakingStatus(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
