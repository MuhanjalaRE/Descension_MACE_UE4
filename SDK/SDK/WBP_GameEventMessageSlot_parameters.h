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

// Function WBP_GameEventMessageSlot.WBP_GameEventMessageSlot_C.Construct
struct UWBP_GameEventMessageSlot_C_Construct_Params
{
};

// Function WBP_GameEventMessageSlot.WBP_GameEventMessageSlot_C.Tick
struct UWBP_GameEventMessageSlot_C_Tick_Params
{
	struct FGeometry                                   MyGeometry;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	float                                              InDeltaTime;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_GameEventMessageSlot.WBP_GameEventMessageSlot_C.ExecuteUbergraph_WBP_GameEventMessageSlot
struct UWBP_GameEventMessageSlot_C_ExecuteUbergraph_WBP_GameEventMessageSlot_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
