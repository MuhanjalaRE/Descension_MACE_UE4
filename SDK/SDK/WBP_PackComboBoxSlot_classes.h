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

// WidgetBlueprintGeneratedClass WBP_PackComboBoxSlot.WBP_PackComboBoxSlot_C
// 0x0018 (FullSize[0x0250] - InheritedSize[0x0238])
class UWBP_PackComboBoxSlot_C : public UUserWidget
{
public:
	class UTextBlock*                                  PackName;                                                  // 0x0238(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FString                                     DisplayName;                                               // 0x0240(0x0010) (Edit, BlueprintVisible, ZeroConstructor, ExposeOnSpawn, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr){
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WBP_PackComboBoxSlot.WBP_PackComboBoxSlot_C");
		}
		return ptr;
	}



};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
