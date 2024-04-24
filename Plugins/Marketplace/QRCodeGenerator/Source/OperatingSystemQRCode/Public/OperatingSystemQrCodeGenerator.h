// Copyright 2023 - YetiTech Studios, Pvt Ltd. All Rights Reserved.

#pragma once

#include "UObject/Object.h"
#include "OperatingSystemQrCodeGenerator.generated.h"

UENUM()
enum class EQrCodeErrorCorrectionLevel : uint8
{
	/** Tolerate about 7% erroneous codewords */
	Low,

	/** Tolerate about 15% erroneous codewords */
	Medium,

	/** Tolerate about 25% erroneous codewords */
	High,

	/** Tolerate about 30% erroneous codewords */
	VeryHigh
};

UCLASS(NotBlueprintable, NotBlueprintType)
class OPERATINGSYSTEMQRCODE_API UOperatingSystemQrCodeGenerator : public UObject
{
	GENERATED_BODY()

public:

	/**
	* public static UOperatingSystemQrCodeGenerator::GenerateQrCodeTexture
	* Returns a QR Code representing the given string. This function is guaranteed to succeed for strings that have 2953 or fewer UTF-8 code units (not Unicode code points).
	* The smallest possible QR Code version is automatically chosen for the output.
	* @param StringToEncode [const FString&] String to convert. Should be less than 2953 characters.
	* @return [UTexture2D*] Returns the newly constructed QR Code texture.
	**/
	UFUNCTION(BlueprintCallable, Category = QrCodeGenerator)
	static UTexture2D* GenerateQrCodeTextureSimple(const FString& StringToEncode);

	/**
	* public static UOperatingSystemQrCodeGenerator::GenerateQrCodeTexture
	* Returns a QR Code representing the given string at the given error correction level. This function is guaranteed to succeed for strings that have 2953 or fewer
	* UTF-8 code units (not Unicode code points) if the low error correction level is used. The smallest possible QR Code version is automatically chosen for the output.
	* The Error Correction Level of the result may be higher than the Error Correction Level argument if it can be done without increasing the version.
	* @param StringToEncode [const FString&] String to convert. Should be less than 2953 characters.
	* @param ErrorCorrectionLevel [EQrCodeErrorCorrectionLevel] A higher Error Correction Level will yield a barcode that tolerates more damaged parts while still being able to fully reconstruct the payload data but will tend to increase the version number (i.e. more modules in width and height).
	* @param bInvert [bool] Inverts the Qr code symbol. Black becomes white, white becomes black.
	* @param Color1 [FLinearColor] Color 1
	* @param Color2 [FLinearColor] Color 2
	* @param bSRGB [bool] If enabled, converts FLinearColor to FColor internally using SRGB.
	* @return [UTexture2D*] Returns the newly constructed QR Code texture.
	**/
	UFUNCTION(BlueprintCallable, Category = QrCodeGenerator)
	static UTexture2D* GenerateQrCodeTexture(const FString& StringToEncode, EQrCodeErrorCorrectionLevel ErrorCorrectionLevel = EQrCodeErrorCorrectionLevel::Medium, bool bInvert = false, FLinearColor Color1 = FLinearColor::White, FLinearColor Color2 = FLinearColor::Black, const bool bSRGB = true);

#if 0
	UFUNCTION(BlueprintCallable, Category = QrCodeGenerator)
	static UTexture2D* GenerateBinaryQrCodeTexture(const TArray<uint8>& BinaryData, EQrCodeErrorCorrectionLevel ErrorCorrectionLevel = EQrCodeErrorCorrectionLevel::Low, bool bInvert = false);

	UFUNCTION(BlueprintPure, Category = QrCodeGenerator)
	static TArray<uint8> ConvertTextureToBinaryData(UTexture2D* TargetTexture);

	UFUNCTION(BlueprintPure, Category = QrCodeGenerator)
	static FString EncodeBase64(const TArray<uint8>& BinaryData);
#endif
};
