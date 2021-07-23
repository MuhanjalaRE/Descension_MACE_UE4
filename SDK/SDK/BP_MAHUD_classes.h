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

// BlueprintGeneratedClass BP_MAHUD.BP_MAHUD_C
// 0x0010 (FullSize[0x05A0] - InheritedSize[0x0590])
class ABP_MAHUD_C : public AMAHUD
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0590(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class USceneComponent*                             DefaultSceneRoot;                                          // 0x0598(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr){
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_MAHUD.BP_MAHUD_C");
		}
		return ptr;
	}



	bool ProcessPlayerExpressionInput(const struct FKey& Key, bool IsAbortKey);
	void ReceiveBeginPlay();
	void StartQuickVoice();
	void BP_OnScoreApplied(const struct FText& ScoreText, float Value);
	void ExecuteUbergraph_BP_MAHUD(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
