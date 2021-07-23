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

// BlueprintGeneratedClass BP_RingLauncherProjectile.BP_RingLauncherProjectile_C
// 0x0008 (FullSize[0x0810] - InheritedSize[0x0808])
class ABP_RingLauncherProjectile_C : public AMAProjectile
{
public:
	unsigned char                                      UnknownData_8DWS[0x8];                                     // 0x0808(0x0008) Fix Super Size


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr){
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_RingLauncherProjectile.BP_RingLauncherProjectile_C");
		}
		return ptr;
	}



};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
