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

// BlueprintGeneratedClass BP_BaseCharacter.BP_BaseCharacter_C
// 0x00B8 (FullSize[0x0BA8] - InheritedSize[0x0AF0])
class ABP_BaseCharacter_C : public AMACharacter
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0AF0(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UPostProcessComponent*                       WarmupEffect;                                              // 0x0AF8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UPostProcessComponent*                       BinocularEffect;                                           // 0x0B00(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UPostProcessComponent*                       LowHPVignette;                                             // 0x0B08(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UParticleSystemComponent*                    SkateDust;                                                 // 0x0B10(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                              Timeline_0_NewTrack_0_DEE7E639493481EDDD9FD48A3CFE063D;    // 0x0B18(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<Engine_ETimelineDirection>             Timeline_0__Direction_DEE7E639493481EDDD9FD48A3CFE063D;    // 0x0B1C(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_2LA1[0x3];                                     // 0x0B1D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UTimelineComponent*                          Timeline_1;                                                // 0x0B20(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AMAWeapon*                                   FirstWeapon;                                               // 0x0B28(0x0008) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AMAWeapon*                                   SecondWeapon;                                              // 0x0B30(0x0008) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AMAWeapon*                                   ThirdWeapon;                                               // 0x0B38(0x0008) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              SpawnRate;                                                 // 0x0B40(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_YDG8[0x4];                                     // 0x0B44(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UObject*                                     VehiclePallete;                                            // 0x0B48(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              Starting_Friction;                                         // 0x0B50(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               bWasSkating;                                               // 0x0B54(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_OR0I[0x3];                                     // 0x0B55(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              Friction_return_rate;                                      // 0x0B58(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              Friction_power;                                            // 0x0B5C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              Min_Frictionless_Speed;                                    // 0x0B60(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_S1RJ[0xC];                                     // 0x0B64(0x000C) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FTransform                                  SpeedLinesRelativeTransform;                               // 0x0B70(0x0030) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	class UVOIPTalker*                                 Voip;                                                      // 0x0BA0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr){
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_BaseCharacter.BP_BaseCharacter_C");
		}
		return ptr;
	}



	void Zoomed(bool isZoomed);
	void GetWeaponByIndex(int WeaponIndex, class AMAWeapon** Weapon);
	void UserConstructionScript();
	void Timeline_0__FinishedFunc();
	void Timeline_0__UpdateFunc();
	void BP_PlayTakeHitEffects();
	void ReceiveTick(float DeltaSeconds);
	void BP_OnRep_PlayerState();
	void K2_OnMovementModeChanged(TEnumAsByte<Engine_EMovementMode> PrevMovementMode, TEnumAsByte<Engine_EMovementMode> NewMovementMode, unsigned char PrevCustomMode, unsigned char NewCustomMode);
	void ExecuteUbergraph_BP_BaseCharacter(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
