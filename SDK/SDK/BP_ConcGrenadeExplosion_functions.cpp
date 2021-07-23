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

// Function BP_ConcGrenadeExplosion.BP_ConcGrenadeExplosion_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
void ABP_ConcGrenadeExplosion_C::UserConstructionScript()
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function BP_ConcGrenadeExplosion.BP_ConcGrenadeExplosion_C.UserConstructionScript");
	}

	ABP_ConcGrenadeExplosion_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
