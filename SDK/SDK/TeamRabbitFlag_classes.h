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

// BlueprintGeneratedClass TeamRabbitFlag.TeamRabbitFlag_C
// 0x0008 (FullSize[0x0518] - InheritedSize[0x0510])
class ATeamRabbitFlag_C : public AMATRFlag
{
public:
	class UAudioComponent*                             IdleLoopSound;                                             // 0x0510(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr){
			ptr = UObject::FindClass("BlueprintGeneratedClass TeamRabbitFlag.TeamRabbitFlag_C");
		}
		return ptr;
	}



};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
