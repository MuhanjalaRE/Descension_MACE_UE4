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

// Function WBP_EventFeedSlot.WBP_EventFeedSlot_C.GetBrushColor_1
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FLinearColor            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
struct FLinearColor UWBP_EventFeedSlot_C::GetBrushColor_1()
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function WBP_EventFeedSlot.WBP_EventFeedSlot_C.GetBrushColor_1");
	}

	UWBP_EventFeedSlot_C_GetBrushColor_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function WBP_EventFeedSlot.WBP_EventFeedSlot_C.Set Text Color
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AMAPlayerState*          PlayerState                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTextBlock*              Text                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AMAPlayerState*          VTPlayerState                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_EventFeedSlot_C::Set_Text_Color(class AMAPlayerState* PlayerState, class UTextBlock* Text, class AMAPlayerState* VTPlayerState)
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function WBP_EventFeedSlot.WBP_EventFeedSlot_C.Set Text Color");
	}

	UWBP_EventFeedSlot_C_Set_Text_Color_Params params;
	params.PlayerState = PlayerState;
	params.Text = Text;
	params.VTPlayerState = VTPlayerState;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WBP_EventFeedSlot.WBP_EventFeedSlot_C.Update View Target Player State
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AMAPlayerState*          VTPlayerState                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_EventFeedSlot_C::Update_View_Target_Player_State(class AMAPlayerState* VTPlayerState)
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function WBP_EventFeedSlot.WBP_EventFeedSlot_C.Update View Target Player State");
	}

	UWBP_EventFeedSlot_C_Update_View_Target_Player_State_Params params;
	params.VTPlayerState = VTPlayerState;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WBP_EventFeedSlot.WBP_EventFeedSlot_C.Get_DamageTypeIcon_Brush_1
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FSlateBrush             ReturnValue                    (Parm, OutParm, ReturnParm)
struct FSlateBrush UWBP_EventFeedSlot_C::Get_DamageTypeIcon_Brush_1()
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function WBP_EventFeedSlot.WBP_EventFeedSlot_C.Get_DamageTypeIcon_Brush_1");
	}

	UWBP_EventFeedSlot_C_Get_DamageTypeIcon_Brush_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function WBP_EventFeedSlot.WBP_EventFeedSlot_C.Set Text
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AMAPlayerState*          PlayerState                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTextBlock*              Text                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_EventFeedSlot_C::Set_Text(class AMAPlayerState* PlayerState, class UTextBlock* Text)
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function WBP_EventFeedSlot.WBP_EventFeedSlot_C.Set Text");
	}

	UWBP_EventFeedSlot_C_Set_Text_Params params;
	params.PlayerState = PlayerState;
	params.Text = Text;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WBP_EventFeedSlot.WBP_EventFeedSlot_C.Fill
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AMAPlayerState*          Killer                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AMAPlayerState*          Victim                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AMAPlayerState*          Assist                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMADamageType*           DamageType                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AMAPlayerState*          VTPlayerState                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          Rating                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_EventFeedSlot_C::Fill(class AMAPlayerState* Killer, class AMAPlayerState* Victim, class AMAPlayerState* Assist, class UMADamageType* DamageType, class AMAPlayerState* VTPlayerState, float Rating)
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function WBP_EventFeedSlot.WBP_EventFeedSlot_C.Fill");
	}

	UWBP_EventFeedSlot_C_Fill_Params params;
	params.Killer = Killer;
	params.Victim = Victim;
	params.Assist = Assist;
	params.DamageType = DamageType;
	params.VTPlayerState = VTPlayerState;
	params.Rating = Rating;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WBP_EventFeedSlot.WBP_EventFeedSlot_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UWBP_EventFeedSlot_C::Construct()
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function WBP_EventFeedSlot.WBP_EventFeedSlot_C.Construct");
	}

	UWBP_EventFeedSlot_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WBP_EventFeedSlot.WBP_EventFeedSlot_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// float                          InDeltaTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_EventFeedSlot_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function WBP_EventFeedSlot.WBP_EventFeedSlot_C.Tick");
	}

	UWBP_EventFeedSlot_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WBP_EventFeedSlot.WBP_EventFeedSlot_C.ExecuteUbergraph_WBP_EventFeedSlot
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_EventFeedSlot_C::ExecuteUbergraph_WBP_EventFeedSlot(int EntryPoint)
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function WBP_EventFeedSlot.WBP_EventFeedSlot_C.ExecuteUbergraph_WBP_EventFeedSlot");
	}

	UWBP_EventFeedSlot_C_ExecuteUbergraph_WBP_EventFeedSlot_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
