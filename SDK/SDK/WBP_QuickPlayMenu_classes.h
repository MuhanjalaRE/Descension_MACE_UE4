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

// WidgetBlueprintGeneratedClass WBP_QuickPlayMenu.WBP_QuickPlayMenu_C
// 0x0089 (FullSize[0x02C1] - InheritedSize[0x0238])
class UWBP_QuickPlayMenu_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0238(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UComboBoxString*                             GameMode;                                                  // 0x0240(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UComboBoxString*                             Region;                                                    // 0x0248(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_SelectableButtonWithText_C*             WBP_SelectableButtonWithText;                              // 0x0250(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FString                                     Server_Ip;                                                 // 0x0258(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)
	class UMAGameInstance*                             Game_Instance;                                             // 0x0268(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FMAServer                                   Server;                                                    // 0x0270(0x0050) (Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                               ServerFound;                                               // 0x02C0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr){
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WBP_QuickPlayMenu.WBP_QuickPlayMenu_C");
		}
		return ptr;
	}



	void OnFailure_7EDE06084DF7C81904EF1E982FDBD12A();
	void OnSuccess_7EDE06084DF7C81904EF1E982FDBD12A();
	void Construct();
	void BndEvt__WBP_SelectableButtonWithText_K2Node_ComponentBoundEvent_0_ButtonClicked__DelegateSignature(class UWBP_SelectableButton_C* Clicked_Button);
	void Found_sessions(TArray<struct FBlueprintSessionResult> Results);
	void ExecuteUbergraph_WBP_QuickPlayMenu(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
