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

// WidgetBlueprintGeneratedClass WBP_PlayerExpressions.WBP_PlayerExpressions_C
// 0x0028 (FullSize[0x0260] - InheritedSize[0x0238])
class UWBP_PlayerExpressions_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0238(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetSwitcher*                             Switcher;                                                  // 0x0240(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	bool                                               FirstKey;                                                  // 0x0248(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_KBPD[0x7];                                     // 0x0249(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class USoundBase*                                  Key_Press_Success;                                         // 0x0250(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                                  Key_Press_Abort;                                           // 0x0258(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr){
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WBP_PlayerExpressions.WBP_PlayerExpressions_C");
		}
		return ptr;
	}



	void ProcessInput(const struct FKey& Key, bool IsAbortKey, bool* Handled);
	void FindCategory(const struct FText& Category, class UWBP_PlayerExpressionPanel_C** Return_Value);
	void SwitchToCategory(const struct FText& Category);
	void EndKeyHandling();
	void FocusAndBegin();
	void FindOrCreateCategory(const struct FText& Category, class UWBP_PlayerExpressionPanel_C** Return_Value);
	void PopulateSelf();
	void Clear();
	struct FEventReply OnKeyDown(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent);
	void Construct();
	void OnFocusLost(const struct FFocusEvent& InFocusEvent);
	void ExecuteUbergraph_WBP_PlayerExpressions(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
