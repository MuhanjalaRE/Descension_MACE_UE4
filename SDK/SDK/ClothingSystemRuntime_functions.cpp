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

// Function ClothingSystemRuntime.ClothingSimulationInteractorNv.SetAnimDriveSpringStiffness
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                          InStiffness                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UClothingSimulationInteractorNv::SetAnimDriveSpringStiffness(float InStiffness)
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function ClothingSystemRuntime.ClothingSimulationInteractorNv.SetAnimDriveSpringStiffness");
	}

	UClothingSimulationInteractorNv_SetAnimDriveSpringStiffness_Params params;
	params.InStiffness = InStiffness;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ClothingSystemRuntime.ClothingSimulationInteractorNv.SetAnimDriveDamperStiffness
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                          InStiffness                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UClothingSimulationInteractorNv::SetAnimDriveDamperStiffness(float InStiffness)
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function ClothingSystemRuntime.ClothingSimulationInteractorNv.SetAnimDriveDamperStiffness");
	}

	UClothingSimulationInteractorNv_SetAnimDriveDamperStiffness_Params params;
	params.InStiffness = InStiffness;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ClothingSystemRuntime.ClothingSimulationInteractorNv.EnableGravityOverride
// (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// struct FVector                 InVector                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UClothingSimulationInteractorNv::EnableGravityOverride(const struct FVector& InVector)
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function ClothingSystemRuntime.ClothingSimulationInteractorNv.EnableGravityOverride");
	}

	UClothingSimulationInteractorNv_EnableGravityOverride_Params params;
	params.InVector = InVector;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ClothingSystemRuntime.ClothingSimulationInteractorNv.DisableGravityOverride
// (Final, Native, Public, BlueprintCallable)
void UClothingSimulationInteractorNv::DisableGravityOverride()
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function ClothingSystemRuntime.ClothingSimulationInteractorNv.DisableGravityOverride");
	}

	UClothingSimulationInteractorNv_DisableGravityOverride_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
