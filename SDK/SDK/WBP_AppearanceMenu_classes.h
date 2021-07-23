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

// WidgetBlueprintGeneratedClass WBP_AppearanceMenu.WBP_AppearanceMenu_C
// 0x0020 (FullSize[0x0258] - InheritedSize[0x0238])
class UWBP_AppearanceMenu_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0238(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UWBP_SelectableButtonWithText_C*             Skinbutton;                                                // 0x0240(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FScriptMulticastDelegate                    TryOpenSkins;                                              // 0x0248(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr){
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WBP_AppearanceMenu.WBP_AppearanceMenu_C");
		}
		return ptr;
	}



	void BndEvt__Skinbutton_K2Node_ComponentBoundEvent_1_ButtonClicked__DelegateSignature(class UWBP_SelectableButton_C* Clicked_Button);
	void ExecuteUbergraph_WBP_AppearanceMenu(int EntryPoint);
	void TryOpenSkins__DelegateSignature();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
