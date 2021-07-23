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

// WidgetBlueprintGeneratedClass WBP_LoadoutPackConfiguration.WBP_LoadoutPackConfiguration_C
// 0x0060 (FullSize[0x0298] - InheritedSize[0x0238])
class UWBP_LoadoutPackConfiguration_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0238(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UVerticalBox*                                PackSlots;                                                 // 0x0240(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UClass*                                      Current_Pack;                                              // 0x0248(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWBP_LoadoutsPackSlot_C*                     LastSelectedPackButton;                                    // 0x0250(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FScriptMulticastDelegate                    JumpToObject;                                              // 0x0258(0x0010) (Edit, BlueprintVisible, ZeroConstructor, BlueprintAssignable, BlueprintCallable)
	struct FScriptMulticastDelegate                    UpdatePack;                                                // 0x0268(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	struct FScriptMulticastDelegate                    DismissToast;                                              // 0x0278(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	struct FScriptMulticastDelegate                    PackEquipped;                                              // 0x0288(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr){
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WBP_LoadoutPackConfiguration.WBP_LoadoutPackConfiguration_C");
		}
		return ptr;
	}



	void Hacky_Get_Packs(TArray<class UClass*>* Array);
	void CosmeticSelected(class UClass* Cosmetic);
	void Update();
	void Pack_Clicked(class UWBP_SelectableButton_C* Clicked_Button);
	void Jump_To_Object(class UClass* Object_Info);
	void Confirm_Selection();
	void ExecuteUbergraph_WBP_LoadoutPackConfiguration(int EntryPoint);
	void PackEquipped__DelegateSignature();
	void DismissToast__DelegateSignature();
	void UpdatePack__DelegateSignature(class UClass* New_Pack, const struct FText& Suffix);
	void JumpToObject__DelegateSignature(class UClass* NewParam);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
