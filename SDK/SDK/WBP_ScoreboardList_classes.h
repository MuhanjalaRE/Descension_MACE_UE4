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

// WidgetBlueprintGeneratedClass WBP_ScoreboardList.WBP_ScoreboardList_C
// 0x00D0 (FullSize[0x0308] - InheritedSize[0x0238])
class UWBP_ScoreboardList_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0238(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UImage*                                      HeaderIcon;                                                // 0x0240(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                                PlayerList;                                                // 0x0248(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                                  Status;                                                    // 0x0250(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_ScoreboardSlot_C*                       WBP_ScoreboardSlot_108;                                    // 0x0258(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_ScoreboardSlot_C*                       WBP_ScoreboardSlot_184;                                    // 0x0260(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_ScoreboardSlot_C*                       WBP_ScoreboardSlot_260;                                    // 0x0268(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FSlateBrush                                 Header_Icon;                                               // 0x0270(0x0088) (Edit, BlueprintVisible)
	unsigned char                                      TeamId;                                                    // 0x02F8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_M2G7[0x7];                                     // 0x02F9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class AMAGameState*                                MAGameState;                                               // 0x0300(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr){
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WBP_ScoreboardList.WBP_ScoreboardList_C");
		}
		return ptr;
	}



	struct FText Get_Status_Text_1();
	void UpdateVBoxWithPlayers(TArray<class AMAPlayerState*>* Players);
	void Construct();
	void Slow_Tick();
	void ExecuteUbergraph_WBP_ScoreboardList(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
