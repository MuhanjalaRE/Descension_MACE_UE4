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

// Function AnimNotify_ViewTargetSpecializedSound.AnimNotify_ViewTargetSpecializedSound_C.GetNotifyName
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash)
struct FString UAnimNotify_ViewTargetSpecializedSound_C::GetNotifyName()
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function AnimNotify_ViewTargetSpecializedSound.AnimNotify_ViewTargetSpecializedSound_C.GetNotifyName");
	}

	UAnimNotify_ViewTargetSpecializedSound_C_GetNotifyName_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function AnimNotify_ViewTargetSpecializedSound.AnimNotify_ViewTargetSpecializedSound_C.Received_Notify
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class USkeletalMeshComponent*  MeshComp                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAnimSequenceBase*       Animation                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
bool UAnimNotify_ViewTargetSpecializedSound_C::Received_Notify(class USkeletalMeshComponent* MeshComp, class UAnimSequenceBase* Animation)
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function AnimNotify_ViewTargetSpecializedSound.AnimNotify_ViewTargetSpecializedSound_C.Received_Notify");
	}

	UAnimNotify_ViewTargetSpecializedSound_C_Received_Notify_Params params;
	params.MeshComp = MeshComp;
	params.Animation = Animation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
