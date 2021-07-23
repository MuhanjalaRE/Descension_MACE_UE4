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

// WidgetBlueprintGeneratedClass WBP_ProgressionEventOverlay.WBP_ProgressionEventOverlay_C
// 0x00A8 (FullSize[0x02E0] - InheritedSize[0x0238])
class UWBP_ProgressionEventOverlay_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0238(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                            ShowChestThing;                                            // 0x0240(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                            Level_Up;                                                  // 0x0248(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UBorder*                                     ChestNotificationBadge;                                    // 0x0250(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UComplexStatusBar*                           ComplexStatusBar_1;                                        // 0x0258(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                                  CurrentLevelText;                                          // 0x0260(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                                  NextLevelText;                                             // 0x0268(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                      PlayerAvatar;                                              // 0x0270(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                                  PlayerNameText;                                            // 0x0278(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                                  XPProgressText;                                            // 0x0280(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	TArray<struct FXPGivenEvent>                       XPGivenEvent;                                              // 0x0288(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	struct FXPGivenEvent                               Current_XP_Event;                                          // 0x0298(0x0014) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               XP_Event_Active;                                           // 0x02AC(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_3IRX[0x3];                                     // 0x02AD(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              Current_Added_XP;                                          // 0x02B0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_WVL7[0x4];                                     // 0x02B4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class USoundBase*                                  Level_Up_Sound;                                            // 0x02B8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAudioComponent*                             GainXpLoop;                                                // 0x02C0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               bXP_FIllSoundUseAbsolutePct;                               // 0x02C8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_XV65[0x7];                                     // 0x02C9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<class UClass*>                              ItemsToShow;                                               // 0x02D0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr){
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WBP_ProgressionEventOverlay.WBP_ProgressionEventOverlay_C");
		}
		return ptr;
	}



	float GetMaxValue2_1();
	float GetMaxValue1_1();
	float GetValue2_1();
	float GetValue1_1();
	struct FText Get_XPProgressText_Text_1();
	struct FText Get_NextLevelText_Text_1();
	struct FText Get_CurrentLevelText_Text_1();
	void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
	void Start();
	void Construct();
	void OnXPGiven(int StartingLevel, int StartingXP, int XPAdded, int XPForNextLevel);
	void Start_Next_Level();
	void NewItemGiven(class UClass* LootClass);
	void Destruct();
	void ExecuteUbergraph_WBP_ProgressionEventOverlay(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
