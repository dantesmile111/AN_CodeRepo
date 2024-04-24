// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "HTTPRequestClient.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
 
enum class EMethod : uint8;
struct FJSONObject;
#ifdef HTTPREQUESTFORBLUEPRINTS_HTTPRequestClient_generated_h
#error "HTTPRequestClient.generated.h already included, missing '#pragma once' in HTTPRequestClient.h"
#endif
#define HTTPREQUESTFORBLUEPRINTS_HTTPRequestClient_generated_h

#define FID_Users_aadij_Onedrive_Desktop_AN_CodeRepo_Plugins_Marketplace_HTTPRequest_Source_HTTPRequestForBlueprints_Public_HTTPRequestClient_h_51_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FJSONObject_Statics; \
	HTTPREQUESTFORBLUEPRINTS_API static class UScriptStruct* StaticStruct();


template<> HTTPREQUESTFORBLUEPRINTS_API UScriptStruct* StaticStruct<struct FJSONObject>();

#define FID_Users_aadij_Onedrive_Desktop_AN_CodeRepo_Plugins_Marketplace_HTTPRequest_Source_HTTPRequestForBlueprints_Public_HTTPRequestClient_h_57_DELEGATE \
HTTPREQUESTFORBLUEPRINTS_API void FResponse_DelegateWrapper(const FScriptDelegate& Response, uint8 Status, const FString& ResponseString);


#define FID_Users_aadij_Onedrive_Desktop_AN_CodeRepo_Plugins_Marketplace_HTTPRequest_Source_HTTPRequestForBlueprints_Public_HTTPRequestClient_h_65_SPARSE_DATA
#define FID_Users_aadij_Onedrive_Desktop_AN_CodeRepo_Plugins_Marketplace_HTTPRequest_Source_HTTPRequestForBlueprints_Public_HTTPRequestClient_h_65_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Users_aadij_Onedrive_Desktop_AN_CodeRepo_Plugins_Marketplace_HTTPRequest_Source_HTTPRequestForBlueprints_Public_HTTPRequestClient_h_65_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Users_aadij_Onedrive_Desktop_AN_CodeRepo_Plugins_Marketplace_HTTPRequest_Source_HTTPRequestForBlueprints_Public_HTTPRequestClient_h_65_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execReplaceWithASCII); \
	DECLARE_FUNCTION(execGetTimeoutDuration); \
	DECLARE_FUNCTION(execSetTimeoutDuration); \
	DECLARE_FUNCTION(execGetBooleanFromJSONObject); \
	DECLARE_FUNCTION(execGetNumberFromJSONObject); \
	DECLARE_FUNCTION(execGetStringFromJSONObject); \
	DECLARE_FUNCTION(execGetBooleanArrayFromJSONObject); \
	DECLARE_FUNCTION(execGetNumberArrayFromJSONObject); \
	DECLARE_FUNCTION(execGetStringArrayFromJSONObject); \
	DECLARE_FUNCTION(execGetObjectArrayFromJSONObject); \
	DECLARE_FUNCTION(execGetObjectFromJSONObject); \
	DECLARE_FUNCTION(execResponseStringToJSON); \
	DECLARE_FUNCTION(execMakeAHttpRequest);


#define FID_Users_aadij_Onedrive_Desktop_AN_CodeRepo_Plugins_Marketplace_HTTPRequest_Source_HTTPRequestForBlueprints_Public_HTTPRequestClient_h_65_ACCESSORS
#define FID_Users_aadij_Onedrive_Desktop_AN_CodeRepo_Plugins_Marketplace_HTTPRequest_Source_HTTPRequestForBlueprints_Public_HTTPRequestClient_h_65_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUHTTPRequestClient(); \
	friend struct Z_Construct_UClass_UHTTPRequestClient_Statics; \
public: \
	DECLARE_CLASS(UHTTPRequestClient, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/HTTPRequestForBlueprints"), NO_API) \
	DECLARE_SERIALIZER(UHTTPRequestClient)


#define FID_Users_aadij_Onedrive_Desktop_AN_CodeRepo_Plugins_Marketplace_HTTPRequest_Source_HTTPRequestForBlueprints_Public_HTTPRequestClient_h_65_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UHTTPRequestClient(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UHTTPRequestClient(UHTTPRequestClient&&); \
	NO_API UHTTPRequestClient(const UHTTPRequestClient&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UHTTPRequestClient); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UHTTPRequestClient); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UHTTPRequestClient) \
	NO_API virtual ~UHTTPRequestClient();


#define FID_Users_aadij_Onedrive_Desktop_AN_CodeRepo_Plugins_Marketplace_HTTPRequest_Source_HTTPRequestForBlueprints_Public_HTTPRequestClient_h_62_PROLOG
#define FID_Users_aadij_Onedrive_Desktop_AN_CodeRepo_Plugins_Marketplace_HTTPRequest_Source_HTTPRequestForBlueprints_Public_HTTPRequestClient_h_65_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_aadij_Onedrive_Desktop_AN_CodeRepo_Plugins_Marketplace_HTTPRequest_Source_HTTPRequestForBlueprints_Public_HTTPRequestClient_h_65_SPARSE_DATA \
	FID_Users_aadij_Onedrive_Desktop_AN_CodeRepo_Plugins_Marketplace_HTTPRequest_Source_HTTPRequestForBlueprints_Public_HTTPRequestClient_h_65_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Users_aadij_Onedrive_Desktop_AN_CodeRepo_Plugins_Marketplace_HTTPRequest_Source_HTTPRequestForBlueprints_Public_HTTPRequestClient_h_65_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Users_aadij_Onedrive_Desktop_AN_CodeRepo_Plugins_Marketplace_HTTPRequest_Source_HTTPRequestForBlueprints_Public_HTTPRequestClient_h_65_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_aadij_Onedrive_Desktop_AN_CodeRepo_Plugins_Marketplace_HTTPRequest_Source_HTTPRequestForBlueprints_Public_HTTPRequestClient_h_65_ACCESSORS \
	FID_Users_aadij_Onedrive_Desktop_AN_CodeRepo_Plugins_Marketplace_HTTPRequest_Source_HTTPRequestForBlueprints_Public_HTTPRequestClient_h_65_INCLASS_NO_PURE_DECLS \
	FID_Users_aadij_Onedrive_Desktop_AN_CodeRepo_Plugins_Marketplace_HTTPRequest_Source_HTTPRequestForBlueprints_Public_HTTPRequestClient_h_65_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> HTTPREQUESTFORBLUEPRINTS_API UClass* StaticClass<class UHTTPRequestClient>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_aadij_Onedrive_Desktop_AN_CodeRepo_Plugins_Marketplace_HTTPRequest_Source_HTTPRequestForBlueprints_Public_HTTPRequestClient_h


#define FOREACH_ENUM_EMETHOD(op) \
	op(EMethod::GET) \
	op(EMethod::POST) \
	op(EMethod::PUT) \
	op(EMethod::PATCH) \
	op(EMethod::DEL) \
	op(EMethod::COPY) \
	op(EMethod::HEAD) \
	op(EMethod::OPTIONS) \
	op(EMethod::LINK) \
	op(EMethod::UNLINK) \
	op(EMethod::LOCK) \
	op(EMethod::UNLOCK) \
	op(EMethod::PROPFIND) \
	op(EMethod::VIEW) 

enum class EMethod : uint8;
template<> struct TIsUEnumClass<EMethod> { enum { Value = true }; };
template<> HTTPREQUESTFORBLUEPRINTS_API UEnum* StaticEnum<EMethod>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
