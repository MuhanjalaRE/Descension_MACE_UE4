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

// BlueprintGeneratedClass BP_ChaingunAttachment.BP_ChaingunAttachment_C
// 0x0010 (FullSize[0x05E0] - InheritedSize[0x05D0])
class ABP_ChaingunAttachment_C : public AMAWeaponAttachment
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x05D0(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UMaterialInstanceDynamic*                    DynamicMat;                                                // 0x05D8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr){
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_ChaingunAttachment.BP_ChaingunAttachment_C");
		}
		return ptr;
	}



	void ReceiveBeginPlay();
	void ReceiveTick(float DeltaSeconds);
	void ExecuteUbergraph_BP_ChaingunAttachment(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
