// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TouchEngine/Public/Engine/TouchVariables.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTouchVariables() {}

// Begin Cross Module References
TOUCHENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTouchEngineCHOP();
TOUCHENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTouchEngineCHOPChannel();
TOUCHENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTouchEngineDATData();
TOUCHENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTouchEngineDATLine();
UPackage* Z_Construct_UPackage__Script_TouchEngine();
// End Cross Module References

// Begin ScriptStruct FTouchEngineCHOPChannel
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_TouchEngineCHOPChannel;
class UScriptStruct* FTouchEngineCHOPChannel::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_TouchEngineCHOPChannel.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_TouchEngineCHOPChannel.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FTouchEngineCHOPChannel, (UObject*)Z_Construct_UPackage__Script_TouchEngine(), TEXT("TouchEngineCHOPChannel"));
	}
	return Z_Registration_Info_UScriptStruct_TouchEngineCHOPChannel.OuterSingleton;
}
template<> TOUCHENGINE_API UScriptStruct* StaticStruct<FTouchEngineCHOPChannel>()
{
	return FTouchEngineCHOPChannel::StaticStruct();
}
struct Z_Construct_UScriptStruct_FTouchEngineCHOPChannel_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "DisplayName", "TouchEngine CHOP Channel" },
		{ "ModuleRelativePath", "Public/Engine/TouchVariables.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Values_MetaData[] = {
		{ "Category", "TouchEngine" },
		{ "ModuleRelativePath", "Public/Engine/TouchVariables.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[] = {
		{ "Category", "TouchEngine" },
		{ "ModuleRelativePath", "Public/Engine/TouchVariables.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Values_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Values;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Name;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FTouchEngineCHOPChannel>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FTouchEngineCHOPChannel_Statics::NewProp_Values_Inner = { "Values", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FTouchEngineCHOPChannel_Statics::NewProp_Values = { "Values", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTouchEngineCHOPChannel, Values), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Values_MetaData), NewProp_Values_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FTouchEngineCHOPChannel_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTouchEngineCHOPChannel, Name), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Name_MetaData), NewProp_Name_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FTouchEngineCHOPChannel_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTouchEngineCHOPChannel_Statics::NewProp_Values_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTouchEngineCHOPChannel_Statics::NewProp_Values,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTouchEngineCHOPChannel_Statics::NewProp_Name,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTouchEngineCHOPChannel_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FTouchEngineCHOPChannel_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_TouchEngine,
	nullptr,
	&NewStructOps,
	"TouchEngineCHOPChannel",
	Z_Construct_UScriptStruct_FTouchEngineCHOPChannel_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTouchEngineCHOPChannel_Statics::PropPointers),
	sizeof(FTouchEngineCHOPChannel),
	alignof(FTouchEngineCHOPChannel),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTouchEngineCHOPChannel_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FTouchEngineCHOPChannel_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FTouchEngineCHOPChannel()
{
	if (!Z_Registration_Info_UScriptStruct_TouchEngineCHOPChannel.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_TouchEngineCHOPChannel.InnerSingleton, Z_Construct_UScriptStruct_FTouchEngineCHOPChannel_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_TouchEngineCHOPChannel.InnerSingleton;
}
// End ScriptStruct FTouchEngineCHOPChannel

// Begin ScriptStruct FTouchEngineCHOP
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_TouchEngineCHOP;
class UScriptStruct* FTouchEngineCHOP::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_TouchEngineCHOP.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_TouchEngineCHOP.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FTouchEngineCHOP, (UObject*)Z_Construct_UPackage__Script_TouchEngine(), TEXT("TouchEngineCHOP"));
	}
	return Z_Registration_Info_UScriptStruct_TouchEngineCHOP.OuterSingleton;
}
template<> TOUCHENGINE_API UScriptStruct* StaticStruct<FTouchEngineCHOP>()
{
	return FTouchEngineCHOP::StaticStruct();
}
struct Z_Construct_UScriptStruct_FTouchEngineCHOP_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "DisplayName", "TouchEngine CHOP" },
		{ "ModuleRelativePath", "Public/Engine/TouchVariables.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Channels_MetaData[] = {
		{ "Category", "TouchEngine" },
		{ "ModuleRelativePath", "Public/Engine/TouchVariables.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Channels_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Channels;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FTouchEngineCHOP>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FTouchEngineCHOP_Statics::NewProp_Channels_Inner = { "Channels", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FTouchEngineCHOPChannel, METADATA_PARAMS(0, nullptr) }; // 899268245
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FTouchEngineCHOP_Statics::NewProp_Channels = { "Channels", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTouchEngineCHOP, Channels), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Channels_MetaData), NewProp_Channels_MetaData) }; // 899268245
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FTouchEngineCHOP_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTouchEngineCHOP_Statics::NewProp_Channels_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTouchEngineCHOP_Statics::NewProp_Channels,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTouchEngineCHOP_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FTouchEngineCHOP_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_TouchEngine,
	nullptr,
	&NewStructOps,
	"TouchEngineCHOP",
	Z_Construct_UScriptStruct_FTouchEngineCHOP_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTouchEngineCHOP_Statics::PropPointers),
	sizeof(FTouchEngineCHOP),
	alignof(FTouchEngineCHOP),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTouchEngineCHOP_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FTouchEngineCHOP_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FTouchEngineCHOP()
{
	if (!Z_Registration_Info_UScriptStruct_TouchEngineCHOP.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_TouchEngineCHOP.InnerSingleton, Z_Construct_UScriptStruct_FTouchEngineCHOP_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_TouchEngineCHOP.InnerSingleton;
}
// End ScriptStruct FTouchEngineCHOP

// Begin ScriptStruct FTouchEngineDATLine
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_TouchEngineDATLine;
class UScriptStruct* FTouchEngineDATLine::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_TouchEngineDATLine.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_TouchEngineDATLine.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FTouchEngineDATLine, (UObject*)Z_Construct_UPackage__Script_TouchEngine(), TEXT("TouchEngineDATLine"));
	}
	return Z_Registration_Info_UScriptStruct_TouchEngineDATLine.OuterSingleton;
}
template<> TOUCHENGINE_API UScriptStruct* StaticStruct<FTouchEngineDATLine>()
{
	return FTouchEngineDATLine::StaticStruct();
}
struct Z_Construct_UScriptStruct_FTouchEngineDATLine_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "DisplayName", "TouchEngine DAT Channel" },
		{ "ModuleRelativePath", "Public/Engine/TouchVariables.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LineData_MetaData[] = {
		{ "Category", "TouchEngine" },
		{ "ModuleRelativePath", "Public/Engine/TouchVariables.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_LineData_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_LineData;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FTouchEngineDATLine>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FTouchEngineDATLine_Statics::NewProp_LineData_Inner = { "LineData", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FTouchEngineDATLine_Statics::NewProp_LineData = { "LineData", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTouchEngineDATLine, LineData), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LineData_MetaData), NewProp_LineData_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FTouchEngineDATLine_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTouchEngineDATLine_Statics::NewProp_LineData_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTouchEngineDATLine_Statics::NewProp_LineData,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTouchEngineDATLine_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FTouchEngineDATLine_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_TouchEngine,
	nullptr,
	&NewStructOps,
	"TouchEngineDATLine",
	Z_Construct_UScriptStruct_FTouchEngineDATLine_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTouchEngineDATLine_Statics::PropPointers),
	sizeof(FTouchEngineDATLine),
	alignof(FTouchEngineDATLine),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTouchEngineDATLine_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FTouchEngineDATLine_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FTouchEngineDATLine()
{
	if (!Z_Registration_Info_UScriptStruct_TouchEngineDATLine.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_TouchEngineDATLine.InnerSingleton, Z_Construct_UScriptStruct_FTouchEngineDATLine_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_TouchEngineDATLine.InnerSingleton;
}
// End ScriptStruct FTouchEngineDATLine

// Begin ScriptStruct FTouchEngineDATData
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_TouchEngineDATData;
class UScriptStruct* FTouchEngineDATData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_TouchEngineDATData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_TouchEngineDATData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FTouchEngineDATData, (UObject*)Z_Construct_UPackage__Script_TouchEngine(), TEXT("TouchEngineDATData"));
	}
	return Z_Registration_Info_UScriptStruct_TouchEngineDATData.OuterSingleton;
}
template<> TOUCHENGINE_API UScriptStruct* StaticStruct<FTouchEngineDATData>()
{
	return FTouchEngineDATData::StaticStruct();
}
struct Z_Construct_UScriptStruct_FTouchEngineDATData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "DisplayName", "TouchEngine DAT" },
		{ "ModuleRelativePath", "Public/Engine/TouchVariables.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsRowMajor_MetaData[] = {
		{ "Category", "TouchEngine" },
		{ "Comment", "/**\n\x09 * if bIsRowMajor is true, Data is an array of Rows, otherwise Data is an Array of Columns\n\x09 */" },
		{ "ModuleRelativePath", "Public/Engine/TouchVariables.h" },
		{ "ToolTip", "if bIsRowMajor is true, Data is an array of Rows, otherwise Data is an Array of Columns" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Data_MetaData[] = {
		{ "Category", "TouchEngine" },
		{ "Comment", "/**\n\x09 * if bIsRowMajor is true, Data is an array of Rows, otherwise Data is an Array of Columns\n\x09 */" },
		{ "ModuleRelativePath", "Public/Engine/TouchVariables.h" },
		{ "ToolTip", "if bIsRowMajor is true, Data is an array of Rows, otherwise Data is an Array of Columns" },
	};
#endif // WITH_METADATA
	static void NewProp_bIsRowMajor_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsRowMajor;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Data_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Data;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FTouchEngineDATData>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
void Z_Construct_UScriptStruct_FTouchEngineDATData_Statics::NewProp_bIsRowMajor_SetBit(void* Obj)
{
	((FTouchEngineDATData*)Obj)->bIsRowMajor = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FTouchEngineDATData_Statics::NewProp_bIsRowMajor = { "bIsRowMajor", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FTouchEngineDATData), &Z_Construct_UScriptStruct_FTouchEngineDATData_Statics::NewProp_bIsRowMajor_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsRowMajor_MetaData), NewProp_bIsRowMajor_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FTouchEngineDATData_Statics::NewProp_Data_Inner = { "Data", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FTouchEngineDATLine, METADATA_PARAMS(0, nullptr) }; // 2553855543
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FTouchEngineDATData_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTouchEngineDATData, Data), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Data_MetaData), NewProp_Data_MetaData) }; // 2553855543
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FTouchEngineDATData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTouchEngineDATData_Statics::NewProp_bIsRowMajor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTouchEngineDATData_Statics::NewProp_Data_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTouchEngineDATData_Statics::NewProp_Data,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTouchEngineDATData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FTouchEngineDATData_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_TouchEngine,
	nullptr,
	&NewStructOps,
	"TouchEngineDATData",
	Z_Construct_UScriptStruct_FTouchEngineDATData_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTouchEngineDATData_Statics::PropPointers),
	sizeof(FTouchEngineDATData),
	alignof(FTouchEngineDATData),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTouchEngineDATData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FTouchEngineDATData_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FTouchEngineDATData()
{
	if (!Z_Registration_Info_UScriptStruct_TouchEngineDATData.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_TouchEngineDATData.InnerSingleton, Z_Construct_UScriptStruct_FTouchEngineDATData_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_TouchEngineDATData.InnerSingleton;
}
// End ScriptStruct FTouchEngineDATData

// Begin Registration
struct Z_CompiledInDeferFile_FID_HostProject_Plugins_TouchEngine_Source_TouchEngine_Public_Engine_TouchVariables_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FTouchEngineCHOPChannel::StaticStruct, Z_Construct_UScriptStruct_FTouchEngineCHOPChannel_Statics::NewStructOps, TEXT("TouchEngineCHOPChannel"), &Z_Registration_Info_UScriptStruct_TouchEngineCHOPChannel, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FTouchEngineCHOPChannel), 899268245U) },
		{ FTouchEngineCHOP::StaticStruct, Z_Construct_UScriptStruct_FTouchEngineCHOP_Statics::NewStructOps, TEXT("TouchEngineCHOP"), &Z_Registration_Info_UScriptStruct_TouchEngineCHOP, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FTouchEngineCHOP), 286683455U) },
		{ FTouchEngineDATLine::StaticStruct, Z_Construct_UScriptStruct_FTouchEngineDATLine_Statics::NewStructOps, TEXT("TouchEngineDATLine"), &Z_Registration_Info_UScriptStruct_TouchEngineDATLine, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FTouchEngineDATLine), 2553855543U) },
		{ FTouchEngineDATData::StaticStruct, Z_Construct_UScriptStruct_FTouchEngineDATData_Statics::NewStructOps, TEXT("TouchEngineDATData"), &Z_Registration_Info_UScriptStruct_TouchEngineDATData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FTouchEngineDATData), 3997176032U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_TouchEngine_Source_TouchEngine_Public_Engine_TouchVariables_h_3506015939(TEXT("/Script/TouchEngine"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_HostProject_Plugins_TouchEngine_Source_TouchEngine_Public_Engine_TouchVariables_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_TouchEngine_Source_TouchEngine_Public_Engine_TouchVariables_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
