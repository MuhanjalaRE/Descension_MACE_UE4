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

// Function WBP_PackSlot.WBP_PackSlot_C.GetVisibility_1
struct UWBP_PackSlot_C_GetVisibility_1_Params
{
	UMG_ESlateVisibility                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_PackSlot.WBP_PackSlot_C.GetForegroundColor_1
struct UWBP_PackSlot_C_GetForegroundColor_1_Params
{
	struct FSlateColor                                 ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function WBP_PackSlot.WBP_PackSlot_C.GetBrushColor_2
struct UWBP_PackSlot_C_GetBrushColor_2_Params
{
	struct FLinearColor                                ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_PackSlot.WBP_PackSlot_C.GetBrushColor_1
struct UWBP_PackSlot_C_GetBrushColor_1_Params
{
	struct FLinearColor                                ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_PackSlot.WBP_PackSlot_C.GetPercent_1
struct UWBP_PackSlot_C_GetPercent_1_Params
{
	float                                              ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_PackSlot.WBP_PackSlot_C.UpdateInfo
struct UWBP_PackSlot_C_UpdateInfo_Params
{
	class UClass*                                      Backpack_Class;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AMABackpack*                                 Backpack;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
