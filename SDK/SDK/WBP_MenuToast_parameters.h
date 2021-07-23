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

// Function WBP_MenuToast.WBP_MenuToast_C.Quickly Hide
struct UWBP_MenuToast_C_Quickly_Hide_Params
{
	float                                              Time_Unitl_Hid;                                            // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_MenuToast.WBP_MenuToast_C.GetBrush_1
struct UWBP_MenuToast_C_GetBrush_1_Params
{
	struct FSlateBrush                                 ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function WBP_MenuToast.WBP_MenuToast_C.Update
struct UWBP_MenuToast_C_Update_Params
{
	struct FText                                       Title;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm)
	class UTexture2D*                                  DisplayImage;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FText                                       Message;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function WBP_MenuToast.WBP_MenuToast_C.Hide
struct UWBP_MenuToast_C_Hide_Params
{
};

// Function WBP_MenuToast.WBP_MenuToast_C.ExecuteUbergraph_WBP_MenuToast
struct UWBP_MenuToast_C_ExecuteUbergraph_WBP_MenuToast_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
