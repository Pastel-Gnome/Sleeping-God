// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSleepingGod_init() {}
	SLEEPINGGOD_API UFunction* Z_Construct_UDelegateFunction_SleepingGod_OnPickUp__DelegateSignature();
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_SleepingGod;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_SleepingGod()
	{
		if (!Z_Registration_Info_UPackage__Script_SleepingGod.OuterSingleton)
		{
			static UObject* (*const SingletonFuncArray[])() = {
				(UObject* (*)())Z_Construct_UDelegateFunction_SleepingGod_OnPickUp__DelegateSignature,
			};
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/SleepingGod",
				SingletonFuncArray,
				UE_ARRAY_COUNT(SingletonFuncArray),
				PKG_CompiledIn | 0x00000000,
				0xF98590EF,
				0x6DEF0CAC,
				METADATA_PARAMS(0, nullptr)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_SleepingGod.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_SleepingGod.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_SleepingGod(Z_Construct_UPackage__Script_SleepingGod, TEXT("/Script/SleepingGod"), Z_Registration_Info_UPackage__Script_SleepingGod, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0xF98590EF, 0x6DEF0CAC));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
