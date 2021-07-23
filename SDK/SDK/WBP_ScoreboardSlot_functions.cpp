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

// Function WBP_ScoreboardSlot.WBP_ScoreboardSlot_C.Update Info (New)
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UTexture2D*              Icon                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int                            Rank                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AMAPlayerState*          Player                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_ScoreboardSlot_C::Update_Info__New_(class UTexture2D* Icon, int Rank, class AMAPlayerState* Player)
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function WBP_ScoreboardSlot.WBP_ScoreboardSlot_C.Update Info (New)");
	}

	UWBP_ScoreboardSlot_C_Update_Info__New__Params params;
	params.Icon = Icon;
	params.Rank = Rank;
	params.Player = Player;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
