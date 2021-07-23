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

// WidgetBlueprintGeneratedClass WBP_StaticMessage.WBP_StaticMessage_C
// 0x004F (FullSize[0x0288] - InheritedSize[0x0239])
class UWBP_StaticMessage_C : public UWBP_ModalMenu_C
{
public:
	unsigned char                                      UnknownData_WPZW[0x7];                                     // 0x0239(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0240(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UTextBlock*                                  MainTextBlock;                                             // 0x0248(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FText                                       PromptText;                                                // 0x0250(0x0018) (Edit, BlueprintVisible, ExposeOnSpawn)
	struct FScriptMulticastDelegate                    OnActionAccepted;                                          // 0x0268(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	struct FScriptMulticastDelegate                    OnRemoved;                                                 // 0x0278(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr){
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WBP_StaticMessage.WBP_StaticMessage_C");
		}
		return ptr;
	}



	void PreConstruct(bool IsDesignTime);
	void Remove();
	void ExecuteUbergraph_WBP_StaticMessage(int EntryPoint);
	void OnRemoved__DelegateSignature();
	void OnActionAccepted__DelegateSignature();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
