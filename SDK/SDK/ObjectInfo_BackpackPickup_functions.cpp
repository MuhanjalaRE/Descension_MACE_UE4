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

// Function ObjectInfo_BackpackPickup.ObjectInfo_BackpackPickup_C.GetActionText
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class AActor*                  Actor                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)
struct FText UObjectInfo_BackpackPickup_C::GetActionText(class AActor* Actor)
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function ObjectInfo_BackpackPickup.ObjectInfo_BackpackPickup_C.GetActionText");
	}

	UObjectInfo_BackpackPickup_C_GetActionText_Params params;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
