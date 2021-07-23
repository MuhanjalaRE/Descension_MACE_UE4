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

// WidgetBlueprintGeneratedClass WBP_ConflictResolutionMenu.WBP_ConflictResolutionMenu_C
// 0x0080 (FullSize[0x02B8] - InheritedSize[0x0238])
class UWBP_ConflictResolutionMenu_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0238(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UImage*                                      Image_1;                                                   // 0x0240(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                                     KeepNew;                                                   // 0x0248(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                                     KeepOld;                                                   // 0x0250(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                                  TextBlock_5;                                               // 0x0258(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FScriptMulticastDelegate                    OnResolutionSelected;                                      // 0x0260(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	TArray<struct FName>                               ConflictingNames;                                          // 0x0270(0x0010) (Edit, BlueprintVisible, ZeroConstructor, ExposeOnSpawn)
	struct FInputActionKeyMapping                      Desired_Key;                                               // 0x0280(0x0028) (Edit, BlueprintVisible, ExposeOnSpawn)
	struct FString                                     MessageString;                                             // 0x02A8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr){
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WBP_ConflictResolutionMenu.WBP_ConflictResolutionMenu_C");
		}
		return ptr;
	}



	class UWidget* Get_KeepNew_ToolTipWidget_1();
	class UWidget* Get_KeepOld_ToolTipWidget_1();
	void Construct();
	void BndEvt__KeepOld_K2Node_ComponentBoundEvent_118_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__KeepNew_K2Node_ComponentBoundEvent_136_OnButtonClickedEvent__DelegateSignature();
	void ExecuteUbergraph_WBP_ConflictResolutionMenu(int EntryPoint);
	void OnResolutionSelected__DelegateSignature(MidairCE_EMappingConflictResolution Resolution);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
