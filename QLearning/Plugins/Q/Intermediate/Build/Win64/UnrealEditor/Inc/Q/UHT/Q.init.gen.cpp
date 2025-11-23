// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeQ_init() {}
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_Q;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_Q()
	{
		if (!Z_Registration_Info_UPackage__Script_Q.OuterSingleton)
		{
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/Q",
				nullptr,
				0,
				PKG_CompiledIn | 0x00000000,
				0xAD5CC25B,
				0x3F0533E9,
				METADATA_PARAMS(0, nullptr)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_Q.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_Q.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_Q(Z_Construct_UPackage__Script_Q, TEXT("/Script/Q"), Z_Registration_Info_UPackage__Script_Q, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0xAD5CC25B, 0x3F0533E9));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
