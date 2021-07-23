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

// Class OnlineSubsystemSteam.SteamAuthComponentModuleInterface
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class USteamAuthComponentModuleInterface : public UHandlerComponentFactory
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr){
			ptr = UObject::FindClass("Class OnlineSubsystemSteam.SteamAuthComponentModuleInterface");
		}
		return ptr;
	}



};

// Class OnlineSubsystemSteam.SteamNetDriver
// 0x0008 (FullSize[0x07A8] - InheritedSize[0x07A0])
class USteamNetDriver : public UIpNetDriver
{
public:
	unsigned char                                      UnknownData_63Z1[0x8];                                     // 0x07A0(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr){
			ptr = UObject::FindClass("Class OnlineSubsystemSteam.SteamNetDriver");
		}
		return ptr;
	}



};

// Class OnlineSubsystemSteam.SteamNetConnection
// 0x0008 (FullSize[0x1A28] - InheritedSize[0x1A20])
class USteamNetConnection : public UIpConnection
{
public:
	bool                                               bIsPassthrough;                                            // 0x1A20(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_AK68[0x7];                                     // 0x1A21(0x0007) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr){
			ptr = UObject::FindClass("Class OnlineSubsystemSteam.SteamNetConnection");
		}
		return ptr;
	}



};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
