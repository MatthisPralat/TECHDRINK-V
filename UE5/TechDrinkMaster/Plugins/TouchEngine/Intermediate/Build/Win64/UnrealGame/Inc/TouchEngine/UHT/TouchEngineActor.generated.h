// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Blueprint/TouchEngineActor.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UTouchEngineComponentBase;
#ifdef TOUCHENGINE_TouchEngineActor_generated_h
#error "TouchEngineActor.generated.h already included, missing '#pragma once' in TouchEngineActor.h"
#endif
#define TOUCHENGINE_TouchEngineActor_generated_h

#define FID_HostProject_Plugins_TouchEngine_Source_TouchEngine_Public_Blueprint_TouchEngineActor_h_26_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetTouchEngineComponent);


#define FID_HostProject_Plugins_TouchEngine_Source_TouchEngine_Public_Blueprint_TouchEngineActor_h_26_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesATouchEngineActor(); \
	friend struct Z_Construct_UClass_ATouchEngineActor_Statics; \
public: \
	DECLARE_CLASS(ATouchEngineActor, AActor, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Config), CASTCLASS_None, TEXT("/Script/TouchEngine"), NO_API) \
	DECLARE_SERIALIZER(ATouchEngineActor)


#define FID_HostProject_Plugins_TouchEngine_Source_TouchEngine_Public_Blueprint_TouchEngineActor_h_26_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ATouchEngineActor(ATouchEngineActor&&); \
	ATouchEngineActor(const ATouchEngineActor&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ATouchEngineActor); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ATouchEngineActor); \
	DEFINE_ABSTRACT_DEFAULT_CONSTRUCTOR_CALL(ATouchEngineActor) \
	NO_API virtual ~ATouchEngineActor();


#define FID_HostProject_Plugins_TouchEngine_Source_TouchEngine_Public_Blueprint_TouchEngineActor_h_23_PROLOG
#define FID_HostProject_Plugins_TouchEngine_Source_TouchEngine_Public_Blueprint_TouchEngineActor_h_26_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_HostProject_Plugins_TouchEngine_Source_TouchEngine_Public_Blueprint_TouchEngineActor_h_26_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_HostProject_Plugins_TouchEngine_Source_TouchEngine_Public_Blueprint_TouchEngineActor_h_26_INCLASS_NO_PURE_DECLS \
	FID_HostProject_Plugins_TouchEngine_Source_TouchEngine_Public_Blueprint_TouchEngineActor_h_26_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> TOUCHENGINE_API UClass* StaticClass<class ATouchEngineActor>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_HostProject_Plugins_TouchEngine_Source_TouchEngine_Public_Blueprint_TouchEngineActor_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
