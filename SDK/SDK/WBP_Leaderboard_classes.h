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

// WidgetBlueprintGeneratedClass WBP_Leaderboard.WBP_Leaderboard_C
// 0x00A0 (FullSize[0x02D8] - InheritedSize[0x0238])
class UWBP_Leaderboard_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0238(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UVerticalBox*                                PlayersBox;                                                // 0x0240(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UScrollBox*                                  ScrollBox_1;                                               // 0x0248(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UThrobber*                                   Throbber_50;                                               // 0x0250(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                                  Title;                                                     // 0x0258(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_SelectableTextButton_C*                 WBP_SelectableTextButton;                                  // 0x0260(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FText                                       Title_Text;                                                // 0x0268(0x0018) (Edit, BlueprintVisible)
	TEnumAsByte<MidairCE_EMALeaderboardRequest>        Leaderboard_Request_Type;                                  // 0x0280(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_SZJZ[0x3];                                     // 0x0281(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                Entries_to_Load;                                           // 0x0284(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                Entry_Index;                                               // 0x0288(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                Entry_Count;                                               // 0x028C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FName                                       GameMode;                                                  // 0x0290(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FName                                       LeaderBoardName;                                           // 0x0298(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               IsRefresh;                                                 // 0x02A0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_26GT[0x7];                                     // 0x02A1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UAudioComponent*                             Scrollbox_Scrolling_Loop;                                  // 0x02A8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              ScrollingLoopUpdatePeriod;                                 // 0x02B0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_95LE[0x4];                                     // 0x02B4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FTimerHandle                                ScrollingLoopUpdateTimer;                                  // 0x02B8(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                                  Scrolling_Sound;                                           // 0x02C0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               bHasExistedForSomeTime;                                    // 0x02C8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_MSUU[0x7];                                     // 0x02C9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UWBP_LeaderBoardRow_C*                       PlayerRow;                                                 // 0x02D0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr){
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WBP_Leaderboard.WBP_Leaderboard_C");
		}
		return ptr;
	}



	void Set_Selected_Player(class UWBP_LeaderBoardRow_C* Player_Row);
	void SetLeaderboardSeasonAndGameMode(const struct FName& GameMode, TEnumAsByte<MidairCE_EMALeaderboardRequest> LeaderBoardRequestType);
	UMG_ESlateVisibility GetVisibility_1();
	void Validate_Entry_Index(int Entry_Count);
	void OnFail_5D0BD61349684A77B1F14281DB4BC02B(TArray<struct FSteamLeaderBoard> ScoreList, int EntryCount);
	void OnSuccess_5D0BD61349684A77B1F14281DB4BC02B(TArray<struct FSteamLeaderBoard> ScoreList, int EntryCount);
	void Populate(const struct FName& GameMode, TEnumAsByte<MidairCE_EMALeaderboardRequest> LeaderBoardRequestType);
	void PreConstruct(bool IsDesignTime);
	void Construct();
	void BndEvt__WBP_SelectableTextButton_K2Node_ComponentBoundEvent_21_ButtonClicked__DelegateSignature(class UWBP_SelectableButton_C* Clicked_Button);
	void BndEvt__ScrollBox_0_K2Node_ComponentBoundEvent_51_OnUserScrolledEvent__DelegateSignature(float CurrentOffset);
	void Cleanup_Loop();
	void ExecuteUbergraph_WBP_Leaderboard(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
