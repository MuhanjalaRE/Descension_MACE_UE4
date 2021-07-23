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

// BlueprintGeneratedClass BP_RouteTrailMarker.BP_RouteTrailMarker_C
// 0x0011 (FullSize[0x0291] - InheritedSize[0x0280])
class ABP_RouteTrailMarker_C : public AMAPlayerTrailMarker
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0280(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class USkeletalMeshComponent*                      Marker;                                                    // 0x0288(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	bool                                               hasBeenTouched;                                            // 0x0290(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr){
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_RouteTrailMarker.BP_RouteTrailMarker_C");
		}
		return ptr;
	}



	void ReceiveActorEndOverlap(class AActor* OtherActor);
	void ExecuteUbergraph_BP_RouteTrailMarker(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
