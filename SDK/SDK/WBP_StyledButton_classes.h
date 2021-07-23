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

// WidgetBlueprintGeneratedClass WBP_StyledButton.WBP_StyledButton_C
// 0x0091 (FullSize[0x02C9] - InheritedSize[0x0238])
class UWBP_StyledButton_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0238(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UButton*                                     Button;                                                    // 0x0240(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                                  Text;                                                      // 0x0248(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FText                                       ButtonText;                                                // 0x0250(0x0018) (Edit, BlueprintVisible, ExposeOnSpawn)
	struct FScriptMulticastDelegate                    Clicked;                                                   // 0x0268(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	struct FText                                       ButtonTooltip;                                             // 0x0278(0x0018) (Edit, BlueprintVisible, ExposeOnSpawn)
	int                                                Ident;                                                     // 0x0290(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	bool                                               bSelected;                                                 // 0x0294(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_17FY[0x3];                                     // 0x0295(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FLinearColor                                RegularColor;                                              // 0x0298(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                                SelectedColor;                                             // 0x02A8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                                  Pressed_Sound;                                             // 0x02B8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                                  Rollover_Sound;                                            // 0x02C0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               bHasExistedForSomeTime;                                    // 0x02C8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr){
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WBP_StyledButton.WBP_StyledButton_C");
		}
		return ptr;
	}



	void Construct();
	void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
	void BndEvt__Button_K2Node_ComponentBoundEvent_30_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__Button_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature();
	void ExecuteUbergraph_WBP_StyledButton(int EntryPoint);
	void Clicked__DelegateSignature(int Ident);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
