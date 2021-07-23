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

// WidgetBlueprintGeneratedClass WBP_BindKey.WBP_BindKey_C
// 0x0139 (FullSize[0x0371] - InheritedSize[0x0238])
class UWBP_BindKey_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0238(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UBorder*                                     Border_1;                                                  // 0x0240(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                                     ResetButton;                                               // 0x0248(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                                  TextBlock_76;                                              // 0x0250(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FName                                       BindName;                                                  // 0x0258(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	struct FInputActionKeyMapping                      BoundKey;                                                  // 0x0260(0x0028) (Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                               WaitingForInput;                                           // 0x0288(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               Loaded;                                                    // 0x0289(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_EULR[0x2];                                     // 0x028A(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              Axis_Scale;                                                // 0x028C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FKey                                        DefaultKey;                                                // 0x0290(0x0018) (Edit, BlueprintVisible, HasGetValueTypeHash)
	struct FKey                                        Scroll_Up;                                                 // 0x02A8(0x0018) (Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	struct FKey                                        Scroll_Down;                                               // 0x02C0(0x0018) (Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	struct FKey                                        None_Key;                                                  // 0x02D8(0x0018) (Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	bool                                               Is_Axis_Key_Mapping;                                       // 0x02F0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)
	bool                                               ShiftHeld;                                                 // 0x02F1(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               CtrlHeld;                                                  // 0x02F2(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               AltHeld;                                                   // 0x02F3(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_8KN3[0x4];                                     // 0x02F4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FScriptMulticastDelegate                    TryClearKey;                                               // 0x02F8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	struct FScriptMulticastDelegate                    TryBindKey;                                                // 0x0308(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	struct FScriptMulticastDelegate                    TryResetKey;                                               // 0x0318(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	bool                                               bIsDefault;                                                // 0x0328(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_JKQ2[0x3];                                     // 0x0329(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FLinearColor                                ChangedColor;                                              // 0x032C(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                                DefaultColor;                                              // 0x033C(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_KT5L[0x4];                                     // 0x034C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FText                                       DisplayText;                                               // 0x0350(0x0018) (Edit, BlueprintVisible, DisableEditOnInstance)
	class USoundBase*                                  Hovered_Sound;                                             // 0x0368(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               bHasExistedForSomeTime;                                    // 0x0370(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr){
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WBP_BindKey.WBP_BindKey_C");
		}
		return ptr;
	}



	UMG_ESlateVisibility GetVisibility_1();
	struct FLinearColor GetBrushColor_1();
	void BroadcastBindChanged();
	void ClearModifiersForAxis();
	struct FEventReply OnKeyDown(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent);
	struct FEventReply OnMouseButtonDown(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent);
	struct FEventReply OnMouseButtonUp(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent);
	struct FEventReply OnKeyUp(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent);
	void GetActionBindingInfo(struct FInputActionKeyMapping* Action_Key_Mapping);
	void OnMouse(const struct FGeometry& Geometry, const struct FPointerEvent& Mouse_Event, struct FEventReply* Result);
	struct FEventReply OnMouseWheel(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent);
	void FinishLoading(bool* Loaded_Default);
	struct FSlateColor GetColorAndOpacity_1();
	struct FText GetText_1();
	void OnFocusLost(const struct FFocusEvent& InFocusEvent);
	void OnMouseLeave(const struct FPointerEvent& MouseEvent);
	void BndEvt__Button_2_K2Node_ComponentBoundEvent_120_OnButtonClickedEvent__DelegateSignature();
	void Construct();
	void UpdateDisplayText();
	void OnMouseEnter(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent);
	void ExecuteUbergraph_WBP_BindKey(int EntryPoint);
	void TryResetKey__DelegateSignature(class UWBP_BindKey_C* Widget);
	void TryBindKey__DelegateSignature(class UWBP_BindKey_C* Widget, const struct FInputActionKeyMapping& NewBind);
	void TryClearKey__DelegateSignature(class UWBP_BindKey_C* Widget);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
