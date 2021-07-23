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

// Function ABP_Character_3P_New.ABP_Character_3P_New_C.AnimGraph
struct UABP_Character_3P_New_C_AnimGraph_Params
{
	struct FPoseLink                                   AnimGraph;                                                 // (Parm, OutParm, NoDestructor)
};

// Function ABP_Character_3P_New.ABP_Character_3P_New_C.Get Weapon Scale
struct UABP_Character_3P_New_C_Get_Weapon_Scale_Params
{
	class AMAWeaponAttachment*                         Weapon;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              Weapon_Scale;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function ABP_Character_3P_New.ABP_Character_3P_New_C.Update Foot IK
struct UABP_Character_3P_New_C_Update_Foot_IK_Params
{
	struct FName                                       FootIKBoneName;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FName                                       KneeTargetName;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              Debug_Surface_Offset;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                     EffectorLocation;                                          // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                     KneeTarget;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               Found_Surface;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector                                     Surface_Normal;                                            // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function ABP_Character_3P_New.ABP_Character_3P_New_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Character_3P_New_AnimGraphNode_LayeredBoneBlend_D558F723427048ED8363E9BF3EBF8436
struct UABP_Character_3P_New_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Character_3P_New_AnimGraphNode_LayeredBoneBlend_D558F723427048ED8363E9BF3EBF8436_Params
{
};

// Function ABP_Character_3P_New.ABP_Character_3P_New_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Character_3P_New_AnimGraphNode_BlendSpacePlayer_B8B0E32449D7FB03541E558C99B291C6
struct UABP_Character_3P_New_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Character_3P_New_AnimGraphNode_BlendSpacePlayer_B8B0E32449D7FB03541E558C99B291C6_Params
{
};

// Function ABP_Character_3P_New.ABP_Character_3P_New_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Character_3P_New_AnimGraphNode_LayeredBoneBlend_231277E74762A97A7C1D5A9300038F58
struct UABP_Character_3P_New_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Character_3P_New_AnimGraphNode_LayeredBoneBlend_231277E74762A97A7C1D5A9300038F58_Params
{
};

// Function ABP_Character_3P_New.ABP_Character_3P_New_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Character_3P_New_AnimGraphNode_TransitionResult_304C2D964B9175F17AB5EFA3535CF64C
struct UABP_Character_3P_New_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Character_3P_New_AnimGraphNode_TransitionResult_304C2D964B9175F17AB5EFA3535CF64C_Params
{
};

// Function ABP_Character_3P_New.ABP_Character_3P_New_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Character_3P_New_AnimGraphNode_ModifyBone_C8A1EEE24BC1CB0C978ABE933CA658E4
struct UABP_Character_3P_New_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Character_3P_New_AnimGraphNode_ModifyBone_C8A1EEE24BC1CB0C978ABE933CA658E4_Params
{
};

// Function ABP_Character_3P_New.ABP_Character_3P_New_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Character_3P_New_AnimGraphNode_TwoWayBlend_25087A084A6A0CCAB0BB20802A7C0F2C
struct UABP_Character_3P_New_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Character_3P_New_AnimGraphNode_TwoWayBlend_25087A084A6A0CCAB0BB20802A7C0F2C_Params
{
};

// Function ABP_Character_3P_New.ABP_Character_3P_New_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Character_3P_New_AnimGraphNode_TransitionResult_94BF9D1A46B9FE9765D4BCBF41ED324F
struct UABP_Character_3P_New_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Character_3P_New_AnimGraphNode_TransitionResult_94BF9D1A46B9FE9765D4BCBF41ED324F_Params
{
};

// Function ABP_Character_3P_New.ABP_Character_3P_New_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Character_3P_New_AnimGraphNode_BlendSpacePlayer_262489AB4D2A033E4833AF87D1936FE1
struct UABP_Character_3P_New_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Character_3P_New_AnimGraphNode_BlendSpacePlayer_262489AB4D2A033E4833AF87D1936FE1_Params
{
};

// Function ABP_Character_3P_New.ABP_Character_3P_New_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Character_3P_New_AnimGraphNode_ModifyBone_6DD7E4904F6E42643846008665A24083
struct UABP_Character_3P_New_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Character_3P_New_AnimGraphNode_ModifyBone_6DD7E4904F6E42643846008665A24083_Params
{
};

// Function ABP_Character_3P_New.ABP_Character_3P_New_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Character_3P_New_AnimGraphNode_ModifyBone_B83EF9AC4ACD624125B6E0B231E877AA
struct UABP_Character_3P_New_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Character_3P_New_AnimGraphNode_ModifyBone_B83EF9AC4ACD624125B6E0B231E877AA_Params
{
};

// Function ABP_Character_3P_New.ABP_Character_3P_New_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Character_3P_New_AnimGraphNode_ModifyBone_14F914A0464D164763182FADF41F374D
struct UABP_Character_3P_New_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Character_3P_New_AnimGraphNode_ModifyBone_14F914A0464D164763182FADF41F374D_Params
{
};

// Function ABP_Character_3P_New.ABP_Character_3P_New_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Character_3P_New_AnimGraphNode_BlendListByBool_E498CB4841AF24937B8E2DAA619342DC
struct UABP_Character_3P_New_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Character_3P_New_AnimGraphNode_BlendListByBool_E498CB4841AF24937B8E2DAA619342DC_Params
{
};

// Function ABP_Character_3P_New.ABP_Character_3P_New_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Character_3P_New_AnimGraphNode_RotationOffsetBlendSpace_D1D2587849458A0234A3998BBC42FC62
struct UABP_Character_3P_New_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Character_3P_New_AnimGraphNode_RotationOffsetBlendSpace_D1D2587849458A0234A3998BBC42FC62_Params
{
};

// Function ABP_Character_3P_New.ABP_Character_3P_New_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Character_3P_New_AnimGraphNode_TransitionResult_D4286DD24F706C814E62419933F8D68D
struct UABP_Character_3P_New_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Character_3P_New_AnimGraphNode_TransitionResult_D4286DD24F706C814E62419933F8D68D_Params
{
};

// Function ABP_Character_3P_New.ABP_Character_3P_New_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Character_3P_New_AnimGraphNode_BlendSpacePlayer_6F0CA0754F7C8A424B4FE9B42D9D97EF
struct UABP_Character_3P_New_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Character_3P_New_AnimGraphNode_BlendSpacePlayer_6F0CA0754F7C8A424B4FE9B42D9D97EF_Params
{
};

// Function ABP_Character_3P_New.ABP_Character_3P_New_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Character_3P_New_AnimGraphNode_TransitionResult_7991C0F44BB4961CE0374C81324921E2
struct UABP_Character_3P_New_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Character_3P_New_AnimGraphNode_TransitionResult_7991C0F44BB4961CE0374C81324921E2_Params
{
};

// Function ABP_Character_3P_New.ABP_Character_3P_New_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Character_3P_New_AnimGraphNode_TransitionResult_6A76C580457899F6176C7494FACD8802
struct UABP_Character_3P_New_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Character_3P_New_AnimGraphNode_TransitionResult_6A76C580457899F6176C7494FACD8802_Params
{
};

// Function ABP_Character_3P_New.ABP_Character_3P_New_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Character_3P_New_AnimGraphNode_TransitionResult_6CF2E6494E788F0532BE04B5CC220CB6
struct UABP_Character_3P_New_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Character_3P_New_AnimGraphNode_TransitionResult_6CF2E6494E788F0532BE04B5CC220CB6_Params
{
};

// Function ABP_Character_3P_New.ABP_Character_3P_New_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Character_3P_New_AnimGraphNode_TransitionResult_29DA16524C79CFC7A9A0198D8427B83B
struct UABP_Character_3P_New_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Character_3P_New_AnimGraphNode_TransitionResult_29DA16524C79CFC7A9A0198D8427B83B_Params
{
};

// Function ABP_Character_3P_New.ABP_Character_3P_New_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Character_3P_New_AnimGraphNode_ApplyMeshSpaceAdditive_5BE3F0884CC25380176B1091717F2BDE
struct UABP_Character_3P_New_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Character_3P_New_AnimGraphNode_ApplyMeshSpaceAdditive_5BE3F0884CC25380176B1091717F2BDE_Params
{
};

// Function ABP_Character_3P_New.ABP_Character_3P_New_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Character_3P_New_AnimGraphNode_LayeredBoneBlend_AE3D3D8A4E83905B660259B14F5B2F94
struct UABP_Character_3P_New_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Character_3P_New_AnimGraphNode_LayeredBoneBlend_AE3D3D8A4E83905B660259B14F5B2F94_Params
{
};

// Function ABP_Character_3P_New.ABP_Character_3P_New_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Character_3P_New_AnimGraphNode_TransitionResult_4A17C992498999057C9944A954651E67
struct UABP_Character_3P_New_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Character_3P_New_AnimGraphNode_TransitionResult_4A17C992498999057C9944A954651E67_Params
{
};

// Function ABP_Character_3P_New.ABP_Character_3P_New_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Character_3P_New_AnimGraphNode_TwoWayBlend_7D28AC744EB3B97579585590833407D2
struct UABP_Character_3P_New_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Character_3P_New_AnimGraphNode_TwoWayBlend_7D28AC744EB3B97579585590833407D2_Params
{
};

// Function ABP_Character_3P_New.ABP_Character_3P_New_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Character_3P_New_AnimGraphNode_TwoWayBlend_E75D06B54B093FF6C0D72396033C1961
struct UABP_Character_3P_New_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Character_3P_New_AnimGraphNode_TwoWayBlend_E75D06B54B093FF6C0D72396033C1961_Params
{
};

// Function ABP_Character_3P_New.ABP_Character_3P_New_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Character_3P_New_AnimGraphNode_TransitionResult_9CF91E034E1C6D7F86410BA14DAA73FB
struct UABP_Character_3P_New_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Character_3P_New_AnimGraphNode_TransitionResult_9CF91E034E1C6D7F86410BA14DAA73FB_Params
{
};

// Function ABP_Character_3P_New.ABP_Character_3P_New_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Character_3P_New_AnimGraphNode_ModifyBone_62A9A86F4EFAD220C663A4BA43A6052C
struct UABP_Character_3P_New_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Character_3P_New_AnimGraphNode_ModifyBone_62A9A86F4EFAD220C663A4BA43A6052C_Params
{
};

// Function ABP_Character_3P_New.ABP_Character_3P_New_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Character_3P_New_AnimGraphNode_TransitionResult_C470611C420C144ABF5C89A6FC19BB23
struct UABP_Character_3P_New_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Character_3P_New_AnimGraphNode_TransitionResult_C470611C420C144ABF5C89A6FC19BB23_Params
{
};

// Function ABP_Character_3P_New.ABP_Character_3P_New_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Character_3P_New_AnimGraphNode_TwoWayBlend_4FEC0CB94C03AF7AEBBF60B4E44AB931
struct UABP_Character_3P_New_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Character_3P_New_AnimGraphNode_TwoWayBlend_4FEC0CB94C03AF7AEBBF60B4E44AB931_Params
{
};

// Function ABP_Character_3P_New.ABP_Character_3P_New_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Character_3P_New_AnimGraphNode_RotateRootBone_22F5147C4935E96D1FF5B7824AF8E3FB
struct UABP_Character_3P_New_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Character_3P_New_AnimGraphNode_RotateRootBone_22F5147C4935E96D1FF5B7824AF8E3FB_Params
{
};

// Function ABP_Character_3P_New.ABP_Character_3P_New_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Character_3P_New_AnimGraphNode_BlendListByInt_C6E4D55A475D3662D7CCD284E02F7387
struct UABP_Character_3P_New_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Character_3P_New_AnimGraphNode_BlendListByInt_C6E4D55A475D3662D7CCD284E02F7387_Params
{
};

// Function ABP_Character_3P_New.ABP_Character_3P_New_C.BlueprintUpdateAnimation
struct UABP_Character_3P_New_C_BlueprintUpdateAnimation_Params
{
	float                                              DeltaTimeX;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function ABP_Character_3P_New.ABP_Character_3P_New_C.BlueprintInitializeAnimation
struct UABP_Character_3P_New_C_BlueprintInitializeAnimation_Params
{
};

// Function ABP_Character_3P_New.ABP_Character_3P_New_C.Play Debug Montage
struct UABP_Character_3P_New_C_Play_Debug_Montage_Params
{
};

// Function ABP_Character_3P_New.ABP_Character_3P_New_C.AnimNotify_OnGrabAmmo
struct UABP_Character_3P_New_C_AnimNotify_OnGrabAmmo_Params
{
};

// Function ABP_Character_3P_New.ABP_Character_3P_New_C.AnimNotify_OnReleaseAmmo
struct UABP_Character_3P_New_C_AnimNotify_OnReleaseAmmo_Params
{
};

// Function ABP_Character_3P_New.ABP_Character_3P_New_C.AnimNotify_OnFootStep
struct UABP_Character_3P_New_C_AnimNotify_OnFootStep_Params
{
};

// Function ABP_Character_3P_New.ABP_Character_3P_New_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Character_3P_New_AnimGraphNode_BlendListByBool_00FF1BEF4B0014AA1BB532A898CE1860
struct UABP_Character_3P_New_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Character_3P_New_AnimGraphNode_BlendListByBool_00FF1BEF4B0014AA1BB532A898CE1860_Params
{
};

// Function ABP_Character_3P_New.ABP_Character_3P_New_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Character_3P_New_AnimGraphNode_ModifyBone_2237CF484E5039DF7A8879AD2B4085F6
struct UABP_Character_3P_New_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Character_3P_New_AnimGraphNode_ModifyBone_2237CF484E5039DF7A8879AD2B4085F6_Params
{
};

// Function ABP_Character_3P_New.ABP_Character_3P_New_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Character_3P_New_AnimGraphNode_RotationOffsetBlendSpace_FBEF276347682E5EE1139F91AC4787DE
struct UABP_Character_3P_New_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Character_3P_New_AnimGraphNode_RotationOffsetBlendSpace_FBEF276347682E5EE1139F91AC4787DE_Params
{
};

// Function ABP_Character_3P_New.ABP_Character_3P_New_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Character_3P_New_AnimGraphNode_BlendListByBool_B948B2D448EA2B4E51BC37B4EB1074DE
struct UABP_Character_3P_New_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Character_3P_New_AnimGraphNode_BlendListByBool_B948B2D448EA2B4E51BC37B4EB1074DE_Params
{
};

// Function ABP_Character_3P_New.ABP_Character_3P_New_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Character_3P_New_AnimGraphNode_RotationOffsetBlendSpace_29865E7343AEF31BB62862AFBD1B9CAC
struct UABP_Character_3P_New_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Character_3P_New_AnimGraphNode_RotationOffsetBlendSpace_29865E7343AEF31BB62862AFBD1B9CAC_Params
{
};

// Function ABP_Character_3P_New.ABP_Character_3P_New_C.ExecuteUbergraph_ABP_Character_3P_New
struct UABP_Character_3P_New_C_ExecuteUbergraph_ABP_Character_3P_New_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
