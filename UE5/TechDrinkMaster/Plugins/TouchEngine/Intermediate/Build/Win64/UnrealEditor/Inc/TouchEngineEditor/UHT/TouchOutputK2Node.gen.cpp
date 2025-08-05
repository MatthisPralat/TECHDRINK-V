// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TouchEngineEditor/Private/Nodes/TouchOutputK2Node.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTouchOutputK2Node() {}

// Begin Cross Module References
TOUCHENGINEEDITOR_API UClass* Z_Construct_UClass_UTouchK2NodeBase();
TOUCHENGINEEDITOR_API UClass* Z_Construct_UClass_UTouchOutputK2Node();
TOUCHENGINEEDITOR_API UClass* Z_Construct_UClass_UTouchOutputK2Node_NoRegister();
UPackage* Z_Construct_UPackage__Script_TouchEngineEditor();
// End Cross Module References

// Begin Class UTouchOutputK2Node
void UTouchOutputK2Node::StaticRegisterNativesUTouchOutputK2Node()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UTouchOutputK2Node);
UClass* Z_Construct_UClass_UTouchOutputK2Node_NoRegister()
{
	return UTouchOutputK2Node::StaticClass();
}
struct Z_Construct_UClass_UTouchOutputK2Node_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Blueprint node that gets the value of a TouchEngine Output variable from the passed in TouchEngineComponent at runtime\n */" },
		{ "IncludePath", "Nodes/TouchOutputK2Node.h" },
		{ "ModuleRelativePath", "Private/Nodes/TouchOutputK2Node.h" },
		{ "ToolTip", "Blueprint node that gets the value of a TouchEngine Output variable from the passed in TouchEngineComponent at runtime" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTouchOutputK2Node>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UTouchOutputK2Node_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UTouchK2NodeBase,
	(UObject* (*)())Z_Construct_UPackage__Script_TouchEngineEditor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UTouchOutputK2Node_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UTouchOutputK2Node_Statics::ClassParams = {
	&UTouchOutputK2Node::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UTouchOutputK2Node_Statics::Class_MetaDataParams), Z_Construct_UClass_UTouchOutputK2Node_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UTouchOutputK2Node()
{
	if (!Z_Registration_Info_UClass_UTouchOutputK2Node.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UTouchOutputK2Node.OuterSingleton, Z_Construct_UClass_UTouchOutputK2Node_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UTouchOutputK2Node.OuterSingleton;
}
template<> TOUCHENGINEEDITOR_API UClass* StaticClass<UTouchOutputK2Node>()
{
	return UTouchOutputK2Node::StaticClass();
}
UTouchOutputK2Node::UTouchOutputK2Node(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UTouchOutputK2Node);
UTouchOutputK2Node::~UTouchOutputK2Node() {}
// End Class UTouchOutputK2Node

// Begin Registration
struct Z_CompiledInDeferFile_FID_HostProject_Plugins_TouchEngine_Source_TouchEngineEditor_Private_Nodes_TouchOutputK2Node_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UTouchOutputK2Node, UTouchOutputK2Node::StaticClass, TEXT("UTouchOutputK2Node"), &Z_Registration_Info_UClass_UTouchOutputK2Node, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UTouchOutputK2Node), 3764037884U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_TouchEngine_Source_TouchEngineEditor_Private_Nodes_TouchOutputK2Node_h_1563509054(TEXT("/Script/TouchEngineEditor"),
	Z_CompiledInDeferFile_FID_HostProject_Plugins_TouchEngine_Source_TouchEngineEditor_Private_Nodes_TouchOutputK2Node_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_TouchEngine_Source_TouchEngineEditor_Private_Nodes_TouchOutputK2Node_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
