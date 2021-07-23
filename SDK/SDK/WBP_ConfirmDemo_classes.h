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

// WidgetBlueprintGeneratedClass WBP_ConfirmDemo.WBP_ConfirmDemo_C
// 0x0090 (FullSize[0x02C8] - InheritedSize[0x0238])
class UWBP_ConfirmDemo_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0238(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UButton*                                     CancelButton;                                              // 0x0240(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCircularThrobber*                           CircularThrobber_Demo;                                     // 0x0248(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                                     PlayButton;                                                // 0x0250(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UProgressBar*                                ProgressBarDemo;                                           // 0x0258(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                                  TextBlock_6;                                               // 0x0260(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                                  TextBlock_DemoText;                                        // 0x0268(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                                  TextBlock_PlayButton;                                      // 0x0270(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FString                                     DemoInfo;                                                  // 0x0278(0x0010) (Edit, BlueprintVisible, ZeroConstructor, ExposeOnSpawn, HasGetValueTypeHash)
	bool                                               RemoveWhenClose;                                           // 0x0288(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)
	unsigned char                                      UnknownData_KJ0P[0x7];                                     // 0x0289(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     DemoId;                                                    // 0x0290(0x0010) (Edit, BlueprintVisible, ZeroConstructor, ExposeOnSpawn, HasGetValueTypeHash)
	bool                                               EnableOkButton;                                            // 0x02A0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               ShowProgress;                                              // 0x02A1(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_4C38[0x6];                                     // 0x02A2(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UMAGameInstance*                             MAGameInstance;                                            // 0x02A8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               StartedDownload;                                           // 0x02B0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_KQ43[0x7];                                     // 0x02B1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     DemoVersion;                                               // 0x02B8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, ExposeOnSpawn, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr){
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WBP_ConfirmDemo.WBP_ConfirmDemo_C");
		}
		return ptr;
	}



	UMG_ESlateVisibility Get_CircularThrobber_Demo_Visibility_1();
	void OnFail_54D5F3B24FE813CC4154B491F4A2FE56();
	void OnSuccess_54D5F3B24FE813CC4154B491F4A2FE56();
	void OnFail_A2A05E174D12662ACF7EC5B7BFFDDA8B();
	void OnSuccess_A2A05E174D12662ACF7EC5B7BFFDDA8B();
	void BndEvt__Button_1_K2Node_ComponentBoundEvent_150_OnButtonClickedEvent__DelegateSignature();
	void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
	void BndEvt__Button_0_K2Node_ComponentBoundEvent_122_OnButtonClickedEvent__DelegateSignature();
	void Construct();
	void ExecuteUbergraph_WBP_ConfirmDemo(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
