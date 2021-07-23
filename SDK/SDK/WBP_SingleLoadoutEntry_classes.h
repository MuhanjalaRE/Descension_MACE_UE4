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

// WidgetBlueprintGeneratedClass WBP_SingleLoadoutEntry.WBP_SingleLoadoutEntry_C
// 0x0160 (FullSize[0x0518] - InheritedSize[0x03B8])
class UWBP_SingleLoadoutEntry_C : public UWBP_SelectableButton_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x03B8(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UBorder*                                     Border_1;                                                  // 0x03C0(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                      Image_1;                                                   // 0x03C8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                                  LoadoutName;                                               // 0x03D0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                                     Select;                                                    // 0x03D8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                                  TextBlock_1;                                               // 0x03E0(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                                  TextBlock_6;                                               // 0x03E8(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_BindingIcon_C*                          WBP_BindingIcon;                                           // 0x03F0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	bool                                               bCanEdit;                                                  // 0x03F8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)
	unsigned char                                      UnknownData_9SSW[0x3];                                     // 0x03F9(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                MaxCharacters;                                             // 0x03FC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FScriptMulticastDelegate                    SelectLoadout;                                             // 0x0400(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	struct FScriptMulticastDelegate                    StartEditLoadout;                                          // 0x0410(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	struct FScriptMulticastDelegate                    RemoveLoadout;                                             // 0x0420(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	struct FMALoadout                                  Loadout;                                                   // 0x0430(0x00A0) (Edit, BlueprintVisible, ExposeOnSpawn)
	struct FLinearColor                                SelectedColor;                                             // 0x04D0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                                NormalColor;                                               // 0x04E0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               Selected_1;                                                // 0x04F0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_NISU[0x3];                                     // 0x04F1(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                Index;                                                     // 0x04F4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	bool                                               bDisplayTag;                                               // 0x04F8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)
	unsigned char                                      UnknownData_QDDH[0x3];                                     // 0x04F9(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FLinearColor                                GensDown_SpawnPenaltyColor;                                // 0x04FC(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               IsPracticeMode;                                            // 0x050C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_L5B9[0x3];                                     // 0x050D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class AGameModeBase*                               StoredGameMode;                                            // 0x0510(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr){
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WBP_SingleLoadoutEntry.WBP_SingleLoadoutEntry_C");
		}
		return ptr;
	}



	class UWidget* GetToolTipWidget_1();
	UMG_ESlateVisibility GetVisibility_1();
	struct FSlateColor GetLoadoutPenaltyColor();
	struct FText GetSpawnPenalty();
	UMG_ESlateVisibility GetArmorTextVisibility();
	struct FText GetArmorText();
	struct FSlateColor GetTextColor();
	struct FLinearColor GetBrushColor_1();
	struct FText Get_LoadoutName_Text_1();
	void Construct();
	void BndEvt__Select_K2Node_ComponentBoundEvent_212_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__Select_K2Node_ComponentBoundEvent_126_OnButtonPressedEvent__DelegateSignature();
	void BndEvt__Select_K2Node_ComponentBoundEvent_139_OnButtonReleasedEvent__DelegateSignature();
	void OnSelected();
	void BndEvt__Select_K2Node_ComponentBoundEvent_130_OnButtonHoverEvent__DelegateSignature();
	void ExecuteUbergraph_WBP_SingleLoadoutEntry(int EntryPoint);
	void RemoveLoadout__DelegateSignature(class UWBP_SingleLoadoutEntry_C* Loadout);
	void StartEditLoadout__DelegateSignature(class UWBP_SingleLoadoutEntry_C* Loadout);
	void SelectLoadout__DelegateSignature(class UWBP_SingleLoadoutEntry_C* Loadout);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
