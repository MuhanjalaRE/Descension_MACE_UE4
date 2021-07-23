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
// Parameters
//---------------------------------------------------------------------------

// Function BP_OOBGrid.BP_OOBGrid_C.ApplyFadeSetting
struct ABP_OOBGrid_C_ApplyFadeSetting_Params
{
	class UPrimitiveComponent*                         Component;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              FadeDistance;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*                    Material;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_OOBGrid.BP_OOBGrid_C.UserConstructionScript
struct ABP_OOBGrid_C_UserConstructionScript_Params
{
};

// Function BP_OOBGrid.BP_OOBGrid_C.BP_PlayOOBEffects
struct ABP_OOBGrid_C_BP_PlayOOBEffects_Params
{
	class AActor*                                      ActorExiting;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                     Location;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                     WallNormal;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_OOBGrid.BP_OOBGrid_C.ExecuteUbergraph_BP_OOBGrid
struct ABP_OOBGrid_C_ExecuteUbergraph_BP_OOBGrid_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
