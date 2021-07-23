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

// WidgetBlueprintGeneratedClass WBP_CosmeticGridPanel.WBP_CosmeticGridPanel_C
// 0x0048 (FullSize[0x0280] - InheritedSize[0x0238])
class UWBP_CosmeticGridPanel_C : public UUserWidget
{
public:
	class UGridPanel*                                  Grid;                                                      // 0x0238(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	int                                                CurrentlyUsedWidgets;                                      // 0x0240(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                NumElementsPerRow;                                         // 0x0244(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FScriptMulticastDelegate                    Unlocked_Item_Selected;                                    // 0x0248(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	struct FScriptMulticastDelegate                    Locked_Item_Selected;                                      // 0x0258(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	class UWBP_CosmeticGridPanelItem_C*                LastSelectedButton;                                        // 0x0268(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FName                                       Cosmetic_Tag;                                              // 0x0270(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWBP_CosmeticGridPanelItem_C*                LastEquippedButton;                                        // 0x0278(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr){
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WBP_CosmeticGridPanel.WBP_CosmeticGridPanel_C");
		}
		return ptr;
	}



	void Update_Equipped_Class(class UClass* Cosmetic_Class);
	void DispatchSelectionAttempt(class UClass* Class, class UWBP_CosmeticGridPanelItem_C* Button);
	void Update(TArray<class UClass*>* Cosmetics, const struct FName& Tag);
	void Set_Num_Slots(int Desired_Num);
	void Remove_Item_Slot();
	void Add_Item_Slot(class UWBP_CosmeticGridPanelItem_C** Item_Widget);
	void Locked_Item_Selected__DelegateSignature(class UClass* Class, class UObjectInfo* Info);
	void Unlocked_Item_Selected__DelegateSignature(class UClass* Class, class UObjectInfo* Info);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
