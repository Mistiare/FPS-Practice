// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef FIGHTINGTOOL_FightingToolCharacter_generated_h
#error "FightingToolCharacter.generated.h already included, missing '#pragma once' in FightingToolCharacter.h"
#endif
#define FIGHTINGTOOL_FightingToolCharacter_generated_h

#define FightingTool_Source_FightingTool_FightingToolCharacter_h_14_SPARSE_DATA
#define FightingTool_Source_FightingTool_FightingToolCharacter_h_14_RPC_WRAPPERS
#define FightingTool_Source_FightingTool_FightingToolCharacter_h_14_RPC_WRAPPERS_NO_PURE_DECLS
#define FightingTool_Source_FightingTool_FightingToolCharacter_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAFightingToolCharacter(); \
	friend struct Z_Construct_UClass_AFightingToolCharacter_Statics; \
public: \
	DECLARE_CLASS(AFightingToolCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/FightingTool"), NO_API) \
	DECLARE_SERIALIZER(AFightingToolCharacter)


#define FightingTool_Source_FightingTool_FightingToolCharacter_h_14_INCLASS \
private: \
	static void StaticRegisterNativesAFightingToolCharacter(); \
	friend struct Z_Construct_UClass_AFightingToolCharacter_Statics; \
public: \
	DECLARE_CLASS(AFightingToolCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/FightingTool"), NO_API) \
	DECLARE_SERIALIZER(AFightingToolCharacter)


#define FightingTool_Source_FightingTool_FightingToolCharacter_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AFightingToolCharacter(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AFightingToolCharacter) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AFightingToolCharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AFightingToolCharacter); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AFightingToolCharacter(AFightingToolCharacter&&); \
	NO_API AFightingToolCharacter(const AFightingToolCharacter&); \
public:


#define FightingTool_Source_FightingTool_FightingToolCharacter_h_14_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AFightingToolCharacter(AFightingToolCharacter&&); \
	NO_API AFightingToolCharacter(const AFightingToolCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AFightingToolCharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AFightingToolCharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AFightingToolCharacter)


#define FightingTool_Source_FightingTool_FightingToolCharacter_h_14_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__Mesh1P() { return STRUCT_OFFSET(AFightingToolCharacter, Mesh1P); } \
	FORCEINLINE static uint32 __PPO__FP_Gun() { return STRUCT_OFFSET(AFightingToolCharacter, FP_Gun); } \
	FORCEINLINE static uint32 __PPO__FP_MuzzleLocation() { return STRUCT_OFFSET(AFightingToolCharacter, FP_MuzzleLocation); } \
	FORCEINLINE static uint32 __PPO__VR_Gun() { return STRUCT_OFFSET(AFightingToolCharacter, VR_Gun); } \
	FORCEINLINE static uint32 __PPO__VR_MuzzleLocation() { return STRUCT_OFFSET(AFightingToolCharacter, VR_MuzzleLocation); } \
	FORCEINLINE static uint32 __PPO__FirstPersonCameraComponent() { return STRUCT_OFFSET(AFightingToolCharacter, FirstPersonCameraComponent); } \
	FORCEINLINE static uint32 __PPO__R_MotionController() { return STRUCT_OFFSET(AFightingToolCharacter, R_MotionController); } \
	FORCEINLINE static uint32 __PPO__L_MotionController() { return STRUCT_OFFSET(AFightingToolCharacter, L_MotionController); }


#define FightingTool_Source_FightingTool_FightingToolCharacter_h_11_PROLOG
#define FightingTool_Source_FightingTool_FightingToolCharacter_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FightingTool_Source_FightingTool_FightingToolCharacter_h_14_PRIVATE_PROPERTY_OFFSET \
	FightingTool_Source_FightingTool_FightingToolCharacter_h_14_SPARSE_DATA \
	FightingTool_Source_FightingTool_FightingToolCharacter_h_14_RPC_WRAPPERS \
	FightingTool_Source_FightingTool_FightingToolCharacter_h_14_INCLASS \
	FightingTool_Source_FightingTool_FightingToolCharacter_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FightingTool_Source_FightingTool_FightingToolCharacter_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FightingTool_Source_FightingTool_FightingToolCharacter_h_14_PRIVATE_PROPERTY_OFFSET \
	FightingTool_Source_FightingTool_FightingToolCharacter_h_14_SPARSE_DATA \
	FightingTool_Source_FightingTool_FightingToolCharacter_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	FightingTool_Source_FightingTool_FightingToolCharacter_h_14_INCLASS_NO_PURE_DECLS \
	FightingTool_Source_FightingTool_FightingToolCharacter_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> FIGHTINGTOOL_API UClass* StaticClass<class AFightingToolCharacter>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FightingTool_Source_FightingTool_FightingToolCharacter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
