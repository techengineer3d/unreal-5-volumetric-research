// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Volumetric/VolumetricGameMode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVolumetricGameMode() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
UPackage* Z_Construct_UPackage__Script_Volumetric();
VOLUMETRIC_API UClass* Z_Construct_UClass_AVolumetricGameMode();
VOLUMETRIC_API UClass* Z_Construct_UClass_AVolumetricGameMode_NoRegister();
// End Cross Module References

// Begin Class AVolumetricGameMode
void AVolumetricGameMode::StaticRegisterNativesAVolumetricGameMode()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AVolumetricGameMode);
UClass* Z_Construct_UClass_AVolumetricGameMode_NoRegister()
{
	return AVolumetricGameMode::StaticClass();
}
struct Z_Construct_UClass_AVolumetricGameMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "VolumetricGameMode.h" },
		{ "ModuleRelativePath", "VolumetricGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AVolumetricGameMode>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_AVolumetricGameMode_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AGameModeBase,
	(UObject* (*)())Z_Construct_UPackage__Script_Volumetric,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AVolumetricGameMode_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AVolumetricGameMode_Statics::ClassParams = {
	&AVolumetricGameMode::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x008802ACu,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AVolumetricGameMode_Statics::Class_MetaDataParams), Z_Construct_UClass_AVolumetricGameMode_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AVolumetricGameMode()
{
	if (!Z_Registration_Info_UClass_AVolumetricGameMode.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AVolumetricGameMode.OuterSingleton, Z_Construct_UClass_AVolumetricGameMode_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AVolumetricGameMode.OuterSingleton;
}
template<> VOLUMETRIC_API UClass* StaticClass<AVolumetricGameMode>()
{
	return AVolumetricGameMode::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AVolumetricGameMode);
AVolumetricGameMode::~AVolumetricGameMode() {}
// End Class AVolumetricGameMode

// Begin Registration
struct Z_CompiledInDeferFile_FID_Projects_Unreal_Engine_5_Volumetric_Source_Volumetric_VolumetricGameMode_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AVolumetricGameMode, AVolumetricGameMode::StaticClass, TEXT("AVolumetricGameMode"), &Z_Registration_Info_UClass_AVolumetricGameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AVolumetricGameMode), 2226738331U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Projects_Unreal_Engine_5_Volumetric_Source_Volumetric_VolumetricGameMode_h_4119512299(TEXT("/Script/Volumetric"),
	Z_CompiledInDeferFile_FID_Projects_Unreal_Engine_5_Volumetric_Source_Volumetric_VolumetricGameMode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Projects_Unreal_Engine_5_Volumetric_Source_Volumetric_VolumetricGameMode_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
