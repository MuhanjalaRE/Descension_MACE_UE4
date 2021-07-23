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

// Function IWBP_NewItemBadgeCarrier.IWBP_NewItemBadgeCarrier_C.DoesHaveNewItemBadge
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           HasNewItemBadge                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UIWBP_NewItemBadgeCarrier_C::DoesHaveNewItemBadge(bool* HasNewItemBadge)
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function IWBP_NewItemBadgeCarrier.IWBP_NewItemBadgeCarrier_C.DoesHaveNewItemBadge");
	}

	UIWBP_NewItemBadgeCarrier_C_DoesHaveNewItemBadge_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (HasNewItemBadge != nullptr)
		*HasNewItemBadge = params.HasNewItemBadge;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
