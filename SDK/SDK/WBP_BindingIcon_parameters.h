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

// Function WBP_BindingIcon.WBP_BindingIcon_C.SetFontSize
struct UWBP_BindingIcon_C_SetFontSize_Params
{
	int                                                Size;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_BindingIcon.WBP_BindingIcon_C.AdjustFontSize
struct UWBP_BindingIcon_C_AdjustFontSize_Params
{
};

// Function WBP_BindingIcon.WBP_BindingIcon_C.GetBackgroundColor
struct UWBP_BindingIcon_C_GetBackgroundColor_Params
{
	struct FLinearColor                                ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_BindingIcon.WBP_BindingIcon_C.GetForegroundColor
struct UWBP_BindingIcon_C_GetForegroundColor_Params
{
	struct FSlateColor                                 ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function WBP_BindingIcon.WBP_BindingIcon_C.Get_Text_Text_1
struct UWBP_BindingIcon_C_Get_Text_Text_1_Params
{
	struct FText                                       ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function WBP_BindingIcon.WBP_BindingIcon_C.SetBinding
struct UWBP_BindingIcon_C_SetBinding_Params
{
	struct FName                                       Bind_Name;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_BindingIcon.WBP_BindingIcon_C.Construct
struct UWBP_BindingIcon_C_Construct_Params
{
};

// Function WBP_BindingIcon.WBP_BindingIcon_C.Tick
struct UWBP_BindingIcon_C_Tick_Params
{
	struct FGeometry                                   MyGeometry;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	float                                              InDeltaTime;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_BindingIcon.WBP_BindingIcon_C.OnAnyBindChanged
struct UWBP_BindingIcon_C_OnAnyBindChanged_Params
{
	struct FName                                       CategoryName;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FMidairInputMapping                         NewMapping;                                                // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function WBP_BindingIcon.WBP_BindingIcon_C.ExecuteUbergraph_WBP_BindingIcon
struct UWBP_BindingIcon_C_ExecuteUbergraph_WBP_BindingIcon_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
