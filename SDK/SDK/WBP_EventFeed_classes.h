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

// WidgetBlueprintGeneratedClass WBP_EventFeed.WBP_EventFeed_C
// 0x0030 (FullSize[0x0268] - InheritedSize[0x0238])
class UWBP_EventFeed_C : public UMALocalMessagesWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0238(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UVerticalBox*                                VerticalBox;                                               // 0x0240(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	int                                                Max_Children;                                              // 0x0248(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	unsigned char                                      UnknownData_N4GS[0x4];                                     // 0x024C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UMADeathMessage*                             NewVar_1;                                                  // 0x0250(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AMAPlayerState*                              VTPlayerState;                                             // 0x0258(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                      LastViewTarget;                                            // 0x0260(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr){
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WBP_EventFeed.WBP_EventFeed_C");
		}
		return ptr;
	}



	void SetVTPlayerState();
	void AddMessage(class UClass* MessageClass, const struct FLocalMessageData& MessageData);
	void BP_Clear();
	void Construct();
	void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
	void ExecuteUbergraph_WBP_EventFeed(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
