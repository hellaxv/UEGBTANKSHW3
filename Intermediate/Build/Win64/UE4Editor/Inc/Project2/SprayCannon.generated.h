// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef PROJECT2_SprayCannon_generated_h
#error "SprayCannon.generated.h already included, missing '#pragma once' in SprayCannon.h"
#endif
#define PROJECT2_SprayCannon_generated_h

#define UEGBTANKHW3_Source_Project2_Public_SprayCannon_h_19_SPARSE_DATA
#define UEGBTANKHW3_Source_Project2_Public_SprayCannon_h_19_RPC_WRAPPERS
#define UEGBTANKHW3_Source_Project2_Public_SprayCannon_h_19_RPC_WRAPPERS_NO_PURE_DECLS
#define UEGBTANKHW3_Source_Project2_Public_SprayCannon_h_19_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesASprayCannon(); \
	friend struct Z_Construct_UClass_ASprayCannon_Statics; \
public: \
	DECLARE_CLASS(ASprayCannon, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Project2"), NO_API) \
	DECLARE_SERIALIZER(ASprayCannon)


#define UEGBTANKHW3_Source_Project2_Public_SprayCannon_h_19_INCLASS \
private: \
	static void StaticRegisterNativesASprayCannon(); \
	friend struct Z_Construct_UClass_ASprayCannon_Statics; \
public: \
	DECLARE_CLASS(ASprayCannon, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Project2"), NO_API) \
	DECLARE_SERIALIZER(ASprayCannon)


#define UEGBTANKHW3_Source_Project2_Public_SprayCannon_h_19_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ASprayCannon(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ASprayCannon) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASprayCannon); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASprayCannon); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASprayCannon(ASprayCannon&&); \
	NO_API ASprayCannon(const ASprayCannon&); \
public:


#define UEGBTANKHW3_Source_Project2_Public_SprayCannon_h_19_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASprayCannon(ASprayCannon&&); \
	NO_API ASprayCannon(const ASprayCannon&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASprayCannon); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASprayCannon); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ASprayCannon)


#define UEGBTANKHW3_Source_Project2_Public_SprayCannon_h_19_PRIVATE_PROPERTY_OFFSET
#define UEGBTANKHW3_Source_Project2_Public_SprayCannon_h_16_PROLOG
#define UEGBTANKHW3_Source_Project2_Public_SprayCannon_h_19_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	UEGBTANKHW3_Source_Project2_Public_SprayCannon_h_19_PRIVATE_PROPERTY_OFFSET \
	UEGBTANKHW3_Source_Project2_Public_SprayCannon_h_19_SPARSE_DATA \
	UEGBTANKHW3_Source_Project2_Public_SprayCannon_h_19_RPC_WRAPPERS \
	UEGBTANKHW3_Source_Project2_Public_SprayCannon_h_19_INCLASS \
	UEGBTANKHW3_Source_Project2_Public_SprayCannon_h_19_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define UEGBTANKHW3_Source_Project2_Public_SprayCannon_h_19_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	UEGBTANKHW3_Source_Project2_Public_SprayCannon_h_19_PRIVATE_PROPERTY_OFFSET \
	UEGBTANKHW3_Source_Project2_Public_SprayCannon_h_19_SPARSE_DATA \
	UEGBTANKHW3_Source_Project2_Public_SprayCannon_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	UEGBTANKHW3_Source_Project2_Public_SprayCannon_h_19_INCLASS_NO_PURE_DECLS \
	UEGBTANKHW3_Source_Project2_Public_SprayCannon_h_19_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PROJECT2_API UClass* StaticClass<class ASprayCannon>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID UEGBTANKHW3_Source_Project2_Public_SprayCannon_h


#define FOREACH_ENUM_ESPRAYCANNONTYPE(op) \
	op(ESprayCannonType::FireProjectile) \
	op(ESprayCannonType::FireSpray) 

enum class ESprayCannonType : uint8;
template<> PROJECT2_API UEnum* StaticEnum<ESprayCannonType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
