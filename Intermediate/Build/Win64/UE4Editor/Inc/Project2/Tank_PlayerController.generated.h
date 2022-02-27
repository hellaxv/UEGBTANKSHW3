// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef PROJECT2_Tank_PlayerController_generated_h
#error "Tank_PlayerController.generated.h already included, missing '#pragma once' in Tank_PlayerController.h"
#endif
#define PROJECT2_Tank_PlayerController_generated_h

#define UEGBTANKHW3_Source_Project2_Public_Tank_PlayerController_h_16_SPARSE_DATA
#define UEGBTANKHW3_Source_Project2_Public_Tank_PlayerController_h_16_RPC_WRAPPERS
#define UEGBTANKHW3_Source_Project2_Public_Tank_PlayerController_h_16_RPC_WRAPPERS_NO_PURE_DECLS
#define UEGBTANKHW3_Source_Project2_Public_Tank_PlayerController_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesATank_PlayerController(); \
	friend struct Z_Construct_UClass_ATank_PlayerController_Statics; \
public: \
	DECLARE_CLASS(ATank_PlayerController, APlayerController, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Project2"), NO_API) \
	DECLARE_SERIALIZER(ATank_PlayerController)


#define UEGBTANKHW3_Source_Project2_Public_Tank_PlayerController_h_16_INCLASS \
private: \
	static void StaticRegisterNativesATank_PlayerController(); \
	friend struct Z_Construct_UClass_ATank_PlayerController_Statics; \
public: \
	DECLARE_CLASS(ATank_PlayerController, APlayerController, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Project2"), NO_API) \
	DECLARE_SERIALIZER(ATank_PlayerController)


#define UEGBTANKHW3_Source_Project2_Public_Tank_PlayerController_h_16_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ATank_PlayerController(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ATank_PlayerController) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ATank_PlayerController); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ATank_PlayerController); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ATank_PlayerController(ATank_PlayerController&&); \
	NO_API ATank_PlayerController(const ATank_PlayerController&); \
public:


#define UEGBTANKHW3_Source_Project2_Public_Tank_PlayerController_h_16_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ATank_PlayerController(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ATank_PlayerController(ATank_PlayerController&&); \
	NO_API ATank_PlayerController(const ATank_PlayerController&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ATank_PlayerController); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ATank_PlayerController); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ATank_PlayerController)


#define UEGBTANKHW3_Source_Project2_Public_Tank_PlayerController_h_16_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__PlayerTank() { return STRUCT_OFFSET(ATank_PlayerController, PlayerTank); }


#define UEGBTANKHW3_Source_Project2_Public_Tank_PlayerController_h_13_PROLOG
#define UEGBTANKHW3_Source_Project2_Public_Tank_PlayerController_h_16_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	UEGBTANKHW3_Source_Project2_Public_Tank_PlayerController_h_16_PRIVATE_PROPERTY_OFFSET \
	UEGBTANKHW3_Source_Project2_Public_Tank_PlayerController_h_16_SPARSE_DATA \
	UEGBTANKHW3_Source_Project2_Public_Tank_PlayerController_h_16_RPC_WRAPPERS \
	UEGBTANKHW3_Source_Project2_Public_Tank_PlayerController_h_16_INCLASS \
	UEGBTANKHW3_Source_Project2_Public_Tank_PlayerController_h_16_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define UEGBTANKHW3_Source_Project2_Public_Tank_PlayerController_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	UEGBTANKHW3_Source_Project2_Public_Tank_PlayerController_h_16_PRIVATE_PROPERTY_OFFSET \
	UEGBTANKHW3_Source_Project2_Public_Tank_PlayerController_h_16_SPARSE_DATA \
	UEGBTANKHW3_Source_Project2_Public_Tank_PlayerController_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	UEGBTANKHW3_Source_Project2_Public_Tank_PlayerController_h_16_INCLASS_NO_PURE_DECLS \
	UEGBTANKHW3_Source_Project2_Public_Tank_PlayerController_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PROJECT2_API UClass* StaticClass<class ATank_PlayerController>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID UEGBTANKHW3_Source_Project2_Public_Tank_PlayerController_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
