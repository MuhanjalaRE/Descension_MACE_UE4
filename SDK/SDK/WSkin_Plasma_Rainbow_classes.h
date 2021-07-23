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

// BlueprintGeneratedClass WSkin_Plasma_Rainbow.WSkin_Plasma_Rainbow_C
// 0x0000 (FullSize[0x0300] - InheritedSize[0x0300])
class AWSkin_Plasma_Rainbow_C : public AWSkin_GrenadeLauncher_Default_C
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr){
			ptr = UObject::FindClass("BlueprintGeneratedClass WSkin_Plasma_Rainbow.WSkin_Plasma_Rainbow_C");
		}
		return ptr;
	}



};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
