// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UPrimitiveComponent;
class AActor;
struct FVector;
struct FHitResult;
#ifdef FIGHTINGTOOL_FightingToolProjectile_generated_h
#error "FightingToolProjectile.generated.h already included, missing '#pragma once' in FightingToolProjectile.h"
#endif
#define FIGHTINGTOOL_FightingToolProjectile_generated_h

#define FightingTool_Source_FightingTool_FightingToolProjectile_h_12_SPARSE_DATA
#define FightingTool_Source_FightingTool_FightingToolProjectile_h_12_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnHit);


#define FightingTool_Source_FightingTool_FightingToolProjectile_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnHit);


#define FightingTool_Source_FightingTool_FightingToolProjectile_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAFightingToolProjectile(); \
	friend struct Z_Construct_UClass_AFightingToolProjectile_Statics; \
public: \
	DECLARE_CLASS(AFightingToolProjectile, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/FightingTool"), NO_API) \
	DECLARE_SERIALIZER(AFightingToolProjectile) \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define FightingTool_Source_FightingTool_FightingToolProjectile_h_12_INCLASS \
private: \
	static void StaticRegisterNativesAFightingToolProjectile(); \
	friend struct Z_Construct_UClass_AFightingToolProjectile_Statics; \
public: \
	DECLARE_CLASS(AFightingToolProjectile, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/FightingTool"), NO_API) \
	DECLARE_SERIALIZER(AFightingToolProjectile) \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define FightingTool_Source_FightingTool_FightingToolProjectile_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AFightingToolProjectile(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AFightingToolProjectile) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AFightingToolProjectile); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AFightingToolProjectile); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AFightingToolProjectile(AFightingToolProjectile&&); \
	NO_API AFightingToolProjectile(const AFightingToolProjectile&); \
public:


#define FightingTool_Source_FightingTool_FightingToolProjectile_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AFightingToolProjectile(AFightingToolProjectile&&); \
	NO_API AFightingToolProjectile(const AFightingToolProjectile&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AFightingToolProjectile); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AFightingToolProjectile); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AFightingToolProjectile)


#define FightingTool_Source_FightingTool_FightingToolProjectile_h_12_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__CollisionComp() { return STRUCT_OFFSET(AFightingToolProjectile, CollisionComp); } \
	FORCEINLINE static uint32 __PPO__ProjectileMovement() { return STRUCT_OFFSET(AFightingToolProjectile, ProjectileMovement); }


#define FightingTool_Source_FightingTool_FightingToolProjectile_h_9_PROLOG
#define FightingTool_Source_FightingTool_FightingToolProjectile_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FightingTool_Source_FightingTool_FightingToolProjectile_h_12_PRIVATE_PROPERTY_OFFSET \
	FightingTool_Source_FightingTool_FightingToolProjectile_h_12_SPARSE_DATA \
	FightingTool_Source_FightingTool_FightingToolProjectile_h_12_RPC_WRAPPERS \
	FightingTool_Source_FightingTool_FightingToolProjectile_h_12_INCLASS \
	FightingTool_Source_FightingTool_FightingToolProjectile_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FightingTool_Source_FightingTool_FightingToolProjectile_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FightingTool_Source_FightingTool_FightingToolProjectile_h_12_PRIVATE_PROPERTY_OFFSET \
	FightingTool_Source_FightingTool_FightingToolProjectile_h_12_SPARSE_DATA \
	FightingTool_Source_FightingTool_FightingToolProjectile_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	FightingTool_Source_FightingTool_FightingToolProjectile_h_12_INCLASS_NO_PURE_DECLS \
	FightingTool_Source_FightingTool_FightingToolProjectile_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> FIGHTINGTOOL_API UClass* StaticClass<class AFightingToolProjectile>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FightingTool_Source_FightingTool_FightingToolProjectile_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
