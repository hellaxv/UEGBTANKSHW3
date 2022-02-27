// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef PROJECT2_Cannon_generated_h
#error "Cannon.generated.h already included, missing '#pragma once' in Cannon.h"
#endif
#define PROJECT2_Cannon_generated_h

#define UEGBTANKHW3_Source_Project2_Public_Cannon_h_19_SPARSE_DATA
#define UEGBTANKHW3_Source_Project2_Public_Cannon_h_19_RPC_WRAPPERS
#define UEGBTANKHW3_Source_Project2_Public_Cannon_h_19_RPC_WRAPPERS_NO_PURE_DECLS
#define UEGBTANKHW3_Source_Project2_Public_Cannon_h_19_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesACannon(); \
	friend struct Z_Construct_UClass_ACannon_Statics; \
public: \
	DECLARE_CLASS(ACannon, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Project2"), NO_API) \
	DECLARE_SERIALIZER(ACannon)


#define UEGBTANKHW3_Source_Project2_Public_Cannon_h_19_INCLASS \
private: \
	static void StaticRegisterNativesACannon(); \
	friend struct Z_Construct_UClass_ACannon_Statics; \
public: \
	DECLARE_CLASS(ACannon, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Project2"), NO_API) \
	DECLARE_SERIALIZER(ACannon)


#define UEGBTANKHW3_Source_Project2_Public_Cannon_h_19_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ACannon(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ACannon) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ACannon); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ACannon); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ACannon(ACannon&&); \
	NO_API ACannon(const ACannon&); \
public:


#define UEGBTANKHW3_Source_Project2_Public_Cannon_h_19_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ACannon(ACannon&&); \
	NO_API ACannon(const ACannon&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ACannon); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ACannon); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ACannon)


#define UEGBTANKHW3_Source_Project2_Public_Cannon_h_19_PRIVATE_PROPERTY_OFFSET
#define UEGBTANKHW3_Source_Project2_Public_Cannon_h_16_PROLOG
#define UEGBTANKHW3_Source_Project2_Public_Cannon_h_19_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	UEGBTANKHW3_Source_Project2_Public_Cannon_h_19_PRIVATE_PROPERTY_OFFSET \
	UEGBTANKHW3_Source_Project2_Public_Cannon_h_19_SPARSE_DATA \
	UEGBTANKHW3_Source_Project2_Public_Cannon_h_19_RPC_WRAPPERS \
	UEGBTANKHW3_Source_Project2_Public_Cannon_h_19_INCLASS \
	UEGBTANKHW3_Source_Project2_Public_Cannon_h_19_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define UEGBTANKHW3_Source_Project2_Public_Cannon_h_19_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	UEGBTANKHW3_Source_Project2_Public_Cannon_h_19_PRIVATE_PROPERTY_OFFSET \
	UEGBTANKHW3_Source_Project2_Public_Cannon_h_19_SPARSE_DATA \
	UEGBTANKHW3_Source_Project2_Public_Cannon_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	UEGBTANKHW3_Source_Project2_Public_Cannon_h_19_INCLASS_NO_PURE_DECLS \
	UEGBTANKHW3_Source_Project2_Public_Cannon_h_19_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PROJECT2_API UClass* StaticClass<class ACannon>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID UEGBTANKHW3_Source_Project2_Public_Cannon_h


#define FOREACH_ENUM_ECANNONTYPE(op) \
	op(ECannonType::FireProjectile) \
	op(ECannonType::FireTrace) 

enum class ECannonType : uint8;
template<> PROJECT2_API UEnum* StaticEnum<ECannonType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
