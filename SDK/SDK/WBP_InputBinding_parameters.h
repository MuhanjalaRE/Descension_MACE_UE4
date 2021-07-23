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

// Function WBP_InputBinding.WBP_InputBinding_C.GetToolTipWidget
struct UWBP_InputBinding_C_GetToolTipWidget_Params
{
	class UWidget*                                     ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_InputBinding.WBP_InputBinding_C.Construct
struct UWBP_InputBinding_C_Construct_Params
{
};

// Function WBP_InputBinding.WBP_InputBinding_C.BndEvt__PrimaryKey_K2Node_ComponentBoundEvent_0_TryClearKey__DelegateSignature
struct UWBP_InputBinding_C_BndEvt__PrimaryKey_K2Node_ComponentBoundEvent_0_TryClearKey__DelegateSignature_Params
{
	class UWBP_BindKey_C*                              Widget;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_InputBinding.WBP_InputBinding_C.BndEvt__PrimaryKey_K2Node_ComponentBoundEvent_8_TryBindKey__DelegateSignature
struct UWBP_InputBinding_C_BndEvt__PrimaryKey_K2Node_ComponentBoundEvent_8_TryBindKey__DelegateSignature_Params
{
	class UWBP_BindKey_C*                              Widget;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FInputActionKeyMapping                      NewBind;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function WBP_InputBinding.WBP_InputBinding_C.BndEvt__PrimaryKey_K2Node_ComponentBoundEvent_14_TryResetKey__DelegateSignature
struct UWBP_InputBinding_C_BndEvt__PrimaryKey_K2Node_ComponentBoundEvent_14_TryResetKey__DelegateSignature_Params
{
	class UWBP_BindKey_C*                              Widget;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_InputBinding.WBP_InputBinding_C.BndEvt__SecondaryKey_K2Node_ComponentBoundEvent_18_TryClearKey__DelegateSignature
struct UWBP_InputBinding_C_BndEvt__SecondaryKey_K2Node_ComponentBoundEvent_18_TryClearKey__DelegateSignature_Params
{
	class UWBP_BindKey_C*                              Widget;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_InputBinding.WBP_InputBinding_C.BndEvt__SecondaryKey_K2Node_ComponentBoundEvent_29_TryBindKey__DelegateSignature
struct UWBP_InputBinding_C_BndEvt__SecondaryKey_K2Node_ComponentBoundEvent_29_TryBindKey__DelegateSignature_Params
{
	class UWBP_BindKey_C*                              Widget;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FInputActionKeyMapping                      NewBind;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function WBP_InputBinding.WBP_InputBinding_C.BndEvt__SecondaryKey_K2Node_ComponentBoundEvent_38_TryResetKey__DelegateSignature
struct UWBP_InputBinding_C_BndEvt__SecondaryKey_K2Node_ComponentBoundEvent_38_TryResetKey__DelegateSignature_Params
{
	class UWBP_BindKey_C*                              Widget;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_InputBinding.WBP_InputBinding_C.Update
struct UWBP_InputBinding_C_Update_Params
{
	struct FMidairInputMapping                         New_Mapping;                                               // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function WBP_InputBinding.WBP_InputBinding_C.ExecuteUbergraph_WBP_InputBinding
struct UWBP_InputBinding_C_ExecuteUbergraph_WBP_InputBinding_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_InputBinding.WBP_InputBinding_C.TryResetKey__DelegateSignature
struct UWBP_InputBinding_C_TryResetKey__DelegateSignature_Params
{
	struct FName                                       Name;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	MidairCE_EMappingPriority                          Priority;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_InputBinding.WBP_InputBinding_C.TryBindKey__DelegateSignature
struct UWBP_InputBinding_C_TryBindKey__DelegateSignature_Params
{
	struct FName                                       Name;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FInputActionKeyMapping                      NewKey;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm)
	MidairCE_EMappingPriority                          Priority;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_InputBinding.WBP_InputBinding_C.TryClearKey__DelegateSignature
struct UWBP_InputBinding_C_TryClearKey__DelegateSignature_Params
{
	struct FName                                       Name;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	MidairCE_EMappingPriority                          Priority;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
