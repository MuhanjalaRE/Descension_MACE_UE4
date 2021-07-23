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

// WidgetBlueprintGeneratedClass WBP_PlayerStats.WBP_PlayerStats_C
// 0x0070 (FullSize[0x02A8] - InheritedSize[0x0238])
class UWBP_PlayerStats_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0238(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UWBP_PlayerStatUnit_C*                       Stat_Assists;                                              // 0x0240(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_PlayerStatUnit_C*                       Stat_Deaths;                                               // 0x0248(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_PlayerStatUnit_C*                       Stat_Kills;                                                // 0x0250(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_PlayerStatUnit_C*                       Stat_Score;                                                // 0x0258(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_PlayerStatUnit_C*                       Stat_Suicides;                                             // 0x0260(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FPlayerStats                                PlayerStats;                                               // 0x0268(0x0040) (Edit, BlueprintVisible, DisableEditOnInstance)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr){
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WBP_PlayerStats.WBP_PlayerStats_C");
		}
		return ptr;
	}



	void Update_Stats();
	void OnFail_31A2451E4E1D30D64C94DD86C7CC85D5(const struct FPlayerStats& PlayerStats);
	void OnSuccess_31A2451E4E1D30D64C94DD86C7CC85D5(const struct FPlayerStats& PlayerStats);
	void Construct();
	void OnGetCurrentUserStats();
	void ExecuteUbergraph_WBP_PlayerStats(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
