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

// WidgetBlueprintGeneratedClass WBP_ServerBrowserPanel.WBP_ServerBrowserPanel_C
// 0x00D9 (FullSize[0x0311] - InheritedSize[0x0238])
class UWBP_ServerBrowserPanel_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0238(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UButton*                                     Button_3;                                                  // 0x0240(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCheckBox*                                   HideFullServers;                                           // 0x0248(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCheckBox*                                   HidePasswordedServers;                                     // 0x0250(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                      Image_2;                                                   // 0x0258(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                                     JoinButton;                                                // 0x0260(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                                     MapButton;                                                 // 0x0268(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                      OfficialIcon;                                              // 0x0270(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                                     PingButton;                                                // 0x0278(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                      PingSortIcon;                                              // 0x0280(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                      PlayerCountSortIcon;                                       // 0x0288(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                                     PlayersButton;                                             // 0x0290(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                      PugIcon;                                                   // 0x0298(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                                     RefreshButton;                                             // 0x02A0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCircularThrobber*                           RefreshThrobber;                                           // 0x02A8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                                     ServerInfoButton;                                          // 0x02B0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                                     ServerNameButton;                                          // 0x02B8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                      ServerNameSortIcon;                                        // 0x02C0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                                ServersBox;                                                // 0x02C8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCheckBox*                                   ShowOnlyOfficialServers;                                   // 0x02D0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_ServerBrowserRow_C*                     WBP_ServerBrowserRow_47;                                   // 0x02D8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_ServerBrowserRow_C*                     WBP_ServerBrowserRow_48;                                   // 0x02E0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_ServerBrowserRow_C*                     Selected_Server;                                           // 0x02E8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FScriptMulticastDelegate                    NewEventDispatcher_1;                                      // 0x02F0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	float                                              LastRefreshTS;                                             // 0x0300(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               IsRefreshing;                                              // 0x0304(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_5V3Y[0x3];                                     // 0x0305(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UMAGameInstance*                             GameInstance;                                              // 0x0308(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	MidairCE_EFindSessionsSortMethod                   CurrentSortMethod;                                         // 0x0310(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr){
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WBP_ServerBrowserPanel.WBP_ServerBrowserPanel_C");
		}
		return ptr;
	}



	void Join_Server(const struct FBlueprintSessionResult& SelectedServer);
	UMG_ESlateVisibility Get_PingSortIcon_Visibility_1();
	UMG_ESlateVisibility Get_PlayerCountSortIcon_Visibility_1();
	void GetSortMethodVisibility(MidairCE_EFindSessionsSortMethod Sort_Method, UMG_ESlateVisibility* Visibility);
	UMG_ESlateVisibility Get_ServerNameSortIcon_Visibility_1();
	struct FEventReply OnFocusReceived(const struct FGeometry& MyGeometry, const struct FFocusEvent& InFocusEvent);
	bool Not_Refreshing();
	bool Can_Join();
	void Set_Selected_Server(class UWBP_ServerBrowserRow_C* Server_Row);
	void AddServer(const struct FBlueprintSessionResult& Session, class UWBP_ServerBrowserRow_C** NewServerRow);
	void OnFailure_829842194593ADCCA3AEE9A1E904AD7C();
	void OnSuccess_829842194593ADCCA3AEE9A1E904AD7C();
	void BndEvt__Button_1371_K2Node_ComponentBoundEvent_304_OnButtonClickedEvent__DelegateSignature();
	void Try_Join();
	void BndEvt__Button_1370_K2Node_ComponentBoundEvent_198_OnButtonClickedEvent__DelegateSignature();
	void On_Found_Sessions(TArray<struct FBlueprintSessionResult> Results);
	void TryRefresh();
	void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
	void Join();
	void JoinFromPassword(const struct FText& Password);
	void Construct();
	void BndEvt__ServerNameButton_K2Node_ComponentBoundEvent_26_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__PlayersButton_K2Node_ComponentBoundEvent_54_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__PingButton_K2Node_ComponentBoundEvent_98_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__HideFullServers_K2Node_ComponentBoundEvent_163_OnCheckBoxComponentStateChanged__DelegateSignature(bool bIsChecked);
	void BndEvt__HidePasswordedServers_K2Node_ComponentBoundEvent_1_OnCheckBoxComponentStateChanged__DelegateSignature(bool bIsChecked);
	void BndEvt__ShowOnlyOfficialServers_K2Node_ComponentBoundEvent_2_OnCheckBoxComponentStateChanged__DelegateSignature(bool bIsChecked);
	void BndEvt__ServerInfoButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
	void CustomEvent_2(TArray<struct FServerPlayer> SeverPlayerList);
	void ExecuteUbergraph_WBP_ServerBrowserPanel(int EntryPoint);
	void NewEventDispatcher_0__DelegateSignature();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
