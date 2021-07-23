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

// BlueprintGeneratedClass IWBP_NewItemBadgeCarrier.IWBP_NewItemBadgeCarrier_C
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UIWBP_NewItemBadgeCarrier_C : public UInterface
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr){
			ptr = UObject::FindClass("BlueprintGeneratedClass IWBP_NewItemBadgeCarrier.IWBP_NewItemBadgeCarrier_C");
		}
		return ptr;
	}



	void DoesHaveNewItemBadge(bool* HasNewItemBadge);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
