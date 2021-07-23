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

// AnimBlueprintGeneratedClass ABP_RingLauncher_New.ABP_RingLauncher_New_C
// 0x021C (FullSize[0x0484] - InheritedSize[0x0268])
class UABP_RingLauncher_New_C : public UAnimInstance
{
public:
	unsigned char                                      UnknownData_JKAT[0x8];                                     // 0x0268(0x0008) Fix Super Size
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0270(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root_4DE77ABE48C4018D52F1BAA3FF184EC7;       // 0x0278(0x0030)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_BEBA664D405647DBA2E0179CA04F1290;       // 0x02A8(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_6CB4EFE44E38D50345F821BF733E3DC3; // 0x02F0(0x0078)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_24F43D054337FA947C6E7A95F48C60FD; // 0x0368(0x0078)
	struct FAnimNode_BlendListByInt                    AnimGraphNode_BlendListByInt_01E9624344C1B399F85A1096F225EF71; // 0x03E0(0x00A0)
	int                                                Ammo;                                                      // 0x0480(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr){
			ptr = UObject::FindClass("AnimBlueprintGeneratedClass ABP_RingLauncher_New.ABP_RingLauncher_New_C");
		}
		return ptr;
	}



	void AnimGraph(struct FPoseLink* AnimGraph);
	void BlueprintUpdateAnimation(float DeltaTimeX);
	void ExecuteUbergraph_ABP_RingLauncher_New(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
