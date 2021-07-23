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

// Class EasyColorPicker.ECP_ClickableArea
// 0x0050 (FullSize[0x0288] - InheritedSize[0x0238])
class UECP_ClickableArea : public UUserWidget
{
public:
	unsigned char                                      UnknownData_VNIV[0x48];                                    // 0x0238(0x0048) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UImage*                                      FakeImage;                                                 // 0x0280(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr){
			ptr = UObject::FindClass("Class EasyColorPicker.ECP_ClickableArea");
		}
		return ptr;
	}



};

// Class EasyColorPicker.ECP_Slider
// 0x0098 (FullSize[0x0598] - InheritedSize[0x0500])
class UECP_Slider : public USlider
{
public:
	unsigned char                                      UnknownData_QRZN[0x8];                                     // 0x0500(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FColor                                      LeftColor;                                                 // 0x0508(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FColor                                      RightColor;                                                // 0x050C(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnNewColorPicked;                                          // 0x0510(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	unsigned char                                      GradientMaterialRef[0x28];                                 // 0x0520(0x0028) UNKNOWN PROPERTY: SoftObjectProperty EasyColorPicker.ECP_Slider.GradientMaterialRef
	unsigned char                                      SliderThumbMaterialRef[0x28];                              // 0x0548(0x0028) UNKNOWN PROPERTY: SoftObjectProperty EasyColorPicker.ECP_Slider.SliderThumbMaterialRef
	unsigned char                                      UnknownData_NQ5G[0x18];                                    // 0x0570(0x0018) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UMaterialInstanceDynamic*                    GradientMaterialInstance;                                  // 0x0588(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UMaterialInstanceDynamic*                    SliderThumbMaterialInstance;                               // 0x0590(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr){
			ptr = UObject::FindClass("Class EasyColorPicker.ECP_Slider");
		}
		return ptr;
	}



	void OnValueChangedFunction(float NewValue);
};

// Class EasyColorPicker.ECP_Wheel
// 0x0060 (FullSize[0x0298] - InheritedSize[0x0238])
class UECP_Wheel : public UUserWidget
{
public:
	struct FScriptMulticastDelegate                    OnValueChanged;                                            // 0x0238(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_5D3H[0x20];                                    // 0x0248(0x0020) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UECP_ClickableArea*                          ClickableArea;                                             // 0x0268(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UImage*                                      WheelImage;                                                // 0x0270(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UImage*                                      PointerImage;                                              // 0x0278(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UImage*                                      PreviewImage;                                              // 0x0280(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UImage*                                      PreviewImageBackground;                                    // 0x0288(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_2CMW[0x8];                                     // 0x0290(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr){
			ptr = UObject::FindClass("Class EasyColorPicker.ECP_Wheel");
		}
		return ptr;
	}



};

// Class EasyColorPicker.ECP_WheelAndSlider
// 0x0168 (FullSize[0x03A0] - InheritedSize[0x0238])
class UECP_WheelAndSlider : public UUserWidget
{
public:
	float                                              WheelSize;                                                 // 0x0238(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              SliderWidth;                                               // 0x023C(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              SliderHeight;                                              // 0x0240(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_XP9Y[0x4];                                     // 0x0244(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FScriptMulticastDelegate                    OnNewColorPicked;                                          // 0x0248(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	unsigned char                                      WheelTextureRef[0x28];                                     // 0x0258(0x0028) UNKNOWN PROPERTY: SoftObjectProperty EasyColorPicker.ECP_WheelAndSlider.WheelTextureRef
	unsigned char                                      PointerTextureRef[0x28];                                   // 0x0280(0x0028) UNKNOWN PROPERTY: SoftObjectProperty EasyColorPicker.ECP_WheelAndSlider.PointerTextureRef
	unsigned char                                      PreviewTextureRef[0x28];                                   // 0x02A8(0x0028) UNKNOWN PROPERTY: SoftObjectProperty EasyColorPicker.ECP_WheelAndSlider.PreviewTextureRef
	unsigned char                                      PreviewTextureBackgroundRef[0x28];                         // 0x02D0(0x0028) UNKNOWN PROPERTY: SoftObjectProperty EasyColorPicker.ECP_WheelAndSlider.PreviewTextureBackgroundRef
	unsigned char                                      GradientMaterialRef[0x28];                                 // 0x02F8(0x0028) UNKNOWN PROPERTY: SoftObjectProperty EasyColorPicker.ECP_WheelAndSlider.GradientMaterialRef
	unsigned char                                      SliderThumbMaterialRef[0x28];                              // 0x0320(0x0028) UNKNOWN PROPERTY: SoftObjectProperty EasyColorPicker.ECP_WheelAndSlider.SliderThumbMaterialRef
	class UClass*                                      SliderAsset;                                               // 0x0348(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UECP_Wheel*                                  WheelPicker;                                               // 0x0350(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UECP_Slider*                                 FirstGradientSlider;                                       // 0x0358(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UECP_Slider*                                 SecondGradientSlider;                                      // 0x0360(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USizeBox*                                    SliderSizeBox;                                             // 0x0368(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UHorizontalBox*                              HRootWidget;                                               // 0x0370(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UVerticalBox*                                VSliderBox;                                                // 0x0378(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USizeBoxSlot*                                FirstBoxSlot;                                              // 0x0380(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USizeBoxSlot*                                SecondBoxSlot;                                             // 0x0388(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_QUQT[0x10];                                    // 0x0390(0x0010) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr){
			ptr = UObject::FindClass("Class EasyColorPicker.ECP_WheelAndSlider");
		}
		return ptr;
	}



	void SetColor(const struct FColor& NewColor);
	void OnWheelPickerValueChanged(const struct FColor& NewColor);
	void OnSecondSliderValueChanged(const struct FColor& NewColor);
	void OnFirstSliderValueChanged(const struct FColor& NewColor);
	struct FColor GetColor();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
