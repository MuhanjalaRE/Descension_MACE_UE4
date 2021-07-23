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

// WidgetBlueprintGeneratedClass WBP_LobbyPlayerRow.WBP_LobbyPlayerRow_C
// 0x00B0 (FullSize[0x02E8] - InheritedSize[0x0238])
class UWBP_LobbyPlayerRow_C : public UUserWidget
{
public:
	class UImage*                                      Image_Avatar;                                              // 0x0238(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                                  TextName;                                                  // 0x0240(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FSteamFriendInfo                            FriendInfo;                                                // 0x0248(0x0050) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FPlayerInfo                                 PlayerInfo;                                                // 0x0298(0x0050) (Edit, BlueprintVisible, DisableEditOnInstance)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr){
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WBP_LobbyPlayerRow.WBP_LobbyPlayerRow_C");
		}
		return ptr;
	}



	void SetData(const struct FString& DisplayName, class UTexture2D* InAvatar);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
