// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "OperatingSystemQrCodeGenerator.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UTexture2D;
enum class EQrCodeErrorCorrectionLevel : uint8;
struct FLinearColor;
#ifdef OPERATINGSYSTEMQRCODE_OperatingSystemQrCodeGenerator_generated_h
#error "OperatingSystemQrCodeGenerator.generated.h already included, missing '#pragma once' in OperatingSystemQrCodeGenerator.h"
#endif
#define OPERATINGSYSTEMQRCODE_OperatingSystemQrCodeGenerator_generated_h

#define FID_Users_aadij_Onedrive_Desktop_AN_CodeRepo_Plugins_Marketplace_QRCodeGenerator_Source_OperatingSystemQRCode_Public_OperatingSystemQrCodeGenerator_h_27_SPARSE_DATA
#define FID_Users_aadij_Onedrive_Desktop_AN_CodeRepo_Plugins_Marketplace_QRCodeGenerator_Source_OperatingSystemQRCode_Public_OperatingSystemQrCodeGenerator_h_27_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Users_aadij_Onedrive_Desktop_AN_CodeRepo_Plugins_Marketplace_QRCodeGenerator_Source_OperatingSystemQRCode_Public_OperatingSystemQrCodeGenerator_h_27_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Users_aadij_Onedrive_Desktop_AN_CodeRepo_Plugins_Marketplace_QRCodeGenerator_Source_OperatingSystemQRCode_Public_OperatingSystemQrCodeGenerator_h_27_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGenerateQrCodeTexture); \
	DECLARE_FUNCTION(execGenerateQrCodeTextureSimple);


#define FID_Users_aadij_Onedrive_Desktop_AN_CodeRepo_Plugins_Marketplace_QRCodeGenerator_Source_OperatingSystemQRCode_Public_OperatingSystemQrCodeGenerator_h_27_ACCESSORS
#define FID_Users_aadij_Onedrive_Desktop_AN_CodeRepo_Plugins_Marketplace_QRCodeGenerator_Source_OperatingSystemQRCode_Public_OperatingSystemQrCodeGenerator_h_27_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUOperatingSystemQrCodeGenerator(); \
	friend struct Z_Construct_UClass_UOperatingSystemQrCodeGenerator_Statics; \
public: \
	DECLARE_CLASS(UOperatingSystemQrCodeGenerator, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/OperatingSystemQRCode"), NO_API) \
	DECLARE_SERIALIZER(UOperatingSystemQrCodeGenerator)


#define FID_Users_aadij_Onedrive_Desktop_AN_CodeRepo_Plugins_Marketplace_QRCodeGenerator_Source_OperatingSystemQRCode_Public_OperatingSystemQrCodeGenerator_h_27_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UOperatingSystemQrCodeGenerator(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UOperatingSystemQrCodeGenerator(UOperatingSystemQrCodeGenerator&&); \
	NO_API UOperatingSystemQrCodeGenerator(const UOperatingSystemQrCodeGenerator&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UOperatingSystemQrCodeGenerator); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UOperatingSystemQrCodeGenerator); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UOperatingSystemQrCodeGenerator) \
	NO_API virtual ~UOperatingSystemQrCodeGenerator();


#define FID_Users_aadij_Onedrive_Desktop_AN_CodeRepo_Plugins_Marketplace_QRCodeGenerator_Source_OperatingSystemQRCode_Public_OperatingSystemQrCodeGenerator_h_24_PROLOG
#define FID_Users_aadij_Onedrive_Desktop_AN_CodeRepo_Plugins_Marketplace_QRCodeGenerator_Source_OperatingSystemQRCode_Public_OperatingSystemQrCodeGenerator_h_27_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_aadij_Onedrive_Desktop_AN_CodeRepo_Plugins_Marketplace_QRCodeGenerator_Source_OperatingSystemQRCode_Public_OperatingSystemQrCodeGenerator_h_27_SPARSE_DATA \
	FID_Users_aadij_Onedrive_Desktop_AN_CodeRepo_Plugins_Marketplace_QRCodeGenerator_Source_OperatingSystemQRCode_Public_OperatingSystemQrCodeGenerator_h_27_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Users_aadij_Onedrive_Desktop_AN_CodeRepo_Plugins_Marketplace_QRCodeGenerator_Source_OperatingSystemQRCode_Public_OperatingSystemQrCodeGenerator_h_27_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Users_aadij_Onedrive_Desktop_AN_CodeRepo_Plugins_Marketplace_QRCodeGenerator_Source_OperatingSystemQRCode_Public_OperatingSystemQrCodeGenerator_h_27_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_aadij_Onedrive_Desktop_AN_CodeRepo_Plugins_Marketplace_QRCodeGenerator_Source_OperatingSystemQRCode_Public_OperatingSystemQrCodeGenerator_h_27_ACCESSORS \
	FID_Users_aadij_Onedrive_Desktop_AN_CodeRepo_Plugins_Marketplace_QRCodeGenerator_Source_OperatingSystemQRCode_Public_OperatingSystemQrCodeGenerator_h_27_INCLASS_NO_PURE_DECLS \
	FID_Users_aadij_Onedrive_Desktop_AN_CodeRepo_Plugins_Marketplace_QRCodeGenerator_Source_OperatingSystemQRCode_Public_OperatingSystemQrCodeGenerator_h_27_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> OPERATINGSYSTEMQRCODE_API UClass* StaticClass<class UOperatingSystemQrCodeGenerator>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_aadij_Onedrive_Desktop_AN_CodeRepo_Plugins_Marketplace_QRCodeGenerator_Source_OperatingSystemQRCode_Public_OperatingSystemQrCodeGenerator_h


#define FOREACH_ENUM_EQRCODEERRORCORRECTIONLEVEL(op) \
	op(EQrCodeErrorCorrectionLevel::Low) \
	op(EQrCodeErrorCorrectionLevel::Medium) \
	op(EQrCodeErrorCorrectionLevel::High) \
	op(EQrCodeErrorCorrectionLevel::VeryHigh) 

enum class EQrCodeErrorCorrectionLevel : uint8;
template<> struct TIsUEnumClass<EQrCodeErrorCorrectionLevel> { enum { Value = true }; };
template<> OPERATINGSYSTEMQRCODE_API UEnum* StaticEnum<EQrCodeErrorCorrectionLevel>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
