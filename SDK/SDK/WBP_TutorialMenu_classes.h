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

// WidgetBlueprintGeneratedClass WBP_TutorialMenu.WBP_TutorialMenu_C
// 0x0008 (FullSize[0x0240] - InheritedSize[0x0238])
class UWBP_TutorialMenu_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0238(0x0008) (ZeroConstructor, Transient, DuplicateTransient)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr){
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WBP_TutorialMenu.WBP_TutorialMenu_C");
		}
		return ptr;
	}



	void BndEvt__Tut_Movement_K2Node_ComponentBoundEvent_67_ButtonClicked__DelegateSignature(class UWBP_SelectableButton_C* Clicked_Button);
	void BndEvt__Tut_Shooting_K2Node_ComponentBoundEvent_76_ButtonClicked__DelegateSignature(class UWBP_SelectableButton_C* Clicked_Button);
	void ExecuteUbergraph_WBP_TutorialMenu(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
