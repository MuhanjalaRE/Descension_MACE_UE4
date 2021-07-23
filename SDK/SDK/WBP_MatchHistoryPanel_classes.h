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

// WidgetBlueprintGeneratedClass WBP_MatchHistoryPanel.WBP_MatchHistoryPanel_C
// 0x0111 (FullSize[0x0349] - InheritedSize[0x0238])
class UWBP_MatchHistoryPanel_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0238(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UComplexStatusBar*                           ComplexStatusBar_1;                                        // 0x0240(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UComboBoxString*                             GameModeSelection;                                         // 0x0248(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                                MatchHistoryBox;                                           // 0x0250(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UScrollBox*                                  ScrollBox_1;                                               // 0x0258(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                                  TextAverageScore;                                          // 0x0260(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                                  TextLastMatches;                                           // 0x0268(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                                  TextPerMinuteScore;                                        // 0x0270(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                                  TextResults;                                               // 0x0278(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                                  TextWinRate;                                               // 0x0280(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UThrobber*                                   Throbber_50;                                               // 0x0288(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_MatchHistoryRow_C*                      WBP_MatchHistoryRow;                                       // 0x0290(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_MatchHistoryRow_C*                      WBP_MatchHistoryRow_96;                                    // 0x0298(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_MatchHistoryRow_C*                      WBP_MatchHistoryRow_173;                                   // 0x02A0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_MatchHistoryRow_C*                      Selected_Match;                                            // 0x02A8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FMatchHistory>                       MatchHistory;                                              // 0x02B0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	struct FPlayerStats                                PlayerStats;                                               // 0x02C0(0x0040) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FName                                       GameMode;                                                  // 0x0300(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                TotalWin;                                                  // 0x0308(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                TotalLose;                                                 // 0x030C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                TotalTie;                                                  // 0x0310(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                TotalTime;                                                 // 0x0314(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                TotalScore;                                                // 0x0318(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                MatchRequestCount;                                         // 0x031C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                TotalMatchCount;                                           // 0x0320(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_34YT[0x4];                                     // 0x0324(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UAudioComponent*                             Scrollbox_Scrolling_Loop;                                  // 0x0328(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                                  Scrolling_Sound;                                           // 0x0330(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              ScrollingLoopUpdatePeriod;                                 // 0x0338(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_UK44[0x4];                                     // 0x033C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FTimerHandle                                ScrollingLoopUpdateTimer;                                  // 0x0340(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	bool                                               bHasExistedForSomeTime;                                    // 0x0348(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr){
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WBP_MatchHistoryPanel.WBP_MatchHistoryPanel_C");
		}
		return ptr;
	}



	float GetMaxValue2_1();
	float GetMaxValue1_1();
	void UpdateStatistics();
	void ResetStatistics();
	void GetStatistics(const struct FMatchHistory& MatchHistory);
	UMG_ESlateVisibility GetVisibility_1();
	struct FEventReply OnFocusReceived(const struct FGeometry& MyGeometry, const struct FFocusEvent& InFocusEvent);
	void Set_Selected_Match(class UWBP_MatchHistoryRow_C* Matchr_Row);
	void OnFail_AF56C4AE43AE5AC8993AB38B3825525B(TArray<struct FMatchHistory> MatchHistory);
	void OnSuccess_AF56C4AE43AE5AC8993AB38B3825525B(TArray<struct FMatchHistory> MatchHistory);
	void OnGetMatchHistory();
	void BndEvt__GameModeSelection_K2Node_ComponentBoundEvent_68_OnSelectionChangedEvent__DelegateSignature(const struct FString& SelectedItem, TEnumAsByte<SlateCore_ESelectInfo> SelectionType);
	void BndEvt__ScrollBox_0_K2Node_ComponentBoundEvent_0_OnUserScrolledEvent__DelegateSignature(float CurrentOffset);
	void Construct();
	void Cleanup_Loop();
	void ExecuteUbergraph_WBP_MatchHistoryPanel(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
