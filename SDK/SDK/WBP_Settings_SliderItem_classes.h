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

// WidgetBlueprintGeneratedClass WBP_Settings_SliderItem.WBP_Settings_SliderItem_C
// 0x0081 (FullSize[0x02B9] - InheritedSize[0x0238])
class UWBP_Settings_SliderItem_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0238(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UEditableTextBox*                            EditableTextBox_167;                                       // 0x0240(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                                    SizeBox_4;                                                 // 0x0248(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USlider*                                     Slider_52;                                                 // 0x0250(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                                  TextBlock_62;                                              // 0x0258(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FString                                     SettingName;                                               // 0x0260(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash)
	float                                              SettingValue;                                              // 0x0270(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               bOverrideRange;                                            // 0x0274(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_SL70[0x3];                                     // 0x0275(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FVector2D                                   SliderRange;                                               // 0x0278(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              RangeGap;                                                  // 0x0280(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              RangeStep;                                                 // 0x0284(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	MidairCE_ESliderPresentationStyle                  NumberPresentationAsText;                                  // 0x0288(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_B52J[0x7];                                     // 0x0289(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FScriptMulticastDelegate                    ValueAdjusted;                                             // 0x0290(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	struct FScriptMulticastDelegate                    ValueApplied;                                              // 0x02A0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	class USoundBase*                                  Slider_Sound;                                              // 0x02B0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               bHasExistedForSomeTime;                                    // 0x02B8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr){
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WBP_Settings_SliderItem.WBP_Settings_SliderItem_C");
		}
		return ptr;
	}



	UMG_ESlateVisibility GetVisibility_1();
	void SetLiteralSliderSetting(float NewSliderSetting);
	void SetSliderSetting(float NewSliderSetting);
	void InvertSettingFromRange(float Setting, float* MappedValue);
	void MapSettingToRange(float Setting, float* MappedValue);
	void SetupSliderRangeValues();
	struct FText GetText_1();
	void Construct();
	void BndEvt__EditableTextBox_166_K2Node_ComponentBoundEvent_381_OnEditableTextBoxCommittedEvent__DelegateSignature(const struct FText& Text, TEnumAsByte<SlateCore_ETextCommit> CommitMethod);
	void BndEvt__Slider_51_K2Node_ComponentBoundEvent_429_OnFloatValueChangedEvent__DelegateSignature(float Value);
	void BndEvt__Slider_51_K2Node_ComponentBoundEvent_494_OnMouseCaptureBeginEvent__DelegateSignature();
	void BndEvt__Slider_51_K2Node_ComponentBoundEvent_21_OnMouseCaptureEndEvent__DelegateSignature();
	void ExecuteUbergraph_WBP_Settings_SliderItem(int EntryPoint);
	void ValueApplied__DelegateSignature(float NewValue);
	void ValueAdjusted__DelegateSignature(float NewValue);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
