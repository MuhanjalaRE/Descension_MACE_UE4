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

// BlueprintGeneratedClass BP_OOBGrid.BP_OOBGrid_C
// 0x0014 (FullSize[0x035C] - InheritedSize[0x0348])
class ABP_OOBGrid_C : public AConfigurableOOBVolume
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0348(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	float                                              InnerBoundsFadeDistance;                                   // 0x0350(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              OuterBoundsFadeDistance;                                   // 0x0354(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              UV_Scale;                                                  // 0x0358(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr){
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_OOBGrid.BP_OOBGrid_C");
		}
		return ptr;
	}



	void ApplyFadeSetting(class UPrimitiveComponent* Component, float FadeDistance, class UMaterialInstanceDynamic** Material);
	void UserConstructionScript();
	void BP_PlayOOBEffects(class AActor* ActorExiting, const struct FVector& Location, const struct FVector& WallNormal);
	void ExecuteUbergraph_BP_OOBGrid(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
