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

// WidgetBlueprintGeneratedClass WBP_ModalMenu.WBP_ModalMenu_C
// 0x0001 (FullSize[0x0239] - InheritedSize[0x0238])
class UWBP_ModalMenu_C : public UUserWidget
{
public:
	bool                                               Destroy_On_Hide;                                           // 0x0238(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr){
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WBP_ModalMenu.WBP_ModalMenu_C");
		}
		return ptr;
	}



	bool HandleDirectNamedHotkey(const struct FString& Hotkey);
	bool HandleNamedHotkeyWithInt(const struct FString& Hotkey, int Int);
	void Remove();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
