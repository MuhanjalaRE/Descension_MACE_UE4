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

// BlueprintGeneratedClass BP_Reload.BP_Reload_C
// 0x0008 (FullSize[0x01C0] - InheritedSize[0x01B8])
class UBP_Reload_C : public UAugment
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x01B8(0x0008) (ZeroConstructor, Transient, DuplicateTransient)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr){
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_Reload.BP_Reload_C");
		}
		return ptr;
	}



	void OnActiveChanged(class AMACharacter* ReceivingCharacter);
	void OnGivenTo();
	void OnRemoved();
	void ExecuteUbergraph_BP_Reload(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
