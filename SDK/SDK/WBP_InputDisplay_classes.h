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

// WidgetBlueprintGeneratedClass WBP_InputDisplay.WBP_InputDisplay_C
// 0x0030 (FullSize[0x0268] - InheritedSize[0x0238])
class UWBP_InputDisplay_C : public UUserWidget
{
public:
	class UTextBlock*                                  A_Text;                                                    // 0x0238(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                                  D_Text;                                                    // 0x0240(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                                  Jet_Text;                                                  // 0x0248(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                                  S_Text;                                                    // 0x0250(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                                  Skii_Text;                                                 // 0x0258(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                                  W_Text;                                                    // 0x0260(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr){
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WBP_InputDisplay.WBP_InputDisplay_C");
		}
		return ptr;
	}



	struct FSlateColor Get_Skii_Text_ColorAndOpacity_1();
	struct FSlateColor Get_D_Text_ColorAndOpacity_1();
	struct FSlateColor Get_S_Text_ColorAndOpacity_1();
	struct FSlateColor Get_A_Text_ColorAndOpacity_1();
	struct FSlateColor GetSlateColorForInputType(MidairCE_EPlayerRecordableInputTypes InputType);
	void GetMAPlayerController(class AMAPlayerController** AsMAPlayer_Controller);
	struct FSlateColor Get_W_Text_ColorAndOpacity_2();
	struct FSlateColor Get_Jet_Text_ColorAndOpacity_1();
	void GetText_1();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
