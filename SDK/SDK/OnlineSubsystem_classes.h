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

// Class OnlineSubsystem.NamedInterfaces
// 0x0038 (FullSize[0x0060] - InheritedSize[0x0028])
class UNamedInterfaces : public UObject
{
public:
	TArray<struct FNamedInterface>                     NamedInterfaces;                                           // 0x0028(0x0010) (ZeroConstructor, NativeAccessSpecifierPrivate)
	TArray<struct FNamedInterfaceDef>                  NamedInterfaceDefs;                                        // 0x0038(0x0010) (ZeroConstructor, Config, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_7ME2[0x18];                                    // 0x0048(0x0018) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr){
			ptr = UObject::FindClass("Class OnlineSubsystem.NamedInterfaces");
		}
		return ptr;
	}



};

// Class OnlineSubsystem.TurnBasedMatchInterface
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UTurnBasedMatchInterface : public UInterface
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr){
			ptr = UObject::FindClass("Class OnlineSubsystem.TurnBasedMatchInterface");
		}
		return ptr;
	}



	void OnMatchReceivedTurn(const struct FString& Match, bool bDidBecomeActive);
	void OnMatchEnded(const struct FString& Match);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
