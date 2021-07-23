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

// Function BP_PersonalCloak.BP_PersonalCloak_C.OnEnergyDepleted
// (Event, Protected, BlueprintEvent)
void UBP_PersonalCloak_C::OnEnergyDepleted()
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function BP_PersonalCloak.BP_PersonalCloak_C.OnEnergyDepleted");
	}

	UBP_PersonalCloak_C_OnEnergyDepleted_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_PersonalCloak.BP_PersonalCloak_C.OnActiveChanged
// (Event, Protected, BlueprintEvent)
// Parameters:
// class AMACharacter*            ReceivingCharacter             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_PersonalCloak_C::OnActiveChanged(class AMACharacter* ReceivingCharacter)
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function BP_PersonalCloak.BP_PersonalCloak_C.OnActiveChanged");
	}

	UBP_PersonalCloak_C_OnActiveChanged_Params params;
	params.ReceivingCharacter = ReceivingCharacter;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_PersonalCloak.BP_PersonalCloak_C.ExecuteUbergraph_BP_PersonalCloak
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_PersonalCloak_C::ExecuteUbergraph_BP_PersonalCloak(int EntryPoint)
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function BP_PersonalCloak.BP_PersonalCloak_C.ExecuteUbergraph_BP_PersonalCloak");
	}

	UBP_PersonalCloak_C_ExecuteUbergraph_BP_PersonalCloak_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
