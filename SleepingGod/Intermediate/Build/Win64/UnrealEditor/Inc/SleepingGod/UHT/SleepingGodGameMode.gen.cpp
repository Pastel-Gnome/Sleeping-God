// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SleepingGod/SleepingGodGameMode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSleepingGodGameMode() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
SLEEPINGGOD_API UClass* Z_Construct_UClass_ASleepingGodGameMode();
SLEEPINGGOD_API UClass* Z_Construct_UClass_ASleepingGodGameMode_NoRegister();
UPackage* Z_Construct_UPackage__Script_SleepingGod();
// End Cross Module References

// Begin Class ASleepingGodGameMode
void ASleepingGodGameMode::StaticRegisterNativesASleepingGodGameMode()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ASleepingGodGameMode);
UClass* Z_Construct_UClass_ASleepingGodGameMode_NoRegister()
{
	return ASleepingGodGameMode::StaticClass();
}
struct Z_Construct_UClass_ASleepingGodGameMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "SleepingGodGameMode.h" },
		{ "ModuleRelativePath", "SleepingGodGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASleepingGodGameMode>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_ASleepingGodGameMode_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AGameModeBase,
	(UObject* (*)())Z_Construct_UPackage__Script_SleepingGod,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ASleepingGodGameMode_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ASleepingGodGameMode_Statics::ClassParams = {
	&ASleepingGodGameMode::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ASleepingGodGameMode_Statics::Class_MetaDataParams), Z_Construct_UClass_ASleepingGodGameMode_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ASleepingGodGameMode()
{
	if (!Z_Registration_Info_UClass_ASleepingGodGameMode.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ASleepingGodGameMode.OuterSingleton, Z_Construct_UClass_ASleepingGodGameMode_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ASleepingGodGameMode.OuterSingleton;
}
template<> SLEEPINGGOD_API UClass* StaticClass<ASleepingGodGameMode>()
{
	return ASleepingGodGameMode::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ASleepingGodGameMode);
ASleepingGodGameMode::~ASleepingGodGameMode() {}
// End Class ASleepingGodGameMode

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_oulis_Documents_Unreal_Projects_SleepingGod_Source_SleepingGod_SleepingGodGameMode_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ASleepingGodGameMode, ASleepingGodGameMode::StaticClass, TEXT("ASleepingGodGameMode"), &Z_Registration_Info_UClass_ASleepingGodGameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ASleepingGodGameMode), 130634490U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_oulis_Documents_Unreal_Projects_SleepingGod_Source_SleepingGod_SleepingGodGameMode_h_4188197251(TEXT("/Script/SleepingGod"),
	Z_CompiledInDeferFile_FID_Users_oulis_Documents_Unreal_Projects_SleepingGod_Source_SleepingGod_SleepingGodGameMode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_oulis_Documents_Unreal_Projects_SleepingGod_Source_SleepingGod_SleepingGodGameMode_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
