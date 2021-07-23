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

// WidgetBlueprintGeneratedClass WBP_PlayerList.WBP_PlayerList_C
// 0x00AF (FullSize[0x02E8] - InheritedSize[0x0239])
class UWBP_PlayerList_C : public UWBP_ModalMenu_C
{
public:
	unsigned char                                      UnknownData_RAC0[0x7];                                     // 0x0239(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0240(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UBorder*                                     Border_3;                                                  // 0x0248(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UScrollBox*                                  ScrollBox_98;                                              // 0x0250(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_PlayerStatUnit_C*                       Stat_Assists;                                              // 0x0258(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_PlayerStatUnit_C*                       Stat_Deaths;                                               // 0x0260(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_PlayerStatUnit_C*                       Stat_Kills;                                                // 0x0268(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_PlayerStatUnit_C*                       Stat_Score;                                                // 0x0270(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_PlayerStatUnit_C*                       Stat_Suicides;                                             // 0x0278(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_SelectPlayerSlot_C*                     WBP_SelectPlayerSlot_50;                                   // 0x0280(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_SelectPlayerSlot_C*                     WBP_SelectPlayerSlot_93;                                   // 0x0288(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_SelectPlayerSlot_C*                     WBP_SelectPlayerSlot_132;                                  // 0x0290(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FScriptMulticastDelegate                    On_Player_Selected;                                        // 0x0298(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	struct FPlayerStats                                PlayerStats;                                               // 0x02A8(0x0040) (Edit, BlueprintVisible, DisableEditOnInstance)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr){
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WBP_PlayerList.WBP_PlayerList_C");
		}
		return ptr;
	}



	struct FEventReply OnMouseButtonDown_1(const struct FGeometry& MyGeometry, struct FPointerEvent* MouseEvent);
	void UpdateStats();
	void Construct();
	void Refresh_Player_List();
	void ExecuteUbergraph_WBP_PlayerList(int EntryPoint);
	void On_Player_Selected__DelegateSignature(class APlayerState* Player);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
