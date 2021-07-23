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

// BlueprintGeneratedClass JSkin_Default.JSkin_Default_C
// 0x0008 (FullSize[0x02E0] - InheritedSize[0x02D8])
class AJSkin_Default_C : public AParticleConfiguration
{
public:
	class UCameraComponent*                            Camera;                                                    // 0x02D8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr){
			ptr = UObject::FindClass("BlueprintGeneratedClass JSkin_Default.JSkin_Default_C");
		}
		return ptr;
	}



	void UserConstructionScript();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
