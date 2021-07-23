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

// WidgetBlueprintGeneratedClass WBP_StatDisplay_Scoreboard.WBP_StatDisplay_Scoreboard_C
// 0x0035 (FullSize[0x026D] - InheritedSize[0x0238])
class UWBP_StatDisplay_Scoreboard_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0238(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UTextBlock*                                  Nameplate;                                                 // 0x0240(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                                  ScoreDisplay;                                              // 0x0248(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FText                                       StatName;                                                  // 0x0250(0x0018) (Edit, BlueprintVisible, ExposeOnSpawn)
	float                                              StatValue;                                                 // 0x0268(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	bool                                               bDisplayDecimals;                                          // 0x026C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr){
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WBP_StatDisplay_Scoreboard.WBP_StatDisplay_Scoreboard_C");
		}
		return ptr;
	}



	struct FText Get_ScoreDisplay_Text_1();
	void PreConstruct(bool IsDesignTime);
	void ExecuteUbergraph_WBP_StatDisplay_Scoreboard(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
