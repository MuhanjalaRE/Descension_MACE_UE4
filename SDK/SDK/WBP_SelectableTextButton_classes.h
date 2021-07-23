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

// WidgetBlueprintGeneratedClass WBP_SelectableTextButton.WBP_SelectableTextButton_C
// 0x0048 (FullSize[0x0400] - InheritedSize[0x03B8])
class UWBP_SelectableTextButton_C : public UWBP_SelectableButton_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x03B8(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                            NewAnimation_2;                                            // 0x03C0(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UBorder*                                     Border_1;                                                  // 0x03C8(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                                    MainSizeBox;                                               // 0x03D0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                                  TextDisplay;                                               // 0x03D8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FText                                       Button_Text;                                               // 0x03E0(0x0018) (Edit, BlueprintVisible, ExposeOnSpawn)
	int                                                OverrideFontSize;                                          // 0x03F8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	float                                              OverrideHeight;                                            // 0x03FC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr){
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WBP_SelectableTextButton.WBP_SelectableTextButton_C");
		}
		return ptr;
	}



	struct FLinearColor GetBrushColor_1();
	struct FEventReply OnMouseMove_1(const struct FGeometry& MyGeometry, struct FPointerEvent* MouseEvent);
	struct FEventReply OnMouseButtonUp_1(const struct FGeometry& MyGeometry, struct FPointerEvent* MouseEvent);
	struct FEventReply OnMouseButtonDown_1(const struct FGeometry& MyGeometry, struct FPointerEvent* MouseEvent);
	struct FSlateColor Get_ItemName_ColorAndOpacity_1();
	void Construct();
	void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
	void PreConstruct(bool IsDesignTime);
	void OnMouseEnter(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent);
	void ExecuteUbergraph_WBP_SelectableTextButton(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
