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

// WidgetBlueprintGeneratedClass WBP_InputCategory.WBP_InputCategory_C
// 0x0091 (FullSize[0x02C9] - InheritedSize[0x0238])
class UWBP_InputCategory_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0238(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UVerticalBox*                                BindingsBox;                                               // 0x0240(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UExpandableArea*                             ExpandableArea_1;                                          // 0x0248(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                      Image_139;                                                 // 0x0250(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                                  TextBlock_1;                                               // 0x0258(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FMidairInputCategory                        Category;                                                  // 0x0260(0x0040) (Edit, BlueprintVisible, ExposeOnSpawn)
	class UMAInputSettings*                            MAIS;                                                      // 0x02A0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FName                                       Name;                                                      // 0x02A8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                                  Hover_Sound;                                               // 0x02B0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                                  Open_Sound;                                                // 0x02B8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                                  Close_Sound;                                               // 0x02C0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               bHasExistedForSomeTime;                                    // 0x02C8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr){
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WBP_InputCategory.WBP_InputCategory_C");
		}
		return ptr;
	}



	class UWidget* GetToolTipWidget();
	void ClearBinds();
	void Add_Bind(const struct FMidairInputMapping& Mapping);
	void OnKeyBindAttempt(const struct FName& Name, const struct FInputActionKeyMapping& NewKey, MidairCE_EMappingPriority Priority);
	void OnKeyClearAttempt(const struct FName& Name, MidairCE_EMappingPriority Priority);
	void OnKeyResetAttempt(const struct FName& Name, MidairCE_EMappingPriority Priority);
	void Construct();
	void Update_Binding(const struct FMidairInputMapping& New_Mapping);
	void BndEvt__ExpandableArea_0_K2Node_ComponentBoundEvent_0_OnExpandableAreaExpansionChanged__DelegateSignature(class UExpandableArea* Area, bool bIsExpanded);
	void OnMouseEnter(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent);
	void ExecuteUbergraph_WBP_InputCategory(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
