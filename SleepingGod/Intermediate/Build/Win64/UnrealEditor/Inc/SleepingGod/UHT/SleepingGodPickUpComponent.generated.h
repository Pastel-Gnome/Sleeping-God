// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "SleepingGodPickUpComponent.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class ASleepingGodCharacter;
class UPrimitiveComponent;
struct FHitResult;
#ifdef SLEEPINGGOD_SleepingGodPickUpComponent_generated_h
#error "SleepingGodPickUpComponent.generated.h already included, missing '#pragma once' in SleepingGodPickUpComponent.h"
#endif
#define SLEEPINGGOD_SleepingGodPickUpComponent_generated_h

#define FID_Users_oulis_Documents_Unreal_Projects_SleepingGod_Source_SleepingGod_SleepingGodPickUpComponent_h_12_DELEGATE \
SLEEPINGGOD_API void FOnPickUp_DelegateWrapper(const FMulticastScriptDelegate& OnPickUp, ASleepingGodCharacter* PickUpCharacter);


#define FID_Users_oulis_Documents_Unreal_Projects_SleepingGod_Source_SleepingGod_SleepingGodPickUpComponent_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execOnSphereBeginOverlap);


#define FID_Users_oulis_Documents_Unreal_Projects_SleepingGod_Source_SleepingGod_SleepingGodPickUpComponent_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSleepingGodPickUpComponent(); \
	friend struct Z_Construct_UClass_USleepingGodPickUpComponent_Statics; \
public: \
	DECLARE_CLASS(USleepingGodPickUpComponent, USphereComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/SleepingGod"), NO_API) \
	DECLARE_SERIALIZER(USleepingGodPickUpComponent)


#define FID_Users_oulis_Documents_Unreal_Projects_SleepingGod_Source_SleepingGod_SleepingGodPickUpComponent_h_17_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	USleepingGodPickUpComponent(USleepingGodPickUpComponent&&); \
	USleepingGodPickUpComponent(const USleepingGodPickUpComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USleepingGodPickUpComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USleepingGodPickUpComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(USleepingGodPickUpComponent) \
	NO_API virtual ~USleepingGodPickUpComponent();


#define FID_Users_oulis_Documents_Unreal_Projects_SleepingGod_Source_SleepingGod_SleepingGodPickUpComponent_h_14_PROLOG
#define FID_Users_oulis_Documents_Unreal_Projects_SleepingGod_Source_SleepingGod_SleepingGodPickUpComponent_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_oulis_Documents_Unreal_Projects_SleepingGod_Source_SleepingGod_SleepingGodPickUpComponent_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_oulis_Documents_Unreal_Projects_SleepingGod_Source_SleepingGod_SleepingGodPickUpComponent_h_17_INCLASS_NO_PURE_DECLS \
	FID_Users_oulis_Documents_Unreal_Projects_SleepingGod_Source_SleepingGod_SleepingGodPickUpComponent_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SLEEPINGGOD_API UClass* StaticClass<class USleepingGodPickUpComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_oulis_Documents_Unreal_Projects_SleepingGod_Source_SleepingGod_SleepingGodPickUpComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
