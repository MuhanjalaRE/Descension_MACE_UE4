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

// WidgetBlueprintGeneratedClass WBP_FeaturePresentation.WBP_FeaturePresentation_C
// 0x0027 (FullSize[0x0260] - InheritedSize[0x0239])
class UWBP_FeaturePresentation_C : public UWBP_ModalMenu_C
{
public:
	unsigned char                                      UnknownData_TQ09[0x7];                                     // 0x0239(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0240(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UImage*                                      Image_1;                                                   // 0x0248(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                      Image_2;                                                   // 0x0250(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_SelectableTextButton_C*                 WBP_SelectableTextButton;                                  // 0x0258(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr){
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WBP_FeaturePresentation.WBP_FeaturePresentation_C");
		}
		return ptr;
	}



	void BndEvt__WBP_SelectableTextButton_K2Node_ComponentBoundEvent_19_ButtonClicked__DelegateSignature(class UWBP_SelectableButton_C* Clicked_Button);
	void ExecuteUbergraph_WBP_FeaturePresentation(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
