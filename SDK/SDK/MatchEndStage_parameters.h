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

// Function MatchEndStage.MatchEndStage_C.GetTop5Players
struct AMatchEndStage_C_GetTop5Players_Params
{
};

// Function MatchEndStage.MatchEndStage_C.LookAtCamera
struct AMatchEndStage_C_LookAtCamera_Params
{
	struct FVector                                     A;                                                         // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                                    ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function MatchEndStage.MatchEndStage_C.SetUpPlayer
struct AMatchEndStage_C_SetUpPlayer_Params
{
	struct FTransform                                  A;                                                         // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor)
	struct FString                                     PlayerName;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
};

// Function MatchEndStage.MatchEndStage_C.Showtime
struct AMatchEndStage_C_Showtime_Params
{
};

// Function MatchEndStage.MatchEndStage_C.ReceiveBeginPlay
struct AMatchEndStage_C_ReceiveBeginPlay_Params
{
};

// Function MatchEndStage.MatchEndStage_C.ExecuteUbergraph_MatchEndStage
struct AMatchEndStage_C_ExecuteUbergraph_MatchEndStage_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
