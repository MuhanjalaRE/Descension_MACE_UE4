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

// WidgetBlueprintGeneratedClass WBP_Loadouts_PackInfo.WBP_Loadouts_PackInfo_C
// 0x0010 (FullSize[0x0248] - InheritedSize[0x0238])
class UWBP_Loadouts_PackInfo_C : public UUserWidget
{
public:
	class UTextBlock*                                  Description;                                               // 0x0238(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                                  Name;                                                      // 0x0240(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr){
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WBP_Loadouts_PackInfo.WBP_Loadouts_PackInfo_C");
		}
		return ptr;
	}



	void SetErrorOnly(const struct FText& New_Error);
	void Set(class UClass* PackInfo, const struct FText& Error_Text);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
