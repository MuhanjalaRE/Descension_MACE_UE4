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

// Function WBP_GameStatusBase.WBP_GameStatusBase_C.Get Visibility for Team ID
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// unsigned char                  TeamId                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// UMG_ESlateVisibility           Out_Visibility                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_GameStatusBase_C::Get_Visibility_for_Team_ID(unsigned char TeamId, UMG_ESlateVisibility* Out_Visibility)
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function WBP_GameStatusBase.WBP_GameStatusBase_C.Get Visibility for Team ID");
	}

	UWBP_GameStatusBase_C_Get_Visibility_for_Team_ID_Params params;
	params.TeamId = TeamId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Out_Visibility != nullptr)
		*Out_Visibility = params.Out_Visibility;

}


// Function WBP_GameStatusBase.WBP_GameStatusBase_C.Get View Target Team ID
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// unsigned char                  TeamId                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_GameStatusBase_C::Get_View_Target_Team_ID(unsigned char* TeamId)
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function WBP_GameStatusBase.WBP_GameStatusBase_C.Get View Target Team ID");
	}

	UWBP_GameStatusBase_C_Get_View_Target_Team_ID_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (TeamId != nullptr)
		*TeamId = params.TeamId;

}


// Function WBP_GameStatusBase.WBP_GameStatusBase_C.Get Time Remaining Text
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   Text                           (Parm, OutParm)
void UWBP_GameStatusBase_C::Get_Time_Remaining_Text(struct FText* Text)
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function WBP_GameStatusBase.WBP_GameStatusBase_C.Get Time Remaining Text");
	}

	UWBP_GameStatusBase_C_Get_Time_Remaining_Text_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Text != nullptr)
		*Text = params.Text;

}


// Function WBP_GameStatusBase.WBP_GameStatusBase_C.Get FScore as Text
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                          Score                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           Round                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FText                   Text                           (Parm, OutParm)
void UWBP_GameStatusBase_C::Get_FScore_as_Text(float Score, bool Round, struct FText* Text)
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function WBP_GameStatusBase.WBP_GameStatusBase_C.Get FScore as Text");
	}

	UWBP_GameStatusBase_C_Get_FScore_as_Text_Params params;
	params.Score = Score;
	params.Round = Round;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Text != nullptr)
		*Text = params.Text;

}


// Function WBP_GameStatusBase.WBP_GameStatusBase_C.Get Team B Score Text
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   Text                           (Parm, OutParm)
void UWBP_GameStatusBase_C::Get_Team_B_Score_Text(struct FText* Text)
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function WBP_GameStatusBase.WBP_GameStatusBase_C.Get Team B Score Text");
	}

	UWBP_GameStatusBase_C_Get_Team_B_Score_Text_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Text != nullptr)
		*Text = params.Text;

}


// Function WBP_GameStatusBase.WBP_GameStatusBase_C.Get Team A Score Text
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   Text                           (Parm, OutParm)
void UWBP_GameStatusBase_C::Get_Team_A_Score_Text(struct FText* Text)
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function WBP_GameStatusBase.WBP_GameStatusBase_C.Get Team A Score Text");
	}

	UWBP_GameStatusBase_C_Get_Team_A_Score_Text_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Text != nullptr)
		*Text = params.Text;

}


// Function WBP_GameStatusBase.WBP_GameStatusBase_C.Get Team B Score Pct
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                          Pct                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_GameStatusBase_C::Get_Team_B_Score_Pct(float* Pct)
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function WBP_GameStatusBase.WBP_GameStatusBase_C.Get Team B Score Pct");
	}

	UWBP_GameStatusBase_C_Get_Team_B_Score_Pct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Pct != nullptr)
		*Pct = params.Pct;

}


// Function WBP_GameStatusBase.WBP_GameStatusBase_C.Get Team A Score Pct
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                          Pct                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_GameStatusBase_C::Get_Team_A_Score_Pct(float* Pct)
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function WBP_GameStatusBase.WBP_GameStatusBase_C.Get Team A Score Pct");
	}

	UWBP_GameStatusBase_C_Get_Team_A_Score_Pct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Pct != nullptr)
		*Pct = params.Pct;

}


// Function WBP_GameStatusBase.WBP_GameStatusBase_C.Get Score by TeamID
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// unsigned char                  TeamId                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          Score                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_GameStatusBase_C::Get_Score_by_TeamID(unsigned char TeamId, float* Score)
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function WBP_GameStatusBase.WBP_GameStatusBase_C.Get Score by TeamID");
	}

	UWBP_GameStatusBase_C_Get_Score_by_TeamID_Params params;
	params.TeamId = TeamId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Score != nullptr)
		*Score = params.Score;

}


// Function WBP_GameStatusBase.WBP_GameStatusBase_C.Get Score Pct by TeamID
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// unsigned char                  TeamId                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
float UWBP_GameStatusBase_C::Get_Score_Pct_by_TeamID(unsigned char TeamId)
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function WBP_GameStatusBase.WBP_GameStatusBase_C.Get Score Pct by TeamID");
	}

	UWBP_GameStatusBase_C_Get_Score_Pct_by_TeamID_Params params;
	params.TeamId = TeamId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function WBP_GameStatusBase.WBP_GameStatusBase_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UWBP_GameStatusBase_C::Construct()
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function WBP_GameStatusBase.WBP_GameStatusBase_C.Construct");
	}

	UWBP_GameStatusBase_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WBP_GameStatusBase.WBP_GameStatusBase_C.CustomEvent_1
// (BlueprintCallable, BlueprintEvent)
void UWBP_GameStatusBase_C::CustomEvent_1()
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function WBP_GameStatusBase.WBP_GameStatusBase_C.CustomEvent_1");
	}

	UWBP_GameStatusBase_C_CustomEvent_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WBP_GameStatusBase.WBP_GameStatusBase_C.ExecuteUbergraph_WBP_GameStatusBase
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_GameStatusBase_C::ExecuteUbergraph_WBP_GameStatusBase(int EntryPoint)
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function WBP_GameStatusBase.WBP_GameStatusBase_C.ExecuteUbergraph_WBP_GameStatusBase");
	}

	UWBP_GameStatusBase_C_ExecuteUbergraph_WBP_GameStatusBase_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
