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

// BlueprintGeneratedClass BP_RingLauncher.BP_RingLauncher_C
// 0x0000 (FullSize[0x0378] - InheritedSize[0x0378])
class ABP_RingLauncher_C : public AMAWeapon
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr){
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_RingLauncher.BP_RingLauncher_C");
		}
		return ptr;
	}



};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
