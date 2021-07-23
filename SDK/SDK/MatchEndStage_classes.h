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

// BlueprintGeneratedClass MatchEndStage.MatchEndStage_C
// 0x0111 (FullSize[0x0351] - InheritedSize[0x0240])
class AMatchEndStage_C : public AActor
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0240(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UCameraComponent*                            Camera1;                                                   // 0x0248(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                             DefaultSceneRoot;                                          // 0x0250(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_OJB7[0x8];                                     // 0x0258(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FTransform                                  Player1;                                                   // 0x0260(0x0030) (Edit, BlueprintVisible, IsPlainOldData, NoDestructor, ExposeOnSpawn)
	struct FTransform                                  Player2;                                                   // 0x0290(0x0030) (Edit, BlueprintVisible, IsPlainOldData, NoDestructor, ExposeOnSpawn)
	struct FTransform                                  Player3;                                                   // 0x02C0(0x0030) (Edit, BlueprintVisible, IsPlainOldData, NoDestructor, ExposeOnSpawn)
	struct FTransform                                  Player4;                                                   // 0x02F0(0x0030) (Edit, BlueprintVisible, IsPlainOldData, NoDestructor, ExposeOnSpawn)
	struct FTransform                                  Player5;                                                   // 0x0320(0x0030) (Edit, BlueprintVisible, IsPlainOldData, NoDestructor, ExposeOnSpawn)
	bool                                               Primed;                                                    // 0x0350(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr){
			ptr = UObject::FindClass("BlueprintGeneratedClass MatchEndStage.MatchEndStage_C");
		}
		return ptr;
	}



	void GetTop5Players();
	struct FRotator LookAtCamera(struct FVector* A);
	void SetUpPlayer(struct FTransform* A, const struct FString& PlayerName);
	void Showtime();
	void ReceiveBeginPlay();
	void ExecuteUbergraph_MatchEndStage(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
