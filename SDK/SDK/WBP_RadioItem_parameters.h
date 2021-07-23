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

// Function WBP_RadioItem.WBP_RadioItem_C.GetSelectedValue
struct UWBP_RadioItem_C_GetSelectedValue_Params
{
	float                                              Value;                                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_RadioItem.WBP_RadioItem_C.SelectLiteralValueIfPossible
struct UWBP_RadioItem_C_SelectLiteralValueIfPossible_Params
{
	float                                              LiteralValue;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_RadioItem.WBP_RadioItem_C.Option Selected
struct UWBP_RadioItem_C_Option_Selected_Params
{
	class UWBP_SelectableButton_C*                     Clicked_Button;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_RadioItem.WBP_RadioItem_C.PreConstruct
struct UWBP_RadioItem_C_PreConstruct_Params
{
	bool                                               IsDesignTime;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function WBP_RadioItem.WBP_RadioItem_C.ExecuteUbergraph_WBP_RadioItem
struct UWBP_RadioItem_C_ExecuteUbergraph_WBP_RadioItem_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_RadioItem.WBP_RadioItem_C.ValueApplied__DelegateSignature
struct UWBP_RadioItem_C_ValueApplied__DelegateSignature_Params
{
	float                                              NewValue;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
