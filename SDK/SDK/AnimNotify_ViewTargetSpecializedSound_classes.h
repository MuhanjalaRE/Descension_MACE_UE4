#pragma once

// Name: mace, Version: 1.9.1.12285


/*!!DEFINE!!*/

/*!!HELPER_DEF!!*/

/*!!HELPER_INC!!*/

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
//---------------------------------------------------------------------------
// Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass AnimNotify_ViewTargetSpecializedSound.AnimNotify_ViewTargetSpecializedSound_C
// 0x002D (FullSize[0x0065] - InheritedSize[0x0038])
class UAnimNotify_ViewTargetSpecializedSound_C : public UAnimNotify
{
public:
	class USoundBase*                                  ViewTargetSound;                                           // 0x0038(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	class AMACharacter*                                MACharacter;                                               // 0x0040(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                                  NonViewTargetSound;                                        // 0x0048(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FName                                       AttachName;                                                // 0x0050(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               bFollow;                                                   // 0x0058(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_CQIC[0x3];                                     // 0x0059(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              PitchMultiplier;                                           // 0x005C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              VolumeMultiplier;                                          // 0x0060(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               bDisableFirstPerson;                                       // 0x0064(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr){
			ptr = UObject::FindClass("BlueprintGeneratedClass AnimNotify_ViewTargetSpecializedSound.AnimNotify_ViewTargetSpecializedSound_C");
		}
		return ptr;
	}



	struct FString GetNotifyName();
	bool Received_Notify(class USkeletalMeshComponent* MeshComp, class UAnimSequenceBase* Animation);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
