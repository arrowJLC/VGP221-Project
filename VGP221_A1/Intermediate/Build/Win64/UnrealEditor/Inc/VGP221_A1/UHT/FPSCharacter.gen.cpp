// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Player/FPSCharacter.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeFPSCharacter() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
ENGINE_API UClass* Z_Construct_UClass_ACharacter();
ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
UPackage* Z_Construct_UPackage__Script_VGP221_A1();
VGP221_A1_API UClass* Z_Construct_UClass_AFPSCharacter();
VGP221_A1_API UClass* Z_Construct_UClass_AFPSCharacter_NoRegister();
VGP221_A1_API UClass* Z_Construct_UClass_AFPSProjectile_NoRegister();
// ********** End Cross Module References **********************************************************

// ********** Begin Class AFPSCharacter Function EndJump *******************************************
struct Z_Construct_UFunction_AFPSCharacter_EndJump_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Player/FPSCharacter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AFPSCharacter_EndJump_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AFPSCharacter, nullptr, "EndJump", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSCharacter_EndJump_Statics::Function_MetaDataParams), Z_Construct_UFunction_AFPSCharacter_EndJump_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_AFPSCharacter_EndJump()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AFPSCharacter_EndJump_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AFPSCharacter::execEndJump)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->EndJump();
	P_NATIVE_END;
}
// ********** End Class AFPSCharacter Function EndJump *********************************************

// ********** Begin Class AFPSCharacter Function Fire **********************************************
struct Z_Construct_UFunction_AFPSCharacter_Fire_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Player/FPSCharacter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AFPSCharacter_Fire_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AFPSCharacter, nullptr, "Fire", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSCharacter_Fire_Statics::Function_MetaDataParams), Z_Construct_UFunction_AFPSCharacter_Fire_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_AFPSCharacter_Fire()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AFPSCharacter_Fire_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AFPSCharacter::execFire)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Fire();
	P_NATIVE_END;
}
// ********** End Class AFPSCharacter Function Fire ************************************************

// ********** Begin Class AFPSCharacter Function Gravity *******************************************
struct Z_Construct_UFunction_AFPSCharacter_Gravity_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Player/FPSCharacter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AFPSCharacter_Gravity_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AFPSCharacter, nullptr, "Gravity", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSCharacter_Gravity_Statics::Function_MetaDataParams), Z_Construct_UFunction_AFPSCharacter_Gravity_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_AFPSCharacter_Gravity()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AFPSCharacter_Gravity_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AFPSCharacter::execGravity)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Gravity();
	P_NATIVE_END;
}
// ********** End Class AFPSCharacter Function Gravity *********************************************

// ********** Begin Class AFPSCharacter Function MoveFoward ****************************************
struct Z_Construct_UFunction_AFPSCharacter_MoveFoward_Statics
{
	struct FPSCharacter_eventMoveFoward_Parms
	{
		float value;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Player/FPSCharacter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_value;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AFPSCharacter_MoveFoward_Statics::NewProp_value = { "value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPSCharacter_eventMoveFoward_Parms, value), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFPSCharacter_MoveFoward_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFPSCharacter_MoveFoward_Statics::NewProp_value,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSCharacter_MoveFoward_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AFPSCharacter_MoveFoward_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AFPSCharacter, nullptr, "MoveFoward", Z_Construct_UFunction_AFPSCharacter_MoveFoward_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSCharacter_MoveFoward_Statics::PropPointers), sizeof(Z_Construct_UFunction_AFPSCharacter_MoveFoward_Statics::FPSCharacter_eventMoveFoward_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSCharacter_MoveFoward_Statics::Function_MetaDataParams), Z_Construct_UFunction_AFPSCharacter_MoveFoward_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_AFPSCharacter_MoveFoward_Statics::FPSCharacter_eventMoveFoward_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AFPSCharacter_MoveFoward()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AFPSCharacter_MoveFoward_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AFPSCharacter::execMoveFoward)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_value);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->MoveFoward(Z_Param_value);
	P_NATIVE_END;
}
// ********** End Class AFPSCharacter Function MoveFoward ******************************************

// ********** Begin Class AFPSCharacter Function MoveRight *****************************************
struct Z_Construct_UFunction_AFPSCharacter_MoveRight_Statics
{
	struct FPSCharacter_eventMoveRight_Parms
	{
		float value;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Player/FPSCharacter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_value;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AFPSCharacter_MoveRight_Statics::NewProp_value = { "value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPSCharacter_eventMoveRight_Parms, value), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFPSCharacter_MoveRight_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFPSCharacter_MoveRight_Statics::NewProp_value,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSCharacter_MoveRight_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AFPSCharacter_MoveRight_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AFPSCharacter, nullptr, "MoveRight", Z_Construct_UFunction_AFPSCharacter_MoveRight_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSCharacter_MoveRight_Statics::PropPointers), sizeof(Z_Construct_UFunction_AFPSCharacter_MoveRight_Statics::FPSCharacter_eventMoveRight_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSCharacter_MoveRight_Statics::Function_MetaDataParams), Z_Construct_UFunction_AFPSCharacter_MoveRight_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_AFPSCharacter_MoveRight_Statics::FPSCharacter_eventMoveRight_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AFPSCharacter_MoveRight()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AFPSCharacter_MoveRight_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AFPSCharacter::execMoveRight)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_value);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->MoveRight(Z_Param_value);
	P_NATIVE_END;
}
// ********** End Class AFPSCharacter Function MoveRight *******************************************

// ********** Begin Class AFPSCharacter Function StartJump *****************************************
struct Z_Construct_UFunction_AFPSCharacter_StartJump_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Player/FPSCharacter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AFPSCharacter_StartJump_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AFPSCharacter, nullptr, "StartJump", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSCharacter_StartJump_Statics::Function_MetaDataParams), Z_Construct_UFunction_AFPSCharacter_StartJump_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_AFPSCharacter_StartJump()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AFPSCharacter_StartJump_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AFPSCharacter::execStartJump)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->StartJump();
	P_NATIVE_END;
}
// ********** End Class AFPSCharacter Function StartJump *******************************************

// ********** Begin Class AFPSCharacter ************************************************************
void AFPSCharacter::StaticRegisterNativesAFPSCharacter()
{
	UClass* Class = AFPSCharacter::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "EndJump", &AFPSCharacter::execEndJump },
		{ "Fire", &AFPSCharacter::execFire },
		{ "Gravity", &AFPSCharacter::execGravity },
		{ "MoveFoward", &AFPSCharacter::execMoveFoward },
		{ "MoveRight", &AFPSCharacter::execMoveRight },
		{ "StartJump", &AFPSCharacter::execStartJump },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_AFPSCharacter;
UClass* AFPSCharacter::GetPrivateStaticClass()
{
	using TClass = AFPSCharacter;
	if (!Z_Registration_Info_UClass_AFPSCharacter.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("FPSCharacter"),
			Z_Registration_Info_UClass_AFPSCharacter.InnerSingleton,
			StaticRegisterNativesAFPSCharacter,
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
	return Z_Registration_Info_UClass_AFPSCharacter.InnerSingleton;
}
UClass* Z_Construct_UClass_AFPSCharacter_NoRegister()
{
	return AFPSCharacter::GetPrivateStaticClass();
}
struct Z_Construct_UClass_AFPSCharacter_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "Player/FPSCharacter.h" },
		{ "ModuleRelativePath", "Public/Player/FPSCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FPSCameraComponent_MetaData[] = {
		{ "Category", "FPSCharacter" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Player/FPSCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FPSMesh_MetaData[] = {
		{ "Category", "FPSCharacter" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Player/FPSCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MuzzleOffset_MetaData[] = {
		{ "Category", "Gameplay" },
		{ "ModuleRelativePath", "Public/Player/FPSCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ProjectileClass_MetaData[] = {
		{ "Category", "FPSCharacter" },
		{ "ModuleRelativePath", "Public/Player/FPSCharacter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_FPSCameraComponent;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_FPSMesh;
	static const UECodeGen_Private::FStructPropertyParams NewProp_MuzzleOffset;
	static const UECodeGen_Private::FClassPropertyParams NewProp_ProjectileClass;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_AFPSCharacter_EndJump, "EndJump" }, // 2189433000
		{ &Z_Construct_UFunction_AFPSCharacter_Fire, "Fire" }, // 1171297253
		{ &Z_Construct_UFunction_AFPSCharacter_Gravity, "Gravity" }, // 3625777317
		{ &Z_Construct_UFunction_AFPSCharacter_MoveFoward, "MoveFoward" }, // 4029391424
		{ &Z_Construct_UFunction_AFPSCharacter_MoveRight, "MoveRight" }, // 487790710
		{ &Z_Construct_UFunction_AFPSCharacter_StartJump, "StartJump" }, // 3893168374
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AFPSCharacter>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFPSCharacter_Statics::NewProp_FPSCameraComponent = { "FPSCameraComponent", nullptr, (EPropertyFlags)0x00100000000a0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AFPSCharacter, FPSCameraComponent), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FPSCameraComponent_MetaData), NewProp_FPSCameraComponent_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFPSCharacter_Statics::NewProp_FPSMesh = { "FPSMesh", nullptr, (EPropertyFlags)0x00100000000a0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AFPSCharacter, FPSMesh), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FPSMesh_MetaData), NewProp_FPSMesh_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AFPSCharacter_Statics::NewProp_MuzzleOffset = { "MuzzleOffset", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AFPSCharacter, MuzzleOffset), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MuzzleOffset_MetaData), NewProp_MuzzleOffset_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_AFPSCharacter_Statics::NewProp_ProjectileClass = { "ProjectileClass", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AFPSCharacter, ProjectileClass), Z_Construct_UClass_UClass, Z_Construct_UClass_AFPSProjectile_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ProjectileClass_MetaData), NewProp_ProjectileClass_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AFPSCharacter_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFPSCharacter_Statics::NewProp_FPSCameraComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFPSCharacter_Statics::NewProp_FPSMesh,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFPSCharacter_Statics::NewProp_MuzzleOffset,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFPSCharacter_Statics::NewProp_ProjectileClass,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AFPSCharacter_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AFPSCharacter_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_ACharacter,
	(UObject* (*)())Z_Construct_UPackage__Script_VGP221_A1,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AFPSCharacter_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AFPSCharacter_Statics::ClassParams = {
	&AFPSCharacter::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_AFPSCharacter_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_AFPSCharacter_Statics::PropPointers),
	0,
	0x009001A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AFPSCharacter_Statics::Class_MetaDataParams), Z_Construct_UClass_AFPSCharacter_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AFPSCharacter()
{
	if (!Z_Registration_Info_UClass_AFPSCharacter.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AFPSCharacter.OuterSingleton, Z_Construct_UClass_AFPSCharacter_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AFPSCharacter.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AFPSCharacter);
AFPSCharacter::~AFPSCharacter() {}
// ********** End Class AFPSCharacter **************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_VGP221_A1_Source_VGP221_A1_Public_Player_FPSCharacter_h__Script_VGP221_A1_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AFPSCharacter, AFPSCharacter::StaticClass, TEXT("AFPSCharacter"), &Z_Registration_Info_UClass_AFPSCharacter, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AFPSCharacter), 1458982910U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_VGP221_A1_Source_VGP221_A1_Public_Player_FPSCharacter_h__Script_VGP221_A1_517038903(TEXT("/Script/VGP221_A1"),
	Z_CompiledInDeferFile_FID_VGP221_A1_Source_VGP221_A1_Public_Player_FPSCharacter_h__Script_VGP221_A1_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_VGP221_A1_Source_VGP221_A1_Public_Player_FPSCharacter_h__Script_VGP221_A1_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
