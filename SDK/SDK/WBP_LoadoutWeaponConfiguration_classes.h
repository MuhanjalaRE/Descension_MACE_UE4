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

// WidgetBlueprintGeneratedClass WBP_LoadoutWeaponConfiguration.WBP_LoadoutWeaponConfiguration_C
// 0x00A8 (FullSize[0x02E0] - InheritedSize[0x0238])
class UWBP_LoadoutWeaponConfiguration_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0238(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UNamedSlot*                                  AppearanceMenu;                                            // 0x0240(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                                WeaponSlots;                                               // 0x0248(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Loadouts_ItemSlot_C*                    LastSelectedButton;                                        // 0x0250(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FScriptMulticastDelegate                    UpdateWeaponInfo;                                          // 0x0258(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	int                                                Active_Index;                                              // 0x0268(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_9NQV[0x4];                                     // 0x026C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FScriptMulticastDelegate                    InvalidWeaponToast;                                        // 0x0270(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	struct FScriptMulticastDelegate                    DismissToast;                                              // 0x0280(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	struct FScriptMulticastDelegate                    ConfiguratorApplied;                                       // 0x0290(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	struct FScriptMulticastDelegate                    Jump_To_Object;                                            // 0x02A0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	bool                                               IsPracticeMode;                                            // 0x02B0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_28A3[0x7];                                     // 0x02B1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<class UClass*>                              AllWeaponsList;                                            // 0x02B8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	int                                                Current_Weapon_Index;                                      // 0x02C8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_E6P8[0x4];                                     // 0x02CC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<class UClass*>                              TournamentWeaponsList;                                     // 0x02D0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr){
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WBP_LoadoutWeaponConfiguration.WBP_LoadoutWeaponConfiguration_C");
		}
		return ptr;
	}



	void AddNoneWeapon();
	void CheckWeaponSlot(class UWBP_Loadouts_ItemSlot_C* InputPin);
	void GetMostRelevantError(struct FText* Error_Text);
	void HackyGetAllWeapons(TArray<class UClass*>* Array);
	void Weapon_Selected(class UWBP_SelectableButton_C* Clicked_Button);
	void OnNewButtonSelected(class UWBP_SelectableButton_C* Clicked_Button);
	void Update_Weapon_List(int Weapon_Index);
	void Jump_to_Weapon(class UClass* Object_Info);
	void Confirm_Selection();
	void CosmeticSelected(class UClass* Cosmetic);
	void ExecuteUbergraph_WBP_LoadoutWeaponConfiguration(int EntryPoint);
	void Jump_to_Object__DelegateSignature(class UClass* Object_Info);
	void ConfiguratorApplied__DelegateSignature();
	void DismissToast__DelegateSignature();
	void InvalidWeaponToast__DelegateSignature(const struct FText& Error_Message);
	void UpdateWeaponInfo__DelegateSignature(class UClass* Object_Info_Class, class UClass* Skin_Configuration, const struct FText& Name_Suffix);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
