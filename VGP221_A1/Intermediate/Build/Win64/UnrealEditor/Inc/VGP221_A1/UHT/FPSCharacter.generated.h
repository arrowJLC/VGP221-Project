// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Player/FPSCharacter.h"

#ifdef VGP221_A1_FPSCharacter_generated_h
#error "FPSCharacter.generated.h already included, missing '#pragma once' in FPSCharacter.h"
#endif
#define VGP221_A1_FPSCharacter_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class AFPSCharacter ************************************************************
#define FID_VGP221_A1_Source_VGP221_A1_Public_Player_FPSCharacter_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGravity); \
	DECLARE_FUNCTION(execFire); \
	DECLARE_FUNCTION(execEndJump); \
	DECLARE_FUNCTION(execStartJump); \
	DECLARE_FUNCTION(execMoveRight); \
	DECLARE_FUNCTION(execMoveFoward);


VGP221_A1_API UClass* Z_Construct_UClass_AFPSCharacter_NoRegister();

#define FID_VGP221_A1_Source_VGP221_A1_Public_Player_FPSCharacter_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAFPSCharacter(); \
	friend struct Z_Construct_UClass_AFPSCharacter_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend VGP221_A1_API UClass* Z_Construct_UClass_AFPSCharacter_NoRegister(); \
public: \
	DECLARE_CLASS2(AFPSCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/VGP221_A1"), Z_Construct_UClass_AFPSCharacter_NoRegister) \
	DECLARE_SERIALIZER(AFPSCharacter)


#define FID_VGP221_A1_Source_VGP221_A1_Public_Player_FPSCharacter_h_15_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	AFPSCharacter(AFPSCharacter&&) = delete; \
	AFPSCharacter(const AFPSCharacter&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AFPSCharacter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AFPSCharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AFPSCharacter) \
	NO_API virtual ~AFPSCharacter();


#define FID_VGP221_A1_Source_VGP221_A1_Public_Player_FPSCharacter_h_12_PROLOG
#define FID_VGP221_A1_Source_VGP221_A1_Public_Player_FPSCharacter_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_VGP221_A1_Source_VGP221_A1_Public_Player_FPSCharacter_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_VGP221_A1_Source_VGP221_A1_Public_Player_FPSCharacter_h_15_INCLASS_NO_PURE_DECLS \
	FID_VGP221_A1_Source_VGP221_A1_Public_Player_FPSCharacter_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class AFPSCharacter;

// ********** End Class AFPSCharacter **************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_VGP221_A1_Source_VGP221_A1_Public_Player_FPSCharacter_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
