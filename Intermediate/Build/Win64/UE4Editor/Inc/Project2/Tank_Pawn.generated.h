// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef PROJECT2_Tank_Pawn_generated_h
#error "Tank_Pawn.generated.h already included, missing '#pragma once' in Tank_Pawn.h"
#endif
#define PROJECT2_Tank_Pawn_generated_h

#define UEGBTANKHW3_Source_Project2_Public_Tank_Pawn_h_22_SPARSE_DATA
#define UEGBTANKHW3_Source_Project2_Public_Tank_Pawn_h_22_RPC_WRAPPERS
#define UEGBTANKHW3_Source_Project2_Public_Tank_Pawn_h_22_RPC_WRAPPERS_NO_PURE_DECLS
#define UEGBTANKHW3_Source_Project2_Public_Tank_Pawn_h_22_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesATank_Pawn(); \
	friend struct Z_Construct_UClass_ATank_Pawn_Statics; \
public: \
	DECLARE_CLASS(ATank_Pawn, APawn, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Project2"), NO_API) \
	DECLARE_SERIALIZER(ATank_Pawn)


#define UEGBTANKHW3_Source_Project2_Public_Tank_Pawn_h_22_INCLASS \
private: \
	static void StaticRegisterNativesATank_Pawn(); \
	friend struct Z_Construct_UClass_ATank_Pawn_Statics; \
public: \
	DECLARE_CLASS(ATank_Pawn, APawn, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Project2"), NO_API) \
	DECLARE_SERIALIZER(ATank_Pawn)


#define UEGBTANKHW3_Source_Project2_Public_Tank_Pawn_h_22_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ATank_Pawn(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ATank_Pawn) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ATank_Pawn); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ATank_Pawn); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ATank_Pawn(ATank_Pawn&&); \
	NO_API ATank_Pawn(const ATank_Pawn&); \
public:


#define UEGBTANKHW3_Source_Project2_Public_Tank_Pawn_h_22_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ATank_Pawn(ATank_Pawn&&); \
	NO_API ATank_Pawn(const ATank_Pawn&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ATank_Pawn); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ATank_Pawn); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ATank_Pawn)


#define UEGBTANKHW3_Source_Project2_Public_Tank_Pawn_h_22_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__TankController() { return STRUCT_OFFSET(ATank_Pawn, TankController); }


#define UEGBTANKHW3_Source_Project2_Public_Tank_Pawn_h_19_PROLOG
#define UEGBTANKHW3_Source_Project2_Public_Tank_Pawn_h_22_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	UEGBTANKHW3_Source_Project2_Public_Tank_Pawn_h_22_PRIVATE_PROPERTY_OFFSET \
	UEGBTANKHW3_Source_Project2_Public_Tank_Pawn_h_22_SPARSE_DATA \
	UEGBTANKHW3_Source_Project2_Public_Tank_Pawn_h_22_RPC_WRAPPERS \
	UEGBTANKHW3_Source_Project2_Public_Tank_Pawn_h_22_INCLASS \
	UEGBTANKHW3_Source_Project2_Public_Tank_Pawn_h_22_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define UEGBTANKHW3_Source_Project2_Public_Tank_Pawn_h_22_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	UEGBTANKHW3_Source_Project2_Public_Tank_Pawn_h_22_PRIVATE_PROPERTY_OFFSET \
	UEGBTANKHW3_Source_Project2_Public_Tank_Pawn_h_22_SPARSE_DATA \
	UEGBTANKHW3_Source_Project2_Public_Tank_Pawn_h_22_RPC_WRAPPERS_NO_PURE_DECLS \
	UEGBTANKHW3_Source_Project2_Public_Tank_Pawn_h_22_INCLASS_NO_PURE_DECLS \
	UEGBTANKHW3_Source_Project2_Public_Tank_Pawn_h_22_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PROJECT2_API UClass* StaticClass<class ATank_Pawn>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID UEGBTANKHW3_Source_Project2_Public_Tank_Pawn_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
