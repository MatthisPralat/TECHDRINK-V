// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TouchEngineEditor/Private/Factory/ToxAssetFactoryNew.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeToxAssetFactoryNew() {}

// Begin Cross Module References
TOUCHENGINEEDITOR_API UClass* Z_Construct_UClass_UToxAssetFactoryNew();
TOUCHENGINEEDITOR_API UClass* Z_Construct_UClass_UToxAssetFactoryNew_NoRegister();
UNREALED_API UClass* Z_Construct_UClass_UFactory();
UPackage* Z_Construct_UPackage__Script_TouchEngineEditor();
// End Cross Module References

// Begin Class UToxAssetFactoryNew
void UToxAssetFactoryNew::StaticRegisterNativesUToxAssetFactoryNew()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UToxAssetFactoryNew);
UClass* Z_Construct_UClass_UToxAssetFactoryNew_NoRegister()
{
	return UToxAssetFactoryNew::StaticClass();
}
struct Z_Construct_UClass_UToxAssetFactoryNew_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n *\n */" },
		{ "HideCategories", "Object" },
		{ "IncludePath", "Factory/ToxAssetFactoryNew.h" },
		{ "ModuleRelativePath", "Private/Factory/ToxAssetFactoryNew.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UToxAssetFactoryNew>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UToxAssetFactoryNew_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UFactory,
	(UObject* (*)())Z_Construct_UPackage__Script_TouchEngineEditor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UToxAssetFactoryNew_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UToxAssetFactoryNew_Statics::ClassParams = {
	&UToxAssetFactoryNew::StaticClass,
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
	0x000000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UToxAssetFactoryNew_Statics::Class_MetaDataParams), Z_Construct_UClass_UToxAssetFactoryNew_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UToxAssetFactoryNew()
{
	if (!Z_Registration_Info_UClass_UToxAssetFactoryNew.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UToxAssetFactoryNew.OuterSingleton, Z_Construct_UClass_UToxAssetFactoryNew_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UToxAssetFactoryNew.OuterSingleton;
}
template<> TOUCHENGINEEDITOR_API UClass* StaticClass<UToxAssetFactoryNew>()
{
	return UToxAssetFactoryNew::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UToxAssetFactoryNew);
UToxAssetFactoryNew::~UToxAssetFactoryNew() {}
// End Class UToxAssetFactoryNew

// Begin Registration
struct Z_CompiledInDeferFile_FID_HostProject_Plugins_TouchEngine_Source_TouchEngineEditor_Private_Factory_ToxAssetFactoryNew_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UToxAssetFactoryNew, UToxAssetFactoryNew::StaticClass, TEXT("UToxAssetFactoryNew"), &Z_Registration_Info_UClass_UToxAssetFactoryNew, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UToxAssetFactoryNew), 2764575696U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_TouchEngine_Source_TouchEngineEditor_Private_Factory_ToxAssetFactoryNew_h_4046744125(TEXT("/Script/TouchEngineEditor"),
	Z_CompiledInDeferFile_FID_HostProject_Plugins_TouchEngine_Source_TouchEngineEditor_Private_Factory_ToxAssetFactoryNew_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_TouchEngine_Source_TouchEngineEditor_Private_Factory_ToxAssetFactoryNew_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
