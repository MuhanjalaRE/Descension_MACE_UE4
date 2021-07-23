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

// WidgetBlueprintGeneratedClass WBP_ControlSettings.WBP_ControlSettings_C
// 0x0098 (FullSize[0x02D0] - InheritedSize[0x0238])
class UWBP_ControlSettings_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0238(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UCheckBox*                                   AircraftInvertMouse;                                       // 0x0240(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCheckBox*                                   InvertMouse;                                               // 0x0248(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                                MainVertBox;                                               // 0x0250(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USpinBox*                                    RegularMouseSensitivity;                                   // 0x0258(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USpinBox*                                    SpectatorMouseSensitivity;                                 // 0x0260(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCheckBox*                                   ToggleSkate;                                               // 0x0268(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	bool                                               InvertYCache;                                              // 0x0270(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               AnyDefaultLoaded;                                          // 0x0271(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_Q7DK[0x6];                                     // 0x0272(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<struct FInputAxisKeyMapping>                AxisKeyMappings;                                           // 0x0278(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<struct FInputActionKeyMapping>              ActionKeyMappings;                                         // 0x0288(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	int                                                DebugNumLoadedBindBoxes;                                   // 0x0298(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_XZET[0x4];                                     // 0x029C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<class UWBP_InputCategory_C*>                ExistingCategoryWidgets;                                   // 0x02A0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, ContainsInstancedReference)
	class UMAInputSettings*                            CachedInputSettings;                                       // 0x02B0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                                  SpinboxSound;                                              // 0x02B8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               bHasExistedForSomeTime;                                    // 0x02C0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_X09S[0x7];                                     // 0x02C1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class USoundBase*                                  CheckboxSound;                                             // 0x02C8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr){
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WBP_ControlSettings.WBP_ControlSettings_C");
		}
		return ptr;
	}



	void Find_Category_Widget_by_Name(const struct FName& Name, class UWBP_InputCategory_C** Widget);
	void Reset();
	void Save();
	void Load();
	void Construct();
	void OnAttemptResolve(MidairCE_EMappingConflictResolution Resolution);
	void BndEvt__SpectatorMouseSensitivity_K2Node_ComponentBoundEvent_110_OnSpinBoxValueChangedEvent__DelegateSignature(float InValue);
	void BndEvt__SpectatorMouseSensitivity_K2Node_ComponentBoundEvent_125_OnSpinBoxValueCommittedEvent__DelegateSignature(float InValue, TEnumAsByte<SlateCore_ETextCommit> CommitMethod);
	void BndEvt__CheckBox_0_K2Node_ComponentBoundEvent_188_OnCheckBoxComponentStateChanged__DelegateSignature(bool bIsChecked);
	void BndEvt__RegularMouseSensitivity_K2Node_ComponentBoundEvent_58_OnSpinBoxValueChangedEvent__DelegateSignature(float InValue);
	void BndEvt__RegularMouseSensitivity_K2Node_ComponentBoundEvent_76_OnSpinBoxValueCommittedEvent__DelegateSignature(float InValue, TEnumAsByte<SlateCore_ETextCommit> CommitMethod);
	void BndEvt__CheckBox_0_K2Node_ComponentBoundEvent_84_OnCheckBoxComponentStateChanged__DelegateSignature(bool bIsChecked);
	void BindingChanged(const struct FName& CategoryName, const struct FMidairInputMapping& NewMapping);
	void OnBindsConflict_Event_1(TArray<struct FName> ConflictingBindNames, const struct FInputActionKeyMapping& Key);
	void BndEvt__ToggleSkate_K2Node_ComponentBoundEvent_0_OnCheckBoxComponentStateChanged__DelegateSignature(bool bIsChecked);
	void ExecuteUbergraph_WBP_ControlSettings(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
