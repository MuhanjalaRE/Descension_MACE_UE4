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

// Function WBP_GeneralSettings.WBP_GeneralSettings_C.GetFriendlyOrArcturus
struct UWBP_GeneralSettings_C_GetFriendlyOrArcturus_Params
{
	struct FText                                       ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function WBP_GeneralSettings.WBP_GeneralSettings_C.GetEnemyOrManatech
struct UWBP_GeneralSettings_C_GetEnemyOrManatech_Params
{
	struct FText                                       ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function WBP_GeneralSettings.WBP_GeneralSettings_C.NewFunction_2
struct UWBP_GeneralSettings_C_NewFunction_2_Params
{
	bool                                               bRelativeTeamColors;                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	class UMAGameUserSettings*                         self2;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_GeneralSettings.WBP_GeneralSettings_C.NewFunction_1
struct UWBP_GeneralSettings_C_NewFunction_1_Params
{
	bool                                               bRelativeTeamColors;                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	class UMAGameUserSettings*                         self2;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_GeneralSettings.WBP_GeneralSettings_C.GetColorAndOpacity_2
struct UWBP_GeneralSettings_C_GetColorAndOpacity_2_Params
{
	struct FLinearColor                                ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_GeneralSettings.WBP_GeneralSettings_C.GetColorAndOpacity_1
struct UWBP_GeneralSettings_C_GetColorAndOpacity_1_Params
{
	struct FLinearColor                                ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_GeneralSettings.WBP_GeneralSettings_C.GetVisibility_1
struct UWBP_GeneralSettings_C_GetVisibility_1_Params
{
	UMG_ESlateVisibility                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_GeneralSettings.WBP_GeneralSettings_C.GetBrush_1
struct UWBP_GeneralSettings_C_GetBrush_1_Params
{
	struct FSlateBrush                                 ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function WBP_GeneralSettings.WBP_GeneralSettings_C.On_CrosshairType_GenerateWidget_1
struct UWBP_GeneralSettings_C_On_CrosshairType_GenerateWidget_1_Params
{
	struct FString                                     Item;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	class UWidget*                                     ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_GeneralSettings.WBP_GeneralSettings_C.Get_SpectatorStickOnePerson_ToolTipWidget
struct UWBP_GeneralSettings_C_Get_SpectatorStickOnePerson_ToolTipWidget_Params
{
	class UWidget*                                     ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_GeneralSettings.WBP_GeneralSettings_C.Apply Settings
struct UWBP_GeneralSettings_C_Apply_Settings_Params
{
	bool                                               Save;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function WBP_GeneralSettings.WBP_GeneralSettings_C.BndEvt__CrosshairType_K2Node_ComponentBoundEvent_3_OnSelectionChangedEvent__DelegateSignature
struct UWBP_GeneralSettings_C_BndEvt__CrosshairType_K2Node_ComponentBoundEvent_3_OnSelectionChangedEvent__DelegateSignature_Params
{
	struct FString                                     SelectedItem;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	TEnumAsByte<SlateCore_ESelectInfo>                 SelectionType;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_GeneralSettings.WBP_GeneralSettings_C.Reset
struct UWBP_GeneralSettings_C_Reset_Params
{
};

// Function WBP_GeneralSettings.WBP_GeneralSettings_C.BndEvt__ResetButton_K2Node_ComponentBoundEvent_57_OnButtonClickedEvent__DelegateSignature
struct UWBP_GeneralSettings_C_BndEvt__ResetButton_K2Node_ComponentBoundEvent_57_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function WBP_GeneralSettings.WBP_GeneralSettings_C.Construct
struct UWBP_GeneralSettings_C_Construct_Params
{
};

// Function WBP_GeneralSettings.WBP_GeneralSettings_C.BndEvt__CrosshairColor_K2Node_ComponentBoundEvent_17_OnSelectionChangedEvent__DelegateSignature
struct UWBP_GeneralSettings_C_BndEvt__CrosshairColor_K2Node_ComponentBoundEvent_17_OnSelectionChangedEvent__DelegateSignature_Params
{
	struct FString                                     SelectedItem;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	TEnumAsByte<SlateCore_ESelectInfo>                 SelectionType;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_GeneralSettings.WBP_GeneralSettings_C.BndEvt__ApplyButton_K2Node_ComponentBoundEvent_40_OnButtonClickedEvent__DelegateSignature
struct UWBP_GeneralSettings_C_BndEvt__ApplyButton_K2Node_ComponentBoundEvent_40_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function WBP_GeneralSettings.WBP_GeneralSettings_C.ExecuteUbergraph_WBP_GeneralSettings
struct UWBP_GeneralSettings_C_ExecuteUbergraph_WBP_GeneralSettings_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_GeneralSettings.WBP_GeneralSettings_C.ShowColourPicker__DelegateSignature
struct UWBP_GeneralSettings_C_ShowColourPicker__DelegateSignature_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
