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

// BlueprintGeneratedClass BP_Boost_Art.BP_Boost_Art_C
// 0x0008 (FullSize[0x00D8] - InheritedSize[0x00D0])
class UBP_Boost_Art_C : public UAugment_Art
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x00D0(0x0008) (ZeroConstructor, Transient, DuplicateTransient)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr){
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_Boost_Art.BP_Boost_Art_C");
		}
		return ptr;
	}



	void SetActive_Visuals(bool bActive);
	void ExecuteUbergraph_BP_Boost_Art(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
