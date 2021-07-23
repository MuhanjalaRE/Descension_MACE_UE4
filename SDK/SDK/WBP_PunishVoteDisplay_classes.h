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

// WidgetBlueprintGeneratedClass WBP_PunishVoteDisplay.WBP_PunishVoteDisplay_C
// 0x0088 (FullSize[0x02C0] - InheritedSize[0x0238])
class UWBP_PunishVoteDisplay_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0238(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                            SubtleFlash;                                               // 0x0240(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UTextBlock*                                  VoteDisplayNameText;                                       // 0x0248(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                                  VoteOptionNo;                                              // 0x0250(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                                  VoteOptionYes;                                             // 0x0258(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	bool                                               Process;                                                   // 0x0260(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_N852[0x7];                                     // 0x0261(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     MapDisplayString;                                          // 0x0268(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)
	struct FString                                     CurrentLevelName;                                          // 0x0278(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)
	class AMAPlayerState*                              LocalPlayer;                                               // 0x0288(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                Yes_Votes;                                                 // 0x0290(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                No_Votes;                                                  // 0x0294(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                                  Vote_Cast_Sound;                                           // 0x0298(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                                  Vote_Started_Sound;                                        // 0x02A0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FPunishVote                                 ActivePunishVote;                                          // 0x02A8(0x0018) (Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr){
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WBP_PunishVoteDisplay.WBP_PunishVoteDisplay_C");
		}
		return ptr;
	}



	struct FText Get_VoteOptionNo_Text_1();
	struct FText Get_VoteOptionYes_Text_1();
	struct FText Get_VoteDisplayNameText_Text_1();
	void Construct();
	void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
	void ConditionallyContinueAnimation();
	void ExecuteUbergraph_WBP_PunishVoteDisplay(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
