// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Blueprint/TouchEngineComponent.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UTexture2D;
enum class ECookFrameResult : uint8;
struct FTouchEngineInputFrameData;
struct FTouchEngineOutputFrameData;
#ifdef TOUCHENGINE_TouchEngineComponent_generated_h
#error "TouchEngineComponent.generated.h already included, missing '#pragma once' in TouchEngineComponent.h"
#endif
#define TOUCHENGINE_TouchEngineComponent_generated_h

#define FID_HostProject_Plugins_TouchEngine_Source_TouchEngine_Public_Blueprint_TouchEngineComponent_h_37_DELEGATE \
TOUCHENGINE_API void FOnToxStartedLoading_DelegateWrapper(const FMulticastScriptDelegate& OnToxStartedLoading);


#define FID_HostProject_Plugins_TouchEngine_Source_TouchEngine_Public_Blueprint_TouchEngineComponent_h_40_DELEGATE \
TOUCHENGINE_API void FOnToxLoaded_DelegateWrapper(const FMulticastScriptDelegate& OnToxLoaded);


#define FID_HostProject_Plugins_TouchEngine_Source_TouchEngine_Public_Blueprint_TouchEngineComponent_h_43_DELEGATE \
TOUCHENGINE_API void FOnToxReset_DelegateWrapper(const FMulticastScriptDelegate& OnToxReset);


#define FID_HostProject_Plugins_TouchEngine_Source_TouchEngine_Public_Blueprint_TouchEngineComponent_h_46_DELEGATE \
TOUCHENGINE_API void FOnToxFailedLoad_DelegateWrapper(const FMulticastScriptDelegate& OnToxFailedLoad, const FString& ErrorMessage);


#define FID_HostProject_Plugins_TouchEngine_Source_TouchEngine_Public_Blueprint_TouchEngineComponent_h_49_DELEGATE \
TOUCHENGINE_API void FOnToxUnloaded_DelegateWrapper(const FMulticastScriptDelegate& OnToxUnloaded);


#define FID_HostProject_Plugins_TouchEngine_Source_TouchEngine_Public_Blueprint_TouchEngineComponent_h_52_DELEGATE \
TOUCHENGINE_API void FOnStartFrame_DelegateWrapper(const FMulticastScriptDelegate& OnStartFrame, FTouchEngineInputFrameData const& FrameData);


#define FID_HostProject_Plugins_TouchEngine_Source_TouchEngine_Public_Blueprint_TouchEngineComponent_h_55_DELEGATE \
TOUCHENGINE_API void FOnEndFrame_DelegateWrapper(const FMulticastScriptDelegate& OnEndFrame, bool IsSuccessful, ECookFrameResult Result, FTouchEngineOutputFrameData const& FrameData);


#define FID_HostProject_Plugins_TouchEngine_Source_TouchEngine_Public_Blueprint_TouchEngineComponent_h_56_DELEGATE \
TOUCHENGINE_API void FBeginPlay_DelegateWrapper(const FMulticastScriptDelegate& BeginPlay);


#define FID_HostProject_Plugins_TouchEngine_Source_TouchEngine_Public_Blueprint_TouchEngineComponent_h_57_DELEGATE \
TOUCHENGINE_API void FEndPlay_DelegateWrapper(const FMulticastScriptDelegate& EndPlay);


#define FID_HostProject_Plugins_TouchEngine_Source_TouchEngine_Public_Blueprint_TouchEngineComponent_h_89_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execKeepFrameTexture); \
	DECLARE_FUNCTION(execIsRunning); \
	DECLARE_FUNCTION(execCanStart); \
	DECLARE_FUNCTION(execStopTouchEngine); \
	DECLARE_FUNCTION(execStartTouchEngine); \
	DECLARE_FUNCTION(execLoadTox);


#define FID_HostProject_Plugins_TouchEngine_Source_TouchEngine_Public_Blueprint_TouchEngineComponent_h_89_ARCHIVESERIALIZER \
	DECLARE_FSTRUCTUREDARCHIVE_SERIALIZER(UTouchEngineComponentBase, NO_API)


#define FID_HostProject_Plugins_TouchEngine_Source_TouchEngine_Public_Blueprint_TouchEngineComponent_h_89_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUTouchEngineComponentBase(); \
	friend struct Z_Construct_UClass_UTouchEngineComponentBase_Statics; \
public: \
	DECLARE_CLASS(UTouchEngineComponentBase, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/TouchEngine"), NO_API) \
	DECLARE_SERIALIZER(UTouchEngineComponentBase) \
	FID_HostProject_Plugins_TouchEngine_Source_TouchEngine_Public_Blueprint_TouchEngineComponent_h_89_ARCHIVESERIALIZER


#define FID_HostProject_Plugins_TouchEngine_Source_TouchEngine_Public_Blueprint_TouchEngineComponent_h_89_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UTouchEngineComponentBase(UTouchEngineComponentBase&&); \
	UTouchEngineComponentBase(const UTouchEngineComponentBase&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UTouchEngineComponentBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTouchEngineComponentBase); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UTouchEngineComponentBase) \
	NO_API virtual ~UTouchEngineComponentBase();


#define FID_HostProject_Plugins_TouchEngine_Source_TouchEngine_Public_Blueprint_TouchEngineComponent_h_86_PROLOG
#define FID_HostProject_Plugins_TouchEngine_Source_TouchEngine_Public_Blueprint_TouchEngineComponent_h_89_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_HostProject_Plugins_TouchEngine_Source_TouchEngine_Public_Blueprint_TouchEngineComponent_h_89_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_HostProject_Plugins_TouchEngine_Source_TouchEngine_Public_Blueprint_TouchEngineComponent_h_89_INCLASS_NO_PURE_DECLS \
	FID_HostProject_Plugins_TouchEngine_Source_TouchEngine_Public_Blueprint_TouchEngineComponent_h_89_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> TOUCHENGINE_API UClass* StaticClass<class UTouchEngineComponentBase>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_HostProject_Plugins_TouchEngine_Source_TouchEngine_Public_Blueprint_TouchEngineComponent_h


#define FOREACH_ENUM_ETOUCHENGINECOOKMODE(op) \
	op(ETouchEngineCookMode::Synchronized) \
	op(ETouchEngineCookMode::DelayedSynchronized) \
	op(ETouchEngineCookMode::Independent) \
	op(ETouchEngineCookMode::Max) 

enum class ETouchEngineCookMode : uint8;
template<> struct TIsUEnumClass<ETouchEngineCookMode> { enum { Value = true }; };
template<> TOUCHENGINE_API UEnum* StaticEnum<ETouchEngineCookMode>();

#define FOREACH_ENUM_ETOUCHENGINESENDMODE(op) \
	op(ETouchEngineSendMode::EveryFrame) \
	op(ETouchEngineSendMode::OnAccess) \
	op(ETouchEngineSendMode::Max) 

enum class ETouchEngineSendMode : uint8;
template<> struct TIsUEnumClass<ETouchEngineSendMode> { enum { Value = true }; };
template<> TOUCHENGINE_API UEnum* StaticEnum<ETouchEngineSendMode>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
