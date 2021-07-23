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

// AnimBlueprintGeneratedClass ABP_Chaingun_New.ABP_Chaingun_New_C
// 0x01D4 (FullSize[0x043C] - InheritedSize[0x0268])
class UABP_Chaingun_New_C : public UAnimInstance
{
public:
	unsigned char                                      UnknownData_4G3I[0x8];                                     // 0x0268(0x0008) Fix Super Size
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0270(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root_B0F7C7374B71B7C1ABCED0980CDB7097;       // 0x0278(0x0030)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_4822BDC34FBB8F49D2087C833E63144A;       // 0x02A8(0x0048)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_7BDCEE37452BA7E7FE24D8854DF3B788; // 0x02F0(0x0108)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace_AEBB5C664920DF5DC5E4419BCCF63943; // 0x03F8(0x0020)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_BF47292643B949BCC4061A9F4026B861; // 0x0418(0x0020)
	float                                              BarrelRot;                                                 // 0x0438(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr){
			ptr = UObject::FindClass("AnimBlueprintGeneratedClass ABP_Chaingun_New.ABP_Chaingun_New_C");
		}
		return ptr;
	}



	void AnimGraph(struct FPoseLink* AnimGraph);
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Chaingun_New_AnimGraphNode_ModifyBone_7BDCEE37452BA7E7FE24D8854DF3B788();
	void BlueprintUpdateAnimation(float DeltaTimeX);
	void BlueprintInitializeAnimation();
	void ExecuteUbergraph_ABP_Chaingun_New(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
