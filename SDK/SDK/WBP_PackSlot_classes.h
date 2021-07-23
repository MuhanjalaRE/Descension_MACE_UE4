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

// WidgetBlueprintGeneratedClass WBP_PackSlot.WBP_PackSlot_C
// 0x0030 (FullSize[0x0268] - InheritedSize[0x0238])
class UWBP_PackSlot_C : public UUserWidget
{
public:
	class UTextBlock*                                  AugmentName;                                               // 0x0238(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBorder*                                     Border_70;                                                 // 0x0240(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UProgressBar*                                ProgressBar_3;                                             // 0x0248(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UClass*                                      Backpack_Class;                                            // 0x0250(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAugment*                                    Augment;                                                   // 0x0258(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAugment*                                    Primary_Augment;                                           // 0x0260(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr){
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WBP_PackSlot.WBP_PackSlot_C");
		}
		return ptr;
	}



	UMG_ESlateVisibility GetVisibility_1();
	struct FSlateColor GetForegroundColor_1();
	struct FLinearColor GetBrushColor_2();
	struct FLinearColor GetBrushColor_1();
	float GetPercent_1();
	void UpdateInfo(class UClass* Backpack_Class, class AMABackpack* Backpack);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
