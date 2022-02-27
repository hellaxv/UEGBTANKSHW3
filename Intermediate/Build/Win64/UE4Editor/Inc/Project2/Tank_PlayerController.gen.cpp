// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Project2/Public/Tank_PlayerController.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTank_PlayerController() {}
// Cross Module References
	PROJECT2_API UClass* Z_Construct_UClass_ATank_PlayerController_NoRegister();
	PROJECT2_API UClass* Z_Construct_UClass_ATank_PlayerController();
	ENGINE_API UClass* Z_Construct_UClass_APlayerController();
	UPackage* Z_Construct_UPackage__Script_Project2();
	PROJECT2_API UClass* Z_Construct_UClass_ATank_Pawn_NoRegister();
// End Cross Module References
	void ATank_PlayerController::StaticRegisterNativesATank_PlayerController()
	{
	}
	UClass* Z_Construct_UClass_ATank_PlayerController_NoRegister()
	{
		return ATank_PlayerController::StaticClass();
	}
	struct Z_Construct_UClass_ATank_PlayerController_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlayerTank_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PlayerTank;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ATank_PlayerController_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APlayerController,
		(UObject* (*)())Z_Construct_UPackage__Script_Project2,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATank_PlayerController_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "Tank_PlayerController.h" },
		{ "ModuleRelativePath", "Public/Tank_PlayerController.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATank_PlayerController_Statics::NewProp_PlayerTank_MetaData[] = {
		{ "ModuleRelativePath", "Public/Tank_PlayerController.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATank_PlayerController_Statics::NewProp_PlayerTank = { "PlayerTank", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATank_PlayerController, PlayerTank), Z_Construct_UClass_ATank_Pawn_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ATank_PlayerController_Statics::NewProp_PlayerTank_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATank_PlayerController_Statics::NewProp_PlayerTank_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ATank_PlayerController_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATank_PlayerController_Statics::NewProp_PlayerTank,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ATank_PlayerController_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ATank_PlayerController>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ATank_PlayerController_Statics::ClassParams = {
		&ATank_PlayerController::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ATank_PlayerController_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ATank_PlayerController_Statics::PropPointers),
		0,
		0x009002A4u,
		METADATA_PARAMS(Z_Construct_UClass_ATank_PlayerController_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ATank_PlayerController_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ATank_PlayerController()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ATank_PlayerController_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ATank_PlayerController, 209241401);
	template<> PROJECT2_API UClass* StaticClass<ATank_PlayerController>()
	{
		return ATank_PlayerController::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ATank_PlayerController(Z_Construct_UClass_ATank_PlayerController, &ATank_PlayerController::StaticClass, TEXT("/Script/Project2"), TEXT("ATank_PlayerController"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ATank_PlayerController);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
