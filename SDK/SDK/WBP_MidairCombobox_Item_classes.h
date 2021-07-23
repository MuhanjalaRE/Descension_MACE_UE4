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

// WidgetBlueprintGeneratedClass WBP_MidairCombobox_Item.WBP_MidairCombobox_Item_C
// 0x0038 (FullSize[0x0270] - InheritedSize[0x0238])
class UWBP_MidairCombobox_Item_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0238(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UWBP_StyledButton_C*                         WBP_StyledButton;                                          // 0x0240(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FScriptMulticastDelegate                    Selected;                                                  // 0x0248(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	int                                                Ident;                                                     // 0x0258(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	unsigned char                                      UnknownData_G1S9[0x4];                                     // 0x025C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     Option;                                                    // 0x0260(0x0010) (Edit, BlueprintVisible, ZeroConstructor, ExposeOnSpawn, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr){
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WBP_MidairCombobox_Item.WBP_MidairCombobox_Item_C");
		}
		return ptr;
	}



	void Construct();
	void BndEvt__WBP_StyledButton_K2Node_ComponentBoundEvent_0_Clicked__DelegateSignature(int Ident);
	void ExecuteUbergraph_WBP_MidairCombobox_Item(int EntryPoint);
	void Selected__DelegateSignature(int Ident, const struct FString& Option);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
