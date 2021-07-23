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

// WidgetBlueprintGeneratedClass WBP_LoadoutsPackSlot.WBP_LoadoutsPackSlot_C
// 0x0038 (FullSize[0x03F0] - InheritedSize[0x03B8])
class UWBP_LoadoutsPackSlot_C : public UWBP_SelectableButton_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x03B8(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UBorder*                                     Border_1;                                                  // 0x03C0(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                                  ItemName;                                                  // 0x03C8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UClass*                                      ItemClass;                                                 // 0x03D0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	float                                              LastTimeHovered;                                           // 0x03D8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_ZZL2[0x4];                                     // 0x03DC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FScriptMulticastDelegate                    Jump_To_Pack;                                              // 0x03E0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, BlueprintAssignable, BlueprintCallable)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr){
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WBP_LoadoutsPackSlot.WBP_LoadoutsPackSlot_C");
		}
		return ptr;
	}



	struct FSlateColor Get_ItemName_ColorAndOpacity_1();
	struct FLinearColor GetBrushColor_1();
	struct FEventReply OnMouseMove_1(const struct FGeometry& MyGeometry, struct FPointerEvent* MouseEvent);
	struct FEventReply OnMouseButtonUp_1(const struct FGeometry& MyGeometry, struct FPointerEvent* MouseEvent);
	struct FEventReply OnMouseButtonDown_1(const struct FGeometry& MyGeometry, struct FPointerEvent* MouseEvent);
	void Construct();
	void Update_From_Class(class UClass* Class);
	void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
	void BndEvt__UnlockButton_K2Node_ComponentBoundEvent_15_OnButtonClickedEvent__DelegateSignature();
	void OnMouseEnter(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent);
	void ExecuteUbergraph_WBP_LoadoutsPackSlot(int EntryPoint);
	void Jump_To_Pack__DelegateSignature(class UClass* Object_Info);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
