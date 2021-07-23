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

// WidgetBlueprintGeneratedClass WBP_GameEventMessageSlot.WBP_GameEventMessageSlot_C
// 0x004C (FullSize[0x0284] - InheritedSize[0x0238])
class UWBP_GameEventMessageSlot_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0238(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UTextBlock*                                  TextBlock_743;                                             // 0x0240(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	float                                              Life_Left;                                                 // 0x0248(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              Fade_Out_Time;                                             // 0x024C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              Initial_Alpha;                                             // 0x0250(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_6XMT[0x4];                                     // 0x0254(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FText                                       Event_Message;                                             // 0x0258(0x0018) (Edit, BlueprintVisible, ExposeOnSpawn)
	struct FLinearColor                                Event_Color;                                               // 0x0270(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	float                                              Life_Time;                                                 // 0x0280(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr){
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WBP_GameEventMessageSlot.WBP_GameEventMessageSlot_C");
		}
		return ptr;
	}



	void Construct();
	void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
	void ExecuteUbergraph_WBP_GameEventMessageSlot(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
