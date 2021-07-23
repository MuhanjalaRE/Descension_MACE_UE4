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

// Function WBP_GameEventMessages.WBP_GameEventMessages_C.PlayPracticeSound
struct UWBP_GameEventMessages_C_PlayPracticeSound_Params
{
	unsigned char                                      Message_Index;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_GameEventMessages.WBP_GameEventMessages_C.Play Rabbit Sound
struct UWBP_GameEventMessages_C_Play_Rabbit_Sound_Params
{
	unsigned char                                      Message_Index;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_GameEventMessages.WBP_GameEventMessages_C.SetIsFriendly
struct UWBP_GameEventMessages_C_SetIsFriendly_Params
{
	bool                                               FriendlyOnSameTeam;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function WBP_GameEventMessages.WBP_GameEventMessages_C.Play Event Sound
struct UWBP_GameEventMessages_C_Play_Event_Sound_Params
{
	TEnumAsByte<MidairCE_EGameMessage>                 Selection;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_GameEventMessages.WBP_GameEventMessages_C.AddMessage
struct UWBP_GameEventMessages_C_AddMessage_Params
{
	class UClass*                                      MessageClass;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	struct FLocalMessageData                           MessageData;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function WBP_GameEventMessages.WBP_GameEventMessages_C.Construct
struct UWBP_GameEventMessages_C_Construct_Params
{
};

// Function WBP_GameEventMessages.WBP_GameEventMessages_C.CustomEvent_1
struct UWBP_GameEventMessages_C_CustomEvent_1_Params
{
};

// Function WBP_GameEventMessages.WBP_GameEventMessages_C.ExecuteUbergraph_WBP_GameEventMessages
struct UWBP_GameEventMessages_C_ExecuteUbergraph_WBP_GameEventMessages_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
