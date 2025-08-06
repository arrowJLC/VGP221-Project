// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Gamemode/FPSProjectGameModeBase.h"

#ifdef VGP221_A1_FPSProjectGameModeBase_generated_h
#error "FPSProjectGameModeBase.generated.h already included, missing '#pragma once' in FPSProjectGameModeBase.h"
#endif
#define VGP221_A1_FPSProjectGameModeBase_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class AFPSProjectGameModeBase **************************************************
VGP221_A1_API UClass* Z_Construct_UClass_AFPSProjectGameModeBase_NoRegister();

#define FID_VGP221_A1_Source_VGP221_A1_Public_Gamemode_FPSProjectGameModeBase_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAFPSProjectGameModeBase(); \
	friend struct Z_Construct_UClass_AFPSProjectGameModeBase_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend VGP221_A1_API UClass* Z_Construct_UClass_AFPSProjectGameModeBase_NoRegister(); \
public: \
	DECLARE_CLASS2(AFPSProjectGameModeBase, AGameModeBase, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/VGP221_A1"), Z_Construct_UClass_AFPSProjectGameModeBase_NoRegister) \
	DECLARE_SERIALIZER(AFPSProjectGameModeBase)


#define FID_VGP221_A1_Source_VGP221_A1_Public_Gamemode_FPSProjectGameModeBase_h_16_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AFPSProjectGameModeBase(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	AFPSProjectGameModeBase(AFPSProjectGameModeBase&&) = delete; \
	AFPSProjectGameModeBase(const AFPSProjectGameModeBase&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AFPSProjectGameModeBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AFPSProjectGameModeBase); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AFPSProjectGameModeBase) \
	NO_API virtual ~AFPSProjectGameModeBase();


#define FID_VGP221_A1_Source_VGP221_A1_Public_Gamemode_FPSProjectGameModeBase_h_13_PROLOG
#define FID_VGP221_A1_Source_VGP221_A1_Public_Gamemode_FPSProjectGameModeBase_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_VGP221_A1_Source_VGP221_A1_Public_Gamemode_FPSProjectGameModeBase_h_16_INCLASS_NO_PURE_DECLS \
	FID_VGP221_A1_Source_VGP221_A1_Public_Gamemode_FPSProjectGameModeBase_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class AFPSProjectGameModeBase;

// ********** End Class AFPSProjectGameModeBase ****************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_VGP221_A1_Source_VGP221_A1_Public_Gamemode_FPSProjectGameModeBase_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
