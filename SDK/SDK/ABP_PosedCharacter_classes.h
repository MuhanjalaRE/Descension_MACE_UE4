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

// AnimBlueprintGeneratedClass ABP_PosedCharacter.ABP_PosedCharacter_C
// 0x0608 (FullSize[0x0870] - InheritedSize[0x0268])
class UABP_PosedCharacter_C : public UAnimInstance
{
public:
	unsigned char                                      UnknownData_6SHJ[0x8];                                     // 0x0268(0x0008) Fix Super Size
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0270(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root_30F0259442C5DA5E39DB1DA4E1E83AE3;       // 0x0278(0x0030)
	unsigned char                                      UnknownData_76N7[0x8];                                     // 0x02A8(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FAnimNode_LookAt                            AnimGraphNode_LookAt_C2DDADEB4A80DC79706BA1913D6D1791;     // 0x02B0(0x0270)
	struct FAnimNode_LookAt                            AnimGraphNode_LookAt_0EB6EF9D4BE18B760ADD22BC50C04E60;     // 0x0520(0x0270)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace_6F0A49E84AD99A894C185CBD905910B0; // 0x0790(0x0020)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_FC5B0601484B00E5860AC19026654926; // 0x07B0(0x0020)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_11E3B2CB411CFE036AE0ECA7530926DC; // 0x07D0(0x0078)
	struct FVector                                     LookAt;                                                    // 0x0848(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                Pose;                                                      // 0x0854(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                     LookAtInWorld;                                             // 0x0858(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_C1HK[0x4];                                     // 0x0864(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UAnimSequence*                               Pose_Sequence;                                             // 0x0868(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr){
			ptr = UObject::FindClass("AnimBlueprintGeneratedClass ABP_PosedCharacter.ABP_PosedCharacter_C");
		}
		return ptr;
	}



	void AnimGraph(struct FPoseLink* AnimGraph);
	void BlueprintUpdateAnimation(float DeltaTimeX);
	void ExecuteUbergraph_ABP_PosedCharacter(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
