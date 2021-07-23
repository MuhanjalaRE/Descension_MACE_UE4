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

// WidgetBlueprintGeneratedClass WBP_PlayerExpressionPanel.WBP_PlayerExpressionPanel_C
// 0x0028 (FullSize[0x0260] - InheritedSize[0x0238])
class UWBP_PlayerExpressionPanel_C : public UUserWidget
{
public:
	class UVerticalBox*                                Box;                                                       // 0x0238(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FText                                       Category;                                                  // 0x0240(0x0018) (Edit, BlueprintVisible, ExposeOnSpawn)
	class UWBP_PlayerExpressions_C*                    ParentWidget;                                              // 0x0258(0x0008) (Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr){
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WBP_PlayerExpressionPanel.WBP_PlayerExpressionPanel_C");
		}
		return ptr;
	}



	void AddCategoryBinding(const struct FText& Category, const struct FText& Key, const struct FText& Display_Text);
	void HandleEntry(class UWBP_PlayerExpressionEntry_C** Expression);
	void HandleFirstKeyPress(const struct FKeyEvent& KeyEvent, const struct FKey& Key, bool IsAbortKey, struct FEventReply* Return_Value, bool* Handled);
	void AddChatBinding(const struct FText& DisplayText, const struct FText& Key, int ExpressionIndex);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
