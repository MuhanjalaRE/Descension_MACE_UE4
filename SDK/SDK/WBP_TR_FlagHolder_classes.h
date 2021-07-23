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

// WidgetBlueprintGeneratedClass WBP_TR_FlagHolder.WBP_TR_FlagHolder_C
// 0x0067 (FullSize[0x02B0] - InheritedSize[0x0249])
class UWBP_TR_FlagHolder_C : public UWBP_GameStatusBase_C
{
public:
	unsigned char                                      UnknownData_5J5W[0x7];                                     // 0x0249(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0250(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UImage*                                      FlagHolderIcon;                                            // 0x0258(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                      Image_286;                                                 // 0x0260(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                                  TextBlock_1;                                               // 0x0268(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                                  TextBlock_420;                                             // 0x0270(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                                  TextBlock_909;                                             // 0x0278(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UObject*                                     TRGameState;                                               // 0x0280(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FString                                     Holder;                                                    // 0x0288(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)
	struct FText                                       CurrentTime;                                               // 0x0298(0x0018) (Edit, BlueprintVisible, Net, DisableEditOnInstance)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr){
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WBP_TR_FlagHolder.WBP_TR_FlagHolder_C");
		}
		return ptr;
	}



	struct FText GetText_1();
	void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
	void ExecuteUbergraph_WBP_TR_FlagHolder(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
