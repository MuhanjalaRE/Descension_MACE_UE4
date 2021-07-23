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

// Function WBP_EventFeedSlot.WBP_EventFeedSlot_C.GetBrushColor_1
struct UWBP_EventFeedSlot_C_GetBrushColor_1_Params
{
	struct FLinearColor                                ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_EventFeedSlot.WBP_EventFeedSlot_C.Set Text Color
struct UWBP_EventFeedSlot_C_Set_Text_Color_Params
{
	class AMAPlayerState*                              PlayerState;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UTextBlock*                                  Text;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AMAPlayerState*                              VTPlayerState;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_EventFeedSlot.WBP_EventFeedSlot_C.Update View Target Player State
struct UWBP_EventFeedSlot_C_Update_View_Target_Player_State_Params
{
	class AMAPlayerState*                              VTPlayerState;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_EventFeedSlot.WBP_EventFeedSlot_C.Get_DamageTypeIcon_Brush_1
struct UWBP_EventFeedSlot_C_Get_DamageTypeIcon_Brush_1_Params
{
	struct FSlateBrush                                 ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function WBP_EventFeedSlot.WBP_EventFeedSlot_C.Set Text
struct UWBP_EventFeedSlot_C_Set_Text_Params
{
	class AMAPlayerState*                              PlayerState;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UTextBlock*                                  Text;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_EventFeedSlot.WBP_EventFeedSlot_C.Fill
struct UWBP_EventFeedSlot_C_Fill_Params
{
	class AMAPlayerState*                              Killer;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AMAPlayerState*                              Victim;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AMAPlayerState*                              Assist;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMADamageType*                               DamageType;                                                // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AMAPlayerState*                              VTPlayerState;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              Rating;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_EventFeedSlot.WBP_EventFeedSlot_C.Construct
struct UWBP_EventFeedSlot_C_Construct_Params
{
};

// Function WBP_EventFeedSlot.WBP_EventFeedSlot_C.Tick
struct UWBP_EventFeedSlot_C_Tick_Params
{
	struct FGeometry                                   MyGeometry;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	float                                              InDeltaTime;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_EventFeedSlot.WBP_EventFeedSlot_C.ExecuteUbergraph_WBP_EventFeedSlot
struct UWBP_EventFeedSlot_C_ExecuteUbergraph_WBP_EventFeedSlot_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
