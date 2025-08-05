// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Engine/TouchEngineSubsystem.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef TOUCHENGINE_TouchEngineSubsystem_generated_h
#error "TouchEngineSubsystem.generated.h already included, missing '#pragma once' in TouchEngineSubsystem.h"
#endif
#define TOUCHENGINE_TouchEngineSubsystem_generated_h

#define FID_HostProject_Plugins_TouchEngine_Source_TouchEngine_Public_Engine_TouchEngineSubsystem_h_49_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUTouchEngineSubsystem(); \
	friend struct Z_Construct_UClass_UTouchEngineSubsystem_Statics; \
public: \
	DECLARE_CLASS(UTouchEngineSubsystem, UEngineSubsystem, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/TouchEngine"), NO_API) \
	DECLARE_SERIALIZER(UTouchEngineSubsystem)


#define FID_HostProject_Plugins_TouchEngine_Source_TouchEngine_Public_Engine_TouchEngineSubsystem_h_49_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UTouchEngineSubsystem(); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UTouchEngineSubsystem(UTouchEngineSubsystem&&); \
	UTouchEngineSubsystem(const UTouchEngineSubsystem&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UTouchEngineSubsystem); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTouchEngineSubsystem); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UTouchEngineSubsystem) \
	NO_API virtual ~UTouchEngineSubsystem();


#define FID_HostProject_Plugins_TouchEngine_Source_TouchEngine_Public_Engine_TouchEngineSubsystem_h_46_PROLOG
#define FID_HostProject_Plugins_TouchEngine_Source_TouchEngine_Public_Engine_TouchEngineSubsystem_h_49_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_HostProject_Plugins_TouchEngine_Source_TouchEngine_Public_Engine_TouchEngineSubsystem_h_49_INCLASS_NO_PURE_DECLS \
	FID_HostProject_Plugins_TouchEngine_Source_TouchEngine_Public_Engine_TouchEngineSubsystem_h_49_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> TOUCHENGINE_API UClass* StaticClass<class UTouchEngineSubsystem>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_HostProject_Plugins_TouchEngine_Source_TouchEngine_Public_Engine_TouchEngineSubsystem_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
