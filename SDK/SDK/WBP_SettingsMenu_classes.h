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

// WidgetBlueprintGeneratedClass WBP_SettingsMenu.WBP_SettingsMenu_C
// 0x00D7 (FullSize[0x0310] - InheritedSize[0x0239])
class UWBP_SettingsMenu_C : public UWBP_ModalMenu_C
{
public:
	unsigned char                                      UnknownData_EAIF[0x7];                                     // 0x0239(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0240(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UButton*                                     AudioTabButton;                                            // 0x0248(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBorder*                                     Border_2;                                                  // 0x0250(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                                     CloseSettings;                                             // 0x0258(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                                     GameplayTabButton;                                         // 0x0260(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                                     GameTabButton;                                             // 0x0268(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                      Image_778;                                                 // 0x0270(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                      Image_779;                                                 // 0x0278(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                                     VideoTabButton;                                            // 0x0280(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_AudioSettings_C*                        WBP_AudioSettings;                                         // 0x0288(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_ControlSettings_C*                      WBP_ControlSettings;                                       // 0x0290(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_GeneralSettings_C*                      WBP_GeneralSettings;                                       // 0x0298(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_VideoSettings_C*                        WBP_Settings_DisplayPanel;                                 // 0x02A0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                             WidgetSwitcher;                                            // 0x02A8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	bool                                               Fullscreen;                                                // 0x02B0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_E30J[0x7];                                     // 0x02B1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FSlateColor                                 SettingNameColor;                                          // 0x02B8(0x0028) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FLinearColor                                ActiveTabColor;                                            // 0x02E0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                                InactiveTabColor;                                          // 0x02F0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FScriptMulticastDelegate                    pickcolor;                                                 // 0x0300(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr){
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WBP_SettingsMenu.WBP_SettingsMenu_C");
		}
		return ptr;
	}



	struct FEventReply OnMouseButtonDown_1(const struct FGeometry& MyGeometry, struct FPointerEvent* MouseEvent);
	void UpdateTabButtons(class UButton* self2);
	void BndEvt__Button_1706_K2Node_ComponentBoundEvent_500_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__Button_398_K2Node_ComponentBoundEvent_785_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__Button_399_K2Node_ComponentBoundEvent_796_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__Button_400_K2Node_ComponentBoundEvent_808_OnButtonClickedEvent__DelegateSignature();
	void Construct();
	void OnFocusLost(const struct FFocusEvent& InFocusEvent);
	void Remove();
	void BndEvt__Button_0_K2Node_ComponentBoundEvent_119_OnButtonClickedEvent__DelegateSignature();
	void OnColorClicked();
	void ExecuteUbergraph_WBP_SettingsMenu(int EntryPoint);
	void pickcolor__DelegateSignature();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
