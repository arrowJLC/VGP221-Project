// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Gamemode/FPSProjectGameModeBase.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeFPSProjectGameModeBase() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
UPackage* Z_Construct_UPackage__Script_VGP221_A1();
VGP221_A1_API UClass* Z_Construct_UClass_AFPSProjectGameModeBase();
VGP221_A1_API UClass* Z_Construct_UClass_AFPSProjectGameModeBase_NoRegister();
// ********** End Cross Module References **********************************************************

// ********** Begin Class AFPSProjectGameModeBase **************************************************
void AFPSProjectGameModeBase::StaticRegisterNativesAFPSProjectGameModeBase()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_AFPSProjectGameModeBase;
UClass* AFPSProjectGameModeBase::GetPrivateStaticClass()
{
	using TClass = AFPSProjectGameModeBase;
	if (!Z_Registration_Info_UClass_AFPSProjectGameModeBase.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("FPSProjectGameModeBase"),
			Z_Registration_Info_UClass_AFPSProjectGameModeBase.InnerSingleton,
			StaticRegisterNativesAFPSProjectGameModeBase,
			sizeof(TClass),
			alignof(TClass),
			TClass::StaticClassFlags,
			TClass::StaticClassCastFlags(),
			TClass::StaticConfigName(),
			(UClass::ClassConstructorType)InternalConstructor<TClass>,
			(UClass::ClassVTableHelperCtorCallerType)InternalVTableHelperCtorCaller<TClass>,
			UOBJECT_CPPCLASS_STATICFUNCTIONS_FORCLASS(TClass),
			&TClass::Super::StaticClass,
			&TClass::WithinClass::StaticClass
		);
	}
	return Z_Registration_Info_UClass_AFPSProjectGameModeBase.InnerSingleton;
}
UClass* Z_Construct_UClass_AFPSProjectGameModeBase_NoRegister()
{
	return AFPSProjectGameModeBase::GetPrivateStaticClass();
}
struct Z_Construct_UClass_AFPSProjectGameModeBase_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "Gamemode/FPSProjectGameModeBase.h" },
		{ "ModuleRelativePath", "Public/Gamemode/FPSProjectGameModeBase.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AFPSProjectGameModeBase>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_AFPSProjectGameModeBase_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AGameModeBase,
	(UObject* (*)())Z_Construct_UPackage__Script_VGP221_A1,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AFPSProjectGameModeBase_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AFPSProjectGameModeBase_Statics::ClassParams = {
	&AFPSProjectGameModeBase::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x009003ACu,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AFPSProjectGameModeBase_Statics::Class_MetaDataParams), Z_Construct_UClass_AFPSProjectGameModeBase_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AFPSProjectGameModeBase()
{
	if (!Z_Registration_Info_UClass_AFPSProjectGameModeBase.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AFPSProjectGameModeBase.OuterSingleton, Z_Construct_UClass_AFPSProjectGameModeBase_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AFPSProjectGameModeBase.OuterSingleton;
}
AFPSProjectGameModeBase::AFPSProjectGameModeBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(AFPSProjectGameModeBase);
AFPSProjectGameModeBase::~AFPSProjectGameModeBase() {}
// ********** End Class AFPSProjectGameModeBase ****************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_VGP221_A1_Source_VGP221_A1_Public_Gamemode_FPSProjectGameModeBase_h__Script_VGP221_A1_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AFPSProjectGameModeBase, AFPSProjectGameModeBase::StaticClass, TEXT("AFPSProjectGameModeBase"), &Z_Registration_Info_UClass_AFPSProjectGameModeBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AFPSProjectGameModeBase), 628466496U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_VGP221_A1_Source_VGP221_A1_Public_Gamemode_FPSProjectGameModeBase_h__Script_VGP221_A1_2075581095(TEXT("/Script/VGP221_A1"),
	Z_CompiledInDeferFile_FID_VGP221_A1_Source_VGP221_A1_Public_Gamemode_FPSProjectGameModeBase_h__Script_VGP221_A1_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_VGP221_A1_Source_VGP221_A1_Public_Gamemode_FPSProjectGameModeBase_h__Script_VGP221_A1_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
