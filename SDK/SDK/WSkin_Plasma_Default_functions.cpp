﻿// Name: mace, Version: 1.9.1.12285

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

// Function WSkin_Plasma_Default.WSkin_Plasma_Default_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
void AWSkin_Plasma_Default_C::ReceiveBeginPlay()
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function WSkin_Plasma_Default.WSkin_Plasma_Default_C.ReceiveBeginPlay");
	}

	AWSkin_Plasma_Default_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WSkin_Plasma_Default.WSkin_Plasma_Default_C.ExecuteUbergraph_WSkin_Plasma_Default
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AWSkin_Plasma_Default_C::ExecuteUbergraph_WSkin_Plasma_Default(int EntryPoint)
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function WSkin_Plasma_Default.WSkin_Plasma_Default_C.ExecuteUbergraph_WSkin_Plasma_Default");
	}

	AWSkin_Plasma_Default_C_ExecuteUbergraph_WSkin_Plasma_Default_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
