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

// BlueprintGeneratedClass MenuUnlockableInfo.MenuUnlockableInfo_C
// 0x0000 (FullSize[0x00F8] - InheritedSize[0x00F8])
class UMenuUnlockableInfo_C : public UMenuUnlockable
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr){
			ptr = UObject::FindClass("BlueprintGeneratedClass MenuUnlockableInfo.MenuUnlockableInfo_C");
		}
		return ptr;
	}



};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
