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

// Function MatchEndStage.MatchEndStage_C.GetTop5Players
// (Public, BlueprintCallable, BlueprintEvent)
void AMatchEndStage_C::GetTop5Players()
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function MatchEndStage.MatchEndStage_C.GetTop5Players");
	}

	AMatchEndStage_C_GetTop5Players_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function MatchEndStage.MatchEndStage_C.LookAtCamera
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                 A                              (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
struct FRotator AMatchEndStage_C::LookAtCamera(struct FVector* A)
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function MatchEndStage.MatchEndStage_C.LookAtCamera");
	}

	AMatchEndStage_C_LookAtCamera_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (A != nullptr)
		*A = params.A;


	return params.ReturnValue;
}


// Function MatchEndStage.MatchEndStage_C.SetUpPlayer
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FTransform              A                              (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor)
// struct FString                 PlayerName                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
void AMatchEndStage_C::SetUpPlayer(struct FTransform* A, const struct FString& PlayerName)
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function MatchEndStage.MatchEndStage_C.SetUpPlayer");
	}

	AMatchEndStage_C_SetUpPlayer_Params params;
	params.PlayerName = PlayerName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (A != nullptr)
		*A = params.A;

}


// Function MatchEndStage.MatchEndStage_C.Showtime
// (Public, BlueprintCallable, BlueprintEvent)
void AMatchEndStage_C::Showtime()
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function MatchEndStage.MatchEndStage_C.Showtime");
	}

	AMatchEndStage_C_Showtime_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function MatchEndStage.MatchEndStage_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
void AMatchEndStage_C::ReceiveBeginPlay()
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function MatchEndStage.MatchEndStage_C.ReceiveBeginPlay");
	}

	AMatchEndStage_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function MatchEndStage.MatchEndStage_C.ExecuteUbergraph_MatchEndStage
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AMatchEndStage_C::ExecuteUbergraph_MatchEndStage(int EntryPoint)
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function MatchEndStage.MatchEndStage_C.ExecuteUbergraph_MatchEndStage");
	}

	AMatchEndStage_C_ExecuteUbergraph_MatchEndStage_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
