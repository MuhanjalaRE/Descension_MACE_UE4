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

// WidgetBlueprintGeneratedClass WBP_InputBinding.WBP_InputBinding_C
// 0x0159 (FullSize[0x0391] - InheritedSize[0x0238])
class UWBP_InputBinding_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0238(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UHorizontalBox*                              HorizontalBox_1;                                           // 0x0240(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHorizontalBox*                              HorizontalBox_2;                                           // 0x0248(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_BindKey_C*                              PrimaryKey;                                                // 0x0250(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_BindKey_C*                              SecondaryKey;                                              // 0x0258(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                                    SizeBox_2;                                                 // 0x0260(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                                    SizeBox_3;                                                 // 0x0268(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USpacer*                                     Spacer_1;                                                  // 0x0270(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                                  TextBlock_1;                                               // 0x0278(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                                VerticalBox_1;                                             // 0x0280(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FScriptMulticastDelegate                    TryClearKey;                                               // 0x0288(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	struct FScriptMulticastDelegate                    TryBindKey;                                                // 0x0298(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	struct FScriptMulticastDelegate                    TryResetKey;                                               // 0x02A8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	struct FName                                       MappingName;                                               // 0x02B8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FMidairInputMapping                         Mapping;                                                   // 0x02C0(0x00A0) (Edit, BlueprintVisible, ExposeOnSpawn)
	struct FText                                       DisplayName;                                               // 0x0360(0x0018) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FText                                       BindingTooltipText;                                        // 0x0378(0x0018) (Edit, BlueprintVisible, DisableEditOnInstance)
	MidairCE_EMappingPriority                          Defaults;                                                  // 0x0390(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr){
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WBP_InputBinding.WBP_InputBinding_C");
		}
		return ptr;
	}



	class UWidget* GetToolTipWidget();
	void Construct();
	void BndEvt__PrimaryKey_K2Node_ComponentBoundEvent_0_TryClearKey__DelegateSignature(class UWBP_BindKey_C* Widget);
	void BndEvt__PrimaryKey_K2Node_ComponentBoundEvent_8_TryBindKey__DelegateSignature(class UWBP_BindKey_C* Widget, const struct FInputActionKeyMapping& NewBind);
	void BndEvt__PrimaryKey_K2Node_ComponentBoundEvent_14_TryResetKey__DelegateSignature(class UWBP_BindKey_C* Widget);
	void BndEvt__SecondaryKey_K2Node_ComponentBoundEvent_18_TryClearKey__DelegateSignature(class UWBP_BindKey_C* Widget);
	void BndEvt__SecondaryKey_K2Node_ComponentBoundEvent_29_TryBindKey__DelegateSignature(class UWBP_BindKey_C* Widget, const struct FInputActionKeyMapping& NewBind);
	void BndEvt__SecondaryKey_K2Node_ComponentBoundEvent_38_TryResetKey__DelegateSignature(class UWBP_BindKey_C* Widget);
	void Update(const struct FMidairInputMapping& New_Mapping);
	void ExecuteUbergraph_WBP_InputBinding(int EntryPoint);
	void TryResetKey__DelegateSignature(const struct FName& Name, MidairCE_EMappingPriority Priority);
	void TryBindKey__DelegateSignature(const struct FName& Name, const struct FInputActionKeyMapping& NewKey, MidairCE_EMappingPriority Priority);
	void TryClearKey__DelegateSignature(const struct FName& Name, MidairCE_EMappingPriority Priority);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
