// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVolumetric_init() {}
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_Volumetric;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_Volumetric()
	{
		if (!Z_Registration_Info_UPackage__Script_Volumetric.OuterSingleton)
		{
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/Volumetric",
				nullptr,
				0,
				PKG_CompiledIn | 0x00000000,
				0x8EEF4B99,
				0x54499717,
				METADATA_PARAMS(0, nullptr)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_Volumetric.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_Volumetric.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_Volumetric(Z_Construct_UPackage__Script_Volumetric, TEXT("/Script/Volumetric"), Z_Registration_Info_UPackage__Script_Volumetric, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0x8EEF4B99, 0x54499717));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
