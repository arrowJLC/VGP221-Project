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
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
UPackage* Z_Construct_UPackage__Script_VGP221_A1();
VGP221_A1_API UClass* Z_Construct_UClass_AFPSProjectGameModeBase();
VGP221_A1_API UClass* Z_Construct_UClass_AFPSProjectGameModeBase_NoRegister();
VGP221_A1_API UClass* Z_Construct_UClass_UGameWidget_NoRegister();
// ********** End Cross Module References **********************************************************

// ********** Begin Class AFPSProjectGameModeBase Function GetBestTimeText *************************
struct Z_Construct_UFunction_AFPSProjectGameModeBase_GetBestTimeText_Statics
{
	struct FPSProjectGameModeBase_eventGetBestTimeText_Parms
	{
		FText ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Timer" },
		{ "ModuleRelativePath", "Public/Gamemode/FPSProjectGameModeBase.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FTextPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FTextPropertyParams Z_Construct_UFunction_AFPSProjectGameModeBase_GetBestTimeText_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPSProjectGameModeBase_eventGetBestTimeText_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFPSProjectGameModeBase_GetBestTimeText_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFPSProjectGameModeBase_GetBestTimeText_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSProjectGameModeBase_GetBestTimeText_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AFPSProjectGameModeBase_GetBestTimeText_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AFPSProjectGameModeBase, nullptr, "GetBestTimeText", Z_Construct_UFunction_AFPSProjectGameModeBase_GetBestTimeText_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSProjectGameModeBase_GetBestTimeText_Statics::PropPointers), sizeof(Z_Construct_UFunction_AFPSProjectGameModeBase_GetBestTimeText_Statics::FPSProjectGameModeBase_eventGetBestTimeText_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSProjectGameModeBase_GetBestTimeText_Statics::Function_MetaDataParams), Z_Construct_UFunction_AFPSProjectGameModeBase_GetBestTimeText_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_AFPSProjectGameModeBase_GetBestTimeText_Statics::FPSProjectGameModeBase_eventGetBestTimeText_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AFPSProjectGameModeBase_GetBestTimeText()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AFPSProjectGameModeBase_GetBestTimeText_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AFPSProjectGameModeBase::execGetBestTimeText)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FText*)Z_Param__Result=P_THIS->GetBestTimeText();
	P_NATIVE_END;
}
// ********** End Class AFPSProjectGameModeBase Function GetBestTimeText ***************************

// ********** Begin Class AFPSProjectGameModeBase Function GetCurrentTimeText **********************
struct Z_Construct_UFunction_AFPSProjectGameModeBase_GetCurrentTimeText_Statics
{
	struct FPSProjectGameModeBase_eventGetCurrentTimeText_Parms
	{
		FText ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Timer" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Useful text helpers for binding (returns FText ready for text blocks)\n" },
#endif
		{ "ModuleRelativePath", "Public/Gamemode/FPSProjectGameModeBase.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Useful text helpers for binding (returns FText ready for text blocks)" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FTextPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FTextPropertyParams Z_Construct_UFunction_AFPSProjectGameModeBase_GetCurrentTimeText_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPSProjectGameModeBase_eventGetCurrentTimeText_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFPSProjectGameModeBase_GetCurrentTimeText_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFPSProjectGameModeBase_GetCurrentTimeText_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSProjectGameModeBase_GetCurrentTimeText_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AFPSProjectGameModeBase_GetCurrentTimeText_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AFPSProjectGameModeBase, nullptr, "GetCurrentTimeText", Z_Construct_UFunction_AFPSProjectGameModeBase_GetCurrentTimeText_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSProjectGameModeBase_GetCurrentTimeText_Statics::PropPointers), sizeof(Z_Construct_UFunction_AFPSProjectGameModeBase_GetCurrentTimeText_Statics::FPSProjectGameModeBase_eventGetCurrentTimeText_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSProjectGameModeBase_GetCurrentTimeText_Statics::Function_MetaDataParams), Z_Construct_UFunction_AFPSProjectGameModeBase_GetCurrentTimeText_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_AFPSProjectGameModeBase_GetCurrentTimeText_Statics::FPSProjectGameModeBase_eventGetCurrentTimeText_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AFPSProjectGameModeBase_GetCurrentTimeText()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AFPSProjectGameModeBase_GetCurrentTimeText_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AFPSProjectGameModeBase::execGetCurrentTimeText)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FText*)Z_Param__Result=P_THIS->GetCurrentTimeText();
	P_NATIVE_END;
}
// ********** End Class AFPSProjectGameModeBase Function GetCurrentTimeText ************************

// ********** Begin Class AFPSProjectGameModeBase Function OnTimerUpdated **************************
static FName NAME_AFPSProjectGameModeBase_OnTimerUpdated = FName(TEXT("OnTimerUpdated"));
void AFPSProjectGameModeBase::OnTimerUpdated()
{
	UFunction* Func = FindFunctionChecked(NAME_AFPSProjectGameModeBase_OnTimerUpdated);
	ProcessEvent(Func,NULL);
}
struct Z_Construct_UFunction_AFPSProjectGameModeBase_OnTimerUpdated_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Timer" },
		{ "ModuleRelativePath", "Public/Gamemode/FPSProjectGameModeBase.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AFPSProjectGameModeBase_OnTimerUpdated_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AFPSProjectGameModeBase, nullptr, "OnTimerUpdated", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSProjectGameModeBase_OnTimerUpdated_Statics::Function_MetaDataParams), Z_Construct_UFunction_AFPSProjectGameModeBase_OnTimerUpdated_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_AFPSProjectGameModeBase_OnTimerUpdated()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AFPSProjectGameModeBase_OnTimerUpdated_Statics::FuncParams);
	}
	return ReturnFunction;
}
// ********** End Class AFPSProjectGameModeBase Function OnTimerUpdated ****************************

// ********** Begin Class AFPSProjectGameModeBase Function ResetTimer ******************************
struct Z_Construct_UFunction_AFPSProjectGameModeBase_ResetTimer_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Timer" },
		{ "ModuleRelativePath", "Public/Gamemode/FPSProjectGameModeBase.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AFPSProjectGameModeBase_ResetTimer_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AFPSProjectGameModeBase, nullptr, "ResetTimer", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSProjectGameModeBase_ResetTimer_Statics::Function_MetaDataParams), Z_Construct_UFunction_AFPSProjectGameModeBase_ResetTimer_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_AFPSProjectGameModeBase_ResetTimer()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AFPSProjectGameModeBase_ResetTimer_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AFPSProjectGameModeBase::execResetTimer)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ResetTimer();
	P_NATIVE_END;
}
// ********** End Class AFPSProjectGameModeBase Function ResetTimer ********************************

// ********** Begin Class AFPSProjectGameModeBase Function StartTimer ******************************
struct Z_Construct_UFunction_AFPSProjectGameModeBase_StartTimer_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Timer" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Control functions\n" },
#endif
		{ "ModuleRelativePath", "Public/Gamemode/FPSProjectGameModeBase.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Control functions" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AFPSProjectGameModeBase_StartTimer_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AFPSProjectGameModeBase, nullptr, "StartTimer", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSProjectGameModeBase_StartTimer_Statics::Function_MetaDataParams), Z_Construct_UFunction_AFPSProjectGameModeBase_StartTimer_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_AFPSProjectGameModeBase_StartTimer()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AFPSProjectGameModeBase_StartTimer_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AFPSProjectGameModeBase::execStartTimer)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->StartTimer();
	P_NATIVE_END;
}
// ********** End Class AFPSProjectGameModeBase Function StartTimer ********************************

// ********** Begin Class AFPSProjectGameModeBase Function StopTimer *******************************
struct Z_Construct_UFunction_AFPSProjectGameModeBase_StopTimer_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Timer" },
		{ "ModuleRelativePath", "Public/Gamemode/FPSProjectGameModeBase.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AFPSProjectGameModeBase_StopTimer_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AFPSProjectGameModeBase, nullptr, "StopTimer", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSProjectGameModeBase_StopTimer_Statics::Function_MetaDataParams), Z_Construct_UFunction_AFPSProjectGameModeBase_StopTimer_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_AFPSProjectGameModeBase_StopTimer()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AFPSProjectGameModeBase_StopTimer_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AFPSProjectGameModeBase::execStopTimer)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->StopTimer();
	P_NATIVE_END;
}
// ********** End Class AFPSProjectGameModeBase Function StopTimer *********************************

// ********** Begin Class AFPSProjectGameModeBase **************************************************
void AFPSProjectGameModeBase::StaticRegisterNativesAFPSProjectGameModeBase()
{
	UClass* Class = AFPSProjectGameModeBase::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetBestTimeText", &AFPSProjectGameModeBase::execGetBestTimeText },
		{ "GetCurrentTimeText", &AFPSProjectGameModeBase::execGetCurrentTimeText },
		{ "ResetTimer", &AFPSProjectGameModeBase::execResetTimer },
		{ "StartTimer", &AFPSProjectGameModeBase::execStartTimer },
		{ "StopTimer", &AFPSProjectGameModeBase::execStopTimer },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
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
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GameWidgetClass_MetaData[] = {
		{ "Category", "UI" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/* UPROPERTY(BlueprintReadOnly)\n    int32 PlayerScore;\n\n    UFUNCTION()\n    void AddScore(int32 Amount);*/" },
#endif
		{ "ModuleRelativePath", "Public/Gamemode/FPSProjectGameModeBase.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "UPROPERTY(BlueprintReadOnly)\n   int32 PlayerScore;\n\n   UFUNCTION()\n   void AddScore(int32 Amount);" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GameHUD_MetaData[] = {
		{ "Category", "UI" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Gamemode/FPSProjectGameModeBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurrentTime_MetaData[] = {
		{ "Category", "Timer" },
		{ "ModuleRelativePath", "Public/Gamemode/FPSProjectGameModeBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BestTime_MetaData[] = {
		{ "Category", "Timer" },
		{ "ModuleRelativePath", "Public/Gamemode/FPSProjectGameModeBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bTimerActive_MetaData[] = {
		{ "Category", "Timer" },
		{ "ModuleRelativePath", "Public/Gamemode/FPSProjectGameModeBase.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FClassPropertyParams NewProp_GameWidgetClass;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_GameHUD;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_CurrentTime;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_BestTime;
	static void NewProp_bTimerActive_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bTimerActive;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_AFPSProjectGameModeBase_GetBestTimeText, "GetBestTimeText" }, // 3844253530
		{ &Z_Construct_UFunction_AFPSProjectGameModeBase_GetCurrentTimeText, "GetCurrentTimeText" }, // 1777598383
		{ &Z_Construct_UFunction_AFPSProjectGameModeBase_OnTimerUpdated, "OnTimerUpdated" }, // 1682540060
		{ &Z_Construct_UFunction_AFPSProjectGameModeBase_ResetTimer, "ResetTimer" }, // 2031851558
		{ &Z_Construct_UFunction_AFPSProjectGameModeBase_StartTimer, "StartTimer" }, // 1761401596
		{ &Z_Construct_UFunction_AFPSProjectGameModeBase_StopTimer, "StopTimer" }, // 1221111003
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AFPSProjectGameModeBase>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_AFPSProjectGameModeBase_Statics::NewProp_GameWidgetClass = { "GameWidgetClass", nullptr, (EPropertyFlags)0x0014000000010001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AFPSProjectGameModeBase, GameWidgetClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UGameWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GameWidgetClass_MetaData), NewProp_GameWidgetClass_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFPSProjectGameModeBase_Statics::NewProp_GameHUD = { "GameHUD", nullptr, (EPropertyFlags)0x001000000008001c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AFPSProjectGameModeBase, GameHUD), Z_Construct_UClass_UGameWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GameHUD_MetaData), NewProp_GameHUD_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AFPSProjectGameModeBase_Statics::NewProp_CurrentTime = { "CurrentTime", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AFPSProjectGameModeBase, CurrentTime), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurrentTime_MetaData), NewProp_CurrentTime_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AFPSProjectGameModeBase_Statics::NewProp_BestTime = { "BestTime", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AFPSProjectGameModeBase, BestTime), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BestTime_MetaData), NewProp_BestTime_MetaData) };
void Z_Construct_UClass_AFPSProjectGameModeBase_Statics::NewProp_bTimerActive_SetBit(void* Obj)
{
	((AFPSProjectGameModeBase*)Obj)->bTimerActive = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AFPSProjectGameModeBase_Statics::NewProp_bTimerActive = { "bTimerActive", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AFPSProjectGameModeBase), &Z_Construct_UClass_AFPSProjectGameModeBase_Statics::NewProp_bTimerActive_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bTimerActive_MetaData), NewProp_bTimerActive_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AFPSProjectGameModeBase_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFPSProjectGameModeBase_Statics::NewProp_GameWidgetClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFPSProjectGameModeBase_Statics::NewProp_GameHUD,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFPSProjectGameModeBase_Statics::NewProp_CurrentTime,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFPSProjectGameModeBase_Statics::NewProp_BestTime,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFPSProjectGameModeBase_Statics::NewProp_bTimerActive,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AFPSProjectGameModeBase_Statics::PropPointers) < 2048);
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
	FuncInfo,
	Z_Construct_UClass_AFPSProjectGameModeBase_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_AFPSProjectGameModeBase_Statics::PropPointers),
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
DEFINE_VTABLE_PTR_HELPER_CTOR(AFPSProjectGameModeBase);
AFPSProjectGameModeBase::~AFPSProjectGameModeBase() {}
// ********** End Class AFPSProjectGameModeBase ****************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_VGP221_A1_Source_VGP221_A1_Public_Gamemode_FPSProjectGameModeBase_h__Script_VGP221_A1_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AFPSProjectGameModeBase, AFPSProjectGameModeBase::StaticClass, TEXT("AFPSProjectGameModeBase"), &Z_Registration_Info_UClass_AFPSProjectGameModeBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AFPSProjectGameModeBase), 4100177244U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_VGP221_A1_Source_VGP221_A1_Public_Gamemode_FPSProjectGameModeBase_h__Script_VGP221_A1_887512587(TEXT("/Script/VGP221_A1"),
	Z_CompiledInDeferFile_FID_VGP221_A1_Source_VGP221_A1_Public_Gamemode_FPSProjectGameModeBase_h__Script_VGP221_A1_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_VGP221_A1_Source_VGP221_A1_Public_Gamemode_FPSProjectGameModeBase_h__Script_VGP221_A1_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
