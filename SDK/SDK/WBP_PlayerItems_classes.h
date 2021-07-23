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

// WidgetBlueprintGeneratedClass WBP_PlayerItems.WBP_PlayerItems_C
// 0x0030 (FullSize[0x0268] - InheritedSize[0x0238])
class UWBP_PlayerItems_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0238(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UImage*                                      Image_1;                                                   // 0x0240(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                                    ItemExampleWidget;                                         // 0x0248(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                                  TextBlock_1;                                               // 0x0250(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_BindingIcon_C*                          WBP_BindingIcon_144;                                       // 0x0258(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class AMACharacter*                                CharacterVT;                                               // 0x0260(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr){
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WBP_PlayerItems.WBP_PlayerItems_C");
		}
		return ptr;
	}



	struct FText GetText_1();
	UMG_ESlateVisibility Get_ItemExampleWidget_Visibility_1();
	void GetObjectInfo(class UObjectInfo** Info);
	struct FSlateBrush GetBrush_1();
	void Construct();
	void Slow_Tick();
	void ExecuteUbergraph_WBP_PlayerItems(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
