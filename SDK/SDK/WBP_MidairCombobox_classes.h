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

// WidgetBlueprintGeneratedClass WBP_MidairCombobox.WBP_MidairCombobox_C
// 0x0030 (FullSize[0x0268] - InheritedSize[0x0238])
class UWBP_MidairCombobox_C : public UUserWidget
{
public:
	class UVerticalBox*                                MainBox;                                                   // 0x0238(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	TArray<struct FString>                             PotentialOptions;                                          // 0x0240(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	bool                                               bOpen;                                                     // 0x0250(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_NYLM[0x7];                                     // 0x0251(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FScriptMulticastDelegate                    OptionSelected;                                            // 0x0258(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr){
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WBP_MidairCombobox.WBP_MidairCombobox_C");
		}
		return ptr;
	}



	void ChildSelected(int Ident, const struct FString& Option);
	bool RemoveChildAt(int Index);
	void Open();
	void CloseAndClear();
	void SetOptions(TArray<struct FString>* Options);
	bool RemoveChild(class UWidget* Content);
	class UVerticalBoxSlot* AddChild(class UWidget* Content);
	void OptionSelected__DelegateSignature(int Ident, const struct FString& Option);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
