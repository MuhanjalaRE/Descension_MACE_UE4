// Name: mace, Version: 1.9.1.12285

#include "../pch.h"

/*!!DEFINE!!*/

/*!!HELPER_DEF!!*/

/*!!HELPER_INC!!*/

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
//---------------------------------------------------------------------------
// Functions
//---------------------------------------------------------------------------

// Function WBP_LoadoutsPanel.WBP_LoadoutsPanel_C.HandleDirectNamedHotkey
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 Hotkey                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
bool UWBP_LoadoutsPanel_C::HandleDirectNamedHotkey(const struct FString& Hotkey)
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function WBP_LoadoutsPanel.WBP_LoadoutsPanel_C.HandleDirectNamedHotkey");
	}

	UWBP_LoadoutsPanel_C_HandleDirectNamedHotkey_Params params;
	params.Hotkey = Hotkey;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function WBP_LoadoutsPanel.WBP_LoadoutsPanel_C.HandleNamedHotkeyWithInt
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 Hotkey                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// int                            Int                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
bool UWBP_LoadoutsPanel_C::HandleNamedHotkeyWithInt(const struct FString& Hotkey, int Int)
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function WBP_LoadoutsPanel.WBP_LoadoutsPanel_C.HandleNamedHotkeyWithInt");
	}

	UWBP_LoadoutsPanel_C_HandleNamedHotkeyWithInt_Params params;
	params.Hotkey = Hotkey;
	params.Int = Int;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function WBP_LoadoutsPanel.WBP_LoadoutsPanel_C.Get Accept Button Locked Class
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UClass*                  Object                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           Needs_Buy                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UWBP_LoadoutsPanel_C::Get_Accept_Button_Locked_Class(class UClass** Object, bool* Needs_Buy)
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function WBP_LoadoutsPanel.WBP_LoadoutsPanel_C.Get Accept Button Locked Class");
	}

	UWBP_LoadoutsPanel_C_Get_Accept_Button_Locked_Class_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Object != nullptr)
		*Object = params.Object;
	if (Needs_Buy != nullptr)
		*Needs_Buy = params.Needs_Buy;

}


// Function WBP_LoadoutsPanel.WBP_LoadoutsPanel_C.Update Accept Button Text
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
void UWBP_LoadoutsPanel_C::Update_Accept_Button_Text()
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function WBP_LoadoutsPanel.WBP_LoadoutsPanel_C.Update Accept Button Text");
	}

	UWBP_LoadoutsPanel_C_Update_Accept_Button_Text_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WBP_LoadoutsPanel.WBP_LoadoutsPanel_C.PutAppearanceBackOnWeapons
// (Public, BlueprintCallable, BlueprintEvent)
void UWBP_LoadoutsPanel_C::PutAppearanceBackOnWeapons()
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function WBP_LoadoutsPanel.WBP_LoadoutsPanel_C.PutAppearanceBackOnWeapons");
	}

	UWBP_LoadoutsPanel_C_PutAppearanceBackOnWeapons_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WBP_LoadoutsPanel.WBP_LoadoutsPanel_C.PutAppearanceBackOnOverview
// (Public, BlueprintCallable, BlueprintEvent)
void UWBP_LoadoutsPanel_C::PutAppearanceBackOnOverview()
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function WBP_LoadoutsPanel.WBP_LoadoutsPanel_C.PutAppearanceBackOnOverview");
	}

	UWBP_LoadoutsPanel_C_PutAppearanceBackOnOverview_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WBP_LoadoutsPanel.WBP_LoadoutsPanel_C.Get_GamemodeSelection_Visibility_1
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// UMG_ESlateVisibility           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
UMG_ESlateVisibility UWBP_LoadoutsPanel_C::Get_GamemodeSelection_Visibility_1()
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function WBP_LoadoutsPanel.WBP_LoadoutsPanel_C.Get_GamemodeSelection_Visibility_1");
	}

	UWBP_LoadoutsPanel_C_Get_GamemodeSelection_Visibility_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function WBP_LoadoutsPanel.WBP_LoadoutsPanel_C.Cache Last Menu Info
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
void UWBP_LoadoutsPanel_C::Cache_Last_Menu_Info()
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function WBP_LoadoutsPanel.WBP_LoadoutsPanel_C.Cache Last Menu Info");
	}

	UWBP_LoadoutsPanel_C_Cache_Last_Menu_Info_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WBP_LoadoutsPanel.WBP_LoadoutsPanel_C.Update Preview Scene
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass*                  Object_Info                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UClass*                  Cosmetic                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_LoadoutsPanel_C::Update_Preview_Scene(class UClass* Object_Info, class UClass* Cosmetic)
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function WBP_LoadoutsPanel.WBP_LoadoutsPanel_C.Update Preview Scene");
	}

	UWBP_LoadoutsPanel_C_Update_Preview_Scene_Params params;
	params.Object_Info = Object_Info;
	params.Cosmetic = Cosmetic;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WBP_LoadoutsPanel.WBP_LoadoutsPanel_C.OnMouseButtonDown
// (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// struct FPointerEvent           MouseEvent                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)
struct FEventReply UWBP_LoadoutsPanel_C::OnMouseButtonDown(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent)
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function WBP_LoadoutsPanel.WBP_LoadoutsPanel_C.OnMouseButtonDown");
	}

	UWBP_LoadoutsPanel_C_OnMouseButtonDown_Params params;
	params.MyGeometry = MyGeometry;
	params.MouseEvent = MouseEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function WBP_LoadoutsPanel.WBP_LoadoutsPanel_C.OnMouseMove
// (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// struct FPointerEvent           MouseEvent                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)
struct FEventReply UWBP_LoadoutsPanel_C::OnMouseMove(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent)
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function WBP_LoadoutsPanel.WBP_LoadoutsPanel_C.OnMouseMove");
	}

	UWBP_LoadoutsPanel_C_OnMouseMove_Params params;
	params.MyGeometry = MyGeometry;
	params.MouseEvent = MouseEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function WBP_LoadoutsPanel.WBP_LoadoutsPanel_C.IsAtOverview
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           bAtOverview                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UWBP_LoadoutsPanel_C::IsAtOverview(bool* bAtOverview)
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function WBP_LoadoutsPanel.WBP_LoadoutsPanel_C.IsAtOverview");
	}

	UWBP_LoadoutsPanel_C_IsAtOverview_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (bAtOverview != nullptr)
		*bAtOverview = params.bAtOverview;

}


// Function WBP_LoadoutsPanel.WBP_LoadoutsPanel_C.Get Cancel Visibility
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// UMG_ESlateVisibility           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
UMG_ESlateVisibility UWBP_LoadoutsPanel_C::Get_Cancel_Visibility()
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function WBP_LoadoutsPanel.WBP_LoadoutsPanel_C.Get Cancel Visibility");
	}

	UWBP_LoadoutsPanel_C_Get_Cancel_Visibility_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function WBP_LoadoutsPanel.WBP_LoadoutsPanel_C.Select Gamemode Internal
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass*                  GameModeClass                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_LoadoutsPanel_C::Select_Gamemode_Internal(class UClass* GameModeClass)
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function WBP_LoadoutsPanel.WBP_LoadoutsPanel_C.Select Gamemode Internal");
	}

	UWBP_LoadoutsPanel_C_Select_Gamemode_Internal_Params params;
	params.GameModeClass = GameModeClass;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WBP_LoadoutsPanel.WBP_LoadoutsPanel_C.Select Gamemode
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 Gamemode_Prefix                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// bool                           Success                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UWBP_LoadoutsPanel_C::Select_Gamemode(const struct FString& Gamemode_Prefix, bool* Success)
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function WBP_LoadoutsPanel.WBP_LoadoutsPanel_C.Select Gamemode");
	}

	UWBP_LoadoutsPanel_C_Select_Gamemode_Params params;
	params.Gamemode_Prefix = Gamemode_Prefix;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Success != nullptr)
		*Success = params.Success;

}


// Function WBP_LoadoutsPanel.WBP_LoadoutsPanel_C.Bind Basic Events Function
// (Public, BlueprintCallable, BlueprintEvent)
void UWBP_LoadoutsPanel_C::Bind_Basic_Events_Function()
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function WBP_LoadoutsPanel.WBP_LoadoutsPanel_C.Bind Basic Events Function");
	}

	UWBP_LoadoutsPanel_C_Bind_Basic_Events_Function_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WBP_LoadoutsPanel.WBP_LoadoutsPanel_C.Get Accept Visibility
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// UMG_ESlateVisibility           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
UMG_ESlateVisibility UWBP_LoadoutsPanel_C::Get_Accept_Visibility()
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function WBP_LoadoutsPanel.WBP_LoadoutsPanel_C.Get Accept Visibility");
	}

	UWBP_LoadoutsPanel_C_Get_Accept_Visibility_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function WBP_LoadoutsPanel.WBP_LoadoutsPanel_C.Cache and Bind Loadouts Save
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPlayerLoadoutsSave*     Save                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_LoadoutsPanel_C::Cache_and_Bind_Loadouts_Save(class UPlayerLoadoutsSave** Save)
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function WBP_LoadoutsPanel.WBP_LoadoutsPanel_C.Cache and Bind Loadouts Save");
	}

	UWBP_LoadoutsPanel_C_Cache_and_Bind_Loadouts_Save_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Save != nullptr)
		*Save = params.Save;

}


// Function WBP_LoadoutsPanel.WBP_LoadoutsPanel_C.ProcessWeapons
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AMATeamState*            TeamState                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class UClass*>          InputPin                       (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// TArray<class UClass*>          OutputPin                      (Parm, OutParm, ZeroConstructor)
void UWBP_LoadoutsPanel_C::ProcessWeapons(class AMATeamState* TeamState, TArray<class UClass*>* InputPin, TArray<class UClass*>* OutputPin)
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function WBP_LoadoutsPanel.WBP_LoadoutsPanel_C.ProcessWeapons");
	}

	UWBP_LoadoutsPanel_C_ProcessWeapons_Params params;
	params.TeamState = TeamState;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (InputPin != nullptr)
		*InputPin = params.InputPin;
	if (OutputPin != nullptr)
		*OutputPin = params.OutputPin;

}


// Function WBP_LoadoutsPanel.WBP_LoadoutsPanel_C.GetNewWeaponClass
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UClass*                  Character                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class UClass*>          CurrentWeapons                 (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// class UClass*                  NewWeapon                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_LoadoutsPanel_C::GetNewWeaponClass(class UClass* Character, TArray<class UClass*>* CurrentWeapons, class UClass** NewWeapon)
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function WBP_LoadoutsPanel.WBP_LoadoutsPanel_C.GetNewWeaponClass");
	}

	UWBP_LoadoutsPanel_C_GetNewWeaponClass_Params params;
	params.Character = Character;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (CurrentWeapons != nullptr)
		*CurrentWeapons = params.CurrentWeapons;
	if (NewWeapon != nullptr)
		*NewWeapon = params.NewWeapon;

}


// Function WBP_LoadoutsPanel.WBP_LoadoutsPanel_C.Get_GamemodeSwitcher_Visibility_1
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// UMG_ESlateVisibility           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
UMG_ESlateVisibility UWBP_LoadoutsPanel_C::Get_GamemodeSwitcher_Visibility_1()
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function WBP_LoadoutsPanel.WBP_LoadoutsPanel_C.Get_GamemodeSwitcher_Visibility_1");
	}

	UWBP_LoadoutsPanel_C_Get_GamemodeSwitcher_Visibility_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function WBP_LoadoutsPanel.WBP_LoadoutsPanel_C.Get_Revert_ToolTipWidget_1
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UWidget*                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
class UWidget* UWBP_LoadoutsPanel_C::Get_Revert_ToolTipWidget_1()
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function WBP_LoadoutsPanel.WBP_LoadoutsPanel_C.Get_Revert_ToolTipWidget_1");
	}

	UWBP_LoadoutsPanel_C_Get_Revert_ToolTipWidget_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function WBP_LoadoutsPanel.WBP_LoadoutsPanel_C.GetResetChangesTooltip
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UWidget*                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
class UWidget* UWBP_LoadoutsPanel_C::GetResetChangesTooltip()
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function WBP_LoadoutsPanel.WBP_LoadoutsPanel_C.GetResetChangesTooltip");
	}

	UWBP_LoadoutsPanel_C_GetResetChangesTooltip_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function WBP_LoadoutsPanel.WBP_LoadoutsPanel_C.GetSaveLoadoutTooltip
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UWidget*                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
class UWidget* UWBP_LoadoutsPanel_C::GetSaveLoadoutTooltip()
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function WBP_LoadoutsPanel.WBP_LoadoutsPanel_C.GetSaveLoadoutTooltip");
	}

	UWBP_LoadoutsPanel_C_GetSaveLoadoutTooltip_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function WBP_LoadoutsPanel.WBP_LoadoutsPanel_C.TrySelectLoadout
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_LoadoutsPanel_C::TrySelectLoadout(int Index)
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function WBP_LoadoutsPanel.WBP_LoadoutsPanel_C.TrySelectLoadout");
	}

	UWBP_LoadoutsPanel_C_TrySelectLoadout_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WBP_LoadoutsPanel.WBP_LoadoutsPanel_C.ObjectInfoArraysEqual
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// TArray<class UClass*>          A                              (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// TArray<class UClass*>          B                              (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// bool                           Equal                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UWBP_LoadoutsPanel_C::ObjectInfoArraysEqual(TArray<class UClass*>* A, TArray<class UClass*>* B, bool* Equal)
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function WBP_LoadoutsPanel.WBP_LoadoutsPanel_C.ObjectInfoArraysEqual");
	}

	UWBP_LoadoutsPanel_C_ObjectInfoArraysEqual_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (A != nullptr)
		*A = params.A;
	if (B != nullptr)
		*B = params.B;
	if (Equal != nullptr)
		*Equal = params.Equal;

}


// Function WBP_LoadoutsPanel.WBP_LoadoutsPanel_C.AnyDifference?
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// TArray<struct FMALoadout>      A                              (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// TArray<struct FMALoadout>      B                              (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// bool                           AnyDifference                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UWBP_LoadoutsPanel_C::AnyDifference_(TArray<struct FMALoadout>* A, TArray<struct FMALoadout>* B, bool* AnyDifference)
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function WBP_LoadoutsPanel.WBP_LoadoutsPanel_C.AnyDifference?");
	}

	UWBP_LoadoutsPanel_C_AnyDifference__Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (A != nullptr)
		*A = params.A;
	if (B != nullptr)
		*B = params.B;
	if (AnyDifference != nullptr)
		*AnyDifference = params.AnyDifference;

}


// Function WBP_LoadoutsPanel.WBP_LoadoutsPanel_C.Get_Button_2_Visibility_1
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// UMG_ESlateVisibility           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
UMG_ESlateVisibility UWBP_LoadoutsPanel_C::Get_Button_2_Visibility_1()
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function WBP_LoadoutsPanel.WBP_LoadoutsPanel_C.Get_Button_2_Visibility_1");
	}

	UWBP_LoadoutsPanel_C_Get_Button_2_Visibility_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function WBP_LoadoutsPanel.WBP_LoadoutsPanel_C.UnbindDelegatesForLoadoutEntry
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWBP_SingleLoadoutEntry_C* _                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWBP_SingleLoadoutEntry_C* __                             (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_LoadoutsPanel_C::UnbindDelegatesForLoadoutEntry(class UWBP_SingleLoadoutEntry_C* _, class UWBP_SingleLoadoutEntry_C** __)
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function WBP_LoadoutsPanel.WBP_LoadoutsPanel_C.UnbindDelegatesForLoadoutEntry");
	}

	UWBP_LoadoutsPanel_C_UnbindDelegatesForLoadoutEntry_Params params;
	params._ = _;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (__ != nullptr)
		*__ = params.__;

}


// Function WBP_LoadoutsPanel.WBP_LoadoutsPanel_C.Get_SaveChanges_Visibility_1
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// UMG_ESlateVisibility           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
UMG_ESlateVisibility UWBP_LoadoutsPanel_C::Get_SaveChanges_Visibility_1()
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function WBP_LoadoutsPanel.WBP_LoadoutsPanel_C.Get_SaveChanges_Visibility_1");
	}

	UWBP_LoadoutsPanel_C_Get_SaveChanges_Visibility_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function WBP_LoadoutsPanel.WBP_LoadoutsPanel_C.OverrideGamemodeDefaults
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FMALoadout>      Base                           (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// TArray<struct FMALoadout>      Override                       (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// TArray<struct FMALoadout>      _LocalBase                     (Parm, OutParm, ZeroConstructor)
void UWBP_LoadoutsPanel_C::OverrideGamemodeDefaults(TArray<struct FMALoadout>* Base, TArray<struct FMALoadout>* Override, TArray<struct FMALoadout>* _LocalBase)
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function WBP_LoadoutsPanel.WBP_LoadoutsPanel_C.OverrideGamemodeDefaults");
	}

	UWBP_LoadoutsPanel_C_OverrideGamemodeDefaults_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Base != nullptr)
		*Base = params.Base;
	if (Override != nullptr)
		*Override = params.Override;
	if (_LocalBase != nullptr)
		*_LocalBase = params._LocalBase;

}


// Function WBP_LoadoutsPanel.WBP_LoadoutsPanel_C.Get_TextBlock_9_Text_1
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)
struct FText UWBP_LoadoutsPanel_C::Get_TextBlock_9_Text_1()
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function WBP_LoadoutsPanel.WBP_LoadoutsPanel_C.Get_TextBlock_9_Text_1");
	}

	UWBP_LoadoutsPanel_C_Get_TextBlock_9_Text_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function WBP_LoadoutsPanel.WBP_LoadoutsPanel_C.GetNewLoadoutTooltip
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UWidget*                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
class UWidget* UWBP_LoadoutsPanel_C::GetNewLoadoutTooltip()
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function WBP_LoadoutsPanel.WBP_LoadoutsPanel_C.GetNewLoadoutTooltip");
	}

	UWBP_LoadoutsPanel_C_GetNewLoadoutTooltip_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function WBP_LoadoutsPanel.WBP_LoadoutsPanel_C.GetVisibility_1
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// UMG_ESlateVisibility           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
UMG_ESlateVisibility UWBP_LoadoutsPanel_C::GetVisibility_1()
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function WBP_LoadoutsPanel.WBP_LoadoutsPanel_C.GetVisibility_1");
	}

	UWBP_LoadoutsPanel_C_GetVisibility_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function WBP_LoadoutsPanel.WBP_LoadoutsPanel_C.GetIneditableToolTip
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UWidget*                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
class UWidget* UWBP_LoadoutsPanel_C::GetIneditableToolTip()
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function WBP_LoadoutsPanel.WBP_LoadoutsPanel_C.GetIneditableToolTip");
	}

	UWBP_LoadoutsPanel_C_GetIneditableToolTip_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function WBP_LoadoutsPanel.WBP_LoadoutsPanel_C.Get_SelectEditLoadout_Text_1
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)
struct FText UWBP_LoadoutsPanel_C::Get_SelectEditLoadout_Text_1()
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function WBP_LoadoutsPanel.WBP_LoadoutsPanel_C.Get_SelectEditLoadout_Text_1");
	}

	UWBP_LoadoutsPanel_C_Get_SelectEditLoadout_Text_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function WBP_LoadoutsPanel.WBP_LoadoutsPanel_C.GetBestDefaultLoadout
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FMALoadout              Loadout                        (Parm, OutParm)
void UWBP_LoadoutsPanel_C::GetBestDefaultLoadout(struct FMALoadout* Loadout)
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function WBP_LoadoutsPanel.WBP_LoadoutsPanel_C.GetBestDefaultLoadout");
	}

	UWBP_LoadoutsPanel_C_GetBestDefaultLoadout_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Loadout != nullptr)
		*Loadout = params.Loadout;

}


// Function WBP_LoadoutsPanel.WBP_LoadoutsPanel_C.Get_TextBlock_14_ColorAndOpacity_1
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FSlateColor             ReturnValue                    (Parm, OutParm, ReturnParm)
struct FSlateColor UWBP_LoadoutsPanel_C::Get_TextBlock_14_ColorAndOpacity_1()
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function WBP_LoadoutsPanel.WBP_LoadoutsPanel_C.Get_TextBlock_14_ColorAndOpacity_1");
	}

	UWBP_LoadoutsPanel_C_Get_TextBlock_14_ColorAndOpacity_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function WBP_LoadoutsPanel.WBP_LoadoutsPanel_C.Get_TextBlock_9_ColorAndOpacity_1
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FSlateColor             ReturnValue                    (Parm, OutParm, ReturnParm)
struct FSlateColor UWBP_LoadoutsPanel_C::Get_TextBlock_9_ColorAndOpacity_1()
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function WBP_LoadoutsPanel.WBP_LoadoutsPanel_C.Get_TextBlock_9_ColorAndOpacity_1");
	}

	UWBP_LoadoutsPanel_C_Get_TextBlock_9_ColorAndOpacity_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function WBP_LoadoutsPanel.WBP_LoadoutsPanel_C.BindDelegatesForLoadoutEntry
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWBP_SingleLoadoutEntry_C* _                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWBP_SingleLoadoutEntry_C* __                             (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_LoadoutsPanel_C::BindDelegatesForLoadoutEntry(class UWBP_SingleLoadoutEntry_C* _, class UWBP_SingleLoadoutEntry_C** __)
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function WBP_LoadoutsPanel.WBP_LoadoutsPanel_C.BindDelegatesForLoadoutEntry");
	}

	UWBP_LoadoutsPanel_C_BindDelegatesForLoadoutEntry_Params params;
	params._ = _;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (__ != nullptr)
		*__ = params.__;

}


// Function WBP_LoadoutsPanel.WBP_LoadoutsPanel_C.Get_Defaults_Visibility_1
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// UMG_ESlateVisibility           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
UMG_ESlateVisibility UWBP_LoadoutsPanel_C::Get_Defaults_Visibility_1()
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function WBP_LoadoutsPanel.WBP_LoadoutsPanel_C.Get_Defaults_Visibility_1");
	}

	UWBP_LoadoutsPanel_C_Get_Defaults_Visibility_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function WBP_LoadoutsPanel.WBP_LoadoutsPanel_C.IsWeaponRestricted
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UClass*                  Weapon                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           NewParam                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UWBP_LoadoutsPanel_C::IsWeaponRestricted(class UClass* Weapon, bool* NewParam)
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function WBP_LoadoutsPanel.WBP_LoadoutsPanel_C.IsWeaponRestricted");
	}

	UWBP_LoadoutsPanel_C_IsWeaponRestricted_Params params;
	params.Weapon = Weapon;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (NewParam != nullptr)
		*NewParam = params.NewParam;

}


// Function WBP_LoadoutsPanel.WBP_LoadoutsPanel_C.VerifyTeamSpawnableWeapons
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AMATeamState*            Team                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class UClass*>          Weapons                        (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// TArray<class UClass*>          Verified                       (Parm, OutParm, ZeroConstructor)
void UWBP_LoadoutsPanel_C::VerifyTeamSpawnableWeapons(class AMATeamState* Team, TArray<class UClass*>* Weapons, TArray<class UClass*>* Verified)
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function WBP_LoadoutsPanel.WBP_LoadoutsPanel_C.VerifyTeamSpawnableWeapons");
	}

	UWBP_LoadoutsPanel_C_VerifyTeamSpawnableWeapons_Params params;
	params.Team = Team;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Weapons != nullptr)
		*Weapons = params.Weapons;
	if (Verified != nullptr)
		*Verified = params.Verified;

}


// Function WBP_LoadoutsPanel.WBP_LoadoutsPanel_C.FindAugmentWithRequirementsMet
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UAugmentInfo*            CompareAgainst                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class UClass*>          Augments                       (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// class UClass*                  Passes                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_LoadoutsPanel_C::FindAugmentWithRequirementsMet(class UAugmentInfo* CompareAgainst, TArray<class UClass*>* Augments, class UClass** Passes)
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function WBP_LoadoutsPanel.WBP_LoadoutsPanel_C.FindAugmentWithRequirementsMet");
	}

	UWBP_LoadoutsPanel_C_FindAugmentWithRequirementsMet_Params params;
	params.CompareAgainst = CompareAgainst;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Augments != nullptr)
		*Augments = params.Augments;
	if (Passes != nullptr)
		*Passes = params.Passes;

}


// Function WBP_LoadoutsPanel.WBP_LoadoutsPanel_C.Sanitize Augment
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWBP_Loadouts_ItemSlot_C* Augment_Slot                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UClass*                  Backpack_Info                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int                            Augment_Index                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_LoadoutsPanel_C::Sanitize_Augment(class UWBP_Loadouts_ItemSlot_C* Augment_Slot, class UClass* Backpack_Info, int Augment_Index)
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function WBP_LoadoutsPanel.WBP_LoadoutsPanel_C.Sanitize Augment");
	}

	UWBP_LoadoutsPanel_C_Sanitize_Augment_Params params;
	params.Augment_Slot = Augment_Slot;
	params.Backpack_Info = Backpack_Info;
	params.Augment_Index = Augment_Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WBP_LoadoutsPanel.WBP_LoadoutsPanel_C.OnGenerateWidget_1
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 Item                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// class UWidget*                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
class UWidget* UWBP_LoadoutsPanel_C::OnGenerateWidget_1(const struct FString& Item)
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function WBP_LoadoutsPanel.WBP_LoadoutsPanel_C.OnGenerateWidget_1");
	}

	UWBP_LoadoutsPanel_C_OnGenerateWidget_1_Params params;
	params.Item = Item;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function WBP_LoadoutsPanel.WBP_LoadoutsPanel_C.Try Load Item Array
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class UClass*>          Loaded_Items                   (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// TArray<class UClass*>          Items_Array                    (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
void UWBP_LoadoutsPanel_C::Try_Load_Item_Array(TArray<class UClass*>* Loaded_Items, TArray<class UClass*>* Items_Array)
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function WBP_LoadoutsPanel.WBP_LoadoutsPanel_C.Try Load Item Array");
	}

	UWBP_LoadoutsPanel_C_Try_Load_Item_Array_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Loaded_Items != nullptr)
		*Loaded_Items = params.Loaded_Items;
	if (Items_Array != nullptr)
		*Items_Array = params.Items_Array;

}


// Function WBP_LoadoutsPanel.WBP_LoadoutsPanel_C.Try Restore Loadout
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FMALoadout              Saved_Loadout                  (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FMALoadout              Local_Loadout                  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
void UWBP_LoadoutsPanel_C::Try_Restore_Loadout(const struct FMALoadout& Saved_Loadout, struct FMALoadout* Local_Loadout)
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function WBP_LoadoutsPanel.WBP_LoadoutsPanel_C.Try Restore Loadout");
	}

	UWBP_LoadoutsPanel_C_Try_Restore_Loadout_Params params;
	params.Saved_Loadout = Saved_Loadout;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Local_Loadout != nullptr)
		*Local_Loadout = params.Local_Loadout;

}


// Function WBP_LoadoutsPanel.WBP_LoadoutsPanel_C.Update Weapon Slot
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWBP_Loadouts_ItemSlot_C* Item_Slot                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UClass*                  New_Item_Info                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_LoadoutsPanel_C::Update_Weapon_Slot(class UWBP_Loadouts_ItemSlot_C* Item_Slot, class UClass* New_Item_Info)
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function WBP_LoadoutsPanel.WBP_LoadoutsPanel_C.Update Weapon Slot");
	}

	UWBP_LoadoutsPanel_C_Update_Weapon_Slot_Params params;
	params.Item_Slot = Item_Slot;
	params.New_Item_Info = New_Item_Info;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WBP_LoadoutsPanel.WBP_LoadoutsPanel_C.Create Filtered Item list
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class UClass*>          Items                          (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// TArray<class UClass*>          Filtered_Items                 (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// bool                           ReturnInBoth                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<class UClass*>          outResult                      (Parm, OutParm, ZeroConstructor)
void UWBP_LoadoutsPanel_C::Create_Filtered_Item_list(TArray<class UClass*>* Items, TArray<class UClass*>* Filtered_Items, bool ReturnInBoth, TArray<class UClass*>* outResult)
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function WBP_LoadoutsPanel.WBP_LoadoutsPanel_C.Create Filtered Item list");
	}

	UWBP_LoadoutsPanel_C_Create_Filtered_Item_list_Params params;
	params.ReturnInBoth = ReturnInBoth;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Items != nullptr)
		*Items = params.Items;
	if (Filtered_Items != nullptr)
		*Filtered_Items = params.Filtered_Items;
	if (outResult != nullptr)
		*outResult = params.outResult;

}


// Function WBP_LoadoutsPanel.WBP_LoadoutsPanel_C.GetRootCanvas
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWidget*                 Widget                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCanvasPanel*            Canvas                         (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_LoadoutsPanel_C::GetRootCanvas(class UWidget* Widget, class UCanvasPanel** Canvas)
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function WBP_LoadoutsPanel.WBP_LoadoutsPanel_C.GetRootCanvas");
	}

	UWBP_LoadoutsPanel_C_GetRootCanvas_Params params;
	params.Widget = Widget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Canvas != nullptr)
		*Canvas = params.Canvas;

}


// Function WBP_LoadoutsPanel.WBP_LoadoutsPanel_C.GetCurrentLoadoutCopy
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FMALoadout              CurrentLoadout                 (Parm, OutParm)
void UWBP_LoadoutsPanel_C::GetCurrentLoadoutCopy(struct FMALoadout* CurrentLoadout)
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function WBP_LoadoutsPanel.WBP_LoadoutsPanel_C.GetCurrentLoadoutCopy");
	}

	UWBP_LoadoutsPanel_C_GetCurrentLoadoutCopy_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (CurrentLoadout != nullptr)
		*CurrentLoadout = params.CurrentLoadout;

}


// Function WBP_LoadoutsPanel.WBP_LoadoutsPanel_C.GetWeaponClass
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 Selection                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// class UClass*                  Return                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_LoadoutsPanel_C::GetWeaponClass(const struct FString& Selection, class UClass** Return)
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function WBP_LoadoutsPanel.WBP_LoadoutsPanel_C.GetWeaponClass");
	}

	UWBP_LoadoutsPanel_C_GetWeaponClass_Params params;
	params.Selection = Selection;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Return != nullptr)
		*Return = params.Return;

}


// Function WBP_LoadoutsPanel.WBP_LoadoutsPanel_C.GetPackClass
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 Name                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// class UClass*                  Item_Info                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_LoadoutsPanel_C::GetPackClass(const struct FString& Name, class UClass** Item_Info)
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function WBP_LoadoutsPanel.WBP_LoadoutsPanel_C.GetPackClass");
	}

	UWBP_LoadoutsPanel_C_GetPackClass_Params params;
	params.Name = Name;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Item_Info != nullptr)
		*Item_Info = params.Item_Info;

}


// Function WBP_LoadoutsPanel.WBP_LoadoutsPanel_C.Update Widgets for new Character
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
void UWBP_LoadoutsPanel_C::Update_Widgets_for_new_Character()
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function WBP_LoadoutsPanel.WBP_LoadoutsPanel_C.Update Widgets for new Character");
	}

	UWBP_LoadoutsPanel_C_Update_Widgets_for_new_Character_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WBP_LoadoutsPanel.WBP_LoadoutsPanel_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UWBP_LoadoutsPanel_C::Construct()
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function WBP_LoadoutsPanel.WBP_LoadoutsPanel_C.Construct");
	}

	UWBP_LoadoutsPanel_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WBP_LoadoutsPanel.WBP_LoadoutsPanel_C.On Item Clicked
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWBP_Loadouts_ItemSlot_C* Item_Slot                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_LoadoutsPanel_C::On_Item_Clicked(class UWBP_Loadouts_ItemSlot_C* Item_Slot)
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function WBP_LoadoutsPanel.WBP_LoadoutsPanel_C.On Item Clicked");
	}

	UWBP_LoadoutsPanel_C_On_Item_Clicked_Params params;
	params.Item_Slot = Item_Slot;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WBP_LoadoutsPanel.WBP_LoadoutsPanel_C.New Item Selected
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass*                  New_Item                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_LoadoutsPanel_C::New_Item_Selected(class UClass* New_Item)
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function WBP_LoadoutsPanel.WBP_LoadoutsPanel_C.New Item Selected");
	}

	UWBP_LoadoutsPanel_C_New_Item_Selected_Params params;
	params.New_Item = New_Item;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WBP_LoadoutsPanel.WBP_LoadoutsPanel_C.SelectLoadout
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWBP_SingleLoadoutEntry_C* Loadout                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_LoadoutsPanel_C::SelectLoadout(class UWBP_SingleLoadoutEntry_C* Loadout)
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function WBP_LoadoutsPanel.WBP_LoadoutsPanel_C.SelectLoadout");
	}

	UWBP_LoadoutsPanel_C_SelectLoadout_Params params;
	params.Loadout = Loadout;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WBP_LoadoutsPanel.WBP_LoadoutsPanel_C.RefreshCustomLoadouts
// (BlueprintCallable, BlueprintEvent)
void UWBP_LoadoutsPanel_C::RefreshCustomLoadouts()
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function WBP_LoadoutsPanel.WBP_LoadoutsPanel_C.RefreshCustomLoadouts");
	}

	UWBP_LoadoutsPanel_C_RefreshCustomLoadouts_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WBP_LoadoutsPanel.WBP_LoadoutsPanel_C.FindDefaultLoadout
// (BlueprintCallable, BlueprintEvent)
void UWBP_LoadoutsPanel_C::FindDefaultLoadout()
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function WBP_LoadoutsPanel.WBP_LoadoutsPanel_C.FindDefaultLoadout");
	}

	UWBP_LoadoutsPanel_C_FindDefaultLoadout_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WBP_LoadoutsPanel.WBP_LoadoutsPanel_C.BndEvt__RenameLoadout_K2Node_ComponentBoundEvent_343_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
void UWBP_LoadoutsPanel_C::BndEvt__RenameLoadout_K2Node_ComponentBoundEvent_343_OnButtonClickedEvent__DelegateSignature()
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function WBP_LoadoutsPanel.WBP_LoadoutsPanel_C.BndEvt__RenameLoadout_K2Node_ComponentBoundEvent_343_OnButtonClickedEvent__DelegateSignature");
	}

	UWBP_LoadoutsPanel_C_BndEvt__RenameLoadout_K2Node_ComponentBoundEvent_343_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WBP_LoadoutsPanel.WBP_LoadoutsPanel_C.RenameSelectedLoadout
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 Name                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
void UWBP_LoadoutsPanel_C::RenameSelectedLoadout(const struct FString& Name)
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function WBP_LoadoutsPanel.WBP_LoadoutsPanel_C.RenameSelectedLoadout");
	}

	UWBP_LoadoutsPanel_C_RenameSelectedLoadout_Params params;
	params.Name = Name;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WBP_LoadoutsPanel.WBP_LoadoutsPanel_C.CancelRename
// (BlueprintCallable, BlueprintEvent)
void UWBP_LoadoutsPanel_C::CancelRename()
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function WBP_LoadoutsPanel.WBP_LoadoutsPanel_C.CancelRename");
	}

	UWBP_LoadoutsPanel_C_CancelRename_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WBP_LoadoutsPanel.WBP_LoadoutsPanel_C.RefreshDefaultLoadouts
// (BlueprintCallable, BlueprintEvent)
void UWBP_LoadoutsPanel_C::RefreshDefaultLoadouts()
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function WBP_LoadoutsPanel.WBP_LoadoutsPanel_C.RefreshDefaultLoadouts");
	}

	UWBP_LoadoutsPanel_C_RefreshDefaultLoadouts_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WBP_LoadoutsPanel.WBP_LoadoutsPanel_C.Enforce Visual Selection Highlight
// (BlueprintCallable, BlueprintEvent)
void UWBP_LoadoutsPanel_C::Enforce_Visual_Selection_Highlight()
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function WBP_LoadoutsPanel.WBP_LoadoutsPanel_C.Enforce Visual Selection Highlight");
	}

	UWBP_LoadoutsPanel_C_Enforce_Visual_Selection_Highlight_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WBP_LoadoutsPanel.WBP_LoadoutsPanel_C.ProcessGamemodeLoadoutsForDisplay
// (BlueprintCallable, BlueprintEvent)
void UWBP_LoadoutsPanel_C::ProcessGamemodeLoadoutsForDisplay()
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function WBP_LoadoutsPanel.WBP_LoadoutsPanel_C.ProcessGamemodeLoadoutsForDisplay");
	}

	UWBP_LoadoutsPanel_C_ProcessGamemodeLoadoutsForDisplay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WBP_LoadoutsPanel.WBP_LoadoutsPanel_C.Loadout Updated
// (BlueprintCallable, BlueprintEvent)
void UWBP_LoadoutsPanel_C::Loadout_Updated()
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function WBP_LoadoutsPanel.WBP_LoadoutsPanel_C.Loadout Updated");
	}

	UWBP_LoadoutsPanel_C_Loadout_Updated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WBP_LoadoutsPanel.WBP_LoadoutsPanel_C.BndEvt__WBP_Loadouts_SelectArmor_K2Node_ComponentBoundEvent_1038_OnClicked__DelegateSignature
// (BlueprintEvent)
void UWBP_LoadoutsPanel_C::BndEvt__WBP_Loadouts_SelectArmor_K2Node_ComponentBoundEvent_1038_OnClicked__DelegateSignature()
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function WBP_LoadoutsPanel.WBP_LoadoutsPanel_C.BndEvt__WBP_Loadouts_SelectArmor_K2Node_ComponentBoundEvent_1038_OnClicked__DelegateSignature");
	}

	UWBP_LoadoutsPanel_C_BndEvt__WBP_Loadouts_SelectArmor_K2Node_ComponentBoundEvent_1038_OnClicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WBP_LoadoutsPanel.WBP_LoadoutsPanel_C.BndEvt__WBP_Loadouts_SelectArmor_C_0_K2Node_ComponentBoundEvent_1046_OnClicked__DelegateSignature
// (BlueprintEvent)
void UWBP_LoadoutsPanel_C::BndEvt__WBP_Loadouts_SelectArmor_C_0_K2Node_ComponentBoundEvent_1046_OnClicked__DelegateSignature()
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function WBP_LoadoutsPanel.WBP_LoadoutsPanel_C.BndEvt__WBP_Loadouts_SelectArmor_C_0_K2Node_ComponentBoundEvent_1046_OnClicked__DelegateSignature");
	}

	UWBP_LoadoutsPanel_C_BndEvt__WBP_Loadouts_SelectArmor_C_0_K2Node_ComponentBoundEvent_1046_OnClicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WBP_LoadoutsPanel.WBP_LoadoutsPanel_C.BndEvt__WBP_Loadouts_SelectArmor_C_1_K2Node_ComponentBoundEvent_1055_OnClicked__DelegateSignature
// (BlueprintEvent)
void UWBP_LoadoutsPanel_C::BndEvt__WBP_Loadouts_SelectArmor_C_1_K2Node_ComponentBoundEvent_1055_OnClicked__DelegateSignature()
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function WBP_LoadoutsPanel.WBP_LoadoutsPanel_C.BndEvt__WBP_Loadouts_SelectArmor_C_1_K2Node_ComponentBoundEvent_1055_OnClicked__DelegateSignature");
	}

	UWBP_LoadoutsPanel_C_BndEvt__WBP_Loadouts_SelectArmor_C_1_K2Node_ComponentBoundEvent_1055_OnClicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WBP_LoadoutsPanel.WBP_LoadoutsPanel_C.BndEvt__EditableTextBox_0_K2Node_ComponentBoundEvent_473_OnEditableTextBoxCommittedEvent__DelegateSignature
// (HasOutParms, BlueprintEvent)
// Parameters:
// struct FText                   Text                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// TEnumAsByte<SlateCore_ETextCommit> CommitMethod                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_LoadoutsPanel_C::BndEvt__EditableTextBox_0_K2Node_ComponentBoundEvent_473_OnEditableTextBoxCommittedEvent__DelegateSignature(const struct FText& Text, TEnumAsByte<SlateCore_ETextCommit> CommitMethod)
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function WBP_LoadoutsPanel.WBP_LoadoutsPanel_C.BndEvt__EditableTextBox_0_K2Node_ComponentBoundEvent_473_OnEditableTextBoxCommittedEvent__DelegateSignature");
	}

	UWBP_LoadoutsPanel_C_BndEvt__EditableTextBox_0_K2Node_ComponentBoundEvent_473_OnEditableTextBoxCommittedEvent__DelegateSignature_Params params;
	params.Text = Text;
	params.CommitMethod = CommitMethod;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WBP_LoadoutsPanel.WBP_LoadoutsPanel_C.Update Basic Info
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass*                  Object_Info_Class              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FText                   Name_Suffix                    (BlueprintVisible, BlueprintReadOnly, Parm)
void UWBP_LoadoutsPanel_C::Update_Basic_Info(class UClass* Object_Info_Class, const struct FText& Name_Suffix)
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function WBP_LoadoutsPanel.WBP_LoadoutsPanel_C.Update Basic Info");
	}

	UWBP_LoadoutsPanel_C_Update_Basic_Info_Params params;
	params.Object_Info_Class = Object_Info_Class;
	params.Name_Suffix = Name_Suffix;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WBP_LoadoutsPanel.WBP_LoadoutsPanel_C.Switch to Overview
// (BlueprintCallable, BlueprintEvent)
void UWBP_LoadoutsPanel_C::Switch_to_Overview()
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function WBP_LoadoutsPanel.WBP_LoadoutsPanel_C.Switch to Overview");
	}

	UWBP_LoadoutsPanel_C_Switch_to_Overview_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WBP_LoadoutsPanel.WBP_LoadoutsPanel_C.Switch to Weapon Selection
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            For_Slot                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_LoadoutsPanel_C::Switch_to_Weapon_Selection(int For_Slot)
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function WBP_LoadoutsPanel.WBP_LoadoutsPanel_C.Switch to Weapon Selection");
	}

	UWBP_LoadoutsPanel_C_Switch_to_Weapon_Selection_Params params;
	params.For_Slot = For_Slot;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WBP_LoadoutsPanel.WBP_LoadoutsPanel_C.Switch to Throwable Selection
// (BlueprintCallable, BlueprintEvent)
void UWBP_LoadoutsPanel_C::Switch_to_Throwable_Selection()
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function WBP_LoadoutsPanel.WBP_LoadoutsPanel_C.Switch to Throwable Selection");
	}

	UWBP_LoadoutsPanel_C_Switch_to_Throwable_Selection_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WBP_LoadoutsPanel.WBP_LoadoutsPanel_C.OnWeaponSlotClicked
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWBP_Loadouts_ItemSlot_C* Item_Slot                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_LoadoutsPanel_C::OnWeaponSlotClicked(class UWBP_Loadouts_ItemSlot_C* Item_Slot)
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function WBP_LoadoutsPanel.WBP_LoadoutsPanel_C.OnWeaponSlotClicked");
	}

	UWBP_LoadoutsPanel_C_OnWeaponSlotClicked_Params params;
	params.Item_Slot = Item_Slot;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WBP_LoadoutsPanel.WBP_LoadoutsPanel_C.BndEvt__EditableLoadoutName_K2Node_ComponentBoundEvent_0_OnEditableTextBoxChangedEvent__DelegateSignature
// (HasOutParms, BlueprintEvent)
// Parameters:
// struct FText                   Text                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
void UWBP_LoadoutsPanel_C::BndEvt__EditableLoadoutName_K2Node_ComponentBoundEvent_0_OnEditableTextBoxChangedEvent__DelegateSignature(const struct FText& Text)
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function WBP_LoadoutsPanel.WBP_LoadoutsPanel_C.BndEvt__EditableLoadoutName_K2Node_ComponentBoundEvent_0_OnEditableTextBoxChangedEvent__DelegateSignature");
	}

	UWBP_LoadoutsPanel_C_BndEvt__EditableLoadoutName_K2Node_ComponentBoundEvent_0_OnEditableTextBoxChangedEvent__DelegateSignature_Params params;
	params.Text = Text;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WBP_LoadoutsPanel.WBP_LoadoutsPanel_C.DisplayInvalidWeaponToast
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText                   Error_Message                  (BlueprintVisible, BlueprintReadOnly, Parm)
void UWBP_LoadoutsPanel_C::DisplayInvalidWeaponToast(const struct FText& Error_Message)
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function WBP_LoadoutsPanel.WBP_LoadoutsPanel_C.DisplayInvalidWeaponToast");
	}

	UWBP_LoadoutsPanel_C_DisplayInvalidWeaponToast_Params params;
	params.Error_Message = Error_Message;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WBP_LoadoutsPanel.WBP_LoadoutsPanel_C.DisplayInvalidAugmentToast
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText                   Error_Message                  (BlueprintVisible, BlueprintReadOnly, Parm)
void UWBP_LoadoutsPanel_C::DisplayInvalidAugmentToast(const struct FText& Error_Message)
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function WBP_LoadoutsPanel.WBP_LoadoutsPanel_C.DisplayInvalidAugmentToast");
	}

	UWBP_LoadoutsPanel_C_DisplayInvalidAugmentToast_Params params;
	params.Error_Message = Error_Message;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WBP_LoadoutsPanel.WBP_LoadoutsPanel_C.DismissToast
// (BlueprintCallable, BlueprintEvent)
void UWBP_LoadoutsPanel_C::DismissToast()
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function WBP_LoadoutsPanel.WBP_LoadoutsPanel_C.DismissToast");
	}

	UWBP_LoadoutsPanel_C_DismissToast_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WBP_LoadoutsPanel.WBP_LoadoutsPanel_C.InvalidPackToast
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText                   Error_Text                     (BlueprintVisible, BlueprintReadOnly, Parm)
void UWBP_LoadoutsPanel_C::InvalidPackToast(const struct FText& Error_Text)
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function WBP_LoadoutsPanel.WBP_LoadoutsPanel_C.InvalidPackToast");
	}

	UWBP_LoadoutsPanel_C_InvalidPackToast_Params params;
	params.Error_Text = Error_Text;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WBP_LoadoutsPanel.WBP_LoadoutsPanel_C.InvalidCharacterToast
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText                   Error_Text                     (BlueprintVisible, BlueprintReadOnly, Parm)
void UWBP_LoadoutsPanel_C::InvalidCharacterToast(const struct FText& Error_Text)
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function WBP_LoadoutsPanel.WBP_LoadoutsPanel_C.InvalidCharacterToast");
	}

	UWBP_LoadoutsPanel_C_InvalidCharacterToast_Params params;
	params.Error_Text = Error_Text;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WBP_LoadoutsPanel.WBP_LoadoutsPanel_C.InvalidThrowableToast
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText                   Error_Text                     (BlueprintVisible, BlueprintReadOnly, Parm)
void UWBP_LoadoutsPanel_C::InvalidThrowableToast(const struct FText& Error_Text)
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function WBP_LoadoutsPanel.WBP_LoadoutsPanel_C.InvalidThrowableToast");
	}

	UWBP_LoadoutsPanel_C_InvalidThrowableToast_Params params;
	params.Error_Text = Error_Text;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WBP_LoadoutsPanel.WBP_LoadoutsPanel_C.BndEvt__ThrowableSlot_K2Node_ComponentBoundEvent_1430_ButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UWBP_SelectableButton_C* Clicked_Button                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_LoadoutsPanel_C::BndEvt__ThrowableSlot_K2Node_ComponentBoundEvent_1430_ButtonClicked__DelegateSignature(class UWBP_SelectableButton_C* Clicked_Button)
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function WBP_LoadoutsPanel.WBP_LoadoutsPanel_C.BndEvt__ThrowableSlot_K2Node_ComponentBoundEvent_1430_ButtonClicked__DelegateSignature");
	}

	UWBP_LoadoutsPanel_C_BndEvt__ThrowableSlot_K2Node_ComponentBoundEvent_1430_ButtonClicked__DelegateSignature_Params params;
	params.Clicked_Button = Clicked_Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WBP_LoadoutsPanel.WBP_LoadoutsPanel_C.OnConfiguratorManualApply
// (BlueprintCallable, BlueprintEvent)
void UWBP_LoadoutsPanel_C::OnConfiguratorManualApply()
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function WBP_LoadoutsPanel.WBP_LoadoutsPanel_C.OnConfiguratorManualApply");
	}

	UWBP_LoadoutsPanel_C_OnConfiguratorManualApply_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WBP_LoadoutsPanel.WBP_LoadoutsPanel_C.DismissLoadout
// (BlueprintCallable, BlueprintEvent)
void UWBP_LoadoutsPanel_C::DismissLoadout()
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function WBP_LoadoutsPanel.WBP_LoadoutsPanel_C.DismissLoadout");
	}

	UWBP_LoadoutsPanel_C_DismissLoadout_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WBP_LoadoutsPanel.WBP_LoadoutsPanel_C.BndEvt__WBP_SelectableButtonWithText_0_K2Node_ComponentBoundEvent_311_ButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UWBP_SelectableButton_C* Clicked_Button                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_LoadoutsPanel_C::BndEvt__WBP_SelectableButtonWithText_0_K2Node_ComponentBoundEvent_311_ButtonClicked__DelegateSignature(class UWBP_SelectableButton_C* Clicked_Button)
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function WBP_LoadoutsPanel.WBP_LoadoutsPanel_C.BndEvt__WBP_SelectableButtonWithText_0_K2Node_ComponentBoundEvent_311_ButtonClicked__DelegateSignature");
	}

	UWBP_LoadoutsPanel_C_BndEvt__WBP_SelectableButtonWithText_0_K2Node_ComponentBoundEvent_311_ButtonClicked__DelegateSignature_Params params;
	params.Clicked_Button = Clicked_Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WBP_LoadoutsPanel.WBP_LoadoutsPanel_C.BndEvt__WBP_SelectableButtonWithText_K2Node_ComponentBoundEvent_331_ButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UWBP_SelectableButton_C* Clicked_Button                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_LoadoutsPanel_C::BndEvt__WBP_SelectableButtonWithText_K2Node_ComponentBoundEvent_331_ButtonClicked__DelegateSignature(class UWBP_SelectableButton_C* Clicked_Button)
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function WBP_LoadoutsPanel.WBP_LoadoutsPanel_C.BndEvt__WBP_SelectableButtonWithText_K2Node_ComponentBoundEvent_331_ButtonClicked__DelegateSignature");
	}

	UWBP_LoadoutsPanel_C_BndEvt__WBP_SelectableButtonWithText_K2Node_ComponentBoundEvent_331_ButtonClicked__DelegateSignature_Params params;
	params.Clicked_Button = Clicked_Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WBP_LoadoutsPanel.WBP_LoadoutsPanel_C.Jump To Object
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass*                  Object                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_LoadoutsPanel_C::Jump_To_Object(class UClass* Object)
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function WBP_LoadoutsPanel.WBP_LoadoutsPanel_C.Jump To Object");
	}

	UWBP_LoadoutsPanel_C_Jump_To_Object_Params params;
	params.Object = Object;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WBP_LoadoutsPanel.WBP_LoadoutsPanel_C.BndEvt__WBP_LoadoutWeaponConfiguration_K2Node_ComponentBoundEvent_4_Jump to Object__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UClass*                  Object_Info                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_LoadoutsPanel_C::BndEvt__WBP_LoadoutWeaponConfiguration_K2Node_ComponentBoundEvent_4_Jump_to_Object__DelegateSignature(class UClass* Object_Info)
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function WBP_LoadoutsPanel.WBP_LoadoutsPanel_C.BndEvt__WBP_LoadoutWeaponConfiguration_K2Node_ComponentBoundEvent_4_Jump to Object__DelegateSignature");
	}

	UWBP_LoadoutsPanel_C_BndEvt__WBP_LoadoutWeaponConfiguration_K2Node_ComponentBoundEvent_4_Jump_to_Object__DelegateSignature_Params params;
	params.Object_Info = Object_Info;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WBP_LoadoutsPanel.WBP_LoadoutsPanel_C.Jump to Weapon Slot Unlock
// (BlueprintCallable, BlueprintEvent)
void UWBP_LoadoutsPanel_C::Jump_to_Weapon_Slot_Unlock()
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function WBP_LoadoutsPanel.WBP_LoadoutsPanel_C.Jump to Weapon Slot Unlock");
	}

	UWBP_LoadoutsPanel_C_Jump_to_Weapon_Slot_Unlock_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WBP_LoadoutsPanel.WBP_LoadoutsPanel_C.Update Basic Info With Skin
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass*                  Object_Info_Class              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UClass*                  Skin_Class                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FText                   Name_Suffix                    (BlueprintVisible, BlueprintReadOnly, Parm)
void UWBP_LoadoutsPanel_C::Update_Basic_Info_With_Skin(class UClass* Object_Info_Class, class UClass* Skin_Class, const struct FText& Name_Suffix)
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function WBP_LoadoutsPanel.WBP_LoadoutsPanel_C.Update Basic Info With Skin");
	}

	UWBP_LoadoutsPanel_C_Update_Basic_Info_With_Skin_Params params;
	params.Object_Info_Class = Object_Info_Class;
	params.Skin_Class = Skin_Class;
	params.Name_Suffix = Name_Suffix;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WBP_LoadoutsPanel.WBP_LoadoutsPanel_C.Switch Back
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Revert_Displayed_Object        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UWBP_LoadoutsPanel_C::Switch_Back(bool Revert_Displayed_Object)
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function WBP_LoadoutsPanel.WBP_LoadoutsPanel_C.Switch Back");
	}

	UWBP_LoadoutsPanel_C_Switch_Back_Params params;
	params.Revert_Displayed_Object = Revert_Displayed_Object;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WBP_LoadoutsPanel.WBP_LoadoutsPanel_C.BndEvt__WBP_Loadout_SkinConfiguration_K2Node_ComponentBoundEvent_1013_Skin Selected__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UClass*                  Skin_Configuration             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_LoadoutsPanel_C::BndEvt__WBP_Loadout_SkinConfiguration_K2Node_ComponentBoundEvent_1013_Skin_Selected__DelegateSignature(class UClass* Skin_Configuration)
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function WBP_LoadoutsPanel.WBP_LoadoutsPanel_C.BndEvt__WBP_Loadout_SkinConfiguration_K2Node_ComponentBoundEvent_1013_Skin Selected__DelegateSignature");
	}

	UWBP_LoadoutsPanel_C_BndEvt__WBP_Loadout_SkinConfiguration_K2Node_ComponentBoundEvent_1013_Skin_Selected__DelegateSignature_Params params;
	params.Skin_Configuration = Skin_Configuration;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WBP_LoadoutsPanel.WBP_LoadoutsPanel_C.BndEvt__WBP_Loadout_SkinConfiguration_K2Node_ComponentBoundEvent_157_Skin Equipped__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UClass*                  Skin_Configuration             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_LoadoutsPanel_C::BndEvt__WBP_Loadout_SkinConfiguration_K2Node_ComponentBoundEvent_157_Skin_Equipped__DelegateSignature(class UClass* Skin_Configuration)
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function WBP_LoadoutsPanel.WBP_LoadoutsPanel_C.BndEvt__WBP_Loadout_SkinConfiguration_K2Node_ComponentBoundEvent_157_Skin Equipped__DelegateSignature");
	}

	UWBP_LoadoutsPanel_C_BndEvt__WBP_Loadout_SkinConfiguration_K2Node_ComponentBoundEvent_157_Skin_Equipped__DelegateSignature_Params params;
	params.Skin_Configuration = Skin_Configuration;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WBP_LoadoutsPanel.WBP_LoadoutsPanel_C.BndEvt__WBP_AppearanceMenu_K2Node_ComponentBoundEvent_173_TryOpenSkins__DelegateSignature
// (BlueprintEvent)
void UWBP_LoadoutsPanel_C::BndEvt__WBP_AppearanceMenu_K2Node_ComponentBoundEvent_173_TryOpenSkins__DelegateSignature()
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function WBP_LoadoutsPanel.WBP_LoadoutsPanel_C.BndEvt__WBP_AppearanceMenu_K2Node_ComponentBoundEvent_173_TryOpenSkins__DelegateSignature");
	}

	UWBP_LoadoutsPanel_C_BndEvt__WBP_AppearanceMenu_K2Node_ComponentBoundEvent_173_TryOpenSkins__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WBP_LoadoutsPanel.WBP_LoadoutsPanel_C.Switched To
// (BlueprintCallable, BlueprintEvent)
void UWBP_LoadoutsPanel_C::Switched_To()
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function WBP_LoadoutsPanel.WBP_LoadoutsPanel_C.Switched To");
	}

	UWBP_LoadoutsPanel_C_Switched_To_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WBP_LoadoutsPanel.WBP_LoadoutsPanel_C.BndEvt__WBP_Loadouts_PackButton_K2Node_ComponentBoundEvent_1_ButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UWBP_SelectableButton_C* Clicked_Button                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_LoadoutsPanel_C::BndEvt__WBP_Loadouts_PackButton_K2Node_ComponentBoundEvent_1_ButtonClicked__DelegateSignature(class UWBP_SelectableButton_C* Clicked_Button)
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function WBP_LoadoutsPanel.WBP_LoadoutsPanel_C.BndEvt__WBP_Loadouts_PackButton_K2Node_ComponentBoundEvent_1_ButtonClicked__DelegateSignature");
	}

	UWBP_LoadoutsPanel_C_BndEvt__WBP_Loadouts_PackButton_K2Node_ComponentBoundEvent_1_ButtonClicked__DelegateSignature_Params params;
	params.Clicked_Button = Clicked_Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WBP_LoadoutsPanel.WBP_LoadoutsPanel_C.Switch To Pack Selection
// (BlueprintCallable, BlueprintEvent)
void UWBP_LoadoutsPanel_C::Switch_To_Pack_Selection()
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function WBP_LoadoutsPanel.WBP_LoadoutsPanel_C.Switch To Pack Selection");
	}

	UWBP_LoadoutsPanel_C_Switch_To_Pack_Selection_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WBP_LoadoutsPanel.WBP_LoadoutsPanel_C.Pack Updated
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass*                  Pack                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FText                   Suffix_Text                    (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FText                   Error_Text                     (BlueprintVisible, BlueprintReadOnly, Parm)
void UWBP_LoadoutsPanel_C::Pack_Updated(class UClass* Pack, const struct FText& Suffix_Text, const struct FText& Error_Text)
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function WBP_LoadoutsPanel.WBP_LoadoutsPanel_C.Pack Updated");
	}

	UWBP_LoadoutsPanel_C_Pack_Updated_Params params;
	params.Pack = Pack;
	params.Suffix_Text = Suffix_Text;
	params.Error_Text = Error_Text;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WBP_LoadoutsPanel.WBP_LoadoutsPanel_C.ExecuteUbergraph_WBP_LoadoutsPanel
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_LoadoutsPanel_C::ExecuteUbergraph_WBP_LoadoutsPanel(int EntryPoint)
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function WBP_LoadoutsPanel.WBP_LoadoutsPanel_C.ExecuteUbergraph_WBP_LoadoutsPanel");
	}

	UWBP_LoadoutsPanel_C_ExecuteUbergraph_WBP_LoadoutsPanel_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WBP_LoadoutsPanel.WBP_LoadoutsPanel_C.JumpToWeaponSlotForArmor__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass*                  Armor_Type                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_LoadoutsPanel_C::JumpToWeaponSlotForArmor__DelegateSignature(class UClass* Armor_Type)
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function WBP_LoadoutsPanel.WBP_LoadoutsPanel_C.JumpToWeaponSlotForArmor__DelegateSignature");
	}

	UWBP_LoadoutsPanel_C_JumpToWeaponSlotForArmor__DelegateSignature_Params params;
	params.Armor_Type = Armor_Type;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WBP_LoadoutsPanel.WBP_LoadoutsPanel_C.JumpToProgressionObject__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass*                  Object_Info                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_LoadoutsPanel_C::JumpToProgressionObject__DelegateSignature(class UClass* Object_Info)
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function WBP_LoadoutsPanel.WBP_LoadoutsPanel_C.JumpToProgressionObject__DelegateSignature");
	}

	UWBP_LoadoutsPanel_C_JumpToProgressionObject__DelegateSignature_Params params;
	params.Object_Info = Object_Info;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
