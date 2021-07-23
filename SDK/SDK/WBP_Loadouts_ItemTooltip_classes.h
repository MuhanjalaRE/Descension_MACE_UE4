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

// WidgetBlueprintGeneratedClass WBP_Loadouts_ItemTooltip.WBP_Loadouts_ItemTooltip_C
// 0x0008 (FullSize[0x0240] - InheritedSize[0x0238])
class UWBP_Loadouts_ItemTooltip_C : public UUserWidget
{
public:
	class UTextBlock*                                  TextBlock_219;                                             // 0x0238(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr){
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WBP_Loadouts_ItemTooltip.WBP_Loadouts_ItemTooltip_C");
		}
		return ptr;
	}



	struct FText Get_TextBlock_218_Text_1();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
