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

// WidgetBlueprintGeneratedClass WBP_Loadouts_PackButton.WBP_Loadouts_PackButton_C
// 0x0038 (FullSize[0x03F0] - InheritedSize[0x03B8])
class UWBP_Loadouts_PackButton_C : public UWBP_SelectableButton_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x03B8(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UTextBlock*                                  BackpackName;                                              // 0x03C0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBorder*                                     Border_3;                                                  // 0x03C8(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                                     Button_1;                                                  // 0x03D0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	bool                                               Pressed_1;                                                 // 0x03D8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_GB3A[0x7];                                     // 0x03D9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FScriptMulticastDelegate                    OnClicked;                                                 // 0x03E0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, BlueprintAssignable, BlueprintCallable)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr){
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WBP_Loadouts_PackButton.WBP_Loadouts_PackButton_C");
		}
		return ptr;
	}



	void SetPackInfoFromLoadout(const struct FMALoadout& Loadout);
	struct FSlateColor GetForegroundColor_1();
	struct FLinearColor GetBackgroundColor_1();
	void BndEvt__Button_0_K2Node_ComponentBoundEvent_26_OnButtonPressedEvent__DelegateSignature();
	void BndEvt__Button_0_K2Node_ComponentBoundEvent_40_OnButtonReleasedEvent__DelegateSignature();
	void BndEvt__Button_0_K2Node_ComponentBoundEvent_22_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature();
	void ExecuteUbergraph_WBP_Loadouts_PackButton(int EntryPoint);
	void OnClicked__DelegateSignature();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
