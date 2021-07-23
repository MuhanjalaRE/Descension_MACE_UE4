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

// WidgetBlueprintGeneratedClass WBP_GameStatus_Rabbit.WBP_GameStatus_Rabbit_C
// 0x0077 (FullSize[0x02C0] - InheritedSize[0x0249])
class UWBP_GameStatus_Rabbit_C : public UWBP_GameStatusBase_C
{
public:
	unsigned char                                      UnknownData_1UJB[0x7];                                     // 0x0249(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0250(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UWBP_GameStatus_Slot_C*                      LocalPlayerSlot;                                           // 0x0258(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_GameStatus_Slot_C*                      RabbitSlot;                                                // 0x0260(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                                  TextBlock_140;                                             // 0x0268(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                                  TimeLeftText;                                              // 0x0270(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_GameStatus_Slot_C*                      TopPlayerSlot;                                             // 0x0278(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class AMAGameState*                                CachedGameState;                                           // 0x0280(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class APlayerState*>                        Players;                                                   // 0x0288(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance)
	bool                                               LocalPlayerOnPodium;                                       // 0x0298(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_NCM0[0x7];                                     // 0x0299(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class AMAPlayerState*                              CachedLocalPlayer;                                         // 0x02A0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AMACTFFlagBase*                              Rabbit_Flag_Base;                                          // 0x02A8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APlayerState*                                Rabbit_Player;                                             // 0x02B0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APlayerState*                                ViewTargetPlayerState;                                     // 0x02B8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr){
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WBP_GameStatus_Rabbit.WBP_GameStatus_Rabbit_C");
		}
		return ptr;
	}



	struct FText GetText_1();
	void Update_Slot(class UWBP_GameStatus_Slot_C* Slot, class APlayerState* Player_State);
	struct FText Get_TimeLeftText_Text_1();
	float GetPlayerScorePercent(class APlayerState* Player);
	void Construct();
	void CustomEvent_1();
	void ExecuteUbergraph_WBP_GameStatus_Rabbit(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
