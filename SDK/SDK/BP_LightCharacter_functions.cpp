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

// Function BP_LightCharacter.BP_LightCharacter_C.BP_UpdateForClientPerspective
// (Event, Public, BlueprintEvent)
// Parameters:
// bool                           bFirstPerson                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_LightCharacter_C::BP_UpdateForClientPerspective(bool bFirstPerson)
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function BP_LightCharacter.BP_LightCharacter_C.BP_UpdateForClientPerspective");
	}

	ABP_LightCharacter_C_BP_UpdateForClientPerspective_Params params;
	params.bFirstPerson = bFirstPerson;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_LightCharacter.BP_LightCharacter_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                          DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_LightCharacter_C::ReceiveTick(float DeltaSeconds)
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function BP_LightCharacter.BP_LightCharacter_C.ReceiveTick");
	}

	ABP_LightCharacter_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_LightCharacter.BP_LightCharacter_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
void ABP_LightCharacter_C::ReceiveBeginPlay()
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function BP_LightCharacter.BP_LightCharacter_C.ReceiveBeginPlay");
	}

	ABP_LightCharacter_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_LightCharacter.BP_LightCharacter_C.ExecuteUbergraph_BP_LightCharacter
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_LightCharacter_C::ExecuteUbergraph_BP_LightCharacter(int EntryPoint)
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function BP_LightCharacter.BP_LightCharacter_C.ExecuteUbergraph_BP_LightCharacter");
	}

	ABP_LightCharacter_C_ExecuteUbergraph_BP_LightCharacter_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
