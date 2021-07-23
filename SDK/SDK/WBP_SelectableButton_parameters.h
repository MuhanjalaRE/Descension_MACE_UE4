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

// Function WBP_SelectableButton.WBP_SelectableButton_C.DoesHaveNewItemBadge
struct UWBP_SelectableButton_C_DoesHaveNewItemBadge_Params
{
	bool                                               HasNewItemBadge;                                           // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function WBP_SelectableButton.WBP_SelectableButton_C.Do Rollover Sound
struct UWBP_SelectableButton_C_Do_Rollover_Sound_Params
{
};

// Function WBP_SelectableButton.WBP_SelectableButton_C.Do Press Sound
struct UWBP_SelectableButton_C_Do_Press_Sound_Params
{
};

// Function WBP_SelectableButton.WBP_SelectableButton_C.Override Sounds
struct UWBP_SelectableButton_C_Override_Sounds_Params
{
	class USoundBase*                                  __New_Pressed_Sound;                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                                  __New_Hovered_Sound;                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_SelectableButton.WBP_SelectableButton_C.Override Hovered Sound
struct UWBP_SelectableButton_C_Override_Hovered_Sound_Params
{
	class USoundBase*                                  New_Hovered_Sound;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_SelectableButton.WBP_SelectableButton_C.Override Pressed Sound
struct UWBP_SelectableButton_C_Override_Pressed_Sound_Params
{
	class USoundBase*                                  New_Pressed_Sound;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_SelectableButton.WBP_SelectableButton_C.Reset Hovered Sound
struct UWBP_SelectableButton_C_Reset_Hovered_Sound_Params
{
};

// Function WBP_SelectableButton.WBP_SelectableButton_C.Reset Pressed Sound
struct UWBP_SelectableButton_C_Reset_Pressed_Sound_Params
{
};

// Function WBP_SelectableButton.WBP_SelectableButton_C.Reset Sounds
struct UWBP_SelectableButton_C_Reset_Sounds_Params
{
};

// Function WBP_SelectableButton.WBP_SelectableButton_C.MakeLockedTooltipWidget
struct UWBP_SelectableButton_C_MakeLockedTooltipWidget_Params
{
	class UWidget*                                     ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_SelectableButton.WBP_SelectableButton_C.GetRequirementsToUnlock
struct UWBP_SelectableButton_C_GetRequirementsToUnlock_Params
{
	TArray<struct FText>                               Errors;                                                    // (Parm, OutParm, ZeroConstructor)
};

// Function WBP_SelectableButton.WBP_SelectableButton_C.GetIsLocked
struct UWBP_SelectableButton_C_GetIsLocked_Params
{
	bool                                               Locked;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function WBP_SelectableButton.WBP_SelectableButton_C.UpdateSelected
struct UWBP_SelectableButton_C_UpdateSelected_Params
{
};

// Function WBP_SelectableButton.WBP_SelectableButton_C.Set Error
struct UWBP_SelectableButton_C_Set_Error_Params
{
	struct FText                                       Error;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function WBP_SelectableButton.WBP_SelectableButton_C.Invalid
struct UWBP_SelectableButton_C_Invalid_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function WBP_SelectableButton.WBP_SelectableButton_C.SetActive
struct UWBP_SelectableButton_C_SetActive_Params
{
	bool                                               bNewActive;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function WBP_SelectableButton.WBP_SelectableButton_C.SetSelected
struct UWBP_SelectableButton_C_SetSelected_Params
{
	bool                                               Selected;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function WBP_SelectableButton.WBP_SelectableButton_C.GetBackgroundColor
struct UWBP_SelectableButton_C_GetBackgroundColor_Params
{
	struct FLinearColor                                Color;                                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_SelectableButton.WBP_SelectableButton_C.GetForegroundColor
struct UWBP_SelectableButton_C_GetForegroundColor_Params
{
	struct FLinearColor                                Color;                                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_SelectableButton.WBP_SelectableButton_C.OnSelected
struct UWBP_SelectableButton_C_OnSelected_Params
{
};

// Function WBP_SelectableButton.WBP_SelectableButton_C.OnActive
struct UWBP_SelectableButton_C_OnActive_Params
{
};

// Function WBP_SelectableButton.WBP_SelectableButton_C.OnPressed
struct UWBP_SelectableButton_C_OnPressed_Params
{
};

// Function WBP_SelectableButton.WBP_SelectableButton_C.OnUpdateDisabled
struct UWBP_SelectableButton_C_OnUpdateDisabled_Params
{
};

// Function WBP_SelectableButton.WBP_SelectableButton_C.PreConstruct
struct UWBP_SelectableButton_C_PreConstruct_Params
{
	bool                                               IsDesignTime;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function WBP_SelectableButton.WBP_SelectableButton_C.Construct
struct UWBP_SelectableButton_C_Construct_Params
{
};

// Function WBP_SelectableButton.WBP_SelectableButton_C.OnUnselected
struct UWBP_SelectableButton_C_OnUnselected_Params
{
};

// Function WBP_SelectableButton.WBP_SelectableButton_C.ExecuteUbergraph_WBP_SelectableButton
struct UWBP_SelectableButton_C_ExecuteUbergraph_WBP_SelectableButton_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_SelectableButton.WBP_SelectableButton_C.ButtonUnselected__DelegateSignature
struct UWBP_SelectableButton_C_ButtonUnselected__DelegateSignature_Params
{
	class UWBP_SelectableButton_C*                     Selected_Button;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_SelectableButton.WBP_SelectableButton_C.ButtonHovered__DelegateSignature
struct UWBP_SelectableButton_C_ButtonHovered__DelegateSignature_Params
{
	class UWBP_SelectableButton_C*                     Selected_Button;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_SelectableButton.WBP_SelectableButton_C.ButtonClicked__DelegateSignature
struct UWBP_SelectableButton_C_ButtonClicked__DelegateSignature_Params
{
	class UWBP_SelectableButton_C*                     Clicked_Button;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_SelectableButton.WBP_SelectableButton_C.ButtonSelected__DelegateSignature
struct UWBP_SelectableButton_C_ButtonSelected__DelegateSignature_Params
{
	class UWBP_SelectableButton_C*                     Selected_Button;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
