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

// WidgetBlueprintGeneratedClass WBP_SelectableButton.WBP_SelectableButton_C
// 0x0180 (FullSize[0x03B8] - InheritedSize[0x0238])
class UWBP_SelectableButton_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0238(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	bool                                               Active;                                                    // 0x0240(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               Selected;                                                  // 0x0241(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               Pressed;                                                   // 0x0242(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_ZK6K[0x1];                                     // 0x0243(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FLinearColor                                HoverForeground;                                           // 0x0244(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                                SelectedForeground;                                        // 0x0254(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                                HoverBackground;                                           // 0x0264(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                                SelectedBackground;                                        // 0x0274(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                                NormalBackground;                                          // 0x0284(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                                NormalForeground;                                          // 0x0294(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_KCGA[0x4];                                     // 0x02A4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FScriptMulticastDelegate                    ButtonSelected;                                            // 0x02A8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	struct FScriptMulticastDelegate                    ButtonClicked;                                             // 0x02B8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	struct FText                                       Error;                                                     // 0x02C8(0x0018) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FLinearColor                                ActiveBackground;                                          // 0x02E0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                                ActiveForeground;                                          // 0x02F0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               ForceHover;                                                // 0x0300(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_7RH9[0x7];                                     // 0x0301(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FScriptMulticastDelegate                    ButtonHovered;                                             // 0x0308(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	struct FLinearColor                                DisabledForeground;                                        // 0x0318(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                                DisabledBackground;                                        // 0x0328(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               WaitingToConfirmSelected;                                  // 0x0338(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               NeedsToConfirmSelection;                                   // 0x0339(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)
	unsigned char                                      UnknownData_25E1[0x6];                                     // 0x033A(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UClass*                                      UnlockRequirement;                                         // 0x0340(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObjectInfo*                                 UnlockRequirementDefault;                                  // 0x0348(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                                Locked_Foreground;                                         // 0x0350(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                                Locked_Background;                                         // 0x0360(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<TScriptInterface<class UIWBP_NewItemBadgeCarrier_C>> SubmenusForNotificationStack;                              // 0x0370(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	class USoundBase*                                  Pressed_Sound;                                             // 0x0380(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                                  Hovered_Sound;                                             // 0x0388(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                                  Cached_Pressed_Sound;                                      // 0x0390(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash)
	class USoundBase*                                  Cached_Hovered_Sound;                                      // 0x0398(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash)
	bool                                               bHasExistedForSomeTime;                                    // 0x03A0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_GPE2[0x7];                                     // 0x03A1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FScriptMulticastDelegate                    ButtonUnselected;                                          // 0x03A8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr){
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WBP_SelectableButton.WBP_SelectableButton_C");
		}
		return ptr;
	}



	void DoesHaveNewItemBadge(bool* HasNewItemBadge);
	void Do_Rollover_Sound();
	void Do_Press_Sound();
	void Override_Sounds(class USoundBase* __New_Pressed_Sound, class USoundBase* __New_Hovered_Sound);
	void Override_Hovered_Sound(class USoundBase* New_Hovered_Sound);
	void Override_Pressed_Sound(class USoundBase* New_Pressed_Sound);
	void Reset_Hovered_Sound();
	void Reset_Pressed_Sound();
	void Reset_Sounds();
	class UWidget* MakeLockedTooltipWidget();
	void GetRequirementsToUnlock(TArray<struct FText>* Errors);
	void GetIsLocked(bool* Locked);
	void UpdateSelected();
	void Set_Error(const struct FText& Error);
	bool Invalid();
	void SetActive(bool bNewActive);
	void SetSelected(bool Selected);
	void GetBackgroundColor(struct FLinearColor* Color);
	void GetForegroundColor(struct FLinearColor* Color);
	void OnSelected();
	void OnActive();
	void OnPressed();
	void OnUpdateDisabled();
	void PreConstruct(bool IsDesignTime);
	void Construct();
	void OnUnselected();
	void ExecuteUbergraph_WBP_SelectableButton(int EntryPoint);
	void ButtonUnselected__DelegateSignature(class UWBP_SelectableButton_C* Selected_Button);
	void ButtonHovered__DelegateSignature(class UWBP_SelectableButton_C* Selected_Button);
	void ButtonClicked__DelegateSignature(class UWBP_SelectableButton_C* Clicked_Button);
	void ButtonSelected__DelegateSignature(class UWBP_SelectableButton_C* Selected_Button);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
