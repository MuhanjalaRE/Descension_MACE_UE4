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

// Function ABP_Character_3P.ABP_Character_3P_C.AnimGraph
struct UABP_Character_3P_C_AnimGraph_Params
{
	struct FPoseLink                                   AnimGraph;                                                 // (Parm, OutParm, NoDestructor)
};

// Function ABP_Character_3P.ABP_Character_3P_C.Determine Is Floating
struct UABP_Character_3P_C_Determine_Is_Floating_Params
{
};

// Function ABP_Character_3P.ABP_Character_3P_C.Determine Is Skating
struct UABP_Character_3P_C_Determine_Is_Skating_Params
{
};

// Function ABP_Character_3P.ABP_Character_3P_C.Setup Foot IK
struct UABP_Character_3P_C_Setup_Foot_IK_Params
{
	struct FName                                       FootIKBoneName;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                     EffectorLocation;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FName                                       KneeTargetName;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                     KneeTarget;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               Success;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                              Z_Offset;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function ABP_Character_3P.ABP_Character_3P_C.Get Foot Size
struct UABP_Character_3P_C_Get_Foot_Size_Params
{
	float                                              Size;                                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function ABP_Character_3P.ABP_Character_3P_C.Get Weapon Scale
struct UABP_Character_3P_C_Get_Weapon_Scale_Params
{
	class AMAWeaponAttachment*                         Weapon_Attachment;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              Scale;                                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function ABP_Character_3P.ABP_Character_3P_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Character_3P_AnimGraphNode_ModifyBone_901096F34B01E9E0E67D0DB698BEAD81
struct UABP_Character_3P_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Character_3P_AnimGraphNode_ModifyBone_901096F34B01E9E0E67D0DB698BEAD81_Params
{
};

// Function ABP_Character_3P.ABP_Character_3P_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Character_3P_AnimGraphNode_ModifyBone_C1D38FB9441364A39110A8A167F7263A
struct UABP_Character_3P_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Character_3P_AnimGraphNode_ModifyBone_C1D38FB9441364A39110A8A167F7263A_Params
{
};

// Function ABP_Character_3P.ABP_Character_3P_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Character_3P_AnimGraphNode_ModifyBone_49899B3A4C8F4FF1CF32F68C37C30DC0
struct UABP_Character_3P_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Character_3P_AnimGraphNode_ModifyBone_49899B3A4C8F4FF1CF32F68C37C30DC0_Params
{
};

// Function ABP_Character_3P.ABP_Character_3P_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Character_3P_AnimGraphNode_CopyBone_3618154544C293921118B7B6A30111BA
struct UABP_Character_3P_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Character_3P_AnimGraphNode_CopyBone_3618154544C293921118B7B6A30111BA_Params
{
};

// Function ABP_Character_3P.ABP_Character_3P_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Character_3P_AnimGraphNode_ApplyAdditive_D8200478415CFFBB7F0A428877B4BD52
struct UABP_Character_3P_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Character_3P_AnimGraphNode_ApplyAdditive_D8200478415CFFBB7F0A428877B4BD52_Params
{
};

// Function ABP_Character_3P.ABP_Character_3P_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Character_3P_AnimGraphNode_BlendSpacePlayer_E1E5BA194FBEC76C01E85B8789F7DD41
struct UABP_Character_3P_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Character_3P_AnimGraphNode_BlendSpacePlayer_E1E5BA194FBEC76C01E85B8789F7DD41_Params
{
};

// Function ABP_Character_3P.ABP_Character_3P_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Character_3P_AnimGraphNode_RotateRootBone_3DDF4512453DF2A2A503D7A2D73B024F
struct UABP_Character_3P_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Character_3P_AnimGraphNode_RotateRootBone_3DDF4512453DF2A2A503D7A2D73B024F_Params
{
};

// Function ABP_Character_3P.ABP_Character_3P_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Character_3P_AnimGraphNode_RotationOffsetBlendSpace_E703F5334BF3B327AD5A5DA09924A6A2
struct UABP_Character_3P_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Character_3P_AnimGraphNode_RotationOffsetBlendSpace_E703F5334BF3B327AD5A5DA09924A6A2_Params
{
};

// Function ABP_Character_3P.ABP_Character_3P_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Character_3P_AnimGraphNode_TwoBoneIK_D9F680404411F95037BAF0B2A285A87B
struct UABP_Character_3P_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Character_3P_AnimGraphNode_TwoBoneIK_D9F680404411F95037BAF0B2A285A87B_Params
{
};

// Function ABP_Character_3P.ABP_Character_3P_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Character_3P_AnimGraphNode_CopyBone_99083CF3433ACD4EB7050C90155388B2
struct UABP_Character_3P_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Character_3P_AnimGraphNode_CopyBone_99083CF3433ACD4EB7050C90155388B2_Params
{
};

// Function ABP_Character_3P.ABP_Character_3P_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Character_3P_AnimGraphNode_ModifyBone_AB68DF7945B80BCBED9598B1CF40BA72
struct UABP_Character_3P_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Character_3P_AnimGraphNode_ModifyBone_AB68DF7945B80BCBED9598B1CF40BA72_Params
{
};

// Function ABP_Character_3P.ABP_Character_3P_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Character_3P_AnimGraphNode_TwoBoneIK_3795322D4EA377DF0A68179A1847BFF0
struct UABP_Character_3P_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Character_3P_AnimGraphNode_TwoBoneIK_3795322D4EA377DF0A68179A1847BFF0_Params
{
};

// Function ABP_Character_3P.ABP_Character_3P_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Character_3P_AnimGraphNode_BlendListByBool_63FE75D64AACDA868A8F789957CA7B8F
struct UABP_Character_3P_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Character_3P_AnimGraphNode_BlendListByBool_63FE75D64AACDA868A8F789957CA7B8F_Params
{
};

// Function ABP_Character_3P.ABP_Character_3P_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Character_3P_AnimGraphNode_RotationOffsetBlendSpace_5189391A4BBB19A61BED2082643E9CD5
struct UABP_Character_3P_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Character_3P_AnimGraphNode_RotationOffsetBlendSpace_5189391A4BBB19A61BED2082643E9CD5_Params
{
};

// Function ABP_Character_3P.ABP_Character_3P_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Character_3P_AnimGraphNode_TransitionResult_D3F91B0349DA2274D9BE099C799F106D
struct UABP_Character_3P_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Character_3P_AnimGraphNode_TransitionResult_D3F91B0349DA2274D9BE099C799F106D_Params
{
};

// Function ABP_Character_3P.ABP_Character_3P_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Character_3P_AnimGraphNode_TransitionResult_F125F0964BC45992BC6CB79E43DA3F30
struct UABP_Character_3P_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Character_3P_AnimGraphNode_TransitionResult_F125F0964BC45992BC6CB79E43DA3F30_Params
{
};

// Function ABP_Character_3P.ABP_Character_3P_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Character_3P_AnimGraphNode_TransitionResult_4BDEDE6B42E7E6615D19658447987A8A
struct UABP_Character_3P_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Character_3P_AnimGraphNode_TransitionResult_4BDEDE6B42E7E6615D19658447987A8A_Params
{
};

// Function ABP_Character_3P.ABP_Character_3P_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Character_3P_AnimGraphNode_ModifyBone_464F6EB344382B938AA6158EA098FF0D
struct UABP_Character_3P_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Character_3P_AnimGraphNode_ModifyBone_464F6EB344382B938AA6158EA098FF0D_Params
{
};

// Function ABP_Character_3P.ABP_Character_3P_C.BlueprintUpdateAnimation
struct UABP_Character_3P_C_BlueprintUpdateAnimation_Params
{
	float                                              DeltaTimeX;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function ABP_Character_3P.ABP_Character_3P_C.BlueprintInitializeAnimation
struct UABP_Character_3P_C_BlueprintInitializeAnimation_Params
{
};

// Function ABP_Character_3P.ABP_Character_3P_C.AnimNotify_OnFootStep
struct UABP_Character_3P_C_AnimNotify_OnFootStep_Params
{
};

// Function ABP_Character_3P.ABP_Character_3P_C.Hit
struct UABP_Character_3P_C_Hit_Params
{
};

// Function ABP_Character_3P.ABP_Character_3P_C.Player State Received
struct UABP_Character_3P_C_Player_State_Received_Params
{
	class APlayerState*                                Player_State;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function ABP_Character_3P.ABP_Character_3P_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Character_3P_AnimGraphNode_ModifyBone_F5BCAC284A983E6431BE99B1E82C1A78
struct UABP_Character_3P_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Character_3P_AnimGraphNode_ModifyBone_F5BCAC284A983E6431BE99B1E82C1A78_Params
{
};

// Function ABP_Character_3P.ABP_Character_3P_C.ExecuteUbergraph_ABP_Character_3P
struct UABP_Character_3P_C_ExecuteUbergraph_ABP_Character_3P_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
