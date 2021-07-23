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

// WidgetBlueprintGeneratedClass WBP_GameStatus_TR.WBP_GameStatus_TR_C
// 0x006F (FullSize[0x02B8] - InheritedSize[0x0249])
class UWBP_GameStatus_TR_C : public UWBP_GameStatusBase_C
{
public:
	unsigned char                                      UnknownData_TUOQ[0x7];                                     // 0x0249(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0250(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UProgressBar*                                ATeamScoreBar;                                             // 0x0258(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                                  ATeamScoreText;                                            // 0x0260(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UProgressBar*                                BTeamScoreBar;                                             // 0x0268(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                                  BTeamScoreText;                                            // 0x0270(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                      Image_46;                                                  // 0x0278(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                      Image_47;                                                  // 0x0280(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                      PlayerIsTeamA;                                             // 0x0288(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                      PlayerIsTeamB;                                             // 0x0290(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                                  TimeLeftText;                                              // 0x0298(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class AMACharacter*                                LastViewTarget;                                            // 0x02A0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AMATRGameState*                              TRGameState;                                               // 0x02A8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      TeamId_1;                                                  // 0x02B0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_8N7U[0x3];                                     // 0x02B1(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              TRWinningScore;                                            // 0x02B4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr){
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WBP_GameStatus_TR.WBP_GameStatus_TR_C");
		}
		return ptr;
	}



	struct FText GetFlagStatus();
	void Get_ATeamSco();
	struct FText GetText_1();
	UMG_ESlateVisibility Get_PlayerIsTeamA_Visibility_1();
	UMG_ESlateVisibility Get_PlayerIsTeamB_Visibility_1();
	float Get_ATeamScoreBar_Percent_1();
	float Get_BTeamScoreBar_Percent_1();
	struct FText Get_BTeamScoreText_Text_1();
	struct FText Get_ATeamScoreText_Text_1();
	struct FText Get_TimeLeftText_Text_1();
	void Construct();
	void ExecuteUbergraph_WBP_GameStatus_TR(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
