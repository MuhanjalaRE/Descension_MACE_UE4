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

// BlueprintGeneratedClass BP_Railgun_Bolt.BP_Railgun_Bolt_C
// 0x0008 (FullSize[0x0828] - InheritedSize[0x0820])
class ABP_Railgun_Bolt_C : public AMABeamProjectile
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0820(0x0008) (ZeroConstructor, Transient, DuplicateTransient)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr){
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_Railgun_Bolt.BP_Railgun_Bolt_C");
		}
		return ptr;
	}



	void UserConstructionScript();
	void ReceiveBeginPlay();
	void ExecuteUbergraph_BP_Railgun_Bolt(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
