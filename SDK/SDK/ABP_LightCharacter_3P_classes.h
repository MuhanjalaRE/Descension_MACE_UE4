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

// AnimBlueprintGeneratedClass ABP_LightCharacter_3P.ABP_LightCharacter_3P_C
// 0x0000 (FullSize[0x49F2] - InheritedSize[0x49F2])
class UABP_LightCharacter_3P_C : public UABP_Character_3P_New_C
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr){
			ptr = UObject::FindClass("AnimBlueprintGeneratedClass ABP_LightCharacter_3P.ABP_LightCharacter_3P_C");
		}
		return ptr;
	}



	void Get_Weapon_Scale(class AMAWeaponAttachment* Weapon, float* Weapon_Scale);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
