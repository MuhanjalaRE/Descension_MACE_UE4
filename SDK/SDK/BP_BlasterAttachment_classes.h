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

// BlueprintGeneratedClass BP_BlasterAttachment.BP_BlasterAttachment_C
// 0x0008 (FullSize[0x05D8] - InheritedSize[0x05D0])
class ABP_BlasterAttachment_C : public AMAWeaponAttachment
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x05D0(0x0008) (ZeroConstructor, Transient, DuplicateTransient)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr){
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_BlasterAttachment.BP_BlasterAttachment_C");
		}
		return ptr;
	}



	void ReceiveBeginPlay();
	void ReceiveTick(float DeltaSeconds);
	void ExecuteUbergraph_BP_BlasterAttachment(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
