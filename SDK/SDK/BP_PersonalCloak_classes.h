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

// BlueprintGeneratedClass BP_PersonalCloak.BP_PersonalCloak_C
// 0x0010 (FullSize[0x01C8] - InheritedSize[0x01B8])
class UBP_PersonalCloak_C : public UAugment
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x01B8(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	struct FSensorTargetModifiers                      Jamming_Properties;                                        // 0x01C0(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr){
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_PersonalCloak.BP_PersonalCloak_C");
		}
		return ptr;
	}



	void OnEnergyDepleted();
	void OnActiveChanged(class AMACharacter* ReceivingCharacter);
	void ExecuteUbergraph_BP_PersonalCloak(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
