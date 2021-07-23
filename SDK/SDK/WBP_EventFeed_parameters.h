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

// Function WBP_EventFeed.WBP_EventFeed_C.SetVTPlayerState
struct UWBP_EventFeed_C_SetVTPlayerState_Params
{
};

// Function WBP_EventFeed.WBP_EventFeed_C.AddMessage
struct UWBP_EventFeed_C_AddMessage_Params
{
	class UClass*                                      MessageClass;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	struct FLocalMessageData                           MessageData;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function WBP_EventFeed.WBP_EventFeed_C.BP_Clear
struct UWBP_EventFeed_C_BP_Clear_Params
{
};

// Function WBP_EventFeed.WBP_EventFeed_C.Construct
struct UWBP_EventFeed_C_Construct_Params
{
};

// Function WBP_EventFeed.WBP_EventFeed_C.Tick
struct UWBP_EventFeed_C_Tick_Params
{
	struct FGeometry                                   MyGeometry;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	float                                              InDeltaTime;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_EventFeed.WBP_EventFeed_C.ExecuteUbergraph_WBP_EventFeed
struct UWBP_EventFeed_C_ExecuteUbergraph_WBP_EventFeed_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
