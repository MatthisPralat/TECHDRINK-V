// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TouchEngineEditor/Private/Nodes/TouchInputGetK2Node.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTouchInputGetK2Node() {}

// Begin Cross Module References
TOUCHENGINEEDITOR_API UClass* Z_Construct_UClass_UTouchInputGetK2Node();
TOUCHENGINEEDITOR_API UClass* Z_Construct_UClass_UTouchInputGetK2Node_NoRegister();
TOUCHENGINEEDITOR_API UClass* Z_Construct_UClass_UTouchK2NodeBase();
UPackage* Z_Construct_UPackage__Script_TouchEngineEditor();
// End Cross Module References

// Begin Class UTouchInputGetK2Node
void UTouchInputGetK2Node::StaticRegisterNativesUTouchInputGetK2Node()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UTouchInputGetK2Node);
UClass* Z_Construct_UClass_UTouchInputGetK2Node_NoRegister()
{
	return UTouchInputGetK2Node::StaticClass();
}
struct Z_Construct_UClass_UTouchInputGetK2Node_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n *\n */" },
		{ "IncludePath", "Nodes/TouchInputGetK2Node.h" },
		{ "ModuleRelativePath", "Private/Nodes/TouchInputGetK2Node.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTouchInputGetK2Node>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UTouchInputGetK2Node_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UTouchK2NodeBase,
	(UObject* (*)())Z_Construct_UPackage__Script_TouchEngineEditor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UTouchInputGetK2Node_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UTouchInputGetK2Node_Statics::ClassParams = {
	&UTouchInputGetK2Node::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UTouchInputGetK2Node_Statics::Class_MetaDataParams), Z_Construct_UClass_UTouchInputGetK2Node_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UTouchInputGetK2Node()
{
	if (!Z_Registration_Info_UClass_UTouchInputGetK2Node.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UTouchInputGetK2Node.OuterSingleton, Z_Construct_UClass_UTouchInputGetK2Node_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UTouchInputGetK2Node.OuterSingleton;
}
template<> TOUCHENGINEEDITOR_API UClass* StaticClass<UTouchInputGetK2Node>()
{
	return UTouchInputGetK2Node::StaticClass();
}
UTouchInputGetK2Node::UTouchInputGetK2Node(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UTouchInputGetK2Node);
UTouchInputGetK2Node::~UTouchInputGetK2Node() {}
// End Class UTouchInputGetK2Node

// Begin Registration
struct Z_CompiledInDeferFile_FID_HostProject_Plugins_TouchEngine_Source_TouchEngineEditor_Private_Nodes_TouchInputGetK2Node_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UTouchInputGetK2Node, UTouchInputGetK2Node::StaticClass, TEXT("UTouchInputGetK2Node"), &Z_Registration_Info_UClass_UTouchInputGetK2Node, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UTouchInputGetK2Node), 845492578U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_TouchEngine_Source_TouchEngineEditor_Private_Nodes_TouchInputGetK2Node_h_1636252908(TEXT("/Script/TouchEngineEditor"),
	Z_CompiledInDeferFile_FID_HostProject_Plugins_TouchEngine_Source_TouchEngineEditor_Private_Nodes_TouchInputGetK2Node_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_TouchEngine_Source_TouchEngineEditor_Private_Nodes_TouchInputGetK2Node_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
