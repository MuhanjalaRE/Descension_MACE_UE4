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

// AnimBlueprintGeneratedClass ABP_GrenadeLauncher_New.ABP_GrenadeLauncher_New_C
// 0x0318 (FullSize[0x0580] - InheritedSize[0x0268])
class UABP_GrenadeLauncher_New_C : public UAnimInstance
{
public:
	unsigned char                                      UnknownData_SCG5[0x8];                                     // 0x0268(0x0008) Fix Super Size
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0270(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root_A396677E47A136CABF7865AAF55CE39E;       // 0x0278(0x0030)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_F1462CB7434FEB0432BF899DF4B4B9EA;       // 0x02A8(0x0048)
	struct FAnimNode_BlendListByInt                    AnimGraphNode_BlendListByInt_7586B4B24BAA06897790518E65AD1EDE; // 0x02F0(0x00A0)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_C1A4AF83447C39CEDC49759F279B04E2; // 0x0390(0x0078)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_32BC41734A59B5AA1952FE805DB175AC; // 0x0408(0x0078)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_F990387349010F1F8339AAB3EECC6000; // 0x0480(0x0078)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_A95192204ED019C4DEDA78B96CC47B9F; // 0x04F8(0x0078)
	int                                                Ammo;                                                      // 0x0570(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_1A4A[0x4];                                     // 0x0574(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class AMAWeapon*                                   Weapon;                                                    // 0x0578(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr){
			ptr = UObject::FindClass("AnimBlueprintGeneratedClass ABP_GrenadeLauncher_New.ABP_GrenadeLauncher_New_C");
		}
		return ptr;
	}



	void AnimGraph(struct FPoseLink* AnimGraph);
	void BlueprintUpdateAnimation(float DeltaTimeX);
	void ExecuteUbergraph_ABP_GrenadeLauncher_New(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
