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

// WidgetBlueprintGeneratedClass WBP_Settings_CheckboxItem.WBP_Settings_CheckboxItem_C
// 0x0029 (FullSize[0x0261] - InheritedSize[0x0238])
class UWBP_Settings_CheckboxItem_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0238(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UCheckBox*                                   CheckBox_124;                                              // 0x0240(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                                  TextBlock_62;                                              // 0x0248(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FString                                     SettingName;                                               // 0x0250(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash)
	SlateCore_ECheckBoxState                           SettingValue;                                              // 0x0260(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr){
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WBP_Settings_CheckboxItem.WBP_Settings_CheckboxItem_C");
		}
		return ptr;
	}



	void GetIsChecked(bool* IsChecked);
	void SetValueFromBool(bool InChecked);
	struct FText GetText_1();
	void BndEvt__CheckBox_123_K2Node_ComponentBoundEvent_134_OnCheckBoxComponentStateChanged__DelegateSignature(bool bIsChecked);
	void PreConstruct(bool IsDesignTime);
	void ExecuteUbergraph_WBP_Settings_CheckboxItem(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
