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

// WidgetBlueprintGeneratedClass WBP_ComboItem.WBP_ComboItem_C
// 0x0021 (FullSize[0x0259] - InheritedSize[0x0238])
class UWBP_ComboItem_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0238(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UTextBlock*                                  TextVar;                                                   // 0x0240(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FString                                     Text;                                                      // 0x0248(0x0010) (Edit, BlueprintVisible, ZeroConstructor, ExposeOnSpawn, HasGetValueTypeHash)
	bool                                               bHasExistedForSomeTime;                                    // 0x0258(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr){
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WBP_ComboItem.WBP_ComboItem_C");
		}
		return ptr;
	}



	void Construct();
	void OnMouseEnter(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent);
	void ExecuteUbergraph_WBP_ComboItem(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
