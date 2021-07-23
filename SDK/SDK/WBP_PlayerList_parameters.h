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

// Function WBP_PlayerList.WBP_PlayerList_C.OnMouseButtonDown_1
struct UWBP_PlayerList_C_OnMouseButtonDown_1_Params
{
	struct FGeometry                                   MyGeometry;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	struct FPointerEvent                               MouseEvent;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FEventReply                                 ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function WBP_PlayerList.WBP_PlayerList_C.UpdateStats
struct UWBP_PlayerList_C_UpdateStats_Params
{
};

// Function WBP_PlayerList.WBP_PlayerList_C.Construct
struct UWBP_PlayerList_C_Construct_Params
{
};

// Function WBP_PlayerList.WBP_PlayerList_C.Refresh Player List
struct UWBP_PlayerList_C_Refresh_Player_List_Params
{
};

// Function WBP_PlayerList.WBP_PlayerList_C.ExecuteUbergraph_WBP_PlayerList
struct UWBP_PlayerList_C_ExecuteUbergraph_WBP_PlayerList_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_PlayerList.WBP_PlayerList_C.On Player Selected__DelegateSignature
struct UWBP_PlayerList_C_On_Player_Selected__DelegateSignature_Params
{
	class APlayerState*                                Player;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
