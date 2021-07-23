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

// WidgetBlueprintGeneratedClass WBP_LoadoutThrowableConfiguration.WBP_LoadoutThrowableConfiguration_C
// 0x0071 (FullSize[0x02A9] - InheritedSize[0x0238])
class UWBP_LoadoutThrowableConfiguration_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0238(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UVerticalBox*                                WeaponSlots;                                               // 0x0240(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Loadouts_ItemSlot_C*                    LastSelectedButton;                                        // 0x0248(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FScriptMulticastDelegate                    UpdateThrowableInfo;                                       // 0x0250(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	int                                                Index_For;                                                 // 0x0260(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_7T8Y[0x4];                                     // 0x0264(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FScriptMulticastDelegate                    InvalidThrowableToast;                                     // 0x0268(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	struct FScriptMulticastDelegate                    DismissToast;                                              // 0x0278(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	struct FScriptMulticastDelegate                    ConfiguratorApplied;                                       // 0x0288(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	struct FScriptMulticastDelegate                    Jump_to_Throwable;                                         // 0x0298(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	bool                                               IsPracticeMode;                                            // 0x02A8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr){
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WBP_LoadoutThrowableConfiguration.WBP_LoadoutThrowableConfiguration_C");
		}
		return ptr;
	}



	void CheckThrowableSlot(class UWBP_Loadouts_ItemSlot_C* InputPin);
	void GetMostRelevantError(struct FText* Error_Text);
	void HackyGetAllThrowables(TArray<class UClass*>* Array);
	void CosmeticSelected(class UClass* Cosmetic);
	void Update_Throwables_List(int Throwable_Index);
	void OnNewButtonSelected(class UWBP_SelectableButton_C* Clicked_Button);
	void ThrowableSelected(class UWBP_SelectableButton_C* Clicked_Button);
	void Jump_To_Object(class UClass* Object_Info);
	void Confirm_Selection();
	void ExecuteUbergraph_WBP_LoadoutThrowableConfiguration(int EntryPoint);
	void Jump_to_Throwable__DelegateSignature(class UClass* Object_Info);
	void ConfiguratorApplied__DelegateSignature();
	void DismissToast__DelegateSignature();
	void InvalidThrowableToast__DelegateSignature(const struct FText& Error_Message);
	void UpdateThrowableInfo__DelegateSignature(class UClass* Object_Info_Class, const struct FText& Name_Suffix);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
