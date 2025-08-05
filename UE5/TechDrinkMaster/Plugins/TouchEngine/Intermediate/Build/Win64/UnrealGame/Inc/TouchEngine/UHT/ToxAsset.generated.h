// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ToxAsset.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef TOUCHENGINE_ToxAsset_generated_h
#error "ToxAsset.generated.h already included, missing '#pragma once' in ToxAsset.h"
#endif
#define TOUCHENGINE_ToxAsset_generated_h

#define FID_HostProject_Plugins_TouchEngine_Source_TouchEngine_Public_ToxAsset_h_35_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execSetFilePath); \
	DECLARE_FUNCTION(execGetRelativeFilePath); \
	DECLARE_FUNCTION(execGetAbsoluteFilePath);


#define FID_HostProject_Plugins_TouchEngine_Source_TouchEngine_Public_ToxAsset_h_35_ARCHIVESERIALIZER \
	DECLARE_FSTRUCTUREDARCHIVE_SERIALIZER(UToxAsset, NO_API)


#define FID_HostProject_Plugins_TouchEngine_Source_TouchEngine_Public_ToxAsset_h_35_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUToxAsset(); \
	friend struct Z_Construct_UClass_UToxAsset_Statics; \
public: \
	DECLARE_CLASS(UToxAsset, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/TouchEngine"), NO_API) \
	DECLARE_SERIALIZER(UToxAsset) \
	FID_HostProject_Plugins_TouchEngine_Source_TouchEngine_Public_ToxAsset_h_35_ARCHIVESERIALIZER


#define FID_HostProject_Plugins_TouchEngine_Source_TouchEngine_Public_ToxAsset_h_35_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UToxAsset(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UToxAsset(UToxAsset&&); \
	UToxAsset(const UToxAsset&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UToxAsset); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UToxAsset); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UToxAsset) \
	NO_API virtual ~UToxAsset();


#define FID_HostProject_Plugins_TouchEngine_Source_TouchEngine_Public_ToxAsset_h_32_PROLOG
#define FID_HostProject_Plugins_TouchEngine_Source_TouchEngine_Public_ToxAsset_h_35_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_HostProject_Plugins_TouchEngine_Source_TouchEngine_Public_ToxAsset_h_35_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_HostProject_Plugins_TouchEngine_Source_TouchEngine_Public_ToxAsset_h_35_INCLASS_NO_PURE_DECLS \
	FID_HostProject_Plugins_TouchEngine_Source_TouchEngine_Public_ToxAsset_h_35_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> TOUCHENGINE_API UClass* StaticClass<class UToxAsset>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_HostProject_Plugins_TouchEngine_Source_TouchEngine_Public_ToxAsset_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
