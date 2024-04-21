// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OperatingSystemQRCode/Public/OperatingSystemQrCodeGenerator.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOperatingSystemQrCodeGenerator() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
	ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
	OPERATINGSYSTEMQRCODE_API UClass* Z_Construct_UClass_UOperatingSystemQrCodeGenerator();
	OPERATINGSYSTEMQRCODE_API UClass* Z_Construct_UClass_UOperatingSystemQrCodeGenerator_NoRegister();
	OPERATINGSYSTEMQRCODE_API UEnum* Z_Construct_UEnum_OperatingSystemQRCode_EQrCodeErrorCorrectionLevel();
	UPackage* Z_Construct_UPackage__Script_OperatingSystemQRCode();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EQrCodeErrorCorrectionLevel;
	static UEnum* EQrCodeErrorCorrectionLevel_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EQrCodeErrorCorrectionLevel.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EQrCodeErrorCorrectionLevel.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_OperatingSystemQRCode_EQrCodeErrorCorrectionLevel, (UObject*)Z_Construct_UPackage__Script_OperatingSystemQRCode(), TEXT("EQrCodeErrorCorrectionLevel"));
		}
		return Z_Registration_Info_UEnum_EQrCodeErrorCorrectionLevel.OuterSingleton;
	}
	template<> OPERATINGSYSTEMQRCODE_API UEnum* StaticEnum<EQrCodeErrorCorrectionLevel>()
	{
		return EQrCodeErrorCorrectionLevel_StaticEnum();
	}
	struct Z_Construct_UEnum_OperatingSystemQRCode_EQrCodeErrorCorrectionLevel_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_OperatingSystemQRCode_EQrCodeErrorCorrectionLevel_Statics::Enumerators[] = {
		{ "EQrCodeErrorCorrectionLevel::Low", (int64)EQrCodeErrorCorrectionLevel::Low },
		{ "EQrCodeErrorCorrectionLevel::Medium", (int64)EQrCodeErrorCorrectionLevel::Medium },
		{ "EQrCodeErrorCorrectionLevel::High", (int64)EQrCodeErrorCorrectionLevel::High },
		{ "EQrCodeErrorCorrectionLevel::VeryHigh", (int64)EQrCodeErrorCorrectionLevel::VeryHigh },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_OperatingSystemQRCode_EQrCodeErrorCorrectionLevel_Statics::Enum_MetaDataParams[] = {
		{ "High.Comment", "/** Tolerate about 25% erroneous codewords */" },
		{ "High.Name", "EQrCodeErrorCorrectionLevel::High" },
		{ "High.ToolTip", "Tolerate about 25% erroneous codewords" },
		{ "Low.Comment", "/** Tolerate about 7% erroneous codewords */" },
		{ "Low.Name", "EQrCodeErrorCorrectionLevel::Low" },
		{ "Low.ToolTip", "Tolerate about 7% erroneous codewords" },
		{ "Medium.Comment", "/** Tolerate about 15% erroneous codewords */" },
		{ "Medium.Name", "EQrCodeErrorCorrectionLevel::Medium" },
		{ "Medium.ToolTip", "Tolerate about 15% erroneous codewords" },
		{ "ModuleRelativePath", "Public/OperatingSystemQrCodeGenerator.h" },
		{ "VeryHigh.Comment", "/** Tolerate about 30% erroneous codewords */" },
		{ "VeryHigh.Name", "EQrCodeErrorCorrectionLevel::VeryHigh" },
		{ "VeryHigh.ToolTip", "Tolerate about 30% erroneous codewords" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_OperatingSystemQRCode_EQrCodeErrorCorrectionLevel_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_OperatingSystemQRCode,
		nullptr,
		"EQrCodeErrorCorrectionLevel",
		"EQrCodeErrorCorrectionLevel",
		Z_Construct_UEnum_OperatingSystemQRCode_EQrCodeErrorCorrectionLevel_Statics::Enumerators,
		RF_Public|RF_Transient|RF_MarkAsNative,
		UE_ARRAY_COUNT(Z_Construct_UEnum_OperatingSystemQRCode_EQrCodeErrorCorrectionLevel_Statics::Enumerators),
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_OperatingSystemQRCode_EQrCodeErrorCorrectionLevel_Statics::Enum_MetaDataParams), Z_Construct_UEnum_OperatingSystemQRCode_EQrCodeErrorCorrectionLevel_Statics::Enum_MetaDataParams)
	};
	UEnum* Z_Construct_UEnum_OperatingSystemQRCode_EQrCodeErrorCorrectionLevel()
	{
		if (!Z_Registration_Info_UEnum_EQrCodeErrorCorrectionLevel.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EQrCodeErrorCorrectionLevel.InnerSingleton, Z_Construct_UEnum_OperatingSystemQRCode_EQrCodeErrorCorrectionLevel_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EQrCodeErrorCorrectionLevel.InnerSingleton;
	}
	DEFINE_FUNCTION(UOperatingSystemQrCodeGenerator::execGenerateQrCodeTexture)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_StringToEncode);
		P_GET_ENUM(EQrCodeErrorCorrectionLevel,Z_Param_ErrorCorrectionLevel);
		P_GET_UBOOL(Z_Param_bInvert);
		P_GET_STRUCT(FLinearColor,Z_Param_Color1);
		P_GET_STRUCT(FLinearColor,Z_Param_Color2);
		P_GET_UBOOL(Z_Param_bSRGB);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UTexture2D**)Z_Param__Result=UOperatingSystemQrCodeGenerator::GenerateQrCodeTexture(Z_Param_StringToEncode,EQrCodeErrorCorrectionLevel(Z_Param_ErrorCorrectionLevel),Z_Param_bInvert,Z_Param_Color1,Z_Param_Color2,Z_Param_bSRGB);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOperatingSystemQrCodeGenerator::execGenerateQrCodeTextureSimple)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_StringToEncode);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UTexture2D**)Z_Param__Result=UOperatingSystemQrCodeGenerator::GenerateQrCodeTextureSimple(Z_Param_StringToEncode);
		P_NATIVE_END;
	}
	void UOperatingSystemQrCodeGenerator::StaticRegisterNativesUOperatingSystemQrCodeGenerator()
	{
		UClass* Class = UOperatingSystemQrCodeGenerator::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GenerateQrCodeTexture", &UOperatingSystemQrCodeGenerator::execGenerateQrCodeTexture },
			{ "GenerateQrCodeTextureSimple", &UOperatingSystemQrCodeGenerator::execGenerateQrCodeTextureSimple },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UOperatingSystemQrCodeGenerator_GenerateQrCodeTexture_Statics
	{
		struct OperatingSystemQrCodeGenerator_eventGenerateQrCodeTexture_Parms
		{
			FString StringToEncode;
			EQrCodeErrorCorrectionLevel ErrorCorrectionLevel;
			bool bInvert;
			FLinearColor Color1;
			FLinearColor Color2;
			bool bSRGB;
			UTexture2D* ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StringToEncode_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_StringToEncode;
		static const UECodeGen_Private::FBytePropertyParams NewProp_ErrorCorrectionLevel_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_ErrorCorrectionLevel;
		static void NewProp_bInvert_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bInvert;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Color1;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Color2;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bSRGB_MetaData[];
#endif
		static void NewProp_bSRGB_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bSRGB;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOperatingSystemQrCodeGenerator_GenerateQrCodeTexture_Statics::NewProp_StringToEncode_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UOperatingSystemQrCodeGenerator_GenerateQrCodeTexture_Statics::NewProp_StringToEncode = { "StringToEncode", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OperatingSystemQrCodeGenerator_eventGenerateQrCodeTexture_Parms, StringToEncode), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOperatingSystemQrCodeGenerator_GenerateQrCodeTexture_Statics::NewProp_StringToEncode_MetaData), Z_Construct_UFunction_UOperatingSystemQrCodeGenerator_GenerateQrCodeTexture_Statics::NewProp_StringToEncode_MetaData) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UOperatingSystemQrCodeGenerator_GenerateQrCodeTexture_Statics::NewProp_ErrorCorrectionLevel_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UOperatingSystemQrCodeGenerator_GenerateQrCodeTexture_Statics::NewProp_ErrorCorrectionLevel = { "ErrorCorrectionLevel", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OperatingSystemQrCodeGenerator_eventGenerateQrCodeTexture_Parms, ErrorCorrectionLevel), Z_Construct_UEnum_OperatingSystemQRCode_EQrCodeErrorCorrectionLevel, METADATA_PARAMS(0, nullptr) }; // 3664063724
	void Z_Construct_UFunction_UOperatingSystemQrCodeGenerator_GenerateQrCodeTexture_Statics::NewProp_bInvert_SetBit(void* Obj)
	{
		((OperatingSystemQrCodeGenerator_eventGenerateQrCodeTexture_Parms*)Obj)->bInvert = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOperatingSystemQrCodeGenerator_GenerateQrCodeTexture_Statics::NewProp_bInvert = { "bInvert", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(OperatingSystemQrCodeGenerator_eventGenerateQrCodeTexture_Parms), &Z_Construct_UFunction_UOperatingSystemQrCodeGenerator_GenerateQrCodeTexture_Statics::NewProp_bInvert_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOperatingSystemQrCodeGenerator_GenerateQrCodeTexture_Statics::NewProp_Color1 = { "Color1", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OperatingSystemQrCodeGenerator_eventGenerateQrCodeTexture_Parms, Color1), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOperatingSystemQrCodeGenerator_GenerateQrCodeTexture_Statics::NewProp_Color2 = { "Color2", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OperatingSystemQrCodeGenerator_eventGenerateQrCodeTexture_Parms, Color2), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOperatingSystemQrCodeGenerator_GenerateQrCodeTexture_Statics::NewProp_bSRGB_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_UOperatingSystemQrCodeGenerator_GenerateQrCodeTexture_Statics::NewProp_bSRGB_SetBit(void* Obj)
	{
		((OperatingSystemQrCodeGenerator_eventGenerateQrCodeTexture_Parms*)Obj)->bSRGB = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOperatingSystemQrCodeGenerator_GenerateQrCodeTexture_Statics::NewProp_bSRGB = { "bSRGB", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(OperatingSystemQrCodeGenerator_eventGenerateQrCodeTexture_Parms), &Z_Construct_UFunction_UOperatingSystemQrCodeGenerator_GenerateQrCodeTexture_Statics::NewProp_bSRGB_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOperatingSystemQrCodeGenerator_GenerateQrCodeTexture_Statics::NewProp_bSRGB_MetaData), Z_Construct_UFunction_UOperatingSystemQrCodeGenerator_GenerateQrCodeTexture_Statics::NewProp_bSRGB_MetaData) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOperatingSystemQrCodeGenerator_GenerateQrCodeTexture_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OperatingSystemQrCodeGenerator_eventGenerateQrCodeTexture_Parms, ReturnValue), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOperatingSystemQrCodeGenerator_GenerateQrCodeTexture_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOperatingSystemQrCodeGenerator_GenerateQrCodeTexture_Statics::NewProp_StringToEncode,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOperatingSystemQrCodeGenerator_GenerateQrCodeTexture_Statics::NewProp_ErrorCorrectionLevel_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOperatingSystemQrCodeGenerator_GenerateQrCodeTexture_Statics::NewProp_ErrorCorrectionLevel,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOperatingSystemQrCodeGenerator_GenerateQrCodeTexture_Statics::NewProp_bInvert,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOperatingSystemQrCodeGenerator_GenerateQrCodeTexture_Statics::NewProp_Color1,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOperatingSystemQrCodeGenerator_GenerateQrCodeTexture_Statics::NewProp_Color2,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOperatingSystemQrCodeGenerator_GenerateQrCodeTexture_Statics::NewProp_bSRGB,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOperatingSystemQrCodeGenerator_GenerateQrCodeTexture_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOperatingSystemQrCodeGenerator_GenerateQrCodeTexture_Statics::Function_MetaDataParams[] = {
		{ "Category", "QrCodeGenerator" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09* public static UOperatingSystemQrCodeGenerator::GenerateQrCodeTexture\n\x09* Returns a QR Code representing the given string at the given error correction level. This function is guaranteed to succeed for strings that have 2953 or fewer\n\x09* UTF-8 code units (not Unicode code points) if the low error correction level is used. The smallest possible QR Code version is automatically chosen for the output.\n\x09* The Error Correction Level of the result may be higher than the Error Correction Level argument if it can be done without increasing the version.\n\x09* @param StringToEncode [const FString&] String to convert. Should be less than 2953 characters.\n\x09* @param ErrorCorrectionLevel [EQrCodeErrorCorrectionLevel] A higher Error Correction Level will yield a barcode that tolerates more damaged parts while still being able to fully reconstruct the payload data but will tend to increase the version number (i.e. more modules in width and height).\n\x09* @param bInvert [bool] Inverts the Qr code symbol. Black becomes white, white becomes black.\n\x09* @param Color1 [FLinearColor] Color 1\n\x09* @param Color2 [FLinearColor] Color 2\n\x09* @param bSRGB [bool] If enabled, converts FLinearColor to FColor internally using SRGB.\n\x09* @return [UTexture2D*] Returns the newly constructed QR Code texture.\n\x09**/" },
#endif
		{ "CPP_Default_bInvert", "false" },
		{ "CPP_Default_bSRGB", "true" },
		{ "CPP_Default_Color1", "(R=1.000000,G=1.000000,B=1.000000,A=1.000000)" },
		{ "CPP_Default_Color2", "(R=0.000000,G=0.000000,B=0.000000,A=1.000000)" },
		{ "CPP_Default_ErrorCorrectionLevel", "Medium" },
		{ "ModuleRelativePath", "Public/OperatingSystemQrCodeGenerator.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "public static UOperatingSystemQrCodeGenerator::GenerateQrCodeTexture\nReturns a QR Code representing the given string at the given error correction level. This function is guaranteed to succeed for strings that have 2953 or fewer\nUTF-8 code units (not Unicode code points) if the low error correction level is used. The smallest possible QR Code version is automatically chosen for the output.\nThe Error Correction Level of the result may be higher than the Error Correction Level argument if it can be done without increasing the version.\n@param StringToEncode [const FString&] String to convert. Should be less than 2953 characters.\n@param ErrorCorrectionLevel [EQrCodeErrorCorrectionLevel] A higher Error Correction Level will yield a barcode that tolerates more damaged parts while still being able to fully reconstruct the payload data but will tend to increase the version number (i.e. more modules in width and height).\n@param bInvert [bool] Inverts the Qr code symbol. Black becomes white, white becomes black.\n@param Color1 [FLinearColor] Color 1\n@param Color2 [FLinearColor] Color 2\n@param bSRGB [bool] If enabled, converts FLinearColor to FColor internally using SRGB.\n@return [UTexture2D*] Returns the newly constructed QR Code texture." },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOperatingSystemQrCodeGenerator_GenerateQrCodeTexture_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOperatingSystemQrCodeGenerator, nullptr, "GenerateQrCodeTexture", nullptr, nullptr, Z_Construct_UFunction_UOperatingSystemQrCodeGenerator_GenerateQrCodeTexture_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOperatingSystemQrCodeGenerator_GenerateQrCodeTexture_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOperatingSystemQrCodeGenerator_GenerateQrCodeTexture_Statics::OperatingSystemQrCodeGenerator_eventGenerateQrCodeTexture_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04822401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOperatingSystemQrCodeGenerator_GenerateQrCodeTexture_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOperatingSystemQrCodeGenerator_GenerateQrCodeTexture_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOperatingSystemQrCodeGenerator_GenerateQrCodeTexture_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UOperatingSystemQrCodeGenerator_GenerateQrCodeTexture_Statics::OperatingSystemQrCodeGenerator_eventGenerateQrCodeTexture_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UOperatingSystemQrCodeGenerator_GenerateQrCodeTexture()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOperatingSystemQrCodeGenerator_GenerateQrCodeTexture_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOperatingSystemQrCodeGenerator_GenerateQrCodeTextureSimple_Statics
	{
		struct OperatingSystemQrCodeGenerator_eventGenerateQrCodeTextureSimple_Parms
		{
			FString StringToEncode;
			UTexture2D* ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StringToEncode_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_StringToEncode;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOperatingSystemQrCodeGenerator_GenerateQrCodeTextureSimple_Statics::NewProp_StringToEncode_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UOperatingSystemQrCodeGenerator_GenerateQrCodeTextureSimple_Statics::NewProp_StringToEncode = { "StringToEncode", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OperatingSystemQrCodeGenerator_eventGenerateQrCodeTextureSimple_Parms, StringToEncode), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOperatingSystemQrCodeGenerator_GenerateQrCodeTextureSimple_Statics::NewProp_StringToEncode_MetaData), Z_Construct_UFunction_UOperatingSystemQrCodeGenerator_GenerateQrCodeTextureSimple_Statics::NewProp_StringToEncode_MetaData) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOperatingSystemQrCodeGenerator_GenerateQrCodeTextureSimple_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OperatingSystemQrCodeGenerator_eventGenerateQrCodeTextureSimple_Parms, ReturnValue), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOperatingSystemQrCodeGenerator_GenerateQrCodeTextureSimple_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOperatingSystemQrCodeGenerator_GenerateQrCodeTextureSimple_Statics::NewProp_StringToEncode,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOperatingSystemQrCodeGenerator_GenerateQrCodeTextureSimple_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOperatingSystemQrCodeGenerator_GenerateQrCodeTextureSimple_Statics::Function_MetaDataParams[] = {
		{ "Category", "QrCodeGenerator" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09* public static UOperatingSystemQrCodeGenerator::GenerateQrCodeTexture\n\x09* Returns a QR Code representing the given string. This function is guaranteed to succeed for strings that have 2953 or fewer UTF-8 code units (not Unicode code points).\n\x09* The smallest possible QR Code version is automatically chosen for the output.\n\x09* @param StringToEncode [const FString&] String to convert. Should be less than 2953 characters.\n\x09* @return [UTexture2D*] Returns the newly constructed QR Code texture.\n\x09**/" },
#endif
		{ "ModuleRelativePath", "Public/OperatingSystemQrCodeGenerator.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "public static UOperatingSystemQrCodeGenerator::GenerateQrCodeTexture\nReturns a QR Code representing the given string. This function is guaranteed to succeed for strings that have 2953 or fewer UTF-8 code units (not Unicode code points).\nThe smallest possible QR Code version is automatically chosen for the output.\n@param StringToEncode [const FString&] String to convert. Should be less than 2953 characters.\n@return [UTexture2D*] Returns the newly constructed QR Code texture." },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOperatingSystemQrCodeGenerator_GenerateQrCodeTextureSimple_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOperatingSystemQrCodeGenerator, nullptr, "GenerateQrCodeTextureSimple", nullptr, nullptr, Z_Construct_UFunction_UOperatingSystemQrCodeGenerator_GenerateQrCodeTextureSimple_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOperatingSystemQrCodeGenerator_GenerateQrCodeTextureSimple_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOperatingSystemQrCodeGenerator_GenerateQrCodeTextureSimple_Statics::OperatingSystemQrCodeGenerator_eventGenerateQrCodeTextureSimple_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOperatingSystemQrCodeGenerator_GenerateQrCodeTextureSimple_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOperatingSystemQrCodeGenerator_GenerateQrCodeTextureSimple_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOperatingSystemQrCodeGenerator_GenerateQrCodeTextureSimple_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UOperatingSystemQrCodeGenerator_GenerateQrCodeTextureSimple_Statics::OperatingSystemQrCodeGenerator_eventGenerateQrCodeTextureSimple_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UOperatingSystemQrCodeGenerator_GenerateQrCodeTextureSimple()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOperatingSystemQrCodeGenerator_GenerateQrCodeTextureSimple_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UOperatingSystemQrCodeGenerator);
	UClass* Z_Construct_UClass_UOperatingSystemQrCodeGenerator_NoRegister()
	{
		return UOperatingSystemQrCodeGenerator::StaticClass();
	}
	struct Z_Construct_UClass_UOperatingSystemQrCodeGenerator_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UOperatingSystemQrCodeGenerator_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_OperatingSystemQRCode,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOperatingSystemQrCodeGenerator_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_UOperatingSystemQrCodeGenerator_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UOperatingSystemQrCodeGenerator_GenerateQrCodeTexture, "GenerateQrCodeTexture" }, // 370829045
		{ &Z_Construct_UFunction_UOperatingSystemQrCodeGenerator_GenerateQrCodeTextureSimple, "GenerateQrCodeTextureSimple" }, // 2882686587
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOperatingSystemQrCodeGenerator_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOperatingSystemQrCodeGenerator_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "OperatingSystemQrCodeGenerator.h" },
		{ "IsBlueprintBase", "false" },
		{ "ModuleRelativePath", "Public/OperatingSystemQrCodeGenerator.h" },
		{ "NotBlueprintType", "true" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UOperatingSystemQrCodeGenerator_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOperatingSystemQrCodeGenerator>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UOperatingSystemQrCodeGenerator_Statics::ClassParams = {
		&UOperatingSystemQrCodeGenerator::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x001000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOperatingSystemQrCodeGenerator_Statics::Class_MetaDataParams), Z_Construct_UClass_UOperatingSystemQrCodeGenerator_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_UOperatingSystemQrCodeGenerator()
	{
		if (!Z_Registration_Info_UClass_UOperatingSystemQrCodeGenerator.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UOperatingSystemQrCodeGenerator.OuterSingleton, Z_Construct_UClass_UOperatingSystemQrCodeGenerator_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UOperatingSystemQrCodeGenerator.OuterSingleton;
	}
	template<> OPERATINGSYSTEMQRCODE_API UClass* StaticClass<UOperatingSystemQrCodeGenerator>()
	{
		return UOperatingSystemQrCodeGenerator::StaticClass();
	}
	UOperatingSystemQrCodeGenerator::UOperatingSystemQrCodeGenerator(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UOperatingSystemQrCodeGenerator);
	UOperatingSystemQrCodeGenerator::~UOperatingSystemQrCodeGenerator() {}
	struct Z_CompiledInDeferFile_FID_AN_CodeRepo_Plugins_Marketplace_QRCodeGenerator_Source_OperatingSystemQRCode_Public_OperatingSystemQrCodeGenerator_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_AN_CodeRepo_Plugins_Marketplace_QRCodeGenerator_Source_OperatingSystemQRCode_Public_OperatingSystemQrCodeGenerator_h_Statics::EnumInfo[] = {
		{ EQrCodeErrorCorrectionLevel_StaticEnum, TEXT("EQrCodeErrorCorrectionLevel"), &Z_Registration_Info_UEnum_EQrCodeErrorCorrectionLevel, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3664063724U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_AN_CodeRepo_Plugins_Marketplace_QRCodeGenerator_Source_OperatingSystemQRCode_Public_OperatingSystemQrCodeGenerator_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UOperatingSystemQrCodeGenerator, UOperatingSystemQrCodeGenerator::StaticClass, TEXT("UOperatingSystemQrCodeGenerator"), &Z_Registration_Info_UClass_UOperatingSystemQrCodeGenerator, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UOperatingSystemQrCodeGenerator), 3949337782U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_AN_CodeRepo_Plugins_Marketplace_QRCodeGenerator_Source_OperatingSystemQRCode_Public_OperatingSystemQrCodeGenerator_h_3412786689(TEXT("/Script/OperatingSystemQRCode"),
		Z_CompiledInDeferFile_FID_AN_CodeRepo_Plugins_Marketplace_QRCodeGenerator_Source_OperatingSystemQRCode_Public_OperatingSystemQrCodeGenerator_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_AN_CodeRepo_Plugins_Marketplace_QRCodeGenerator_Source_OperatingSystemQRCode_Public_OperatingSystemQrCodeGenerator_h_Statics::ClassInfo),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_AN_CodeRepo_Plugins_Marketplace_QRCodeGenerator_Source_OperatingSystemQRCode_Public_OperatingSystemQrCodeGenerator_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_AN_CodeRepo_Plugins_Marketplace_QRCodeGenerator_Source_OperatingSystemQRCode_Public_OperatingSystemQrCodeGenerator_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
