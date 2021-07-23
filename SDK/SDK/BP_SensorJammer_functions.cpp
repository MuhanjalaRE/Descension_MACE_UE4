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

// Function BP_SensorJammer.BP_SensorJammer_C.GetCurrentEnergyChangeRate
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
float UBP_SensorJammer_C::GetCurrentEnergyChangeRate()
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function BP_SensorJammer.BP_SensorJammer_C.GetCurrentEnergyChangeRate");
	}

	UBP_SensorJammer_C_GetCurrentEnergyChangeRate_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function BP_SensorJammer.BP_SensorJammer_C.OnGivenTo
// (Event, Protected, BlueprintEvent)
void UBP_SensorJammer_C::OnGivenTo()
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function BP_SensorJammer.BP_SensorJammer_C.OnGivenTo");
	}

	UBP_SensorJammer_C_OnGivenTo_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_SensorJammer.BP_SensorJammer_C.OnRemoved
// (Event, Protected, BlueprintEvent)
void UBP_SensorJammer_C::OnRemoved()
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function BP_SensorJammer.BP_SensorJammer_C.OnRemoved");
	}

	UBP_SensorJammer_C_OnRemoved_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_SensorJammer.BP_SensorJammer_C.OnAddBuddy
// (Event, Protected, BlueprintEvent)
// Parameters:
// class AMACharacter*            Buddy                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_SensorJammer_C::OnAddBuddy(class AMACharacter* Buddy)
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function BP_SensorJammer.BP_SensorJammer_C.OnAddBuddy");
	}

	UBP_SensorJammer_C_OnAddBuddy_Params params;
	params.Buddy = Buddy;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_SensorJammer.BP_SensorJammer_C.OnRemoveBuddy
// (Event, Protected, BlueprintEvent)
// Parameters:
// class AMACharacter*            Buddy                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_SensorJammer_C::OnRemoveBuddy(class AMACharacter* Buddy)
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function BP_SensorJammer.BP_SensorJammer_C.OnRemoveBuddy");
	}

	UBP_SensorJammer_C_OnRemoveBuddy_Params params;
	params.Buddy = Buddy;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_SensorJammer.BP_SensorJammer_C.ExecuteUbergraph_BP_SensorJammer
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_SensorJammer_C::ExecuteUbergraph_BP_SensorJammer(int EntryPoint)
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function BP_SensorJammer.BP_SensorJammer_C.ExecuteUbergraph_BP_SensorJammer");
	}

	UBP_SensorJammer_C_ExecuteUbergraph_BP_SensorJammer_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
