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

// Function Spray_Default.Spray_Default_C.UpdateDecal
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UDecalComponent*         Decal                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ASpray_Default_C::UpdateDecal(class UDecalComponent* Decal)
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function Spray_Default.Spray_Default_C.UpdateDecal");
	}

	ASpray_Default_C_UpdateDecal_Params params;
	params.Decal = Decal;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Spray_Default.Spray_Default_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
void ASpray_Default_C::UserConstructionScript()
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function Spray_Default.Spray_Default_C.UserConstructionScript");
	}

	ASpray_Default_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Spray_Default.Spray_Default_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
void ASpray_Default_C::ReceiveBeginPlay()
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function Spray_Default.Spray_Default_C.ReceiveBeginPlay");
	}

	ASpray_Default_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Spray_Default.Spray_Default_C.ExecuteUbergraph_Spray_Default
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ASpray_Default_C::ExecuteUbergraph_Spray_Default(int EntryPoint)
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function Spray_Default.Spray_Default_C.ExecuteUbergraph_Spray_Default");
	}

	ASpray_Default_C_ExecuteUbergraph_Spray_Default_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
