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

// Function WBP_SelectableButton.WBP_SelectableButton_C.DoesHaveNewItemBadge
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           HasNewItemBadge                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UWBP_SelectableButton_C::DoesHaveNewItemBadge(bool* HasNewItemBadge)
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function WBP_SelectableButton.WBP_SelectableButton_C.DoesHaveNewItemBadge");
	}

	UWBP_SelectableButton_C_DoesHaveNewItemBadge_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (HasNewItemBadge != nullptr)
		*HasNewItemBadge = params.HasNewItemBadge;

}


// Function WBP_SelectableButton.WBP_SelectableButton_C.Do Rollover Sound
// (Public, BlueprintCallable, BlueprintEvent)
void UWBP_SelectableButton_C::Do_Rollover_Sound()
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function WBP_SelectableButton.WBP_SelectableButton_C.Do Rollover Sound");
	}

	UWBP_SelectableButton_C_Do_Rollover_Sound_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WBP_SelectableButton.WBP_SelectableButton_C.Do Press Sound
// (Public, BlueprintCallable, BlueprintEvent)
void UWBP_SelectableButton_C::Do_Press_Sound()
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function WBP_SelectableButton.WBP_SelectableButton_C.Do Press Sound");
	}

	UWBP_SelectableButton_C_Do_Press_Sound_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WBP_SelectableButton.WBP_SelectableButton_C.Override Sounds
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class USoundBase*              __New_Pressed_Sound            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USoundBase*              __New_Hovered_Sound            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_SelectableButton_C::Override_Sounds(class USoundBase* __New_Pressed_Sound, class USoundBase* __New_Hovered_Sound)
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function WBP_SelectableButton.WBP_SelectableButton_C.Override Sounds");
	}

	UWBP_SelectableButton_C_Override_Sounds_Params params;
	params.__New_Pressed_Sound = __New_Pressed_Sound;
	params.__New_Hovered_Sound = __New_Hovered_Sound;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WBP_SelectableButton.WBP_SelectableButton_C.Override Hovered Sound
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class USoundBase*              New_Hovered_Sound              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_SelectableButton_C::Override_Hovered_Sound(class USoundBase* New_Hovered_Sound)
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function WBP_SelectableButton.WBP_SelectableButton_C.Override Hovered Sound");
	}

	UWBP_SelectableButton_C_Override_Hovered_Sound_Params params;
	params.New_Hovered_Sound = New_Hovered_Sound;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WBP_SelectableButton.WBP_SelectableButton_C.Override Pressed Sound
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class USoundBase*              New_Pressed_Sound              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_SelectableButton_C::Override_Pressed_Sound(class USoundBase* New_Pressed_Sound)
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function WBP_SelectableButton.WBP_SelectableButton_C.Override Pressed Sound");
	}

	UWBP_SelectableButton_C_Override_Pressed_Sound_Params params;
	params.New_Pressed_Sound = New_Pressed_Sound;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WBP_SelectableButton.WBP_SelectableButton_C.Reset Hovered Sound
// (Public, BlueprintCallable, BlueprintEvent)
void UWBP_SelectableButton_C::Reset_Hovered_Sound()
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function WBP_SelectableButton.WBP_SelectableButton_C.Reset Hovered Sound");
	}

	UWBP_SelectableButton_C_Reset_Hovered_Sound_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WBP_SelectableButton.WBP_SelectableButton_C.Reset Pressed Sound
// (Public, BlueprintCallable, BlueprintEvent)
void UWBP_SelectableButton_C::Reset_Pressed_Sound()
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function WBP_SelectableButton.WBP_SelectableButton_C.Reset Pressed Sound");
	}

	UWBP_SelectableButton_C_Reset_Pressed_Sound_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WBP_SelectableButton.WBP_SelectableButton_C.Reset Sounds
// (Public, BlueprintCallable, BlueprintEvent)
void UWBP_SelectableButton_C::Reset_Sounds()
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function WBP_SelectableButton.WBP_SelectableButton_C.Reset Sounds");
	}

	UWBP_SelectableButton_C_Reset_Sounds_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WBP_SelectableButton.WBP_SelectableButton_C.MakeLockedTooltipWidget
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UWidget*                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
class UWidget* UWBP_SelectableButton_C::MakeLockedTooltipWidget()
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function WBP_SelectableButton.WBP_SelectableButton_C.MakeLockedTooltipWidget");
	}

	UWBP_SelectableButton_C_MakeLockedTooltipWidget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function WBP_SelectableButton.WBP_SelectableButton_C.GetRequirementsToUnlock
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// TArray<struct FText>           Errors                         (Parm, OutParm, ZeroConstructor)
void UWBP_SelectableButton_C::GetRequirementsToUnlock(TArray<struct FText>* Errors)
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function WBP_SelectableButton.WBP_SelectableButton_C.GetRequirementsToUnlock");
	}

	UWBP_SelectableButton_C_GetRequirementsToUnlock_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Errors != nullptr)
		*Errors = params.Errors;

}


// Function WBP_SelectableButton.WBP_SelectableButton_C.GetIsLocked
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           Locked                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UWBP_SelectableButton_C::GetIsLocked(bool* Locked)
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function WBP_SelectableButton.WBP_SelectableButton_C.GetIsLocked");
	}

	UWBP_SelectableButton_C_GetIsLocked_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Locked != nullptr)
		*Locked = params.Locked;

}


// Function WBP_SelectableButton.WBP_SelectableButton_C.UpdateSelected
// (Public, BlueprintCallable, BlueprintEvent)
void UWBP_SelectableButton_C::UpdateSelected()
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function WBP_SelectableButton.WBP_SelectableButton_C.UpdateSelected");
	}

	UWBP_SelectableButton_C_UpdateSelected_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WBP_SelectableButton.WBP_SelectableButton_C.Set Error
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText                   Error                          (BlueprintVisible, BlueprintReadOnly, Parm)
void UWBP_SelectableButton_C::Set_Error(const struct FText& Error)
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function WBP_SelectableButton.WBP_SelectableButton_C.Set Error");
	}

	UWBP_SelectableButton_C_Set_Error_Params params;
	params.Error = Error;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WBP_SelectableButton.WBP_SelectableButton_C.Invalid
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
bool UWBP_SelectableButton_C::Invalid()
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function WBP_SelectableButton.WBP_SelectableButton_C.Invalid");
	}

	UWBP_SelectableButton_C_Invalid_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function WBP_SelectableButton.WBP_SelectableButton_C.SetActive
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bNewActive                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UWBP_SelectableButton_C::SetActive(bool bNewActive)
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function WBP_SelectableButton.WBP_SelectableButton_C.SetActive");
	}

	UWBP_SelectableButton_C_SetActive_Params params;
	params.bNewActive = bNewActive;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WBP_SelectableButton.WBP_SelectableButton_C.SetSelected
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Selected                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UWBP_SelectableButton_C::SetSelected(bool Selected)
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function WBP_SelectableButton.WBP_SelectableButton_C.SetSelected");
	}

	UWBP_SelectableButton_C_SetSelected_Params params;
	params.Selected = Selected;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WBP_SelectableButton.WBP_SelectableButton_C.GetBackgroundColor
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FLinearColor            Color                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_SelectableButton_C::GetBackgroundColor(struct FLinearColor* Color)
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function WBP_SelectableButton.WBP_SelectableButton_C.GetBackgroundColor");
	}

	UWBP_SelectableButton_C_GetBackgroundColor_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Color != nullptr)
		*Color = params.Color;

}


// Function WBP_SelectableButton.WBP_SelectableButton_C.GetForegroundColor
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FLinearColor            Color                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_SelectableButton_C::GetForegroundColor(struct FLinearColor* Color)
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function WBP_SelectableButton.WBP_SelectableButton_C.GetForegroundColor");
	}

	UWBP_SelectableButton_C_GetForegroundColor_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Color != nullptr)
		*Color = params.Color;

}


// Function WBP_SelectableButton.WBP_SelectableButton_C.OnSelected
// (BlueprintCallable, BlueprintEvent)
void UWBP_SelectableButton_C::OnSelected()
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function WBP_SelectableButton.WBP_SelectableButton_C.OnSelected");
	}

	UWBP_SelectableButton_C_OnSelected_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WBP_SelectableButton.WBP_SelectableButton_C.OnActive
// (BlueprintCallable, BlueprintEvent)
void UWBP_SelectableButton_C::OnActive()
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function WBP_SelectableButton.WBP_SelectableButton_C.OnActive");
	}

	UWBP_SelectableButton_C_OnActive_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WBP_SelectableButton.WBP_SelectableButton_C.OnPressed
// (BlueprintCallable, BlueprintEvent)
void UWBP_SelectableButton_C::OnPressed()
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function WBP_SelectableButton.WBP_SelectableButton_C.OnPressed");
	}

	UWBP_SelectableButton_C_OnPressed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WBP_SelectableButton.WBP_SelectableButton_C.OnUpdateDisabled
// (BlueprintCallable, BlueprintEvent)
void UWBP_SelectableButton_C::OnUpdateDisabled()
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function WBP_SelectableButton.WBP_SelectableButton_C.OnUpdateDisabled");
	}

	UWBP_SelectableButton_C_OnUpdateDisabled_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WBP_SelectableButton.WBP_SelectableButton_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                           IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UWBP_SelectableButton_C::PreConstruct(bool IsDesignTime)
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function WBP_SelectableButton.WBP_SelectableButton_C.PreConstruct");
	}

	UWBP_SelectableButton_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WBP_SelectableButton.WBP_SelectableButton_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UWBP_SelectableButton_C::Construct()
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function WBP_SelectableButton.WBP_SelectableButton_C.Construct");
	}

	UWBP_SelectableButton_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WBP_SelectableButton.WBP_SelectableButton_C.OnUnselected
// (BlueprintCallable, BlueprintEvent)
void UWBP_SelectableButton_C::OnUnselected()
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function WBP_SelectableButton.WBP_SelectableButton_C.OnUnselected");
	}

	UWBP_SelectableButton_C_OnUnselected_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WBP_SelectableButton.WBP_SelectableButton_C.ExecuteUbergraph_WBP_SelectableButton
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_SelectableButton_C::ExecuteUbergraph_WBP_SelectableButton(int EntryPoint)
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function WBP_SelectableButton.WBP_SelectableButton_C.ExecuteUbergraph_WBP_SelectableButton");
	}

	UWBP_SelectableButton_C_ExecuteUbergraph_WBP_SelectableButton_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WBP_SelectableButton.WBP_SelectableButton_C.ButtonUnselected__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWBP_SelectableButton_C* Selected_Button                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_SelectableButton_C::ButtonUnselected__DelegateSignature(class UWBP_SelectableButton_C* Selected_Button)
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function WBP_SelectableButton.WBP_SelectableButton_C.ButtonUnselected__DelegateSignature");
	}

	UWBP_SelectableButton_C_ButtonUnselected__DelegateSignature_Params params;
	params.Selected_Button = Selected_Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WBP_SelectableButton.WBP_SelectableButton_C.ButtonHovered__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWBP_SelectableButton_C* Selected_Button                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_SelectableButton_C::ButtonHovered__DelegateSignature(class UWBP_SelectableButton_C* Selected_Button)
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function WBP_SelectableButton.WBP_SelectableButton_C.ButtonHovered__DelegateSignature");
	}

	UWBP_SelectableButton_C_ButtonHovered__DelegateSignature_Params params;
	params.Selected_Button = Selected_Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WBP_SelectableButton.WBP_SelectableButton_C.ButtonClicked__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWBP_SelectableButton_C* Clicked_Button                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_SelectableButton_C::ButtonClicked__DelegateSignature(class UWBP_SelectableButton_C* Clicked_Button)
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function WBP_SelectableButton.WBP_SelectableButton_C.ButtonClicked__DelegateSignature");
	}

	UWBP_SelectableButton_C_ButtonClicked__DelegateSignature_Params params;
	params.Clicked_Button = Clicked_Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WBP_SelectableButton.WBP_SelectableButton_C.ButtonSelected__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWBP_SelectableButton_C* Selected_Button                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_SelectableButton_C::ButtonSelected__DelegateSignature(class UWBP_SelectableButton_C* Selected_Button)
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function WBP_SelectableButton.WBP_SelectableButton_C.ButtonSelected__DelegateSignature");
	}

	UWBP_SelectableButton_C_ButtonSelected__DelegateSignature_Params params;
	params.Selected_Button = Selected_Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
