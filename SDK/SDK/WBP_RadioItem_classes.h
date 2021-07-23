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

// WidgetBlueprintGeneratedClass WBP_RadioItem.WBP_RadioItem_C
// 0x0078 (FullSize[0x02B0] - InheritedSize[0x0238])
class UWBP_RadioItem_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0238(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UHorizontalBox*                              PopulationBox;                                             // 0x0240(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                                  SettingNameBlock;                                          // 0x0248(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FString                                     SettingName;                                               // 0x0250(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash)
	bool                                               bOverrideRange;                                            // 0x0260(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_UEMA[0x3];                                     // 0x0261(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FVector2D                                   SliderRange;                                               // 0x0264(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              RangeGap;                                                  // 0x026C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              RangeStep;                                                 // 0x0270(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_I7AE[0x4];                                     // 0x0274(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FScriptMulticastDelegate                    ValueApplied;                                              // 0x0278(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	TArray<struct FMidairRadioOption>                  RadioOptions;                                              // 0x0288(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	class UWBP_SelectableButton_C*                     LastSelected;                                              // 0x0298(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                                  Item_Pressed_Sound;                                        // 0x02A0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                                  Item_Hovered_Sound;                                        // 0x02A8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr){
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WBP_RadioItem.WBP_RadioItem_C");
		}
		return ptr;
	}



	void GetSelectedValue(float* Value);
	void SelectLiteralValueIfPossible(float LiteralValue);
	void Option_Selected(class UWBP_SelectableButton_C* Clicked_Button);
	void PreConstruct(bool IsDesignTime);
	void ExecuteUbergraph_WBP_RadioItem(int EntryPoint);
	void ValueApplied__DelegateSignature(float NewValue);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
