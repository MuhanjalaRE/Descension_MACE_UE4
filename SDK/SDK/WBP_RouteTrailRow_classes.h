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

// WidgetBlueprintGeneratedClass WBP_RouteTrailRow.WBP_RouteTrailRow_C
// 0x0198 (FullSize[0x03D0] - InheritedSize[0x0238])
class UWBP_RouteTrailRow_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0238(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UButton*                                     DeleteRouteTrailButton;                                    // 0x0240(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                                     LoadRouteTrailButton;                                      // 0x0248(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                                  RouteNameText;                                             // 0x0250(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FMARouteTrail                               RouteTrail;                                                // 0x0258(0x00B0) (Edit, BlueprintVisible)
	struct FScriptMulticastDelegate                    NewEventDispatcher_1;                                      // 0x0308(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	struct FMARouteTrail                               NewVar_1;                                                  // 0x0318(0x00B0) (Edit, BlueprintVisible, DisableEditOnInstance)
	class UWBP_PracticeModeMenu_C*                     ParentWidget;                                              // 0x03C8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr){
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WBP_RouteTrailRow.WBP_RouteTrailRow_C");
		}
		return ptr;
	}



	void GetMAPracticeComponentForWidget(class UMAPracticeComponent** MAPracticeComponent);
	void SetRouteTrail(const struct FMARouteTrail& RouteTrail);
	void BP_OnEntryReleased();
	void BP_OnItemExpansionChanged(bool bIsExpanded);
	void BP_OnItemSelectionChanged(bool bIsSelected);
	void OnListItemObjectSet(class UObject* ListItemObject);
	void BndEvt__LoadRouteTrailButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__DeleteRouteTrailButton_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature();
	void ExecuteUbergraph_WBP_RouteTrailRow(int EntryPoint);
	void NewEventDispatcher_0__DelegateSignature();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
