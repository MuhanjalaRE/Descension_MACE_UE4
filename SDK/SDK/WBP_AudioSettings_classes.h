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

// WidgetBlueprintGeneratedClass WBP_AudioSettings.WBP_AudioSettings_C
// 0x004C (FullSize[0x0284] - InheritedSize[0x0238])
class UWBP_AudioSettings_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0238(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UComboBoxString*                             ComboBoxString_170;                                        // 0x0240(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Settings_SliderItem_C*                  EffectsSlider;                                             // 0x0248(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Settings_SliderItem_C*                  FlagSlider;                                                // 0x0250(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                      Image_139;                                                 // 0x0258(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Settings_SliderItem_C*                  MasterSlider;                                              // 0x0260(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Settings_SliderItem_C*                  MusicSlider;                                               // 0x0268(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Settings_SliderItem_C*                  UISlider;                                                  // 0x0270(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Settings_SliderItem_C*                  VoiceSlider;                                               // 0x0278(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	float                                              Default_Audio_Setting;                                     // 0x0280(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr){
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WBP_AudioSettings.WBP_AudioSettings_C");
		}
		return ptr;
	}



	void Save();
	void Construct();
	void BndEvt__MasterSlider_K2Node_ComponentBoundEvent_0_ValueAdjusted__DelegateSignature(float NewValue);
	void BndEvt__EffectsSlider_K2Node_ComponentBoundEvent_2_ValueAdjusted__DelegateSignature(float NewValue);
	void BndEvt__MusicSlider_K2Node_ComponentBoundEvent_5_ValueAdjusted__DelegateSignature(float NewValue);
	void BndEvt__FlagSlider_K2Node_ComponentBoundEvent_9_ValueAdjusted__DelegateSignature(float NewValue);
	void BndEvt__VoiceSlider_K2Node_ComponentBoundEvent_14_ValueAdjusted__DelegateSignature(float NewValue);
	void BndEvt__MasterSlider_K2Node_ComponentBoundEvent_122_ValueApplied__DelegateSignature(float NewValue);
	void BndEvt__EffectsSlider_K2Node_ComponentBoundEvent_129_ValueApplied__DelegateSignature(float NewValue);
	void BndEvt__MusicSlider_K2Node_ComponentBoundEvent_137_ValueApplied__DelegateSignature(float NewValue);
	void BndEvt__FlagSlider_K2Node_ComponentBoundEvent_146_ValueApplied__DelegateSignature(float NewValue);
	void BndEvt__VoiceSlider_K2Node_ComponentBoundEvent_156_ValueApplied__DelegateSignature(float NewValue);
	void BndEvt__UISlider_K2Node_ComponentBoundEvent_0_ValueAdjusted__DelegateSignature(float NewValue);
	void BndEvt__UISlider_K2Node_ComponentBoundEvent_1_ValueApplied__DelegateSignature(float NewValue);
	void Reset();
	void ExecuteUbergraph_WBP_AudioSettings(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
