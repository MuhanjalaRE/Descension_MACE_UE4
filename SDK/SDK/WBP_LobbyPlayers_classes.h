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

// WidgetBlueprintGeneratedClass WBP_LobbyPlayers.WBP_LobbyPlayers_C
// 0x0049 (FullSize[0x02A9] - InheritedSize[0x0260])
class UWBP_LobbyPlayers_C : public UMatchMakingStatusWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0260(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UScrollBox*                                  ScrollBoxPlayers;                                          // 0x0268(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_LobbyPlayerRow_C*                       WBP_LobbyPlayerRow;                                        // 0x0270(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_LobbyPlayerRow_C*                       WBP_LobbyPlayerRow_4;                                      // 0x0278(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FSlateColor                                 Background;                                                // 0x0280(0x0028) (Edit, BlueprintVisible, DisableEditOnInstance)
	TEnumAsByte<MidairCE_EMAMatchType>                 MatchType;                                                 // 0x02A8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr){
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WBP_LobbyPlayers.WBP_LobbyPlayers_C");
		}
		return ptr;
	}



	void Construct();
	void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
	void ExecuteUbergraph_WBP_LobbyPlayers(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
