// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FightingTool/FightingToolHUD.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFightingToolHUD() {}
// Cross Module References
	FIGHTINGTOOL_API UClass* Z_Construct_UClass_AFightingToolHUD_NoRegister();
	FIGHTINGTOOL_API UClass* Z_Construct_UClass_AFightingToolHUD();
	ENGINE_API UClass* Z_Construct_UClass_AHUD();
	UPackage* Z_Construct_UPackage__Script_FightingTool();
// End Cross Module References
	void AFightingToolHUD::StaticRegisterNativesAFightingToolHUD()
	{
	}
	UClass* Z_Construct_UClass_AFightingToolHUD_NoRegister()
	{
		return AFightingToolHUD::StaticClass();
	}
	struct Z_Construct_UClass_AFightingToolHUD_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AFightingToolHUD_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AHUD,
		(UObject* (*)())Z_Construct_UPackage__Script_FightingTool,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFightingToolHUD_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Rendering Actor Input Replication" },
		{ "IncludePath", "FightingToolHUD.h" },
		{ "ModuleRelativePath", "FightingToolHUD.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AFightingToolHUD_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AFightingToolHUD>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AFightingToolHUD_Statics::ClassParams = {
		&AFightingToolHUD::StaticClass,
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
		0x008002ACu,
		METADATA_PARAMS(Z_Construct_UClass_AFightingToolHUD_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AFightingToolHUD_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AFightingToolHUD()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AFightingToolHUD_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AFightingToolHUD, 3899995488);
	template<> FIGHTINGTOOL_API UClass* StaticClass<AFightingToolHUD>()
	{
		return AFightingToolHUD::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AFightingToolHUD(Z_Construct_UClass_AFightingToolHUD, &AFightingToolHUD::StaticClass, TEXT("/Script/FightingTool"), TEXT("AFightingToolHUD"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AFightingToolHUD);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
