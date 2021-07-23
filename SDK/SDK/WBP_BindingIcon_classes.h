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

// WidgetBlueprintGeneratedClass WBP_BindingIcon.WBP_BindingIcon_C
// 0x006D (FullSize[0x02A5] - InheritedSize[0x0238])
class UWBP_BindingIcon_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0238(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UBorder*                                     Binding;                                                   // 0x0240(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                      Image_158;                                                 // 0x0248(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                                    MainSizeBox;                                               // 0x0250(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                      NoBinding;                                                 // 0x0258(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                                    SlotLocked;                                                // 0x0260(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                             Switcher;                                                  // 0x0268(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                                  Text;                                                      // 0x0270(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FName                                       Bind_Name;                                                 // 0x0278(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	bool                                               Selected;                                                  // 0x0280(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_A487[0x7];                                     // 0x0281(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FKey                                        None_Key;                                                  // 0x0288(0x0018) (Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	int                                                InitFontSize;                                              // 0x02A0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               ShowNoneBindingIcon;                                       // 0x02A4(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr){
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WBP_BindingIcon.WBP_BindingIcon_C");
		}
		return ptr;
	}



	void SetFontSize(int Size);
	void AdjustFontSize();
	struct FLinearColor GetBackgroundColor();
	struct FSlateColor GetForegroundColor();
	struct FText Get_Text_Text_1();
	void SetBinding(const struct FName& Bind_Name);
	void Construct();
	void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
	void OnAnyBindChanged(const struct FName& CategoryName, const struct FMidairInputMapping& NewMapping);
	void ExecuteUbergraph_WBP_BindingIcon(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
