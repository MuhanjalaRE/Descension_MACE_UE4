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

// WidgetBlueprintGeneratedClass WBP_NetPerf.WBP_NetPerf_C
// 0x00B4 (FullSize[0x02EC] - InheritedSize[0x0238])
class UWBP_NetPerf_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0238(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UTextBlock*                                  TextBlock_47;                                              // 0x0240(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                                  TextBlock_48;                                              // 0x0248(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                                  TextBlock_49;                                              // 0x0250(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                                VerticalBox_1;                                             // 0x0258(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FSlateColor                                 WarningColor;                                              // 0x0260(0x0028) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FSlateColor                                 BadColor;                                                  // 0x0288(0x0028) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FSlateColor                                 GoodColor;                                                 // 0x02B0(0x0028) (Edit, BlueprintVisible, DisableEditOnInstance)
	unsigned char                                      Warning_Ping;                                              // 0x02D8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      Bad_Ping;                                                  // 0x02D9(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_FKNA[0x2];                                     // 0x02DA(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              Warning_FPS;                                               // 0x02DC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              Bad_FPS;                                                   // 0x02E0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              Warning_Server_Perf;                                       // 0x02E4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              Bad_Server_Perf;                                           // 0x02E8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr){
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WBP_NetPerf.WBP_NetPerf_C");
		}
		return ptr;
	}



	UMG_ESlateVisibility GetVisibility_1();
	UMG_ESlateVisibility GetServerPerfVisibility();
	UMG_ESlateVisibility GetPingVisibility();
	UMG_ESlateVisibility GetFPSVisibility();
	struct FText GetFPSText();
	struct FText GetPingText();
	struct FSlateColor GetServerPerfColor();
	struct FText GetServerPerfText();
	struct FSlateColor GetPingColor();
	struct FSlateColor GetFPSColor();
	void ExecuteUbergraph_WBP_NetPerf(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
