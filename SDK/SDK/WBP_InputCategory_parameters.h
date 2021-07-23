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

// Function WBP_InputCategory.WBP_InputCategory_C.GetToolTipWidget
struct UWBP_InputCategory_C_GetToolTipWidget_Params
{
	class UWidget*                                     ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_InputCategory.WBP_InputCategory_C.ClearBinds
struct UWBP_InputCategory_C_ClearBinds_Params
{
};

// Function WBP_InputCategory.WBP_InputCategory_C.Add Bind
struct UWBP_InputCategory_C_Add_Bind_Params
{
	struct FMidairInputMapping                         Mapping;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function WBP_InputCategory.WBP_InputCategory_C.OnKeyBindAttempt
struct UWBP_InputCategory_C_OnKeyBindAttempt_Params
{
	struct FName                                       Name;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FInputActionKeyMapping                      NewKey;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm)
	MidairCE_EMappingPriority                          Priority;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_InputCategory.WBP_InputCategory_C.OnKeyClearAttempt
struct UWBP_InputCategory_C_OnKeyClearAttempt_Params
{
	struct FName                                       Name;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	MidairCE_EMappingPriority                          Priority;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_InputCategory.WBP_InputCategory_C.OnKeyResetAttempt
struct UWBP_InputCategory_C_OnKeyResetAttempt_Params
{
	struct FName                                       Name;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	MidairCE_EMappingPriority                          Priority;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_InputCategory.WBP_InputCategory_C.Construct
struct UWBP_InputCategory_C_Construct_Params
{
};

// Function WBP_InputCategory.WBP_InputCategory_C.Update Binding
struct UWBP_InputCategory_C_Update_Binding_Params
{
	struct FMidairInputMapping                         New_Mapping;                                               // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function WBP_InputCategory.WBP_InputCategory_C.BndEvt__ExpandableArea_0_K2Node_ComponentBoundEvent_0_OnExpandableAreaExpansionChanged__DelegateSignature
struct UWBP_InputCategory_C_BndEvt__ExpandableArea_0_K2Node_ComponentBoundEvent_0_OnExpandableAreaExpansionChanged__DelegateSignature_Params
{
	class UExpandableArea*                             Area;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               bIsExpanded;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function WBP_InputCategory.WBP_InputCategory_C.OnMouseEnter
struct UWBP_InputCategory_C_OnMouseEnter_Params
{
	struct FGeometry                                   MyGeometry;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	struct FPointerEvent                               MouseEvent;                                                // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function WBP_InputCategory.WBP_InputCategory_C.ExecuteUbergraph_WBP_InputCategory
struct UWBP_InputCategory_C_ExecuteUbergraph_WBP_InputCategory_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
