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

// AnimBlueprintGeneratedClass ABP_Character_3P.ABP_Character_3P_C
// 0x4882 (FullSize[0x4AEA] - InheritedSize[0x0268])
class UABP_Character_3P_C : public UAnimInstance
{
public:
	unsigned char                                      UnknownData_RH7L[0x8];                                     // 0x0268(0x0008) Fix Super Size
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0270(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_RotationOffsetBlendSpace          AnimGraphNode_RotationOffsetBlendSpace_5FA2EEE2487DBDE63B917EA518D550E0; // 0x0278(0x0188)
	struct FAnimNode_CopyBone                          AnimGraphNode_CopyBone_B80C39454076E70F525EA1B623757A49;   // 0x0400(0x00F0)
	struct FAnimNode_TwoBoneIK                         AnimGraphNode_TwoBoneIK_C530EC214EFC1849CA991FAB0A266E39;  // 0x04F0(0x01E0)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_69807CB14EEA449D27CD698F6665EB79; // 0x06D0(0x0020)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_2EDD14494DC9F6A42D83CD84C628B450; // 0x06F0(0x00A0)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_5D96C0F54FCFEC4DCE61CAB650D330C7; // 0x0790(0x00B8)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_96D35CAB4E7C93116BE53FA0A184B3EF; // 0x0848(0x00B8)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_7A89BDC84905BEE97FA5E0AFD673E5A4; // 0x0900(0x0028)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_7782070D4E9D8565A92386A5F222CFA2; // 0x0928(0x0028)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_7B56A07043C67F475E335F9DDBBA813C; // 0x0950(0x0028)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_49E93801425B08D4A18A24A5458BD973; // 0x0978(0x0020)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace_73C8A78D4B87ABB8B0C0BA8E1E74C4DF; // 0x0998(0x0020)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_464F6EB344382B938AA6158EA098FF0D; // 0x09B8(0x0108)
	struct FAnimNode_LayeredBoneBlend                  AnimGraphNode_LayeredBoneBlend_D8CEC33B41097E54C9D6E28F7A709052; // 0x0AC0(0x00C0)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_66B3AFC84272EF04B89E1F8BBCD3B95C; // 0x0B80(0x0078)
	struct FAnimNode_BlendListByInt                    AnimGraphNode_BlendListByInt_6759B03545439BC2D285CB9F2A81F4D2; // 0x0BF8(0x00A0)
	struct FAnimNode_RotationOffsetBlendSpace          AnimGraphNode_RotationOffsetBlendSpace_5E9C872F4DCDB82C2696B1B6AC5DD8B1; // 0x0C98(0x0188)
	struct FAnimNode_RotationOffsetBlendSpace          AnimGraphNode_RotationOffsetBlendSpace_1C6524514280B1750C67869780854D19; // 0x0E20(0x0188)
	struct FAnimNode_RotationOffsetBlendSpace          AnimGraphNode_RotationOffsetBlendSpace_CE7013304F4A94684C13968CD91C2A07; // 0x0FA8(0x0188)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_C6AE299E432B8A6245638589FE583E60; // 0x1130(0x00B8)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_1CACF1AC43E6AFFB11A823A8AF2FF726; // 0x11E8(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_4BDEDE6B42E7E6615D19658447987A8A; // 0x1210(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_F125F0964BC45992BC6CB79E43DA3F30; // 0x1238(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_D3F91B0349DA2274D9BE099C799F106D; // 0x1260(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_961B4A444E58FC052CB0DFA8DA8B294B; // 0x1288(0x0028)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_DE366D114BA9C43FEC7B97A9A3D2638B; // 0x12B0(0x00E0)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_0C8799E24F09B55EAEB2ABA5EB1BD473; // 0x1390(0x0030)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_837249B84702CAABBB1F18A549C1B233; // 0x13C0(0x00E0)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_7B180455460498087FD087B5C329886D; // 0x14A0(0x0030)
	struct FAnimNode_RefPose                           AnimGraphNode_IdentityPose_86DB76244EA629864BBADB9223A27E47; // 0x14D0(0x0018)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_718514D44A760F9BB6EBA68C148104A3; // 0x14E8(0x0030)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine_0E58AA4145E95585644E5CB3C63AA8D7; // 0x1518(0x00B0)
	struct FAnimNode_ApplyAdditive                     AnimGraphNode_ApplyAdditive_D47B73B847B2DDC870B4A8B96C5AE41E; // 0x15C8(0x00C8)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_8D13AD8C434567B430AA0DBE9BA17B2A; // 0x1690(0x00B8)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_E530245F4EBBC04840BB39ACBC11AD63; // 0x1748(0x00A0)
	struct FAnimNode_RotationOffsetBlendSpace          AnimGraphNode_RotationOffsetBlendSpace_5189391A4BBB19A61BED2082643E9CD5; // 0x17E8(0x0188)
	struct FAnimNode_RotateRootBone                    AnimGraphNode_RotateRootBone_804CD0624E42103F7740C2A4E22E7666; // 0x1970(0x00A0)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_19CF0DBC4E8BE8853463A682E223A607; // 0x1A10(0x00A0)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_657A85AF4986EF14662C9FBD1A782898; // 0x1AB0(0x00B8)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_4F633BB144AE56E0EA2BDEB412EA2F09; // 0x1B68(0x0028)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_143046AA416D20FB7D6B4BA58F8CEF1E; // 0x1B90(0x0028)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_9AE845B24ECCB05171278E8145202B47; // 0x1BB8(0x0028)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_63FE75D64AACDA868A8F789957CA7B8F; // 0x1BE0(0x00A0)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_6632FE9045654A040B9EA29F25C54E02; // 0x1C80(0x0078)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_B882C13740AF66AF510D5A865A96E9B0; // 0x1CF8(0x0028)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_89DB9BA64FCAC1DC3C223FB2B08F162C; // 0x1D20(0x00B8)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_722332F445D482BA0BB8849CD8496A7A; // 0x1DD8(0x0028)
	struct FAnimNode_LayeredBoneBlend                  AnimGraphNode_LayeredBoneBlend_281B1E384B817D4744C4DE85F3C3FA39; // 0x1E00(0x00C0)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_301E8D8B42446CE2142CA588CFBF9428; // 0x1EC0(0x0028)
	struct FAnimNode_LayeredBoneBlend                  AnimGraphNode_LayeredBoneBlend_811BB823422418E96B375DB42C5A3FE3; // 0x1EE8(0x00C0)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_B3962A0C4C837A8C6B83E48F8D93471A; // 0x1FA8(0x00B8)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_BB880D0B4A40081A78E07AB858B0F745; // 0x2060(0x00A0)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_ADB9847D45DDC56329D1DB8C39411B53; // 0x2100(0x00B8)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_A7A3BC69415EE329EAD4A2941200A459; // 0x21B8(0x0028)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_7CA1FA614368801729948A8CF3C2EFA3; // 0x21E0(0x0028)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_A3CF7E8141FE82D09D45DC9B01F9AD27; // 0x2208(0x0028)
	struct FAnimNode_TwoBoneIK                         AnimGraphNode_TwoBoneIK_3795322D4EA377DF0A68179A1847BFF0;  // 0x2230(0x01E0)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_1217789D40A134264BA2868AA9E58782; // 0x2410(0x0020)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace_72A009A7407AA41B7BCE2EBEC4969704; // 0x2430(0x0020)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_AB68DF7945B80BCBED9598B1CF40BA72; // 0x2450(0x0108)
	unsigned char                                      UnknownData_NBZD[0x8];                                     // 0x2558(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FAnimNode_TwoBoneIK                         AnimGraphNode_TwoBoneIK_D9F680404411F95037BAF0B2A285A87B;  // 0x2560(0x01E0)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_CEC4407242C096460F2F6280E8E25B5A; // 0x2740(0x00B8)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_AEC7F42E413837F8D1C7DCB1AB08C081; // 0x27F8(0x00A0)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_AAA6922D44E35B1D2EFA5A81FFC28E79; // 0x2898(0x0028)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_8668A9534919039A868B26809AD0C0D7; // 0x28C0(0x0028)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_5BBC86864DF0ACBA5698E0B0EA2FEFEC; // 0x28E8(0x0028)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_B4091A284E749EDB522E8CB3B0D3AB3E; // 0x2910(0x0028)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_BB01D62A418C6EF548EF33A470DF7DDC; // 0x2938(0x00A0)
	struct FAnimNode_RotateRootBone                    AnimGraphNode_RotateRootBone_BC7596344A09F62100480E9EF0AE0BB0; // 0x29D8(0x00A0)
	struct FAnimNode_ApplyAdditive                     AnimGraphNode_ApplyAdditive_8DAF77554EECF56A2BC5738D039C0624; // 0x2A78(0x00C8)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_9C1FAF84429FAA2B648FD18372F31EE9; // 0x2B40(0x00E0)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_1A2612D04DD7CBD273B05DB10B0E1B20; // 0x2C20(0x0078)
	struct FAnimNode_RotateRootBone                    AnimGraphNode_RotateRootBone_3DDF4512453DF2A2A503D7A2D73B024F; // 0x2C98(0x00A0)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_7D56D8A64A24E58D1671FEBBE2EC1FF3;       // 0x2D38(0x0048)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_E911D31149991171E8272AA657FD88AB; // 0x2D80(0x00E0)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_FAF85E7C42F434FC7E10F0837AF410BD; // 0x2E60(0x00B8)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_E1E5BA194FBEC76C01E85B8789F7DD41; // 0x2F18(0x00E0)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_3FC9D48D4DE05E2934A1CF98606E0902; // 0x2FF8(0x00B8)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_B702EAF148E22F2CB3B605978C5E5ECC; // 0x30B0(0x00E0)
	struct FAnimNode_ApplyAdditive                     AnimGraphNode_ApplyAdditive_D8200478415CFFBB7F0A428877B4BD52; // 0x3190(0x00C8)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_5CF7F4C74F46A4AE0D7169A6A4BE9DED; // 0x3258(0x0028)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_078D7ED64A8CCD733B892E900F263E24; // 0x3280(0x00A0)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_43B98F4547B67C71D901838023EA27B6; // 0x3320(0x0028)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_5C2995624B9BE553A4D98DA78561C296; // 0x3348(0x0028)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_BE9C8435448941721C7A45A43B8FE6AD; // 0x3370(0x00B8)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_C3EEE5874B100A3DEFF810AB5E694104; // 0x3428(0x0028)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_8CB873BF4F42FBD06B576D97EC845E06; // 0x3450(0x0028)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_88D97F29468AEA22F3538EA61A1D8688; // 0x3478(0x0028)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_FD758BB84D5D5FC3BD76DC8B0CD00503; // 0x34A0(0x00A0)
	struct FAnimNode_RotationOffsetBlendSpace          AnimGraphNode_RotationOffsetBlendSpace_0C8F580943010BF758D24A970CDFE73F; // 0x3540(0x0188)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_FD32552F4DC67E7AE2FFFB982FA46210; // 0x36C8(0x00B8)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_44FF6E8342091046D9AFDB8E45B4475B; // 0x3780(0x0028)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_ECE05ACD43622C5FE4E23BABF7C26530; // 0x37A8(0x0028)
	struct FAnimNode_RotationOffsetBlendSpace          AnimGraphNode_RotationOffsetBlendSpace_5ABC878C45929C568512F6A757148A2A; // 0x37D0(0x0188)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_689E85A44F4808B47A4EEA9974CD72E0; // 0x3958(0x00B8)
	struct FAnimNode_RotationOffsetBlendSpace          AnimGraphNode_RotationOffsetBlendSpace_61DC50C043FB6CC3F62D9C8EF69101BC; // 0x3A10(0x0188)
	struct FAnimNode_BlendListByInt                    AnimGraphNode_BlendListByInt_2191614B4FF090AB8AD08BB9E3B28FFD; // 0x3B98(0x00A0)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_901096F34B01E9E0E67D0DB698BEAD81; // 0x3C38(0x0108)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_1EDC061A45DD8C663C7186A3E2283BCA; // 0x3D40(0x0028)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_D452542C4FC7CA08108BEF8D2FB5BFBD; // 0x3D68(0x0028)
	struct FAnimNode_RotationOffsetBlendSpace          AnimGraphNode_RotationOffsetBlendSpace_E703F5334BF3B327AD5A5DA09924A6A2; // 0x3D90(0x0188)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_7BE26817406A775D9E4CA5BABBEC2589; // 0x3F18(0x0028)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_D5431FCD45B4330519002EB8837EE943; // 0x3F40(0x00B8)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_CFE1ABF4454AE35FBF534B8E3EFABF9E; // 0x3FF8(0x00A0)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_939C264E4E18F74CF9DBE99999DC924D; // 0x4098(0x0078)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_F5BCAC284A983E6431BE99B1E82C1A78; // 0x4110(0x0108)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace_4F0D90E24D48663BAFF0BD80F118C86C; // 0x4218(0x0020)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_6FE5846847AF1D904D81DC808F19C708; // 0x4238(0x0020)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_C1D38FB9441364A39110A8A167F7263A; // 0x4258(0x0108)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_49899B3A4C8F4FF1CF32F68C37C30DC0; // 0x4360(0x0108)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace_F8C7B0944528AE77197B07979FC7B3F0; // 0x4468(0x0020)
	struct FAnimNode_LayeredBoneBlend                  AnimGraphNode_LayeredBoneBlend_20BE3645448EDD57D2F50296B48D1AED; // 0x4488(0x00C0)
	struct FAnimNode_Root                              AnimGraphNode_Root_F00F416B4A345D77A4177E9842E2F962;       // 0x4548(0x0030)
	struct FAnimNode_CopyBone                          AnimGraphNode_CopyBone_3618154544C293921118B7B6A30111BA;   // 0x4578(0x00F0)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_42B8434A4B4E508A8B5A828BC3D4AA20; // 0x4668(0x0020)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace_BDB443564A2A1515AD6716BACD24B835; // 0x4688(0x0020)
	struct FAnimNode_CopyBone                          AnimGraphNode_CopyBone_99083CF3433ACD4EB7050C90155388B2;   // 0x46A8(0x00F0)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_54CF005D48A57BD43F73459B65840066; // 0x4798(0x00A0)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_A2A3860D4E05319ECF20F48BCCFF689B; // 0x4838(0x0078)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace_C28720CC417189B07E2D8E8D5D3EAE70; // 0x48B0(0x0020)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_5080D941465EC8ADB5C2DBB1F3CC3D43; // 0x48D0(0x0108)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_98BF6E824DE24024D61721AB63E5CE6B; // 0x49D8(0x0020)
	class AMACharacter*                                Owner;                                                     // 0x49F8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               IsSeated;                                                  // 0x4A00(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               UseForegrip;                                               // 0x4A01(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               Test_IK;                                                   // 0x4A02(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               IsHeavy;                                                   // 0x4A03(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	int                                                Stance;                                                    // 0x4A04(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                     ActorVelocity;                                             // 0x4A08(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                                    ActorRotation;                                             // 0x4A14(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	float                                              JetDirection;                                              // 0x4A20(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               Is_Floating;                                               // 0x4A24(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               IsSkating;                                                 // 0x4A25(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_393X[0x2];                                     // 0x4A26(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              Speed;                                                     // 0x4A28(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              Move_Direction;                                            // 0x4A2C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               WasHit;                                                    // 0x4A30(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_JKXN[0x3];                                     // 0x4A31(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              AimUp;                                                     // 0x4A34(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                     ForegripLocation;                                          // 0x4A38(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                     LeftArmPoleVector;                                         // 0x4A44(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              WeaponScale;                                               // 0x4A50(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              SkiRootRotation;                                           // 0x4A54(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              FloatRootRotation;                                         // 0x4A58(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              HitDirection;                                              // 0x4A5C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              Hit_Strength;                                              // 0x4A60(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                     Weapon_Offset;                                             // 0x4A64(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              SkateAimYaw;                                               // 0x4A70(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              FloatAimYaw;                                               // 0x4A74(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              MaxSkateSpeed;                                             // 0x4A78(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              MaxFloatSpeed;                                             // 0x4A7C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              SkateDirection;                                            // 0x4A80(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              FloatDirection;                                            // 0x4A84(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               UseRightFootIK;                                            // 0x4A88(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               UseLeftFootIK;                                             // 0x4A89(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               UseFootIK;                                                 // 0x4A8A(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_1SGA[0x1];                                     // 0x4A8B(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FVector                                     RightFootEffectorLocation;                                 // 0x4A8C(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                     RightKneeTarget;                                           // 0x4A98(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                     LeftFootEffectorLocation;                                  // 0x4AA4(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                     LeftKneeTarget;                                            // 0x4AB0(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              Max_IK_Foot_Offset;                                        // 0x4ABC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              Max_IK_Pelvis_Offset;                                      // 0x4AC0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              Pelvis_Offset;                                             // 0x4AC4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              SkateRotationInterpSpeed;                                  // 0x4AC8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                     LeftElbowTarget;                                           // 0x4ACC(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              SkateBlendInTime;                                          // 0x4AD8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              SkateBlendOutTime;                                         // 0x4ADC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              HeadScale;                                                 // 0x4AE0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              FeetScale;                                                 // 0x4AE4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               IsBigHead;                                                 // 0x4AE8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               IsShoeKid;                                                 // 0x4AE9(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr){
			ptr = UObject::FindClass("AnimBlueprintGeneratedClass ABP_Character_3P.ABP_Character_3P_C");
		}
		return ptr;
	}



	void AnimGraph(struct FPoseLink* AnimGraph);
	void Determine_Is_Floating();
	void Determine_Is_Skating();
	void Setup_Foot_IK(const struct FName& FootIKBoneName, struct FVector* EffectorLocation, const struct FName& KneeTargetName, struct FVector* KneeTarget, bool* Success, float* Z_Offset);
	void Get_Foot_Size(float* Size);
	void Get_Weapon_Scale(class AMAWeaponAttachment* Weapon_Attachment, float* Scale);
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Character_3P_AnimGraphNode_ModifyBone_901096F34B01E9E0E67D0DB698BEAD81();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Character_3P_AnimGraphNode_ModifyBone_C1D38FB9441364A39110A8A167F7263A();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Character_3P_AnimGraphNode_ModifyBone_49899B3A4C8F4FF1CF32F68C37C30DC0();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Character_3P_AnimGraphNode_CopyBone_3618154544C293921118B7B6A30111BA();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Character_3P_AnimGraphNode_ApplyAdditive_D8200478415CFFBB7F0A428877B4BD52();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Character_3P_AnimGraphNode_BlendSpacePlayer_E1E5BA194FBEC76C01E85B8789F7DD41();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Character_3P_AnimGraphNode_RotateRootBone_3DDF4512453DF2A2A503D7A2D73B024F();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Character_3P_AnimGraphNode_RotationOffsetBlendSpace_E703F5334BF3B327AD5A5DA09924A6A2();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Character_3P_AnimGraphNode_TwoBoneIK_D9F680404411F95037BAF0B2A285A87B();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Character_3P_AnimGraphNode_CopyBone_99083CF3433ACD4EB7050C90155388B2();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Character_3P_AnimGraphNode_ModifyBone_AB68DF7945B80BCBED9598B1CF40BA72();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Character_3P_AnimGraphNode_TwoBoneIK_3795322D4EA377DF0A68179A1847BFF0();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Character_3P_AnimGraphNode_BlendListByBool_63FE75D64AACDA868A8F789957CA7B8F();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Character_3P_AnimGraphNode_RotationOffsetBlendSpace_5189391A4BBB19A61BED2082643E9CD5();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Character_3P_AnimGraphNode_TransitionResult_D3F91B0349DA2274D9BE099C799F106D();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Character_3P_AnimGraphNode_TransitionResult_F125F0964BC45992BC6CB79E43DA3F30();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Character_3P_AnimGraphNode_TransitionResult_4BDEDE6B42E7E6615D19658447987A8A();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Character_3P_AnimGraphNode_ModifyBone_464F6EB344382B938AA6158EA098FF0D();
	void BlueprintUpdateAnimation(float DeltaTimeX);
	void BlueprintInitializeAnimation();
	void AnimNotify_OnFootStep();
	void Hit();
	void Player_State_Received(class APlayerState* Player_State);
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Character_3P_AnimGraphNode_ModifyBone_F5BCAC284A983E6431BE99B1E82C1A78();
	void ExecuteUbergraph_ABP_Character_3P(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
