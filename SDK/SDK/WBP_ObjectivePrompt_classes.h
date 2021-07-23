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

// WidgetBlueprintGeneratedClass WBP_ObjectivePrompt.WBP_ObjectivePrompt_C
// 0x00C4 (FullSize[0x0374] - InheritedSize[0x02B0])
class UWBP_ObjectivePrompt_C : public UObjectivePrompt
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x02B0(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                            Completed;                                                 // 0x02B8(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                            Alert;                                                     // 0x02C0(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                            Disappear;                                                 // 0x02C8(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                            Appear;                                                    // 0x02D0(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UImage*                                      Image_58;                                                  // 0x02D8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                                  MainBlock;                                                 // 0x02E0(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                                  Title;                                                     // 0x02E8(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FMidairObjectiveInfo                        DisplayInfo;                                               // 0x02F0(0x0078) (Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                               bIsDisplayed;                                              // 0x0368(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_PCV3[0x3];                                     // 0x0369(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                NumLoopsOnComplete;                                        // 0x036C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                NumLoopsOnAlert;                                           // 0x0370(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr){
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WBP_ObjectivePrompt.WBP_ObjectivePrompt_C");
		}
		return ptr;
	}



	void UpdateDisplay();
	bool ObjectiveNotEmpty(const struct FMidairObjectiveInfo& MidairObjectiveInfo);
	void OnPromptChanged();
	void OnObjectiveCompleted();
	void ExecuteUbergraph_WBP_ObjectivePrompt(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
