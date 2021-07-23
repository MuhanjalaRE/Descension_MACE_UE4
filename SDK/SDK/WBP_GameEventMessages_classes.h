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

// WidgetBlueprintGeneratedClass WBP_GameEventMessages.WBP_GameEventMessages_C
// 0x00E0 (FullSize[0x0318] - InheritedSize[0x0238])
class UWBP_GameEventMessages_C : public UMALocalMessagesWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0238(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UTextBlock*                                  FlagOOBText;                                               // 0x0240(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                                Messages;                                                  // 0x0248(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_GameEventMessageSlot_C*                 WBP_GameEventMessageSlot_C_82;                             // 0x0250(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                                  YouHaveItText;                                             // 0x0258(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FLinearColor                                Event_Color;                                               // 0x0260(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               Spectating;                                                // 0x0270(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      MessageIndex;                                              // 0x0271(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_PGS8[0x6];                                     // 0x0272(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UClass*                                      MessageClass;                                              // 0x0278(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FText                                       Message_Text;                                              // 0x0280(0x0018) (Edit, BlueprintVisible, DisableEditOnInstance)
	class AMATeamState*                                MessageTeamState;                                          // 0x0298(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AMAPlayerState*                              ActingPlayerState;                                         // 0x02A0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AMAPlayerState*                              ReceivingPlayerState;                                      // 0x02A8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               IsFriendly;                                                // 0x02B0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_1MOV[0x3];                                     // 0x02B1(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FLinearColor                                FriendlyColor;                                             // 0x02B4(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                                HostileColor;                                              // 0x02C4(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                                Team0Color;                                                // 0x02D4(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                                Team1Color;                                                // 0x02E4(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_IHNB[0x4];                                     // 0x02F4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class AMAPlayerState*                              PlayerStateWithTeam0Flag;                                  // 0x02F8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AMAPlayerState*                              PlayerStateWithTeam1Flag;                                  // 0x0300(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AMAGameState*                                CachedGameState;                                           // 0x0308(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AMAPlayerState*                              ViewTargetPlayerState;                                     // 0x0310(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr){
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WBP_GameEventMessages.WBP_GameEventMessages_C");
		}
		return ptr;
	}



	void PlayPracticeSound(unsigned char Message_Index);
	void Play_Rabbit_Sound(unsigned char Message_Index);
	void SetIsFriendly(bool FriendlyOnSameTeam);
	void Play_Event_Sound(TEnumAsByte<MidairCE_EGameMessage> Selection);
	void AddMessage(class UClass* MessageClass, const struct FLocalMessageData& MessageData);
	void Construct();
	void CustomEvent_1();
	void ExecuteUbergraph_WBP_GameEventMessages(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
