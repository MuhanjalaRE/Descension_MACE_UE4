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

// WidgetBlueprintGeneratedClass WBP_Loadouts_VoicePacks.WBP_Loadouts_VoicePacks_C
// 0x0040 (FullSize[0x0278] - InheritedSize[0x0238])
class UWBP_Loadouts_VoicePacks_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0238(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UWBP_SelectableButtonWithText_C*             ACCEPTBUTTON;                                              // 0x0240(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                                VoiceSlots;                                                // 0x0248(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UClass*                                      CurrentCharacterInfo;                                      // 0x0250(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWBP_Loadouts_SimpleVoiceListItem_C*         LastSelectedVoiceButton;                                   // 0x0258(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<int>                                        Voice_Pack_Demo_Ids;                                       // 0x0260(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	class UWBP_Loadouts_SimpleVoiceListItem_C*         LastActiveVoiceButton;                                     // 0x0270(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr){
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WBP_Loadouts_VoicePacks.WBP_Loadouts_VoicePacks_C");
		}
		return ptr;
	}



	void Update();
	void Construct();
	void JumpToObject(class UClass* Object_Info);
	void Button_Clicked(class UWBP_SelectableButton_C* Button);
	void Equip_Voice();
	void BndEvt__ACCEPTBUTTON_K2Node_ComponentBoundEvent_9_ButtonClicked__DelegateSignature(class UWBP_SelectableButton_C* Clicked_Button);
	void ExecuteUbergraph_WBP_Loadouts_VoicePacks(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
