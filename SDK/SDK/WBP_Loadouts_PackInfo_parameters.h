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

// Function WBP_Loadouts_PackInfo.WBP_Loadouts_PackInfo_C.SetErrorOnly
struct UWBP_Loadouts_PackInfo_C_SetErrorOnly_Params
{
	struct FText                                       New_Error;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function WBP_Loadouts_PackInfo.WBP_Loadouts_PackInfo_C.Set
struct UWBP_Loadouts_PackInfo_C_Set_Params
{
	class UClass*                                      PackInfo;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FText                                       Error_Text;                                                // (BlueprintVisible, BlueprintReadOnly, Parm)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
