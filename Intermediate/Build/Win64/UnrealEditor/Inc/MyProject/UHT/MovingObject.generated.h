// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MovingObject.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef MYPROJECT_MovingObject_generated_h
#error "MovingObject.generated.h already included, missing '#pragma once' in MovingObject.h"
#endif
#define MYPROJECT_MovingObject_generated_h

#define FID_MyProject_Source_MyProject_MovingObject_h_12_SPARSE_DATA
#define FID_MyProject_Source_MyProject_MovingObject_h_12_RPC_WRAPPERS
#define FID_MyProject_Source_MyProject_MovingObject_h_12_RPC_WRAPPERS_NO_PURE_DECLS
#define FID_MyProject_Source_MyProject_MovingObject_h_12_ACCESSORS
#define FID_MyProject_Source_MyProject_MovingObject_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAMovingObject(); \
	friend struct Z_Construct_UClass_AMovingObject_Statics; \
public: \
	DECLARE_CLASS(AMovingObject, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/MyProject"), NO_API) \
	DECLARE_SERIALIZER(AMovingObject)


#define FID_MyProject_Source_MyProject_MovingObject_h_12_INCLASS \
private: \
	static void StaticRegisterNativesAMovingObject(); \
	friend struct Z_Construct_UClass_AMovingObject_Statics; \
public: \
	DECLARE_CLASS(AMovingObject, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/MyProject"), NO_API) \
	DECLARE_SERIALIZER(AMovingObject)


#define FID_MyProject_Source_MyProject_MovingObject_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AMovingObject(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AMovingObject) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMovingObject); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMovingObject); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMovingObject(AMovingObject&&); \
	NO_API AMovingObject(const AMovingObject&); \
public: \
	NO_API virtual ~AMovingObject();


#define FID_MyProject_Source_MyProject_MovingObject_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMovingObject(AMovingObject&&); \
	NO_API AMovingObject(const AMovingObject&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMovingObject); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMovingObject); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AMovingObject) \
	NO_API virtual ~AMovingObject();


#define FID_MyProject_Source_MyProject_MovingObject_h_9_PROLOG
#define FID_MyProject_Source_MyProject_MovingObject_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_MyProject_Source_MyProject_MovingObject_h_12_SPARSE_DATA \
	FID_MyProject_Source_MyProject_MovingObject_h_12_RPC_WRAPPERS \
	FID_MyProject_Source_MyProject_MovingObject_h_12_ACCESSORS \
	FID_MyProject_Source_MyProject_MovingObject_h_12_INCLASS \
	FID_MyProject_Source_MyProject_MovingObject_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_MyProject_Source_MyProject_MovingObject_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_MyProject_Source_MyProject_MovingObject_h_12_SPARSE_DATA \
	FID_MyProject_Source_MyProject_MovingObject_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_MyProject_Source_MyProject_MovingObject_h_12_ACCESSORS \
	FID_MyProject_Source_MyProject_MovingObject_h_12_INCLASS_NO_PURE_DECLS \
	FID_MyProject_Source_MyProject_MovingObject_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MYPROJECT_API UClass* StaticClass<class AMovingObject>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_MyProject_Source_MyProject_MovingObject_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
