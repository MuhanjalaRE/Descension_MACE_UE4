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

// WidgetBlueprintGeneratedClass WBP_SelectableButtonWithIcon.WBP_SelectableButtonWithIcon_C
// 0x0030 (FullSize[0x03E8] - InheritedSize[0x03B8])
class UWBP_SelectableButtonWithIcon_C : public UWBP_SelectableButton_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x03B8(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UBorder*                                     DefaultBorder;                                             // 0x03C0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                                     DefaultButton;                                             // 0x03C8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                      Icon;                                                      // 0x03D0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTexture2D*                                  Texture;                                                   // 0x03D8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	class UTexture2D*                                  Background_Texture;                                        // 0x03E0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr){
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WBP_SelectableButtonWithIcon.WBP_SelectableButtonWithIcon_C");
		}
		return ptr;
	}



	struct FLinearColor Get_Icon_ColorAndOpacity_1();
	struct FLinearColor Get_DefaultBorder_BrushColor_0_1();
	void OnSelected();
	void OnActive();
	void OnPressed();
	void OnUpdateDisabled();
	void BndEvt__DefaultButton_K2Node_ComponentBoundEvent_45_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__DefaultButton_K2Node_ComponentBoundEvent_58_OnButtonPressedEvent__DelegateSignature();
	void BndEvt__DefaultButton_K2Node_ComponentBoundEvent_69_OnButtonReleasedEvent__DelegateSignature();
	void PreConstruct(bool IsDesignTime);
	void Construct();
	void BndEvt__DefaultButton_K2Node_ComponentBoundEvent_129_OnButtonHoverEvent__DelegateSignature();
	void ExecuteUbergraph_WBP_SelectableButtonWithIcon(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
