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

// Function WBP_PlayerList.WBP_PlayerList_C.OnMouseButtonDown_1
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// struct FPointerEvent           MouseEvent                     (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)
struct FEventReply UWBP_PlayerList_C::OnMouseButtonDown_1(const struct FGeometry& MyGeometry, struct FPointerEvent* MouseEvent)
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function WBP_PlayerList.WBP_PlayerList_C.OnMouseButtonDown_1");
	}

	UWBP_PlayerList_C_OnMouseButtonDown_1_Params params;
	params.MyGeometry = MyGeometry;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (MouseEvent != nullptr)
		*MouseEvent = params.MouseEvent;


	return params.ReturnValue;
}


// Function WBP_PlayerList.WBP_PlayerList_C.UpdateStats
// (Public, BlueprintCallable, BlueprintEvent)
void UWBP_PlayerList_C::UpdateStats()
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function WBP_PlayerList.WBP_PlayerList_C.UpdateStats");
	}

	UWBP_PlayerList_C_UpdateStats_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WBP_PlayerList.WBP_PlayerList_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UWBP_PlayerList_C::Construct()
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function WBP_PlayerList.WBP_PlayerList_C.Construct");
	}

	UWBP_PlayerList_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WBP_PlayerList.WBP_PlayerList_C.Refresh Player List
// (BlueprintCallable, BlueprintEvent)
void UWBP_PlayerList_C::Refresh_Player_List()
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function WBP_PlayerList.WBP_PlayerList_C.Refresh Player List");
	}

	UWBP_PlayerList_C_Refresh_Player_List_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WBP_PlayerList.WBP_PlayerList_C.ExecuteUbergraph_WBP_PlayerList
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_PlayerList_C::ExecuteUbergraph_WBP_PlayerList(int EntryPoint)
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function WBP_PlayerList.WBP_PlayerList_C.ExecuteUbergraph_WBP_PlayerList");
	}

	UWBP_PlayerList_C_ExecuteUbergraph_WBP_PlayerList_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WBP_PlayerList.WBP_PlayerList_C.On Player Selected__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APlayerState*            Player                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_PlayerList_C::On_Player_Selected__DelegateSignature(class APlayerState* Player)
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function WBP_PlayerList.WBP_PlayerList_C.On Player Selected__DelegateSignature");
	}

	UWBP_PlayerList_C_On_Player_Selected__DelegateSignature_Params params;
	params.Player = Player;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
