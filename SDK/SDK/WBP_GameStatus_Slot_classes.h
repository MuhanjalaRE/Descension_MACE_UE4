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

// WidgetBlueprintGeneratedClass WBP_GameStatus_Slot.WBP_GameStatus_Slot_C
// 0x0050 (FullSize[0x0288] - InheritedSize[0x0238])
class UWBP_GameStatus_Slot_C : public UUserWidget
{
public:
	class UProgressBar*                                ATeamScoreBar;                                             // 0x0238(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                                  ATeamScoreText;                                            // 0x0240(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHorizontalBox*                              HorizontalBox_18;                                          // 0x0248(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                                  TextBlock_1;                                               // 0x0250(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                      TopPlayerHasFlagIcon;                                      // 0x0258(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                      TopPlayerIsLocalIcon;                                      // 0x0260(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class APlayerState*                                PlayerState;                                               // 0x0268(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              ScorePct;                                                  // 0x0270(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               HasFlag;                                                   // 0x0274(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               IsLocalPlayer;                                             // 0x0275(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_MG0Y[0x2];                                     // 0x0276(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FLinearColor                                Color;                                                     // 0x0278(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr){
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WBP_GameStatus_Slot.WBP_GameStatus_Slot_C");
		}
		return ptr;
	}



	void Update(class APlayerState* Player, float ScorePct, bool HasFlag, bool IsLocalPlayer);
	struct FText Get_ATeamScoreText_Text_1();
	UMG_ESlateVisibility GetVisibility_1();
	UMG_ESlateVisibility Get_TopPlayerIsLocalIcon_Visibility_1();
	UMG_ESlateVisibility Get_TopPlayerHasFlagIcon_Visibility_1();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
