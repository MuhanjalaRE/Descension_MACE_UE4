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

// BlueprintGeneratedClass BP_Chaingun_Bullet.BP_Chaingun_Bullet_C
// 0x0024 (FullSize[0x082C] - InheritedSize[0x0808])
class ABP_Chaingun_Bullet_C : public AMAProjectile
{
public:
	unsigned char                                      UnknownData_83T9[0x8];                                     // 0x0808(0x0008) Fix Super Size
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0810(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UParticleSystemComponent*                    ParticleSystem;                                            // 0x0818(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                        SM_Chaingun_Tracer;                                        // 0x0820(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	int                                                TickCount;                                                 // 0x0828(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr){
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_Chaingun_Bullet.BP_Chaingun_Bullet_C");
		}
		return ptr;
	}



	void ReceiveBeginPlay();
	void ReceiveHit(class UPrimitiveComponent* MyComp, class AActor* Other, class UPrimitiveComponent* OtherComp, bool bSelfMoved, const struct FVector& HitLocation, const struct FVector& HitNormal, const struct FVector& NormalImpulse, const struct FHitResult& Hit);
	void ExecuteUbergraph_BP_Chaingun_Bullet(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
