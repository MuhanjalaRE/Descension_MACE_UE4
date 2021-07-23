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

// WidgetBlueprintGeneratedClass WBP_PartyPlayerSlot.WBP_PartyPlayerSlot_C
// 0x0041 (FullSize[0x0279] - InheritedSize[0x0238])
class UWBP_PartyPlayerSlot_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0238(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UBorder*                                     AvatarBorder;                                              // 0x0240(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                      LeaderIcon;                                                // 0x0248(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                                     SlotButton;                                                // 0x0250(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                             ViewSwitcher;                                              // 0x0258(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_SelectableButtonWithIcon_C*             WBP_SelectableButtonWithIcon;                              // 0x0260(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	int                                                Design_Time_Active_Widget;                                 // 0x0268(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_16RR[0x4];                                     // 0x026C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class ASteamBeaconPlayerState*                     Steam_Player_State;                                        // 0x0270(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               IsLocalPlayer;                                             // 0x0278(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr){
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WBP_PartyPlayerSlot.WBP_PartyPlayerSlot_C");
		}
		return ptr;
	}



	UMG_ESlateVisibility Get_LeaderIcon_Visibility_1();
	void Update_Slot(class ASteamBeaconPlayerState* Steam_Player_State);
	void PreConstruct(bool IsDesignTime);
	void Construct();
	void BndEvt__WBP_SelectableButtonWithIcon_K2Node_ComponentBoundEvent_0_ButtonClicked__DelegateSignature(class UWBP_SelectableButton_C* Clicked_Button);
	void ExecuteUbergraph_WBP_PartyPlayerSlot(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
