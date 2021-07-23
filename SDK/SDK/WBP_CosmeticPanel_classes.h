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

// WidgetBlueprintGeneratedClass WBP_CosmeticPanel.WBP_CosmeticPanel_C
// 0x0030 (FullSize[0x0268] - InheritedSize[0x0238])
class UWBP_CosmeticPanel_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0238(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UWBP_SelectableButtonWithText_C*             ACCEPTBUTTON;                                              // 0x0240(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_CosmeticGridPanel_C*                    CosmeticGrid;                                              // 0x0248(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_CosmeticLargeDisplay_C*                 CosmeticSelected;                                          // 0x0250(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Loadouts_VoicePacks_C*                  WBP_Loadouts_VoicePacks;                                   // 0x0258(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UClass*                                      Pending_Item;                                              // 0x0260(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr){
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WBP_CosmeticPanel.WBP_CosmeticPanel_C");
		}
		return ptr;
	}



	UMG_ESlateVisibility Get_AcceptButton_Visibility_1();
	void Update_Grid(TArray<class UClass*>* Cosmetics, const struct FName& Tag);
	void BndEvt__CosmeticGrid_K2Node_ComponentBoundEvent_32_Unlocked_Item_Selected__DelegateSignature(class UClass* Class, class UObjectInfo* Info);
	void BndEvt__CosmeticGrid_K2Node_ComponentBoundEvent_37_Locked_Item_Selected__DelegateSignature(class UClass* Class, class UObjectInfo* Info);
	void BndEvt__AcceptButton_K2Node_ComponentBoundEvent_60_ButtonClicked__DelegateSignature(class UWBP_SelectableButton_C* Clicked_Button);
	void ExecuteUbergraph_WBP_CosmeticPanel(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
