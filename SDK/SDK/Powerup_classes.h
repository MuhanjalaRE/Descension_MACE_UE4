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

// BlueprintGeneratedClass Powerup.Powerup_C
// 0x0008 (FullSize[0x02D0] - InheritedSize[0x02C8])
class APowerup_C : public AMAPowerup
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x02C8(0x0008) (ZeroConstructor, Transient, DuplicateTransient)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr){
			ptr = UObject::FindClass("BlueprintGeneratedClass Powerup.Powerup_C");
		}
		return ptr;
	}



	void ReceiveActorBeginOverlap(class AActor* OtherActor);
	void ExecuteUbergraph_Powerup(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
