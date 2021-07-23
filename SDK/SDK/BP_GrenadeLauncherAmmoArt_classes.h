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

// BlueprintGeneratedClass BP_GrenadeLauncherAmmoArt.BP_GrenadeLauncherAmmoArt_C
// 0x0000 (FullSize[0x02D0] - InheritedSize[0x02D0])
class ABP_GrenadeLauncherAmmoArt_C : public AWeaponAmmoArt
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr){
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_GrenadeLauncherAmmoArt.BP_GrenadeLauncherAmmoArt_C");
		}
		return ptr;
	}



};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
