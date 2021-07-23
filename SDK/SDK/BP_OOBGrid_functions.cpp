// Name: mace, Version: 1.9.1.12285

#include "../pch.h"

/*!!DEFINE!!*/

/*!!HELPER_DEF!!*/

/*!!HELPER_INC!!*/

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
//---------------------------------------------------------------------------
// Functions
//---------------------------------------------------------------------------

// Function BP_OOBGrid.BP_OOBGrid_C.ApplyFadeSetting
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*     Component                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          FadeDistance                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic* Material                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_OOBGrid_C::ApplyFadeSetting(class UPrimitiveComponent* Component, float FadeDistance, class UMaterialInstanceDynamic** Material)
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function BP_OOBGrid.BP_OOBGrid_C.ApplyFadeSetting");
	}

	ABP_OOBGrid_C_ApplyFadeSetting_Params params;
	params.Component = Component;
	params.FadeDistance = FadeDistance;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Material != nullptr)
		*Material = params.Material;

}


// Function BP_OOBGrid.BP_OOBGrid_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
void ABP_OOBGrid_C::UserConstructionScript()
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function BP_OOBGrid.BP_OOBGrid_C.UserConstructionScript");
	}

	ABP_OOBGrid_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_OOBGrid.BP_OOBGrid_C.BP_PlayOOBEffects
// (Event, Protected, BlueprintEvent)
// Parameters:
// class AActor*                  ActorExiting                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                 Location                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                 WallNormal                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_OOBGrid_C::BP_PlayOOBEffects(class AActor* ActorExiting, const struct FVector& Location, const struct FVector& WallNormal)
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function BP_OOBGrid.BP_OOBGrid_C.BP_PlayOOBEffects");
	}

	ABP_OOBGrid_C_BP_PlayOOBEffects_Params params;
	params.ActorExiting = ActorExiting;
	params.Location = Location;
	params.WallNormal = WallNormal;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_OOBGrid.BP_OOBGrid_C.ExecuteUbergraph_BP_OOBGrid
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_OOBGrid_C::ExecuteUbergraph_BP_OOBGrid(int EntryPoint)
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function BP_OOBGrid.BP_OOBGrid_C.ExecuteUbergraph_BP_OOBGrid");
	}

	ABP_OOBGrid_C_ExecuteUbergraph_BP_OOBGrid_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
