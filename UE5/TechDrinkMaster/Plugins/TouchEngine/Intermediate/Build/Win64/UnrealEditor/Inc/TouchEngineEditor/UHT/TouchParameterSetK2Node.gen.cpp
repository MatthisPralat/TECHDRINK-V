// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TouchEngineEditor/Private/Nodes/TouchParameterSetK2Node.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTouchParameterSetK2Node() {}

// Begin Cross Module References
TOUCHENGINEEDITOR_API UClass* Z_Construct_UClass_UTouchK2NodeBase();
TOUCHENGINEEDITOR_API UClass* Z_Construct_UClass_UTouchParameterSetK2Node();
TOUCHENGINEEDITOR_API UClass* Z_Construct_UClass_UTouchParameterSetK2Node_NoRegister();
UPackage* Z_Construct_UPackage__Script_TouchEngineEditor();
// End Cross Module References

// Begin Class UTouchParameterSetK2Node
void UTouchParameterSetK2Node::StaticRegisterNativesUTouchParameterSetK2Node()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UTouchParameterSetK2Node);
UClass* Z_Construct_UClass_UTouchParameterSetK2Node_NoRegister()
{
	return UTouchParameterSetK2Node::StaticClass();
}
struct Z_Construct_UClass_UTouchParameterSetK2Node_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n *\n */" },
		{ "IncludePath", "Nodes/TouchParameterSetK2Node.h" },
		{ "ModuleRelativePath", "Private/Nodes/TouchParameterSetK2Node.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTouchParameterSetK2Node>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UTouchParameterSetK2Node_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UTouchK2NodeBase,
	(UObject* (*)())Z_Construct_UPackage__Script_TouchEngineEditor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UTouchParameterSetK2Node_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UTouchParameterSetK2Node_Statics::ClassParams = {
	&UTouchParameterSetK2Node::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UTouchParameterSetK2Node_Statics::Class_MetaDataParams), Z_Construct_UClass_UTouchParameterSetK2Node_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UTouchParameterSetK2Node()
{
	if (!Z_Registration_Info_UClass_UTouchParameterSetK2Node.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UTouchParameterSetK2Node.OuterSingleton, Z_Construct_UClass_UTouchParameterSetK2Node_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UTouchParameterSetK2Node.OuterSingleton;
}
template<> TOUCHENGINEEDITOR_API UClass* StaticClass<UTouchParameterSetK2Node>()
{
	return UTouchParameterSetK2Node::StaticClass();
}
UTouchParameterSetK2Node::UTouchParameterSetK2Node(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UTouchParameterSetK2Node);
UTouchParameterSetK2Node::~UTouchParameterSetK2Node() {}
// End Class UTouchParameterSetK2Node

// Begin Registration
struct Z_CompiledInDeferFile_FID_HostProject_Plugins_TouchEngine_Source_TouchEngineEditor_Private_Nodes_TouchParameterSetK2Node_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UTouchParameterSetK2Node, UTouchParameterSetK2Node::StaticClass, TEXT("UTouchParameterSetK2Node"), &Z_Registration_Info_UClass_UTouchParameterSetK2Node, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UTouchParameterSetK2Node), 3024597184U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_TouchEngine_Source_TouchEngineEditor_Private_Nodes_TouchParameterSetK2Node_h_1223264254(TEXT("/Script/TouchEngineEditor"),
	Z_CompiledInDeferFile_FID_HostProject_Plugins_TouchEngine_Source_TouchEngineEditor_Private_Nodes_TouchParameterSetK2Node_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_TouchEngine_Source_TouchEngineEditor_Private_Nodes_TouchParameterSetK2Node_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
