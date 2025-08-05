// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TouchEngine/Public/TouchEngineIntVector4.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTouchEngineIntVector4() {}

// Begin Cross Module References
TOUCHENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTouchEngineIntVector4();
UPackage* Z_Construct_UPackage__Script_TouchEngine();
// End Cross Module References

// Begin ScriptStruct FTouchEngineIntVector4
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_TouchEngineIntVector4;
class UScriptStruct* FTouchEngineIntVector4::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_TouchEngineIntVector4.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_TouchEngineIntVector4.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FTouchEngineIntVector4, (UObject*)Z_Construct_UPackage__Script_TouchEngine(), TEXT("TouchEngineIntVector4"));
	}
	return Z_Registration_Info_UScriptStruct_TouchEngineIntVector4.OuterSingleton;
}
template<> TOUCHENGINE_API UScriptStruct* StaticStruct<FTouchEngineIntVector4>()
{
	return FTouchEngineIntVector4::StaticStruct();
}
struct Z_Construct_UScriptStruct_FTouchEngineIntVector4_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "/**\n *\n */" },
		{ "ModuleRelativePath", "Public/TouchEngineIntVector4.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_X_MetaData[] = {
		{ "Category", "Values" },
		{ "ModuleRelativePath", "Public/TouchEngineIntVector4.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Y_MetaData[] = {
		{ "Category", "Values" },
		{ "ModuleRelativePath", "Public/TouchEngineIntVector4.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Z_MetaData[] = {
		{ "Category", "Values" },
		{ "ModuleRelativePath", "Public/TouchEngineIntVector4.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_W_MetaData[] = {
		{ "Category", "Values" },
		{ "ModuleRelativePath", "Public/TouchEngineIntVector4.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_X;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Y;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Z;
	static const UECodeGen_Private::FIntPropertyParams NewProp_W;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FTouchEngineIntVector4>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FTouchEngineIntVector4_Statics::NewProp_X = { "X", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTouchEngineIntVector4, X), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_X_MetaData), NewProp_X_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FTouchEngineIntVector4_Statics::NewProp_Y = { "Y", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTouchEngineIntVector4, Y), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Y_MetaData), NewProp_Y_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FTouchEngineIntVector4_Statics::NewProp_Z = { "Z", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTouchEngineIntVector4, Z), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Z_MetaData), NewProp_Z_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FTouchEngineIntVector4_Statics::NewProp_W = { "W", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTouchEngineIntVector4, W), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_W_MetaData), NewProp_W_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FTouchEngineIntVector4_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTouchEngineIntVector4_Statics::NewProp_X,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTouchEngineIntVector4_Statics::NewProp_Y,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTouchEngineIntVector4_Statics::NewProp_Z,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTouchEngineIntVector4_Statics::NewProp_W,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTouchEngineIntVector4_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FTouchEngineIntVector4_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_TouchEngine,
	nullptr,
	&NewStructOps,
	"TouchEngineIntVector4",
	Z_Construct_UScriptStruct_FTouchEngineIntVector4_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTouchEngineIntVector4_Statics::PropPointers),
	sizeof(FTouchEngineIntVector4),
	alignof(FTouchEngineIntVector4),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTouchEngineIntVector4_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FTouchEngineIntVector4_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FTouchEngineIntVector4()
{
	if (!Z_Registration_Info_UScriptStruct_TouchEngineIntVector4.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_TouchEngineIntVector4.InnerSingleton, Z_Construct_UScriptStruct_FTouchEngineIntVector4_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_TouchEngineIntVector4.InnerSingleton;
}
// End ScriptStruct FTouchEngineIntVector4

// Begin Registration
struct Z_CompiledInDeferFile_FID_HostProject_Plugins_TouchEngine_Source_TouchEngine_Public_TouchEngineIntVector4_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FTouchEngineIntVector4::StaticStruct, Z_Construct_UScriptStruct_FTouchEngineIntVector4_Statics::NewStructOps, TEXT("TouchEngineIntVector4"), &Z_Registration_Info_UScriptStruct_TouchEngineIntVector4, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FTouchEngineIntVector4), 262539891U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_TouchEngine_Source_TouchEngine_Public_TouchEngineIntVector4_h_2504466556(TEXT("/Script/TouchEngine"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_HostProject_Plugins_TouchEngine_Source_TouchEngine_Public_TouchEngineIntVector4_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_TouchEngine_Source_TouchEngine_Public_TouchEngineIntVector4_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
