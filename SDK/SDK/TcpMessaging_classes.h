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

// Class TcpMessaging.TcpMessagingSettings
// 0x0030 (FullSize[0x0058] - InheritedSize[0x0028])
class UTcpMessagingSettings : public UObject
{
public:
	bool                                               EnableTransport;                                           // 0x0028(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_JYJC[0x7];                                     // 0x0029(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     ListenEndpoint;                                            // 0x0030(0x0010) (Edit, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TArray<struct FString>                             ConnectToEndpoints;                                        // 0x0040(0x0010) (Edit, ZeroConstructor, Config, NativeAccessSpecifierPrivate)
	int                                                ConnectionRetryDelay;                                      // 0x0050(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_7HDQ[0x4];                                     // 0x0054(0x0004) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr){
			ptr = UObject::FindClass("Class TcpMessaging.TcpMessagingSettings");
		}
		return ptr;
	}



};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
