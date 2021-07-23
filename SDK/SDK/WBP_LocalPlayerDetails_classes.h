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

// WidgetBlueprintGeneratedClass WBP_LocalPlayerDetails.WBP_LocalPlayerDetails_C
// 0x0028 (FullSize[0x0260] - InheritedSize[0x0238])
class UWBP_LocalPlayerDetails_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0238(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UImage*                                      Image_132;                                                 // 0x0240(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                                  NameBlock;                                                 // 0x0248(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                                  TextBlock_87;                                              // 0x0250(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMALocalPlayer*                              LocalPlayer;                                               // 0x0258(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr){
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WBP_LocalPlayerDetails.WBP_LocalPlayerDetails_C");
		}
		return ptr;
	}



	struct FText GetText_1();
	struct FText Get_NameBlock_Text_1();
	void Construct();
	void BndEvt__Button_320_K2Node_ComponentBoundEvent_0_OnButtonPressedEvent__DelegateSignature();
	void ExecuteUbergraph_WBP_LocalPlayerDetails(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
