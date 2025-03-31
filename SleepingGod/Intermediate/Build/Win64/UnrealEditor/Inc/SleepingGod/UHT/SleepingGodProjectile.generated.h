// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "SleepingGodProjectile.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class UPrimitiveComponent;
struct FHitResult;
#ifdef SLEEPINGGOD_SleepingGodProjectile_generated_h
#error "SleepingGodProjectile.generated.h already included, missing '#pragma once' in SleepingGodProjectile.h"
#endif
#define SLEEPINGGOD_SleepingGodProjectile_generated_h

#define FID_Users_oulis_Documents_Unreal_Projects_SleepingGod_Source_SleepingGod_SleepingGodProjectile_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execOnHit);


#define FID_Users_oulis_Documents_Unreal_Projects_SleepingGod_Source_SleepingGod_SleepingGodProjectile_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesASleepingGodProjectile(); \
	friend struct Z_Construct_UClass_ASleepingGodProjectile_Statics; \
public: \
	DECLARE_CLASS(ASleepingGodProjectile, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/SleepingGod"), NO_API) \
	DECLARE_SERIALIZER(ASleepingGodProjectile) \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define FID_Users_oulis_Documents_Unreal_Projects_SleepingGod_Source_SleepingGod_SleepingGodProjectile_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ASleepingGodProjectile(ASleepingGodProjectile&&); \
	ASleepingGodProjectile(const ASleepingGodProjectile&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASleepingGodProjectile); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASleepingGodProjectile); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ASleepingGodProjectile) \
	NO_API virtual ~ASleepingGodProjectile();


#define FID_Users_oulis_Documents_Unreal_Projects_SleepingGod_Source_SleepingGod_SleepingGodProjectile_h_12_PROLOG
#define FID_Users_oulis_Documents_Unreal_Projects_SleepingGod_Source_SleepingGod_SleepingGodProjectile_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_oulis_Documents_Unreal_Projects_SleepingGod_Source_SleepingGod_SleepingGodProjectile_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_oulis_Documents_Unreal_Projects_SleepingGod_Source_SleepingGod_SleepingGodProjectile_h_15_INCLASS_NO_PURE_DECLS \
	FID_Users_oulis_Documents_Unreal_Projects_SleepingGod_Source_SleepingGod_SleepingGodProjectile_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SLEEPINGGOD_API UClass* StaticClass<class ASleepingGodProjectile>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_oulis_Documents_Unreal_Projects_SleepingGod_Source_SleepingGod_SleepingGodProjectile_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
