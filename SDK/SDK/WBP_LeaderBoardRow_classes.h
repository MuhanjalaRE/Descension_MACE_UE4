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

// WidgetBlueprintGeneratedClass WBP_LeaderBoardRow.WBP_LeaderBoardRow_C
// 0x00F1 (FullSize[0x0329] - InheritedSize[0x0238])
class UWBP_LeaderBoardRow_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0238(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UBorder*                                     Border_1;                                                  // 0x0240(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                                  TextNo;                                                    // 0x0248(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                                  TextPlayerName;                                            // 0x0250(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                                  TextScore;                                                 // 0x0258(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FString                                     Gametype;                                                  // 0x0260(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)
	struct FString                                     Map;                                                       // 0x0270(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)
	struct FString                                     Rules;                                                     // 0x0280(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)
	struct FSlateColor                                 Background;                                                // 0x0290(0x0028) (Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                               Selected;                                                  // 0x02B8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_IXAW[0x7];                                     // 0x02B9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UWBP_Leaderboard_C*                          LeaderBoard_Panel;                                         // 0x02C0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	struct FSteamLeaderBoard                           SteamLeaderBoard;                                          // 0x02C8(0x0040) (Edit, BlueprintVisible, ExposeOnSpawn)
	bool                                               ShowStats;                                                 // 0x0308(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_GRKT[0x3];                                     // 0x0309(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FName                                       GameMode;                                                  // 0x030C(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	unsigned char                                      UnknownData_KES4[0x4];                                     // 0x0314(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class USoundBase*                                  Hovered_Sound;                                             // 0x0318(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                                  Pressed_Sound;                                             // 0x0320(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               bHasExistedForSomeTime;                                    // 0x0328(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr){
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WBP_LeaderBoardRow.WBP_LeaderBoardRow_C");
		}
		return ptr;
	}



	struct FEventReply OnMouseButtonDown(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent);
	struct FText Get_TextScore_Text_1();
	struct FText Get_TextNo_Text_1();
	struct FText Get_TextPlayerName_Text_1();
	void Unselect();
	void Construct();
	void OnMouseEnter(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent);
	void OnMouseLeave(const struct FPointerEvent& MouseEvent);
	void ExecuteUbergraph_WBP_LeaderBoardRow(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
