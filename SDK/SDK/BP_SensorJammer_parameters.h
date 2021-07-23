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

// Function BP_SensorJammer.BP_SensorJammer_C.GetCurrentEnergyChangeRate
struct UBP_SensorJammer_C_GetCurrentEnergyChangeRate_Params
{
	float                                              ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_SensorJammer.BP_SensorJammer_C.OnGivenTo
struct UBP_SensorJammer_C_OnGivenTo_Params
{
};

// Function BP_SensorJammer.BP_SensorJammer_C.OnRemoved
struct UBP_SensorJammer_C_OnRemoved_Params
{
};

// Function BP_SensorJammer.BP_SensorJammer_C.OnAddBuddy
struct UBP_SensorJammer_C_OnAddBuddy_Params
{
	class AMACharacter*                                Buddy;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_SensorJammer.BP_SensorJammer_C.OnRemoveBuddy
struct UBP_SensorJammer_C_OnRemoveBuddy_Params
{
	class AMACharacter*                                Buddy;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_SensorJammer.BP_SensorJammer_C.ExecuteUbergraph_BP_SensorJammer
struct UBP_SensorJammer_C_ExecuteUbergraph_BP_SensorJammer_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
