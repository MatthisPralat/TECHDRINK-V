// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TouchEngineEditor/Private/Nodes/TouchParameterGetK2Node.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTouchParameterGetK2Node() {}

// Begin Cross Module References
TOUCHENGINEEDITOR_API UClass* Z_Construct_UClass_UTouchK2NodeBase();
TOUCHENGINEEDITOR_API UClass* Z_Construct_UClass_UTouchParameterGetK2Node();
TOUCHENGINEEDITOR_API UClass* Z_Construct_UClass_UTouchParameterGetK2Node_NoRegister();
UPackage* Z_Construct_UPackage__Script_TouchEngineEditor();
// End Cross Module References

// Begin Class UTouchParameterGetK2Node
void UTouchParameterGetK2Node::StaticRegisterNativesUTouchParameterGetK2Node()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UTouchParameterGetK2Node);
UClass* Z_Construct_UClass_UTouchParameterGetK2Node_NoRegister()
{
	return UTouchParameterGetK2Node::StaticClass();
}
struct Z_Construct_UClass_UTouchParameterGetK2Node_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n *\n */" },
		{ "IncludePath", "Nodes/TouchParameterGetK2Node.h" },
		{ "ModuleRelativePath", "Private/Nodes/TouchParameterGetK2Node.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTouchParameterGetK2Node>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UTouchParameterGetK2Node_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UTouchK2NodeBase,
	(UObject* (*)())Z_Construct_UPackage__Script_TouchEngineEditor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UTouchParameterGetK2Node_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UTouchParameterGetK2Node_Statics::ClassParams = {
	&UTouchParameterGetK2Node::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UTouchParameterGetK2Node_Statics::Class_MetaDataParams), Z_Construct_UClass_UTouchParameterGetK2Node_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UTouchParameterGetK2Node()
{
	if (!Z_Registration_Info_UClass_UTouchParameterGetK2Node.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UTouchParameterGetK2Node.OuterSingleton, Z_Construct_UClass_UTouchParameterGetK2Node_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UTouchParameterGetK2Node.OuterSingleton;
}
template<> TOUCHENGINEEDITOR_API UClass* StaticClass<UTouchParameterGetK2Node>()
{
	return UTouchParameterGetK2Node::StaticClass();
}
UTouchParameterGetK2Node::UTouchParameterGetK2Node(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UTouchParameterGetK2Node);
UTouchParameterGetK2Node::~UTouchParameterGetK2Node() {}
// End Class UTouchParameterGetK2Node

// Begin Registration
struct Z_CompiledInDeferFile_FID_HostProject_Plugins_TouchEngine_Source_TouchEngineEditor_Private_Nodes_TouchParameterGetK2Node_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UTouchParameterGetK2Node, UTouchParameterGetK2Node::StaticClass, TEXT("UTouchParameterGetK2Node"), &Z_Registration_Info_UClass_UTouchParameterGetK2Node, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UTouchParameterGetK2Node), 3280612160U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_TouchEngine_Source_TouchEngineEditor_Private_Nodes_TouchParameterGetK2Node_h_1693061085(TEXT("/Script/TouchEngineEditor"),
	Z_CompiledInDeferFile_FID_HostProject_Plugins_TouchEngine_Source_TouchEngineEditor_Private_Nodes_TouchParameterGetK2Node_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_TouchEngine_Source_TouchEngineEditor_Private_Nodes_TouchParameterGetK2Node_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
