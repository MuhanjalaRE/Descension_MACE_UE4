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

// WidgetBlueprintGeneratedClass WBP_MatchHistoryRow.WBP_MatchHistoryRow_C
// 0x0174 (FullSize[0x03AC] - InheritedSize[0x0238])
class UWBP_MatchHistoryRow_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0238(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UButton*                                     ButtonDemo;                                                // 0x0240(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                      Image_1;                                                   // 0x0248(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                                  TextDateTime;                                              // 0x0250(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                                  TextGameMode;                                              // 0x0258(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                                  TextKillRate;                                              // 0x0260(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                                  TextKills;                                                 // 0x0268(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                                  TextPlayerName;                                            // 0x0270(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                                  TextRank;                                                  // 0x0278(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                                  TextResult;                                                // 0x0280(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                                  TextScore;                                                 // 0x0288(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                                  TextTeamScore;                                             // 0x0290(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                                  TextTime;                                                  // 0x0298(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FString                                     Gametype;                                                  // 0x02A0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)
	struct FString                                     Map;                                                       // 0x02B0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)
	struct FString                                     Rules;                                                     // 0x02C0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)
	struct FSlateColor                                 Background;                                                // 0x02D0(0x0028) (Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                               Selected;                                                  // 0x02F8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_J26O[0x7];                                     // 0x02F9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UWBP_MatchHistoryPanel_C*                    LeaderBoard_Panel;                                         // 0x0300(0x0008) (Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	struct FMatchHistory                               MatchHistory;                                              // 0x0308(0x00A0) (Edit, BlueprintVisible, ExposeOnSpawn)
	struct FColor                                      ResultColor;                                               // 0x03A8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr){
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WBP_MatchHistoryRow.WBP_MatchHistoryRow_C");
		}
		return ptr;
	}



	struct FText Get_TextRank_Text_1();
	struct FText Get_TextKillRate_Text_1();
	struct FText Get_TextKills_Text_1();
	struct FText Get_TextResult_Text_1();
	struct FText Get_TextTeamScore_Text_1();
	struct FText Get_TextDateTime_Text_1();
	struct FText Get_TextTime_Text_1();
	struct FText Get_TextScore_Text_1();
	struct FText Get_TextMapName_Text_1();
	void Unselect();
	struct FEventReply OnMouseButtonDown(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent);
	void Construct();
	void OnMouseEnter(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent);
	void OnMouseLeave(const struct FPointerEvent& MouseEvent);
	void BndEvt__ButtonDemo_K2Node_ComponentBoundEvent_10_OnButtonClickedEvent__DelegateSignature();
	void ExecuteUbergraph_WBP_MatchHistoryRow(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
