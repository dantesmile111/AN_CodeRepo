// Copyright 2023 - YetiTech Studios, Pvt Ltd. All Rights Reserved.

#include "OperatingSystemQrCodeGenerator.h"
#include "../ThirdParty/qrcodegen.hpp"
#include "Engine/Texture2D.h"
#include "Runtime/Launch/Resources/Version.h"
#include "PixelFormat.h"
#include "Serialization/BulkDataCommon.h"
#include "TextureResource.h"

using qrcodegen::QrCode;

UTexture2D* UOperatingSystemQrCodeGenerator::GenerateQrCodeTextureSimple(const FString& StringToEncode)
{
	return GenerateQrCodeTexture(StringToEncode);
}

UTexture2D* UOperatingSystemQrCodeGenerator::GenerateQrCodeTexture(const FString& StringToEncode,
   EQrCodeErrorCorrectionLevel ErrorCorrectionLevel /* = EQrCodeErrorCorrectionLevel::Low*/,
   bool bInvert /* = false*/,
   FLinearColor Color1 /* = FColor::White*/,
   FLinearColor Color2 /* = FColor::Black*/,
   const bool bSRGB /* = true*/)
{
	auto ErrLevel = QrCode::Ecc::LOW;
	switch (ErrorCorrectionLevel)
	{
		case EQrCodeErrorCorrectionLevel::Medium:
			ErrLevel = QrCode::Ecc::MEDIUM;
			break;
		case EQrCodeErrorCorrectionLevel::High:
			ErrLevel = QrCode::Ecc::QUARTILE;
			break;
		case EQrCodeErrorCorrectionLevel::VeryHigh:
			ErrLevel = QrCode::Ecc::HIGH;
			break;
		default: ;
	}

	const QrCode Code = QrCode::encodeText(TCHAR_TO_UTF8(*StringToEncode), ErrLevel);	
	const auto Size = Code.getSize();
	TArray<FColor> QrPixels;
	QrPixels.SetNumZeroed(Size * Size);

	for (uint8 x = 0; x < Size; x++)
	{
		for (uint8 y = 0; y < Size; y++)
		{
			if (bInvert)
			{
				QrPixels[x + y * Size] = Code.getModule(x, y) ? Color2.ToFColor(bSRGB) : Color1.ToFColor(bSRGB);
			}
			else
			{
				QrPixels[x + y * Size] = Code.getModule(x, y) ? Color1.ToFColor(bSRGB) : Color2.ToFColor(bSRGB);
			}
		}
	}

	UTexture2D* Texture2D = UTexture2D::CreateTransient(Size, Size, PF_B8G8R8A8);
	
#if ENGINE_MAJOR_VERSION == 5
	const auto TextureData = Texture2D->GetPlatformData()->Mips[0].BulkData.Lock(LOCK_READ_ONLY);
#else
	const auto TextureData = Texture2D->PlatformData->Mips[0].BulkData.Lock(LOCK_READ_ONLY);
#endif
	
	FMemory::Memcpy(TextureData, QrPixels.GetData(), Size * Size * 4);

#if ENGINE_MAJOR_VERSION == 5
	Texture2D->GetPlatformData()->Mips[0].BulkData.Unlock();
#else
	Texture2D->PlatformData->Mips[0].BulkData.Unlock();
#endif
	
	Texture2D->Filter = TF_Nearest;
	Texture2D->UpdateResource();
	
	return Texture2D;
}

#if 0
UTexture2D* UOperatingSystemQrCodeGenerator::GenerateBinaryQrCodeTexture(const TArray<uint8>& BinaryData, EQrCodeErrorCorrectionLevel ErrorCorrectionLevel, bool bInvert)
{
	if (BinaryData.Num() > 2953 || BinaryData.IsEmpty())
	{
		return nullptr;
	}
	
	auto ErrLevel = QrCode::Ecc::LOW;
	switch (ErrorCorrectionLevel)
	{
		case EQrCodeErrorCorrectionLevel::Medium:
			ErrLevel = QrCode::Ecc::MEDIUM;
		break;
		case EQrCodeErrorCorrectionLevel::High:
			ErrLevel = QrCode::Ecc::QUARTILE;
		break;
		case EQrCodeErrorCorrectionLevel::VeryHigh:
			ErrLevel = QrCode::Ecc::HIGH;
		break;
		default: ;
	}

	std::vector<std::uint8_t> TargetData(BinaryData.Num(), 0);
	for (int i = 0; i < BinaryData.Num(); ++i)
	{
		TargetData[i] = BinaryData[i];
	}
	
	const QrCode Code = QrCode::encodeBinary(TargetData, ErrLevel);
	const auto Size = Code.getSize();
	TArray<FColor> QrPixels;
	QrPixels.SetNumZeroed(Size * Size);

	for (uint8 x = 0; x < Size; x++)
	{
		for (uint8 y = 0; y < Size; y++)
		{
			if (bInvert)
			{
				QrPixels[x + y * Size] = Code.getModule(x, y) ? FColor::Black : FColor::White;
			}
			else
			{
				QrPixels[x + y * Size] = Code.getModule(x, y) ? FColor::White : FColor::Black;
			}
		}
	}

	UTexture2D* Texture2D = UTexture2D::CreateTransient(Size, Size, PF_B8G8R8A8);
	const auto TextureData = Texture2D->GetPlatformData()->Mips[0].BulkData.Lock(LOCK_READ_WRITE);
	FMemory::Memcpy(TextureData, QrPixels.GetData(), Size * Size * 4);
	Texture2D->GetPlatformData()->Mips[0].BulkData.Unlock();
	Texture2D->Filter = TF_Nearest;
	Texture2D->UpdateResource();
	
	return Texture2D;
}

TArray<uint8> UOperatingSystemQrCodeGenerator::ConvertTextureToBinaryData(UTexture2D* TargetTexture)
{
	if (!IsValid(TargetTexture))
	{
		return {};
	}

	FTexture2DMipMap& Mip = TargetTexture->GetPlatformData()->Mips[0];
	void* Data = Mip.BulkData.Lock(LOCK_READ_WRITE);

	if (Data == nullptr)
	{
		Mip.BulkData.Unlock();
		return {};
	}

	const uint8* RawData = static_cast<uint8*>(Data);
	const auto SizeX = TargetTexture->GetSizeX();
	const auto SizeY = TargetTexture->GetSizeY();
	
	static int32 BufferSize = SizeX * SizeY * 4; 
	TArray<FColor> Colors;
	Colors.Reserve(BufferSize);
	Colors.AddUninitialized(BufferSize);
	
	for (int x = 0; x < SizeX; ++x)
	{
		for (int y = 0; y < SizeY; ++y)
		{
			FColor Pixel = FColor(0, 0, 0, 255);
			Pixel.B = RawData[4 * (SizeX * y + x) + 0];
			Pixel.G = RawData[4 * (SizeX * y + x) + 1];
			Pixel.R = RawData[4 * (SizeX * y + x) + 2];
			Colors[x + y * SizeX] = Pixel;
		}
	}
	
	Mip.BulkData.Unlock();

	TArray<uint8> ByteData;
	ByteData.Reserve(BufferSize);
	ByteData.AddUninitialized(BufferSize);
	FMemory::Memcpy(ByteData.GetData(), Colors.GetData(), BufferSize);
	return ByteData;
}

FString UOperatingSystemQrCodeGenerator::EncodeBase64(const TArray<uint8>& BinaryData)
{
	return FBase64::Encode(BinaryData);
}
#endif
