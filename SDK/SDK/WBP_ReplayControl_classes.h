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

// WidgetBlueprintGeneratedClass WBP_ReplayControl.WBP_ReplayControl_C
// 0x0038 (FullSize[0x0270] - InheritedSize[0x0238])
class UWBP_ReplayControl_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0238(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UBorder*                                     Border_223;                                                // 0x0240(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                                     Button_1;                                                  // 0x0248(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USlider*                                     ReplayPositionSlider;                                      // 0x0250(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USlider*                                     ReplaySpeedSlider;                                         // 0x0258(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                                  TextBlock_3;                                               // 0x0260(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                                  TextBlock_28;                                              // 0x0268(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr){
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WBP_ReplayControl.WBP_ReplayControl_C");
		}
		return ptr;
	}



	struct FEventReply OnMouseButtonDown_1(const struct FGeometry& MyGeometry, struct FPointerEvent* MouseEvent);
	struct FText GetText_2();
	struct FText GetText_1();
	float Get_ReplaySpeedSlider_Value_1();
	float Get_ReplayPositionSlider_Value_1();
	void Construct();
	void BndEvt__Slider_0_K2Node_ComponentBoundEvent_194_OnFloatValueChangedEvent__DelegateSignature(float Value);
	void BndEvt__Slider_1_K2Node_ComponentBoundEvent_123_OnFloatValueChangedEvent__DelegateSignature(float Value);
	void BndEvt__Button_0_K2Node_ComponentBoundEvent_155_OnButtonClickedEvent__DelegateSignature();
	void ExecuteUbergraph_WBP_ReplayControl(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
