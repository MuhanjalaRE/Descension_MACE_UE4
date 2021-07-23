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

// WidgetBlueprintGeneratedClass WBP_MatchType.WBP_MatchType_C
// 0x0048 (FullSize[0x02A8] - InheritedSize[0x0260])
class UWBP_MatchType_C : public UMatchMakingStatusWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0260(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UTextBlock*                                  TextLobbyStatus;                                           // 0x0268(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FSlateColor                                 Background;                                                // 0x0270(0x0028) (Edit, BlueprintVisible, DisableEditOnInstance)
	TEnumAsByte<MidairCE_EMAMatchType>                 MatchType;                                                 // 0x0298(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	unsigned char                                      UnknownData_OIFQ[0x7];                                     // 0x0299(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UScrollBox*                                  Parent;                                                    // 0x02A0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr){
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WBP_MatchType.WBP_MatchType_C");
		}
		return ptr;
	}



	class UWidget* Get_TextLobbyStatus_ToolTipWidget_1();
	struct FText Get_TextLobbyStatus_Text_1();
	void Construct();
	void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
	void ExecuteUbergraph_WBP_MatchType(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
