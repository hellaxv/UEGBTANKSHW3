// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Project2/Public/SprayCannon.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSprayCannon() {}
// Cross Module References
	PROJECT2_API UEnum* Z_Construct_UEnum_Project2_ESprayCannonType();
	UPackage* Z_Construct_UPackage__Script_Project2();
	PROJECT2_API UClass* Z_Construct_UClass_ASprayCannon_NoRegister();
	PROJECT2_API UClass* Z_Construct_UClass_ASprayCannon();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UArrowComponent_NoRegister();
// End Cross Module References
	static UEnum* ESprayCannonType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Project2_ESprayCannonType, Z_Construct_UPackage__Script_Project2(), TEXT("ESprayCannonType"));
		}
		return Singleton;
	}
	template<> PROJECT2_API UEnum* StaticEnum<ESprayCannonType>()
	{
		return ESprayCannonType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ESprayCannonType(ESprayCannonType_StaticEnum, TEXT("/Script/Project2"), TEXT("ESprayCannonType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Project2_ESprayCannonType_Hash() { return 336626764U; }
	UEnum* Z_Construct_UEnum_Project2_ESprayCannonType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Project2();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ESprayCannonType"), 0, Get_Z_Construct_UEnum_Project2_ESprayCannonType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ESprayCannonType::FireProjectile", (int64)ESprayCannonType::FireProjectile },
				{ "ESprayCannonType::FireSpray", (int64)ESprayCannonType::FireSpray },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "FireProjectile.DisplayName", "Use projectile" },
				{ "FireProjectile.Name", "ESprayCannonType::FireProjectile" },
				{ "FireSpray.DisplayName", "Use spray" },
				{ "FireSpray.Name", "ESprayCannonType::FireSpray" },
				{ "ModuleRelativePath", "Public/SprayCannon.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Project2,
				nullptr,
				"ESprayCannonType",
				"ESprayCannonType",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				EEnumFlags::None,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::EnumClass,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	void ASprayCannon::StaticRegisterNativesASprayCannon()
	{
	}
	UClass* Z_Construct_UClass_ASprayCannon_NoRegister()
	{
		return ASprayCannon::StaticClass();
	}
	struct Z_Construct_UClass_ASprayCannon_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Cash_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Cash;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ProjectileSpawnPoints_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ProjectileSpawnPoints;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FireRateSpray_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_FireRateSpray;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Types_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Types_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Types;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ASprayCannon_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Project2,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASprayCannon_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "SprayCannon.h" },
		{ "ModuleRelativePath", "Public/SprayCannon.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASprayCannon_Statics::NewProp_Cash_MetaData[] = {
		{ "Category", "Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SprayCannon.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASprayCannon_Statics::NewProp_Cash = { "Cash", nullptr, (EPropertyFlags)0x00100000000b000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASprayCannon, Cash), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASprayCannon_Statics::NewProp_Cash_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASprayCannon_Statics::NewProp_Cash_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASprayCannon_Statics::NewProp_ProjectileSpawnPoints_MetaData[] = {
		{ "Category", "Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SprayCannon.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASprayCannon_Statics::NewProp_ProjectileSpawnPoints = { "ProjectileSpawnPoints", nullptr, (EPropertyFlags)0x00100000000b000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASprayCannon, ProjectileSpawnPoints), Z_Construct_UClass_UArrowComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASprayCannon_Statics::NewProp_ProjectileSpawnPoints_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASprayCannon_Statics::NewProp_ProjectileSpawnPoints_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASprayCannon_Statics::NewProp_FireRateSpray_MetaData[] = {
		{ "Category", "Fire params" },
		{ "Comment", "//\xd1\x87\xd0\xb0\xd1\x81\xd1\x82\xd0\xbe\xd1\x82\xd0\xb0 \xd0\xb2\xd1\x8b\xd1\x81\xd1\x82\xd1\x80\xd0\xb5\xd0\xbb\xd0\xb0/\xd1\x81\xd0\xba\xd0\xbe\xd1\x80\xd0\xbe\xd1\x81\xd1\x82\xd1\x8c \xd0\xb2\xd1\x8b\xd1\x81\xd1\x82\xd1\x80\xd0\xb5\xd0\xbb\xd0\xb0\n" },
		{ "ModuleRelativePath", "Public/SprayCannon.h" },
		{ "ToolTip", "\xd1\x87\xd0\xb0\xd1\x81\xd1\x82\xd0\xbe\xd1\x82\xd0\xb0 \xd0\xb2\xd1\x8b\xd1\x81\xd1\x82\xd1\x80\xd0\xb5\xd0\xbb\xd0\xb0/\xd1\x81\xd0\xba\xd0\xbe\xd1\x80\xd0\xbe\xd1\x81\xd1\x82\xd1\x8c \xd0\xb2\xd1\x8b\xd1\x81\xd1\x82\xd1\x80\xd0\xb5\xd0\xbb\xd0\xb0" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ASprayCannon_Statics::NewProp_FireRateSpray = { "FireRateSpray", nullptr, (EPropertyFlags)0x0010000000010005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASprayCannon, FireRateSpray), METADATA_PARAMS(Z_Construct_UClass_ASprayCannon_Statics::NewProp_FireRateSpray_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASprayCannon_Statics::NewProp_FireRateSpray_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_ASprayCannon_Statics::NewProp_Types_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASprayCannon_Statics::NewProp_Types_MetaData[] = {
		{ "Category", "Fire params" },
		{ "ModuleRelativePath", "Public/SprayCannon.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_ASprayCannon_Statics::NewProp_Types = { "Types", nullptr, (EPropertyFlags)0x0010000000010005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASprayCannon, Types), Z_Construct_UEnum_Project2_ESprayCannonType, METADATA_PARAMS(Z_Construct_UClass_ASprayCannon_Statics::NewProp_Types_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASprayCannon_Statics::NewProp_Types_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ASprayCannon_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASprayCannon_Statics::NewProp_Cash,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASprayCannon_Statics::NewProp_ProjectileSpawnPoints,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASprayCannon_Statics::NewProp_FireRateSpray,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASprayCannon_Statics::NewProp_Types_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASprayCannon_Statics::NewProp_Types,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ASprayCannon_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASprayCannon>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ASprayCannon_Statics::ClassParams = {
		&ASprayCannon::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ASprayCannon_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ASprayCannon_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ASprayCannon_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ASprayCannon_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ASprayCannon()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ASprayCannon_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ASprayCannon, 3045024501);
	template<> PROJECT2_API UClass* StaticClass<ASprayCannon>()
	{
		return ASprayCannon::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ASprayCannon(Z_Construct_UClass_ASprayCannon, &ASprayCannon::StaticClass, TEXT("/Script/Project2"), TEXT("ASprayCannon"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ASprayCannon);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
