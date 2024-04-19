// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "HTTPRequestForBlueprints/Public/HTTPRequestClient.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHTTPRequestClient() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	HTTPREQUESTFORBLUEPRINTS_API UClass* Z_Construct_UClass_UHTTPRequestClient();
	HTTPREQUESTFORBLUEPRINTS_API UClass* Z_Construct_UClass_UHTTPRequestClient_NoRegister();
	HTTPREQUESTFORBLUEPRINTS_API UEnum* Z_Construct_UEnum_HTTPRequestForBlueprints_EMethod();
	HTTPREQUESTFORBLUEPRINTS_API UFunction* Z_Construct_UDelegateFunction_HTTPRequestForBlueprints_Response__DelegateSignature();
	HTTPREQUESTFORBLUEPRINTS_API UScriptStruct* Z_Construct_UScriptStruct_FJSONObject();
	UPackage* Z_Construct_UPackage__Script_HTTPRequestForBlueprints();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EMethod;
	static UEnum* EMethod_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EMethod.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EMethod.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_HTTPRequestForBlueprints_EMethod, (UObject*)Z_Construct_UPackage__Script_HTTPRequestForBlueprints(), TEXT("EMethod"));
		}
		return Z_Registration_Info_UEnum_EMethod.OuterSingleton;
	}
	template<> HTTPREQUESTFORBLUEPRINTS_API UEnum* StaticEnum<EMethod>()
	{
		return EMethod_StaticEnum();
	}
	struct Z_Construct_UEnum_HTTPRequestForBlueprints_EMethod_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_HTTPRequestForBlueprints_EMethod_Statics::Enumerators[] = {
		{ "EMethod::GET", (int64)EMethod::GET },
		{ "EMethod::POST", (int64)EMethod::POST },
		{ "EMethod::PUT", (int64)EMethod::PUT },
		{ "EMethod::PATCH", (int64)EMethod::PATCH },
		{ "EMethod::DEL", (int64)EMethod::DEL },
		{ "EMethod::COPY", (int64)EMethod::COPY },
		{ "EMethod::HEAD", (int64)EMethod::HEAD },
		{ "EMethod::OPTIONS", (int64)EMethod::OPTIONS },
		{ "EMethod::LINK", (int64)EMethod::LINK },
		{ "EMethod::UNLINK", (int64)EMethod::UNLINK },
		{ "EMethod::LOCK", (int64)EMethod::LOCK },
		{ "EMethod::UNLOCK", (int64)EMethod::UNLOCK },
		{ "EMethod::PROPFIND", (int64)EMethod::PROPFIND },
		{ "EMethod::VIEW", (int64)EMethod::VIEW },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_HTTPRequestForBlueprints_EMethod_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n *\x09The types of request methods available.\n *\n *\x09@author King Wai Mark\n */" },
		{ "COPY.Name", "EMethod::COPY" },
		{ "DEL.DisplayName", "DELETE" },
		{ "DEL.Name", "EMethod::DEL" },
		{ "GET.Name", "EMethod::GET" },
		{ "HEAD.Name", "EMethod::HEAD" },
		{ "LINK.Name", "EMethod::LINK" },
		{ "LOCK.Name", "EMethod::LOCK" },
		{ "ModuleRelativePath", "Public/HTTPRequestClient.h" },
		{ "OPTIONS.Name", "EMethod::OPTIONS" },
		{ "PATCH.Name", "EMethod::PATCH" },
		{ "POST.Name", "EMethod::POST" },
		{ "PROPFIND.Name", "EMethod::PROPFIND" },
		{ "PUT.Name", "EMethod::PUT" },
		{ "ToolTip", "The types of request methods available.\n\n@author King Wai Mark" },
		{ "UNLINK.Name", "EMethod::UNLINK" },
		{ "UNLOCK.Name", "EMethod::UNLOCK" },
		{ "VIEW.Name", "EMethod::VIEW" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_HTTPRequestForBlueprints_EMethod_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_HTTPRequestForBlueprints,
		nullptr,
		"EMethod",
		"EMethod",
		Z_Construct_UEnum_HTTPRequestForBlueprints_EMethod_Statics::Enumerators,
		RF_Public|RF_Transient|RF_MarkAsNative,
		UE_ARRAY_COUNT(Z_Construct_UEnum_HTTPRequestForBlueprints_EMethod_Statics::Enumerators),
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_HTTPRequestForBlueprints_EMethod_Statics::Enum_MetaDataParams), Z_Construct_UEnum_HTTPRequestForBlueprints_EMethod_Statics::Enum_MetaDataParams)
	};
	UEnum* Z_Construct_UEnum_HTTPRequestForBlueprints_EMethod()
	{
		if (!Z_Registration_Info_UEnum_EMethod.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EMethod.InnerSingleton, Z_Construct_UEnum_HTTPRequestForBlueprints_EMethod_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EMethod.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_JSONObject;
class UScriptStruct* FJSONObject::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_JSONObject.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_JSONObject.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FJSONObject, (UObject*)Z_Construct_UPackage__Script_HTTPRequestForBlueprints(), TEXT("JSONObject"));
	}
	return Z_Registration_Info_UScriptStruct_JSONObject.OuterSingleton;
}
template<> HTTPREQUESTFORBLUEPRINTS_API UScriptStruct* StaticStruct<FJSONObject>()
{
	return FJSONObject::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FJSONObject_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FJSONObject_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n *\x09@author King Wai Mark\n *\n *\x09JSON Object that is readable for blueprints.\n * \n */" },
		{ "ModuleRelativePath", "Public/HTTPRequestClient.h" },
		{ "ToolTip", "@author King Wai Mark\n\nJSON Object that is readable for blueprints." },
	};
#endif
	void* Z_Construct_UScriptStruct_FJSONObject_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FJSONObject>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FJSONObject_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_HTTPRequestForBlueprints,
		nullptr,
		&NewStructOps,
		"JSONObject",
		nullptr,
		0,
		sizeof(FJSONObject),
		alignof(FJSONObject),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FJSONObject_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FJSONObject_Statics::Struct_MetaDataParams)
	};
	UScriptStruct* Z_Construct_UScriptStruct_FJSONObject()
	{
		if (!Z_Registration_Info_UScriptStruct_JSONObject.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_JSONObject.InnerSingleton, Z_Construct_UScriptStruct_FJSONObject_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_JSONObject.InnerSingleton;
	}
	struct Z_Construct_UDelegateFunction_HTTPRequestForBlueprints_Response__DelegateSignature_Statics
	{
		struct _Script_HTTPRequestForBlueprints_eventResponse_Parms
		{
			uint8 Status;
			FString ResponseString;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_Status;
		static const UECodeGen_Private::FStrPropertyParams NewProp_ResponseString;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UDelegateFunction_HTTPRequestForBlueprints_Response__DelegateSignature_Statics::NewProp_Status = { "Status", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_HTTPRequestForBlueprints_eventResponse_Parms, Status), nullptr, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UDelegateFunction_HTTPRequestForBlueprints_Response__DelegateSignature_Statics::NewProp_ResponseString = { "ResponseString", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_HTTPRequestForBlueprints_eventResponse_Parms, ResponseString), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_HTTPRequestForBlueprints_Response__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_HTTPRequestForBlueprints_Response__DelegateSignature_Statics::NewProp_Status,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_HTTPRequestForBlueprints_Response__DelegateSignature_Statics::NewProp_ResponseString,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_HTTPRequestForBlueprints_Response__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/HTTPRequestClient.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_HTTPRequestForBlueprints_Response__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_HTTPRequestForBlueprints, nullptr, "Response__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_HTTPRequestForBlueprints_Response__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_HTTPRequestForBlueprints_Response__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_HTTPRequestForBlueprints_Response__DelegateSignature_Statics::_Script_HTTPRequestForBlueprints_eventResponse_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00120000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_HTTPRequestForBlueprints_Response__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_HTTPRequestForBlueprints_Response__DelegateSignature_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_HTTPRequestForBlueprints_Response__DelegateSignature_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UDelegateFunction_HTTPRequestForBlueprints_Response__DelegateSignature_Statics::_Script_HTTPRequestForBlueprints_eventResponse_Parms) < MAX_uint16);
	UFunction* Z_Construct_UDelegateFunction_HTTPRequestForBlueprints_Response__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_HTTPRequestForBlueprints_Response__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FResponse_DelegateWrapper(const FScriptDelegate& Response, uint8 Status, const FString& ResponseString)
{
	struct _Script_HTTPRequestForBlueprints_eventResponse_Parms
	{
		uint8 Status;
		FString ResponseString;
	};
	_Script_HTTPRequestForBlueprints_eventResponse_Parms Parms;
	Parms.Status=Status;
	Parms.ResponseString=ResponseString;
	Response.ProcessDelegate<UObject>(&Parms);
}
	DEFINE_FUNCTION(UHTTPRequestClient::execReplaceWithASCII)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Str);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=UHTTPRequestClient::ReplaceWithASCII(Z_Param_Str);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UHTTPRequestClient::execGetTimeoutDuration)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=UHTTPRequestClient::GetTimeoutDuration();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UHTTPRequestClient::execSetTimeoutDuration)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_TimeoutDuration);
		P_FINISH;
		P_NATIVE_BEGIN;
		UHTTPRequestClient::SetTimeoutDuration(Z_Param_TimeoutDuration);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UHTTPRequestClient::execGetBooleanFromJSONObject)
	{
		P_GET_STRUCT(FJSONObject,Z_Param_JSON);
		P_GET_PROPERTY(FStrProperty,Z_Param_Key);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UHTTPRequestClient::GetBooleanFromJSONObject(Z_Param_JSON,Z_Param_Key);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UHTTPRequestClient::execGetNumberFromJSONObject)
	{
		P_GET_STRUCT(FJSONObject,Z_Param_JSON);
		P_GET_PROPERTY(FStrProperty,Z_Param_Key);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=UHTTPRequestClient::GetNumberFromJSONObject(Z_Param_JSON,Z_Param_Key);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UHTTPRequestClient::execGetStringFromJSONObject)
	{
		P_GET_STRUCT(FJSONObject,Z_Param_JSON);
		P_GET_PROPERTY(FStrProperty,Z_Param_Key);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=UHTTPRequestClient::GetStringFromJSONObject(Z_Param_JSON,Z_Param_Key);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UHTTPRequestClient::execGetBooleanArrayFromJSONObject)
	{
		P_GET_STRUCT(FJSONObject,Z_Param_JSON);
		P_GET_PROPERTY(FStrProperty,Z_Param_Key);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<bool>*)Z_Param__Result=UHTTPRequestClient::GetBooleanArrayFromJSONObject(Z_Param_JSON,Z_Param_Key);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UHTTPRequestClient::execGetNumberArrayFromJSONObject)
	{
		P_GET_STRUCT(FJSONObject,Z_Param_JSON);
		P_GET_PROPERTY(FStrProperty,Z_Param_Key);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<float>*)Z_Param__Result=UHTTPRequestClient::GetNumberArrayFromJSONObject(Z_Param_JSON,Z_Param_Key);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UHTTPRequestClient::execGetStringArrayFromJSONObject)
	{
		P_GET_STRUCT(FJSONObject,Z_Param_JSON);
		P_GET_PROPERTY(FStrProperty,Z_Param_Key);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<FString>*)Z_Param__Result=UHTTPRequestClient::GetStringArrayFromJSONObject(Z_Param_JSON,Z_Param_Key);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UHTTPRequestClient::execGetObjectArrayFromJSONObject)
	{
		P_GET_STRUCT(FJSONObject,Z_Param_JSON);
		P_GET_PROPERTY(FStrProperty,Z_Param_Key);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<FJSONObject>*)Z_Param__Result=UHTTPRequestClient::GetObjectArrayFromJSONObject(Z_Param_JSON,Z_Param_Key);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UHTTPRequestClient::execGetObjectFromJSONObject)
	{
		P_GET_STRUCT(FJSONObject,Z_Param_JSON);
		P_GET_PROPERTY(FStrProperty,Z_Param_Key);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FJSONObject*)Z_Param__Result=UHTTPRequestClient::GetObjectFromJSONObject(Z_Param_JSON,Z_Param_Key);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UHTTPRequestClient::execResponseStringToJSON)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_ResponseString);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FJSONObject*)Z_Param__Result=UHTTPRequestClient::ResponseStringToJSON(Z_Param_ResponseString);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UHTTPRequestClient::execMakeAHttpRequest)
	{
		P_GET_ENUM(EMethod,Z_Param_Method);
		P_GET_PROPERTY(FStrProperty,Z_Param_URL);
		P_GET_TMAP(FString,FString,Z_Param_Params);
		P_GET_TMAP(FString,FString,Z_Param_Headers);
		P_GET_PROPERTY(FStrProperty,Z_Param_Body);
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_OnComplete);
		P_FINISH;
		P_NATIVE_BEGIN;
		UHTTPRequestClient::MakeAHttpRequest(EMethod(Z_Param_Method),Z_Param_URL,Z_Param_Params,Z_Param_Headers,Z_Param_Body,FResponse(Z_Param_Out_OnComplete));
		P_NATIVE_END;
	}
	void UHTTPRequestClient::StaticRegisterNativesUHTTPRequestClient()
	{
		UClass* Class = UHTTPRequestClient::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetBooleanArrayFromJSONObject", &UHTTPRequestClient::execGetBooleanArrayFromJSONObject },
			{ "GetBooleanFromJSONObject", &UHTTPRequestClient::execGetBooleanFromJSONObject },
			{ "GetNumberArrayFromJSONObject", &UHTTPRequestClient::execGetNumberArrayFromJSONObject },
			{ "GetNumberFromJSONObject", &UHTTPRequestClient::execGetNumberFromJSONObject },
			{ "GetObjectArrayFromJSONObject", &UHTTPRequestClient::execGetObjectArrayFromJSONObject },
			{ "GetObjectFromJSONObject", &UHTTPRequestClient::execGetObjectFromJSONObject },
			{ "GetStringArrayFromJSONObject", &UHTTPRequestClient::execGetStringArrayFromJSONObject },
			{ "GetStringFromJSONObject", &UHTTPRequestClient::execGetStringFromJSONObject },
			{ "GetTimeoutDuration", &UHTTPRequestClient::execGetTimeoutDuration },
			{ "MakeAHttpRequest", &UHTTPRequestClient::execMakeAHttpRequest },
			{ "ReplaceWithASCII", &UHTTPRequestClient::execReplaceWithASCII },
			{ "ResponseStringToJSON", &UHTTPRequestClient::execResponseStringToJSON },
			{ "SetTimeoutDuration", &UHTTPRequestClient::execSetTimeoutDuration },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UHTTPRequestClient_GetBooleanArrayFromJSONObject_Statics
	{
		struct HTTPRequestClient_eventGetBooleanArrayFromJSONObject_Parms
		{
			FJSONObject JSON;
			FString Key;
			TArray<bool> ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_JSON_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_JSON;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Key_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Key;
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHTTPRequestClient_GetBooleanArrayFromJSONObject_Statics::NewProp_JSON_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UHTTPRequestClient_GetBooleanArrayFromJSONObject_Statics::NewProp_JSON = { "JSON", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HTTPRequestClient_eventGetBooleanArrayFromJSONObject_Parms, JSON), Z_Construct_UScriptStruct_FJSONObject, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UHTTPRequestClient_GetBooleanArrayFromJSONObject_Statics::NewProp_JSON_MetaData), Z_Construct_UFunction_UHTTPRequestClient_GetBooleanArrayFromJSONObject_Statics::NewProp_JSON_MetaData) }; // 3210041870
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHTTPRequestClient_GetBooleanArrayFromJSONObject_Statics::NewProp_Key_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UHTTPRequestClient_GetBooleanArrayFromJSONObject_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HTTPRequestClient_eventGetBooleanArrayFromJSONObject_Parms, Key), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UHTTPRequestClient_GetBooleanArrayFromJSONObject_Statics::NewProp_Key_MetaData), Z_Construct_UFunction_UHTTPRequestClient_GetBooleanArrayFromJSONObject_Statics::NewProp_Key_MetaData) };
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UHTTPRequestClient_GetBooleanArrayFromJSONObject_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), 0, nullptr, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHTTPRequestClient_GetBooleanArrayFromJSONObject_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "DisplayName", "Array of Boolean" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UHTTPRequestClient_GetBooleanArrayFromJSONObject_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HTTPRequestClient_eventGetBooleanArrayFromJSONObject_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UHTTPRequestClient_GetBooleanArrayFromJSONObject_Statics::NewProp_ReturnValue_MetaData), Z_Construct_UFunction_UHTTPRequestClient_GetBooleanArrayFromJSONObject_Statics::NewProp_ReturnValue_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHTTPRequestClient_GetBooleanArrayFromJSONObject_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHTTPRequestClient_GetBooleanArrayFromJSONObject_Statics::NewProp_JSON,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHTTPRequestClient_GetBooleanArrayFromJSONObject_Statics::NewProp_Key,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHTTPRequestClient_GetBooleanArrayFromJSONObject_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHTTPRequestClient_GetBooleanArrayFromJSONObject_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHTTPRequestClient_GetBooleanArrayFromJSONObject_Statics::Function_MetaDataParams[] = {
		{ "Category", "HTTP Requests For Blueprint Plugin" },
		{ "Comment", "/**\n\x09 *\x09""Attempts to get the Boolean Array from the JSON object.\n\x09 *\n\x09 *\x09@param JSON JSON Object from the HTTP Requests For Blueprint Plugin\n\x09 *\x09@param Key Name of the string from JSON\n\x09 *\x09\n\x09 *\x09@author King Wai Mark\n\x09 */" },
		{ "DisplayName", "Get Boolean Array" },
		{ "Keywords", "Get Boolean Array from JSON" },
		{ "ModuleRelativePath", "Public/HTTPRequestClient.h" },
		{ "ToolTip", "Attempts to get the Boolean Array from the JSON object.\n\n@param JSON JSON Object from the HTTP Requests For Blueprint Plugin\n@param Key Name of the string from JSON\n\n@author King Wai Mark" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UHTTPRequestClient_GetBooleanArrayFromJSONObject_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHTTPRequestClient, nullptr, "GetBooleanArrayFromJSONObject", nullptr, nullptr, Z_Construct_UFunction_UHTTPRequestClient_GetBooleanArrayFromJSONObject_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHTTPRequestClient_GetBooleanArrayFromJSONObject_Statics::PropPointers), sizeof(Z_Construct_UFunction_UHTTPRequestClient_GetBooleanArrayFromJSONObject_Statics::HTTPRequestClient_eventGetBooleanArrayFromJSONObject_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UHTTPRequestClient_GetBooleanArrayFromJSONObject_Statics::Function_MetaDataParams), Z_Construct_UFunction_UHTTPRequestClient_GetBooleanArrayFromJSONObject_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UHTTPRequestClient_GetBooleanArrayFromJSONObject_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UHTTPRequestClient_GetBooleanArrayFromJSONObject_Statics::HTTPRequestClient_eventGetBooleanArrayFromJSONObject_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UHTTPRequestClient_GetBooleanArrayFromJSONObject()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UHTTPRequestClient_GetBooleanArrayFromJSONObject_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UHTTPRequestClient_GetBooleanFromJSONObject_Statics
	{
		struct HTTPRequestClient_eventGetBooleanFromJSONObject_Parms
		{
			FJSONObject JSON;
			FString Key;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_JSON_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_JSON;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Key_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Key;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHTTPRequestClient_GetBooleanFromJSONObject_Statics::NewProp_JSON_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UHTTPRequestClient_GetBooleanFromJSONObject_Statics::NewProp_JSON = { "JSON", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HTTPRequestClient_eventGetBooleanFromJSONObject_Parms, JSON), Z_Construct_UScriptStruct_FJSONObject, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UHTTPRequestClient_GetBooleanFromJSONObject_Statics::NewProp_JSON_MetaData), Z_Construct_UFunction_UHTTPRequestClient_GetBooleanFromJSONObject_Statics::NewProp_JSON_MetaData) }; // 3210041870
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHTTPRequestClient_GetBooleanFromJSONObject_Statics::NewProp_Key_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UHTTPRequestClient_GetBooleanFromJSONObject_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HTTPRequestClient_eventGetBooleanFromJSONObject_Parms, Key), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UHTTPRequestClient_GetBooleanFromJSONObject_Statics::NewProp_Key_MetaData), Z_Construct_UFunction_UHTTPRequestClient_GetBooleanFromJSONObject_Statics::NewProp_Key_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHTTPRequestClient_GetBooleanFromJSONObject_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "DisplayName", "Boolean" },
	};
#endif
	void Z_Construct_UFunction_UHTTPRequestClient_GetBooleanFromJSONObject_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((HTTPRequestClient_eventGetBooleanFromJSONObject_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UHTTPRequestClient_GetBooleanFromJSONObject_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(HTTPRequestClient_eventGetBooleanFromJSONObject_Parms), &Z_Construct_UFunction_UHTTPRequestClient_GetBooleanFromJSONObject_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UHTTPRequestClient_GetBooleanFromJSONObject_Statics::NewProp_ReturnValue_MetaData), Z_Construct_UFunction_UHTTPRequestClient_GetBooleanFromJSONObject_Statics::NewProp_ReturnValue_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHTTPRequestClient_GetBooleanFromJSONObject_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHTTPRequestClient_GetBooleanFromJSONObject_Statics::NewProp_JSON,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHTTPRequestClient_GetBooleanFromJSONObject_Statics::NewProp_Key,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHTTPRequestClient_GetBooleanFromJSONObject_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHTTPRequestClient_GetBooleanFromJSONObject_Statics::Function_MetaDataParams[] = {
		{ "Category", "HTTP Requests For Blueprint Plugin" },
		{ "Comment", "/**\n\x09 *\x09""Attempts to get a boolean value from the JSON object.\n\x09 *\n\x09 *\x09@param JSON JSON Object from the HTTP Requests For Blueprint Plugin\n\x09 *\x09@param Key Name of the string from JSON\n\x09 *\x09\n\x09 *\x09@author King Wai Mark\n\x09 */" },
		{ "DisplayName", "Get Boolean" },
		{ "Keywords", "Get Boolean from JSON" },
		{ "ModuleRelativePath", "Public/HTTPRequestClient.h" },
		{ "ToolTip", "Attempts to get a boolean value from the JSON object.\n\n@param JSON JSON Object from the HTTP Requests For Blueprint Plugin\n@param Key Name of the string from JSON\n\n@author King Wai Mark" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UHTTPRequestClient_GetBooleanFromJSONObject_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHTTPRequestClient, nullptr, "GetBooleanFromJSONObject", nullptr, nullptr, Z_Construct_UFunction_UHTTPRequestClient_GetBooleanFromJSONObject_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHTTPRequestClient_GetBooleanFromJSONObject_Statics::PropPointers), sizeof(Z_Construct_UFunction_UHTTPRequestClient_GetBooleanFromJSONObject_Statics::HTTPRequestClient_eventGetBooleanFromJSONObject_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UHTTPRequestClient_GetBooleanFromJSONObject_Statics::Function_MetaDataParams), Z_Construct_UFunction_UHTTPRequestClient_GetBooleanFromJSONObject_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UHTTPRequestClient_GetBooleanFromJSONObject_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UHTTPRequestClient_GetBooleanFromJSONObject_Statics::HTTPRequestClient_eventGetBooleanFromJSONObject_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UHTTPRequestClient_GetBooleanFromJSONObject()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UHTTPRequestClient_GetBooleanFromJSONObject_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UHTTPRequestClient_GetNumberArrayFromJSONObject_Statics
	{
		struct HTTPRequestClient_eventGetNumberArrayFromJSONObject_Parms
		{
			FJSONObject JSON;
			FString Key;
			TArray<float> ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_JSON_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_JSON;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Key_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Key;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHTTPRequestClient_GetNumberArrayFromJSONObject_Statics::NewProp_JSON_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UHTTPRequestClient_GetNumberArrayFromJSONObject_Statics::NewProp_JSON = { "JSON", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HTTPRequestClient_eventGetNumberArrayFromJSONObject_Parms, JSON), Z_Construct_UScriptStruct_FJSONObject, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UHTTPRequestClient_GetNumberArrayFromJSONObject_Statics::NewProp_JSON_MetaData), Z_Construct_UFunction_UHTTPRequestClient_GetNumberArrayFromJSONObject_Statics::NewProp_JSON_MetaData) }; // 3210041870
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHTTPRequestClient_GetNumberArrayFromJSONObject_Statics::NewProp_Key_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UHTTPRequestClient_GetNumberArrayFromJSONObject_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HTTPRequestClient_eventGetNumberArrayFromJSONObject_Parms, Key), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UHTTPRequestClient_GetNumberArrayFromJSONObject_Statics::NewProp_Key_MetaData), Z_Construct_UFunction_UHTTPRequestClient_GetNumberArrayFromJSONObject_Statics::NewProp_Key_MetaData) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UHTTPRequestClient_GetNumberArrayFromJSONObject_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHTTPRequestClient_GetNumberArrayFromJSONObject_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "DisplayName", "Array of Numbers" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UHTTPRequestClient_GetNumberArrayFromJSONObject_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HTTPRequestClient_eventGetNumberArrayFromJSONObject_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UHTTPRequestClient_GetNumberArrayFromJSONObject_Statics::NewProp_ReturnValue_MetaData), Z_Construct_UFunction_UHTTPRequestClient_GetNumberArrayFromJSONObject_Statics::NewProp_ReturnValue_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHTTPRequestClient_GetNumberArrayFromJSONObject_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHTTPRequestClient_GetNumberArrayFromJSONObject_Statics::NewProp_JSON,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHTTPRequestClient_GetNumberArrayFromJSONObject_Statics::NewProp_Key,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHTTPRequestClient_GetNumberArrayFromJSONObject_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHTTPRequestClient_GetNumberArrayFromJSONObject_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHTTPRequestClient_GetNumberArrayFromJSONObject_Statics::Function_MetaDataParams[] = {
		{ "Category", "HTTP Requests For Blueprint Plugin" },
		{ "Comment", "/**\n\x09 *\x09""Attempts to get the Number Array from the JSON object.\n\x09 *\n\x09 *\x09@param JSON JSON Object from the HTTP Requests For Blueprint Plugin\n\x09 *\x09@param Key Name of the string from JSON\n\x09 *\x09\n\x09 *\x09@author King Wai Mark\n\x09 */" },
		{ "DisplayName", "Get Number Array" },
		{ "Keywords", "Get Number Array from JSON" },
		{ "ModuleRelativePath", "Public/HTTPRequestClient.h" },
		{ "ToolTip", "Attempts to get the Number Array from the JSON object.\n\n@param JSON JSON Object from the HTTP Requests For Blueprint Plugin\n@param Key Name of the string from JSON\n\n@author King Wai Mark" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UHTTPRequestClient_GetNumberArrayFromJSONObject_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHTTPRequestClient, nullptr, "GetNumberArrayFromJSONObject", nullptr, nullptr, Z_Construct_UFunction_UHTTPRequestClient_GetNumberArrayFromJSONObject_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHTTPRequestClient_GetNumberArrayFromJSONObject_Statics::PropPointers), sizeof(Z_Construct_UFunction_UHTTPRequestClient_GetNumberArrayFromJSONObject_Statics::HTTPRequestClient_eventGetNumberArrayFromJSONObject_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UHTTPRequestClient_GetNumberArrayFromJSONObject_Statics::Function_MetaDataParams), Z_Construct_UFunction_UHTTPRequestClient_GetNumberArrayFromJSONObject_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UHTTPRequestClient_GetNumberArrayFromJSONObject_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UHTTPRequestClient_GetNumberArrayFromJSONObject_Statics::HTTPRequestClient_eventGetNumberArrayFromJSONObject_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UHTTPRequestClient_GetNumberArrayFromJSONObject()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UHTTPRequestClient_GetNumberArrayFromJSONObject_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UHTTPRequestClient_GetNumberFromJSONObject_Statics
	{
		struct HTTPRequestClient_eventGetNumberFromJSONObject_Parms
		{
			FJSONObject JSON;
			FString Key;
			float ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_JSON_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_JSON;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Key_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Key;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHTTPRequestClient_GetNumberFromJSONObject_Statics::NewProp_JSON_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UHTTPRequestClient_GetNumberFromJSONObject_Statics::NewProp_JSON = { "JSON", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HTTPRequestClient_eventGetNumberFromJSONObject_Parms, JSON), Z_Construct_UScriptStruct_FJSONObject, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UHTTPRequestClient_GetNumberFromJSONObject_Statics::NewProp_JSON_MetaData), Z_Construct_UFunction_UHTTPRequestClient_GetNumberFromJSONObject_Statics::NewProp_JSON_MetaData) }; // 3210041870
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHTTPRequestClient_GetNumberFromJSONObject_Statics::NewProp_Key_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UHTTPRequestClient_GetNumberFromJSONObject_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HTTPRequestClient_eventGetNumberFromJSONObject_Parms, Key), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UHTTPRequestClient_GetNumberFromJSONObject_Statics::NewProp_Key_MetaData), Z_Construct_UFunction_UHTTPRequestClient_GetNumberFromJSONObject_Statics::NewProp_Key_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHTTPRequestClient_GetNumberFromJSONObject_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "DisplayName", "Number" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UHTTPRequestClient_GetNumberFromJSONObject_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HTTPRequestClient_eventGetNumberFromJSONObject_Parms, ReturnValue), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UHTTPRequestClient_GetNumberFromJSONObject_Statics::NewProp_ReturnValue_MetaData), Z_Construct_UFunction_UHTTPRequestClient_GetNumberFromJSONObject_Statics::NewProp_ReturnValue_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHTTPRequestClient_GetNumberFromJSONObject_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHTTPRequestClient_GetNumberFromJSONObject_Statics::NewProp_JSON,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHTTPRequestClient_GetNumberFromJSONObject_Statics::NewProp_Key,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHTTPRequestClient_GetNumberFromJSONObject_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHTTPRequestClient_GetNumberFromJSONObject_Statics::Function_MetaDataParams[] = {
		{ "Category", "HTTP Requests For Blueprint Plugin" },
		{ "Comment", "/**\n\x09 *\x09""Attempts to get a number value from the JSON object.\n\x09 *\n\x09 *\x09@param JSON JSON Object from the HTTP Requests For Blueprint Plugin\n\x09 *\x09@param Key Name of the string from JSON\n\x09 *\x09\n\x09 *\x09@author King Wai Mark\n\x09 */" },
		{ "DisplayName", "Get Number" },
		{ "Keywords", "Get Number from JSON" },
		{ "ModuleRelativePath", "Public/HTTPRequestClient.h" },
		{ "ToolTip", "Attempts to get a number value from the JSON object.\n\n@param JSON JSON Object from the HTTP Requests For Blueprint Plugin\n@param Key Name of the string from JSON\n\n@author King Wai Mark" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UHTTPRequestClient_GetNumberFromJSONObject_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHTTPRequestClient, nullptr, "GetNumberFromJSONObject", nullptr, nullptr, Z_Construct_UFunction_UHTTPRequestClient_GetNumberFromJSONObject_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHTTPRequestClient_GetNumberFromJSONObject_Statics::PropPointers), sizeof(Z_Construct_UFunction_UHTTPRequestClient_GetNumberFromJSONObject_Statics::HTTPRequestClient_eventGetNumberFromJSONObject_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UHTTPRequestClient_GetNumberFromJSONObject_Statics::Function_MetaDataParams), Z_Construct_UFunction_UHTTPRequestClient_GetNumberFromJSONObject_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UHTTPRequestClient_GetNumberFromJSONObject_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UHTTPRequestClient_GetNumberFromJSONObject_Statics::HTTPRequestClient_eventGetNumberFromJSONObject_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UHTTPRequestClient_GetNumberFromJSONObject()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UHTTPRequestClient_GetNumberFromJSONObject_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UHTTPRequestClient_GetObjectArrayFromJSONObject_Statics
	{
		struct HTTPRequestClient_eventGetObjectArrayFromJSONObject_Parms
		{
			FJSONObject JSON;
			FString Key;
			TArray<FJSONObject> ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_JSON_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_JSON;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Key_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Key;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHTTPRequestClient_GetObjectArrayFromJSONObject_Statics::NewProp_JSON_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UHTTPRequestClient_GetObjectArrayFromJSONObject_Statics::NewProp_JSON = { "JSON", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HTTPRequestClient_eventGetObjectArrayFromJSONObject_Parms, JSON), Z_Construct_UScriptStruct_FJSONObject, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UHTTPRequestClient_GetObjectArrayFromJSONObject_Statics::NewProp_JSON_MetaData), Z_Construct_UFunction_UHTTPRequestClient_GetObjectArrayFromJSONObject_Statics::NewProp_JSON_MetaData) }; // 3210041870
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHTTPRequestClient_GetObjectArrayFromJSONObject_Statics::NewProp_Key_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UHTTPRequestClient_GetObjectArrayFromJSONObject_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HTTPRequestClient_eventGetObjectArrayFromJSONObject_Parms, Key), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UHTTPRequestClient_GetObjectArrayFromJSONObject_Statics::NewProp_Key_MetaData), Z_Construct_UFunction_UHTTPRequestClient_GetObjectArrayFromJSONObject_Statics::NewProp_Key_MetaData) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UHTTPRequestClient_GetObjectArrayFromJSONObject_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FJSONObject, METADATA_PARAMS(0, nullptr) }; // 3210041870
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHTTPRequestClient_GetObjectArrayFromJSONObject_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "DisplayName", "Array of JSON" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UHTTPRequestClient_GetObjectArrayFromJSONObject_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HTTPRequestClient_eventGetObjectArrayFromJSONObject_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UHTTPRequestClient_GetObjectArrayFromJSONObject_Statics::NewProp_ReturnValue_MetaData), Z_Construct_UFunction_UHTTPRequestClient_GetObjectArrayFromJSONObject_Statics::NewProp_ReturnValue_MetaData) }; // 3210041870
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHTTPRequestClient_GetObjectArrayFromJSONObject_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHTTPRequestClient_GetObjectArrayFromJSONObject_Statics::NewProp_JSON,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHTTPRequestClient_GetObjectArrayFromJSONObject_Statics::NewProp_Key,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHTTPRequestClient_GetObjectArrayFromJSONObject_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHTTPRequestClient_GetObjectArrayFromJSONObject_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHTTPRequestClient_GetObjectArrayFromJSONObject_Statics::Function_MetaDataParams[] = {
		{ "Category", "HTTP Requests For Blueprint Plugin" },
		{ "Comment", "/**\n\x09 *\x09""Attempts to get a Array of JSON objects from the JSON object.\n\x09 *\n\x09 *\x09@param JSON JSON Object from the HTTP Requests For Blueprint Plugin\n\x09 *\x09@param Key Name of the string from JSON\n\x09 *\x09\n\x09 *\x09@author King Wai Mark\n\x09 */" },
		{ "DisplayName", "Get Object Array" },
		{ "Keywords", "Get Object Array from JSON" },
		{ "ModuleRelativePath", "Public/HTTPRequestClient.h" },
		{ "ToolTip", "Attempts to get a Array of JSON objects from the JSON object.\n\n@param JSON JSON Object from the HTTP Requests For Blueprint Plugin\n@param Key Name of the string from JSON\n\n@author King Wai Mark" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UHTTPRequestClient_GetObjectArrayFromJSONObject_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHTTPRequestClient, nullptr, "GetObjectArrayFromJSONObject", nullptr, nullptr, Z_Construct_UFunction_UHTTPRequestClient_GetObjectArrayFromJSONObject_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHTTPRequestClient_GetObjectArrayFromJSONObject_Statics::PropPointers), sizeof(Z_Construct_UFunction_UHTTPRequestClient_GetObjectArrayFromJSONObject_Statics::HTTPRequestClient_eventGetObjectArrayFromJSONObject_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UHTTPRequestClient_GetObjectArrayFromJSONObject_Statics::Function_MetaDataParams), Z_Construct_UFunction_UHTTPRequestClient_GetObjectArrayFromJSONObject_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UHTTPRequestClient_GetObjectArrayFromJSONObject_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UHTTPRequestClient_GetObjectArrayFromJSONObject_Statics::HTTPRequestClient_eventGetObjectArrayFromJSONObject_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UHTTPRequestClient_GetObjectArrayFromJSONObject()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UHTTPRequestClient_GetObjectArrayFromJSONObject_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UHTTPRequestClient_GetObjectFromJSONObject_Statics
	{
		struct HTTPRequestClient_eventGetObjectFromJSONObject_Parms
		{
			FJSONObject JSON;
			FString Key;
			FJSONObject ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_JSON_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_JSON;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Key_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Key;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHTTPRequestClient_GetObjectFromJSONObject_Statics::NewProp_JSON_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UHTTPRequestClient_GetObjectFromJSONObject_Statics::NewProp_JSON = { "JSON", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HTTPRequestClient_eventGetObjectFromJSONObject_Parms, JSON), Z_Construct_UScriptStruct_FJSONObject, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UHTTPRequestClient_GetObjectFromJSONObject_Statics::NewProp_JSON_MetaData), Z_Construct_UFunction_UHTTPRequestClient_GetObjectFromJSONObject_Statics::NewProp_JSON_MetaData) }; // 3210041870
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHTTPRequestClient_GetObjectFromJSONObject_Statics::NewProp_Key_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UHTTPRequestClient_GetObjectFromJSONObject_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HTTPRequestClient_eventGetObjectFromJSONObject_Parms, Key), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UHTTPRequestClient_GetObjectFromJSONObject_Statics::NewProp_Key_MetaData), Z_Construct_UFunction_UHTTPRequestClient_GetObjectFromJSONObject_Statics::NewProp_Key_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHTTPRequestClient_GetObjectFromJSONObject_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "DisplayName", "JSON" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UHTTPRequestClient_GetObjectFromJSONObject_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HTTPRequestClient_eventGetObjectFromJSONObject_Parms, ReturnValue), Z_Construct_UScriptStruct_FJSONObject, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UHTTPRequestClient_GetObjectFromJSONObject_Statics::NewProp_ReturnValue_MetaData), Z_Construct_UFunction_UHTTPRequestClient_GetObjectFromJSONObject_Statics::NewProp_ReturnValue_MetaData) }; // 3210041870
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHTTPRequestClient_GetObjectFromJSONObject_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHTTPRequestClient_GetObjectFromJSONObject_Statics::NewProp_JSON,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHTTPRequestClient_GetObjectFromJSONObject_Statics::NewProp_Key,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHTTPRequestClient_GetObjectFromJSONObject_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHTTPRequestClient_GetObjectFromJSONObject_Statics::Function_MetaDataParams[] = {
		{ "Category", "HTTP Requests For Blueprint Plugin" },
		{ "Comment", "/**\n\x09 *\x09""Attempts to get a Object value from the JSON object.\n\x09 *\n\x09 *\x09@param JSON JSON Object from the HTTP Requests For Blueprint Plugin\n\x09 *\x09@param Key Name of the string from JSON\n\x09 *\x09\n\x09 *\x09@author King Wai Mark\n\x09 */" },
		{ "DisplayName", "Get Object" },
		{ "Keywords", "Get Object from JSON" },
		{ "ModuleRelativePath", "Public/HTTPRequestClient.h" },
		{ "ToolTip", "Attempts to get a Object value from the JSON object.\n\n@param JSON JSON Object from the HTTP Requests For Blueprint Plugin\n@param Key Name of the string from JSON\n\n@author King Wai Mark" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UHTTPRequestClient_GetObjectFromJSONObject_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHTTPRequestClient, nullptr, "GetObjectFromJSONObject", nullptr, nullptr, Z_Construct_UFunction_UHTTPRequestClient_GetObjectFromJSONObject_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHTTPRequestClient_GetObjectFromJSONObject_Statics::PropPointers), sizeof(Z_Construct_UFunction_UHTTPRequestClient_GetObjectFromJSONObject_Statics::HTTPRequestClient_eventGetObjectFromJSONObject_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UHTTPRequestClient_GetObjectFromJSONObject_Statics::Function_MetaDataParams), Z_Construct_UFunction_UHTTPRequestClient_GetObjectFromJSONObject_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UHTTPRequestClient_GetObjectFromJSONObject_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UHTTPRequestClient_GetObjectFromJSONObject_Statics::HTTPRequestClient_eventGetObjectFromJSONObject_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UHTTPRequestClient_GetObjectFromJSONObject()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UHTTPRequestClient_GetObjectFromJSONObject_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UHTTPRequestClient_GetStringArrayFromJSONObject_Statics
	{
		struct HTTPRequestClient_eventGetStringArrayFromJSONObject_Parms
		{
			FJSONObject JSON;
			FString Key;
			TArray<FString> ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_JSON_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_JSON;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Key_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Key;
		static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHTTPRequestClient_GetStringArrayFromJSONObject_Statics::NewProp_JSON_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UHTTPRequestClient_GetStringArrayFromJSONObject_Statics::NewProp_JSON = { "JSON", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HTTPRequestClient_eventGetStringArrayFromJSONObject_Parms, JSON), Z_Construct_UScriptStruct_FJSONObject, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UHTTPRequestClient_GetStringArrayFromJSONObject_Statics::NewProp_JSON_MetaData), Z_Construct_UFunction_UHTTPRequestClient_GetStringArrayFromJSONObject_Statics::NewProp_JSON_MetaData) }; // 3210041870
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHTTPRequestClient_GetStringArrayFromJSONObject_Statics::NewProp_Key_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UHTTPRequestClient_GetStringArrayFromJSONObject_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HTTPRequestClient_eventGetStringArrayFromJSONObject_Parms, Key), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UHTTPRequestClient_GetStringArrayFromJSONObject_Statics::NewProp_Key_MetaData), Z_Construct_UFunction_UHTTPRequestClient_GetStringArrayFromJSONObject_Statics::NewProp_Key_MetaData) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UHTTPRequestClient_GetStringArrayFromJSONObject_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHTTPRequestClient_GetStringArrayFromJSONObject_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "DisplayName", "Array of Strings" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UHTTPRequestClient_GetStringArrayFromJSONObject_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HTTPRequestClient_eventGetStringArrayFromJSONObject_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UHTTPRequestClient_GetStringArrayFromJSONObject_Statics::NewProp_ReturnValue_MetaData), Z_Construct_UFunction_UHTTPRequestClient_GetStringArrayFromJSONObject_Statics::NewProp_ReturnValue_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHTTPRequestClient_GetStringArrayFromJSONObject_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHTTPRequestClient_GetStringArrayFromJSONObject_Statics::NewProp_JSON,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHTTPRequestClient_GetStringArrayFromJSONObject_Statics::NewProp_Key,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHTTPRequestClient_GetStringArrayFromJSONObject_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHTTPRequestClient_GetStringArrayFromJSONObject_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHTTPRequestClient_GetStringArrayFromJSONObject_Statics::Function_MetaDataParams[] = {
		{ "Category", "HTTP Requests For Blueprint Plugin" },
		{ "Comment", "/**\n\x09 *\x09""Attempts to get the String Array from the JSON object.\n\x09 *\n\x09 *\x09@param JSON JSON Object from the HTTP Requests For Blueprint Plugin\n\x09 *\x09@param Key Name of the string from JSON\n\x09 *\x09\n\x09 *\x09@author King Wai Mark\n\x09 */" },
		{ "DisplayName", "Get String Array" },
		{ "Keywords", "Get String Array from JSON" },
		{ "ModuleRelativePath", "Public/HTTPRequestClient.h" },
		{ "ToolTip", "Attempts to get the String Array from the JSON object.\n\n@param JSON JSON Object from the HTTP Requests For Blueprint Plugin\n@param Key Name of the string from JSON\n\n@author King Wai Mark" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UHTTPRequestClient_GetStringArrayFromJSONObject_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHTTPRequestClient, nullptr, "GetStringArrayFromJSONObject", nullptr, nullptr, Z_Construct_UFunction_UHTTPRequestClient_GetStringArrayFromJSONObject_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHTTPRequestClient_GetStringArrayFromJSONObject_Statics::PropPointers), sizeof(Z_Construct_UFunction_UHTTPRequestClient_GetStringArrayFromJSONObject_Statics::HTTPRequestClient_eventGetStringArrayFromJSONObject_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UHTTPRequestClient_GetStringArrayFromJSONObject_Statics::Function_MetaDataParams), Z_Construct_UFunction_UHTTPRequestClient_GetStringArrayFromJSONObject_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UHTTPRequestClient_GetStringArrayFromJSONObject_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UHTTPRequestClient_GetStringArrayFromJSONObject_Statics::HTTPRequestClient_eventGetStringArrayFromJSONObject_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UHTTPRequestClient_GetStringArrayFromJSONObject()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UHTTPRequestClient_GetStringArrayFromJSONObject_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UHTTPRequestClient_GetStringFromJSONObject_Statics
	{
		struct HTTPRequestClient_eventGetStringFromJSONObject_Parms
		{
			FJSONObject JSON;
			FString Key;
			FString ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_JSON_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_JSON;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Key_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Key;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHTTPRequestClient_GetStringFromJSONObject_Statics::NewProp_JSON_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UHTTPRequestClient_GetStringFromJSONObject_Statics::NewProp_JSON = { "JSON", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HTTPRequestClient_eventGetStringFromJSONObject_Parms, JSON), Z_Construct_UScriptStruct_FJSONObject, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UHTTPRequestClient_GetStringFromJSONObject_Statics::NewProp_JSON_MetaData), Z_Construct_UFunction_UHTTPRequestClient_GetStringFromJSONObject_Statics::NewProp_JSON_MetaData) }; // 3210041870
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHTTPRequestClient_GetStringFromJSONObject_Statics::NewProp_Key_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UHTTPRequestClient_GetStringFromJSONObject_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HTTPRequestClient_eventGetStringFromJSONObject_Parms, Key), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UHTTPRequestClient_GetStringFromJSONObject_Statics::NewProp_Key_MetaData), Z_Construct_UFunction_UHTTPRequestClient_GetStringFromJSONObject_Statics::NewProp_Key_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHTTPRequestClient_GetStringFromJSONObject_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "DisplayName", "String" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UHTTPRequestClient_GetStringFromJSONObject_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HTTPRequestClient_eventGetStringFromJSONObject_Parms, ReturnValue), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UHTTPRequestClient_GetStringFromJSONObject_Statics::NewProp_ReturnValue_MetaData), Z_Construct_UFunction_UHTTPRequestClient_GetStringFromJSONObject_Statics::NewProp_ReturnValue_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHTTPRequestClient_GetStringFromJSONObject_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHTTPRequestClient_GetStringFromJSONObject_Statics::NewProp_JSON,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHTTPRequestClient_GetStringFromJSONObject_Statics::NewProp_Key,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHTTPRequestClient_GetStringFromJSONObject_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHTTPRequestClient_GetStringFromJSONObject_Statics::Function_MetaDataParams[] = {
		{ "Category", "HTTP Requests For Blueprint Plugin" },
		{ "Comment", "/**\n\x09 *\x09""Attempts to get a string value from the JSON object.\n\x09 *\n\x09 *\x09@param JSON JSON Object from the HTTP Requests For Blueprint Plugin\n\x09 *\x09@param Key Name of the string from JSON\n\x09 *\x09\n\x09 *\x09@author King Wai Mark\n\x09 */" },
		{ "DisplayName", "Get String" },
		{ "Keywords", "Get String from JSON" },
		{ "ModuleRelativePath", "Public/HTTPRequestClient.h" },
		{ "ToolTip", "Attempts to get a string value from the JSON object.\n\n@param JSON JSON Object from the HTTP Requests For Blueprint Plugin\n@param Key Name of the string from JSON\n\n@author King Wai Mark" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UHTTPRequestClient_GetStringFromJSONObject_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHTTPRequestClient, nullptr, "GetStringFromJSONObject", nullptr, nullptr, Z_Construct_UFunction_UHTTPRequestClient_GetStringFromJSONObject_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHTTPRequestClient_GetStringFromJSONObject_Statics::PropPointers), sizeof(Z_Construct_UFunction_UHTTPRequestClient_GetStringFromJSONObject_Statics::HTTPRequestClient_eventGetStringFromJSONObject_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UHTTPRequestClient_GetStringFromJSONObject_Statics::Function_MetaDataParams), Z_Construct_UFunction_UHTTPRequestClient_GetStringFromJSONObject_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UHTTPRequestClient_GetStringFromJSONObject_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UHTTPRequestClient_GetStringFromJSONObject_Statics::HTTPRequestClient_eventGetStringFromJSONObject_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UHTTPRequestClient_GetStringFromJSONObject()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UHTTPRequestClient_GetStringFromJSONObject_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UHTTPRequestClient_GetTimeoutDuration_Statics
	{
		struct HTTPRequestClient_eventGetTimeoutDuration_Parms
		{
			int32 ReturnValue;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UHTTPRequestClient_GetTimeoutDuration_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HTTPRequestClient_eventGetTimeoutDuration_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHTTPRequestClient_GetTimeoutDuration_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHTTPRequestClient_GetTimeoutDuration_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHTTPRequestClient_GetTimeoutDuration_Statics::Function_MetaDataParams[] = {
		{ "Category", "HTTP Requests For Blueprint Plugin" },
		{ "Comment", "/**\n\x09 *\x09Gets the current timeout duration.\n\x09 *\x09\n\x09 *\x09\n\x09 *\x09@author King Wai Mark\n\x09 */" },
		{ "DisplayName", "Get Timeout Duration" },
		{ "Keywords", "Get Timeout Duration" },
		{ "ModuleRelativePath", "Public/HTTPRequestClient.h" },
		{ "ToolTip", "Gets the current timeout duration.\n\n\n@author King Wai Mark" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UHTTPRequestClient_GetTimeoutDuration_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHTTPRequestClient, nullptr, "GetTimeoutDuration", nullptr, nullptr, Z_Construct_UFunction_UHTTPRequestClient_GetTimeoutDuration_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHTTPRequestClient_GetTimeoutDuration_Statics::PropPointers), sizeof(Z_Construct_UFunction_UHTTPRequestClient_GetTimeoutDuration_Statics::HTTPRequestClient_eventGetTimeoutDuration_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UHTTPRequestClient_GetTimeoutDuration_Statics::Function_MetaDataParams), Z_Construct_UFunction_UHTTPRequestClient_GetTimeoutDuration_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UHTTPRequestClient_GetTimeoutDuration_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UHTTPRequestClient_GetTimeoutDuration_Statics::HTTPRequestClient_eventGetTimeoutDuration_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UHTTPRequestClient_GetTimeoutDuration()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UHTTPRequestClient_GetTimeoutDuration_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UHTTPRequestClient_MakeAHttpRequest_Statics
	{
		struct HTTPRequestClient_eventMakeAHttpRequest_Parms
		{
			EMethod Method;
			FString URL;
			TMap<FString,FString> Params;
			TMap<FString,FString> Headers;
			FString Body;
			FScriptDelegate OnComplete;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_Method_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Method_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Method;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_URL_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_URL;
		static const UECodeGen_Private::FStrPropertyParams NewProp_Params_ValueProp;
		static const UECodeGen_Private::FStrPropertyParams NewProp_Params_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Params_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_Params;
		static const UECodeGen_Private::FStrPropertyParams NewProp_Headers_ValueProp;
		static const UECodeGen_Private::FStrPropertyParams NewProp_Headers_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Headers_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_Headers;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Body_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Body;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnComplete_MetaData[];
#endif
		static const UECodeGen_Private::FDelegatePropertyParams NewProp_OnComplete;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UHTTPRequestClient_MakeAHttpRequest_Statics::NewProp_Method_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHTTPRequestClient_MakeAHttpRequest_Statics::NewProp_Method_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UHTTPRequestClient_MakeAHttpRequest_Statics::NewProp_Method = { "Method", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HTTPRequestClient_eventMakeAHttpRequest_Parms, Method), Z_Construct_UEnum_HTTPRequestForBlueprints_EMethod, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UHTTPRequestClient_MakeAHttpRequest_Statics::NewProp_Method_MetaData), Z_Construct_UFunction_UHTTPRequestClient_MakeAHttpRequest_Statics::NewProp_Method_MetaData) }; // 1609545185
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHTTPRequestClient_MakeAHttpRequest_Statics::NewProp_URL_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UHTTPRequestClient_MakeAHttpRequest_Statics::NewProp_URL = { "URL", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HTTPRequestClient_eventMakeAHttpRequest_Parms, URL), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UHTTPRequestClient_MakeAHttpRequest_Statics::NewProp_URL_MetaData), Z_Construct_UFunction_UHTTPRequestClient_MakeAHttpRequest_Statics::NewProp_URL_MetaData) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UHTTPRequestClient_MakeAHttpRequest_Statics::NewProp_Params_ValueProp = { "Params", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UHTTPRequestClient_MakeAHttpRequest_Statics::NewProp_Params_Key_KeyProp = { "Params_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHTTPRequestClient_MakeAHttpRequest_Statics::NewProp_Params_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UFunction_UHTTPRequestClient_MakeAHttpRequest_Statics::NewProp_Params = { "Params", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HTTPRequestClient_eventMakeAHttpRequest_Parms, Params), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UHTTPRequestClient_MakeAHttpRequest_Statics::NewProp_Params_MetaData), Z_Construct_UFunction_UHTTPRequestClient_MakeAHttpRequest_Statics::NewProp_Params_MetaData) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UHTTPRequestClient_MakeAHttpRequest_Statics::NewProp_Headers_ValueProp = { "Headers", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UHTTPRequestClient_MakeAHttpRequest_Statics::NewProp_Headers_Key_KeyProp = { "Headers_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHTTPRequestClient_MakeAHttpRequest_Statics::NewProp_Headers_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UFunction_UHTTPRequestClient_MakeAHttpRequest_Statics::NewProp_Headers = { "Headers", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HTTPRequestClient_eventMakeAHttpRequest_Parms, Headers), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UHTTPRequestClient_MakeAHttpRequest_Statics::NewProp_Headers_MetaData), Z_Construct_UFunction_UHTTPRequestClient_MakeAHttpRequest_Statics::NewProp_Headers_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHTTPRequestClient_MakeAHttpRequest_Statics::NewProp_Body_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UHTTPRequestClient_MakeAHttpRequest_Statics::NewProp_Body = { "Body", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HTTPRequestClient_eventMakeAHttpRequest_Parms, Body), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UHTTPRequestClient_MakeAHttpRequest_Statics::NewProp_Body_MetaData), Z_Construct_UFunction_UHTTPRequestClient_MakeAHttpRequest_Statics::NewProp_Body_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHTTPRequestClient_MakeAHttpRequest_Statics::NewProp_OnComplete_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UHTTPRequestClient_MakeAHttpRequest_Statics::NewProp_OnComplete = { "OnComplete", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HTTPRequestClient_eventMakeAHttpRequest_Parms, OnComplete), Z_Construct_UDelegateFunction_HTTPRequestForBlueprints_Response__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UHTTPRequestClient_MakeAHttpRequest_Statics::NewProp_OnComplete_MetaData), Z_Construct_UFunction_UHTTPRequestClient_MakeAHttpRequest_Statics::NewProp_OnComplete_MetaData) }; // 2714733962
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHTTPRequestClient_MakeAHttpRequest_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHTTPRequestClient_MakeAHttpRequest_Statics::NewProp_Method_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHTTPRequestClient_MakeAHttpRequest_Statics::NewProp_Method,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHTTPRequestClient_MakeAHttpRequest_Statics::NewProp_URL,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHTTPRequestClient_MakeAHttpRequest_Statics::NewProp_Params_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHTTPRequestClient_MakeAHttpRequest_Statics::NewProp_Params_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHTTPRequestClient_MakeAHttpRequest_Statics::NewProp_Params,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHTTPRequestClient_MakeAHttpRequest_Statics::NewProp_Headers_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHTTPRequestClient_MakeAHttpRequest_Statics::NewProp_Headers_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHTTPRequestClient_MakeAHttpRequest_Statics::NewProp_Headers,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHTTPRequestClient_MakeAHttpRequest_Statics::NewProp_Body,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHTTPRequestClient_MakeAHttpRequest_Statics::NewProp_OnComplete,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHTTPRequestClient_MakeAHttpRequest_Statics::Function_MetaDataParams[] = {
		{ "Category", "HTTP Requests For Blueprint Plugin" },
		{ "Comment", "/**\n\x09 *\x09The start of a HTTP Request.\n\x09 *\n\x09 *\x09@param Method The request Verb, GET, PUSH, POST, DELETE, etc.\n\x09 *\x09@param URL \n\x09 *\x09@param Params Query params, ?param1=...&param2=...\n\x09 *\x09@param Headers Request Headers\n\x09 *\x09@param Body Content for the request\n\x09 *\x09@param OnComplete Callback\n\x09 *\n\x09 *\x09@author King Wai Mark\n\x09 */" },
		{ "DisplayName", "Make a HTTP Request" },
		{ "Keywords", "Make a HTTP Request" },
		{ "ModuleRelativePath", "Public/HTTPRequestClient.h" },
		{ "ToolTip", "The start of a HTTP Request.\n\n@param Method The request Verb, GET, PUSH, POST, DELETE, etc.\n@param URL\n@param Params Query params, ?param1=...&param2=...\n@param Headers Request Headers\n@param Body Content for the request\n@param OnComplete Callback\n\n@author King Wai Mark" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UHTTPRequestClient_MakeAHttpRequest_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHTTPRequestClient, nullptr, "MakeAHttpRequest", nullptr, nullptr, Z_Construct_UFunction_UHTTPRequestClient_MakeAHttpRequest_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHTTPRequestClient_MakeAHttpRequest_Statics::PropPointers), sizeof(Z_Construct_UFunction_UHTTPRequestClient_MakeAHttpRequest_Statics::HTTPRequestClient_eventMakeAHttpRequest_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UHTTPRequestClient_MakeAHttpRequest_Statics::Function_MetaDataParams), Z_Construct_UFunction_UHTTPRequestClient_MakeAHttpRequest_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UHTTPRequestClient_MakeAHttpRequest_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UHTTPRequestClient_MakeAHttpRequest_Statics::HTTPRequestClient_eventMakeAHttpRequest_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UHTTPRequestClient_MakeAHttpRequest()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UHTTPRequestClient_MakeAHttpRequest_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UHTTPRequestClient_ReplaceWithASCII_Statics
	{
		struct HTTPRequestClient_eventReplaceWithASCII_Parms
		{
			FString Str;
			FString ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Str_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Str;
		static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHTTPRequestClient_ReplaceWithASCII_Statics::NewProp_Str_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UHTTPRequestClient_ReplaceWithASCII_Statics::NewProp_Str = { "Str", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HTTPRequestClient_eventReplaceWithASCII_Parms, Str), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UHTTPRequestClient_ReplaceWithASCII_Statics::NewProp_Str_MetaData), Z_Construct_UFunction_UHTTPRequestClient_ReplaceWithASCII_Statics::NewProp_Str_MetaData) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UHTTPRequestClient_ReplaceWithASCII_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HTTPRequestClient_eventReplaceWithASCII_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHTTPRequestClient_ReplaceWithASCII_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHTTPRequestClient_ReplaceWithASCII_Statics::NewProp_Str,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHTTPRequestClient_ReplaceWithASCII_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHTTPRequestClient_ReplaceWithASCII_Statics::Function_MetaDataParams[] = {
		{ "Category", "HTTP Requests For Blueprint Plugin" },
		{ "Comment", "/**\n\x09 *\x09""Converts a string to base 64 url.\n\x09 *\x09\n\x09 *\x09\n\x09 *\x09@author King Wai Mark\n\x09 */" },
		{ "DisplayName", "Replace With ASCII" },
		{ "Keywords", "Replace With ASCII" },
		{ "ModuleRelativePath", "Public/HTTPRequestClient.h" },
		{ "ToolTip", "Converts a string to base 64 url.\n\n\n@author King Wai Mark" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UHTTPRequestClient_ReplaceWithASCII_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHTTPRequestClient, nullptr, "ReplaceWithASCII", nullptr, nullptr, Z_Construct_UFunction_UHTTPRequestClient_ReplaceWithASCII_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHTTPRequestClient_ReplaceWithASCII_Statics::PropPointers), sizeof(Z_Construct_UFunction_UHTTPRequestClient_ReplaceWithASCII_Statics::HTTPRequestClient_eventReplaceWithASCII_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UHTTPRequestClient_ReplaceWithASCII_Statics::Function_MetaDataParams), Z_Construct_UFunction_UHTTPRequestClient_ReplaceWithASCII_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UHTTPRequestClient_ReplaceWithASCII_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UHTTPRequestClient_ReplaceWithASCII_Statics::HTTPRequestClient_eventReplaceWithASCII_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UHTTPRequestClient_ReplaceWithASCII()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UHTTPRequestClient_ReplaceWithASCII_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UHTTPRequestClient_ResponseStringToJSON_Statics
	{
		struct HTTPRequestClient_eventResponseStringToJSON_Parms
		{
			FString ResponseString;
			FJSONObject ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ResponseString_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_ResponseString;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHTTPRequestClient_ResponseStringToJSON_Statics::NewProp_ResponseString_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UHTTPRequestClient_ResponseStringToJSON_Statics::NewProp_ResponseString = { "ResponseString", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HTTPRequestClient_eventResponseStringToJSON_Parms, ResponseString), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UHTTPRequestClient_ResponseStringToJSON_Statics::NewProp_ResponseString_MetaData), Z_Construct_UFunction_UHTTPRequestClient_ResponseStringToJSON_Statics::NewProp_ResponseString_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHTTPRequestClient_ResponseStringToJSON_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "DisplayName", "JSON" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UHTTPRequestClient_ResponseStringToJSON_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HTTPRequestClient_eventResponseStringToJSON_Parms, ReturnValue), Z_Construct_UScriptStruct_FJSONObject, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UHTTPRequestClient_ResponseStringToJSON_Statics::NewProp_ReturnValue_MetaData), Z_Construct_UFunction_UHTTPRequestClient_ResponseStringToJSON_Statics::NewProp_ReturnValue_MetaData) }; // 3210041870
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHTTPRequestClient_ResponseStringToJSON_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHTTPRequestClient_ResponseStringToJSON_Statics::NewProp_ResponseString,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHTTPRequestClient_ResponseStringToJSON_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHTTPRequestClient_ResponseStringToJSON_Statics::Function_MetaDataParams[] = {
		{ "Category", "HTTP Requests For Blueprint Plugin" },
		{ "Comment", "/**\n\x09 *\x09""Converts the Response String from the Make a HTTP Request callback into a JSON Object that can be used in a blueprint.\n\x09 *\n\x09 *\x09@param ResponseString The response string returned from Make a HTTP Request\n\x09 *\x09\n\x09 *\x09@author King Wai Mark\n\x09 */" },
		{ "DisplayName", "To JSON" },
		{ "Keywords", "Response String to JSON" },
		{ "ModuleRelativePath", "Public/HTTPRequestClient.h" },
		{ "ToolTip", "Converts the Response String from the Make a HTTP Request callback into a JSON Object that can be used in a blueprint.\n\n@param ResponseString The response string returned from Make a HTTP Request\n\n@author King Wai Mark" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UHTTPRequestClient_ResponseStringToJSON_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHTTPRequestClient, nullptr, "ResponseStringToJSON", nullptr, nullptr, Z_Construct_UFunction_UHTTPRequestClient_ResponseStringToJSON_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHTTPRequestClient_ResponseStringToJSON_Statics::PropPointers), sizeof(Z_Construct_UFunction_UHTTPRequestClient_ResponseStringToJSON_Statics::HTTPRequestClient_eventResponseStringToJSON_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UHTTPRequestClient_ResponseStringToJSON_Statics::Function_MetaDataParams), Z_Construct_UFunction_UHTTPRequestClient_ResponseStringToJSON_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UHTTPRequestClient_ResponseStringToJSON_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UHTTPRequestClient_ResponseStringToJSON_Statics::HTTPRequestClient_eventResponseStringToJSON_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UHTTPRequestClient_ResponseStringToJSON()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UHTTPRequestClient_ResponseStringToJSON_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UHTTPRequestClient_SetTimeoutDuration_Statics
	{
		struct HTTPRequestClient_eventSetTimeoutDuration_Parms
		{
			int32 TimeoutDuration;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TimeoutDuration_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_TimeoutDuration;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHTTPRequestClient_SetTimeoutDuration_Statics::NewProp_TimeoutDuration_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UHTTPRequestClient_SetTimeoutDuration_Statics::NewProp_TimeoutDuration = { "TimeoutDuration", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HTTPRequestClient_eventSetTimeoutDuration_Parms, TimeoutDuration), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UHTTPRequestClient_SetTimeoutDuration_Statics::NewProp_TimeoutDuration_MetaData), Z_Construct_UFunction_UHTTPRequestClient_SetTimeoutDuration_Statics::NewProp_TimeoutDuration_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHTTPRequestClient_SetTimeoutDuration_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHTTPRequestClient_SetTimeoutDuration_Statics::NewProp_TimeoutDuration,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHTTPRequestClient_SetTimeoutDuration_Statics::Function_MetaDataParams[] = {
		{ "Category", "HTTP Requests For Blueprint Plugin" },
		{ "Comment", "/**\n\x09 *\x09Sets the timeout duration of the request.\n\x09 *\x09\n\x09 *\x09""Default is 60 seconds.\n\x09 *\n\x09 *\x09@param TimeoutDuration Duration in seconds. Cannot be less than 3.\n\x09 *\x09\n\x09 *\x09@author King Wai Mark\n\x09 */" },
		{ "DisplayName", "Set Timeout Duration" },
		{ "Keywords", "Set Timeout Duration" },
		{ "ModuleRelativePath", "Public/HTTPRequestClient.h" },
		{ "ToolTip", "Sets the timeout duration of the request.\n\nDefault is 60 seconds.\n\n@param TimeoutDuration Duration in seconds. Cannot be less than 3.\n\n@author King Wai Mark" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UHTTPRequestClient_SetTimeoutDuration_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHTTPRequestClient, nullptr, "SetTimeoutDuration", nullptr, nullptr, Z_Construct_UFunction_UHTTPRequestClient_SetTimeoutDuration_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHTTPRequestClient_SetTimeoutDuration_Statics::PropPointers), sizeof(Z_Construct_UFunction_UHTTPRequestClient_SetTimeoutDuration_Statics::HTTPRequestClient_eventSetTimeoutDuration_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UHTTPRequestClient_SetTimeoutDuration_Statics::Function_MetaDataParams), Z_Construct_UFunction_UHTTPRequestClient_SetTimeoutDuration_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UHTTPRequestClient_SetTimeoutDuration_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UHTTPRequestClient_SetTimeoutDuration_Statics::HTTPRequestClient_eventSetTimeoutDuration_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UHTTPRequestClient_SetTimeoutDuration()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UHTTPRequestClient_SetTimeoutDuration_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UHTTPRequestClient);
	UClass* Z_Construct_UClass_UHTTPRequestClient_NoRegister()
	{
		return UHTTPRequestClient::StaticClass();
	}
	struct Z_Construct_UClass_UHTTPRequestClient_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UHTTPRequestClient_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_HTTPRequestForBlueprints,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UHTTPRequestClient_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_UHTTPRequestClient_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UHTTPRequestClient_GetBooleanArrayFromJSONObject, "GetBooleanArrayFromJSONObject" }, // 538665246
		{ &Z_Construct_UFunction_UHTTPRequestClient_GetBooleanFromJSONObject, "GetBooleanFromJSONObject" }, // 21298144
		{ &Z_Construct_UFunction_UHTTPRequestClient_GetNumberArrayFromJSONObject, "GetNumberArrayFromJSONObject" }, // 2436827366
		{ &Z_Construct_UFunction_UHTTPRequestClient_GetNumberFromJSONObject, "GetNumberFromJSONObject" }, // 2899064834
		{ &Z_Construct_UFunction_UHTTPRequestClient_GetObjectArrayFromJSONObject, "GetObjectArrayFromJSONObject" }, // 3697447940
		{ &Z_Construct_UFunction_UHTTPRequestClient_GetObjectFromJSONObject, "GetObjectFromJSONObject" }, // 1889937978
		{ &Z_Construct_UFunction_UHTTPRequestClient_GetStringArrayFromJSONObject, "GetStringArrayFromJSONObject" }, // 3445324295
		{ &Z_Construct_UFunction_UHTTPRequestClient_GetStringFromJSONObject, "GetStringFromJSONObject" }, // 2766144998
		{ &Z_Construct_UFunction_UHTTPRequestClient_GetTimeoutDuration, "GetTimeoutDuration" }, // 4190808611
		{ &Z_Construct_UFunction_UHTTPRequestClient_MakeAHttpRequest, "MakeAHttpRequest" }, // 2488570854
		{ &Z_Construct_UFunction_UHTTPRequestClient_ReplaceWithASCII, "ReplaceWithASCII" }, // 832054484
		{ &Z_Construct_UFunction_UHTTPRequestClient_ResponseStringToJSON, "ResponseStringToJSON" }, // 1684356236
		{ &Z_Construct_UFunction_UHTTPRequestClient_SetTimeoutDuration, "SetTimeoutDuration" }, // 3049743824
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UHTTPRequestClient_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHTTPRequestClient_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * @author King Wai Mark\n */" },
		{ "IncludePath", "HTTPRequestClient.h" },
		{ "ModuleRelativePath", "Public/HTTPRequestClient.h" },
		{ "ToolTip", "@author King Wai Mark" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UHTTPRequestClient_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UHTTPRequestClient>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UHTTPRequestClient_Statics::ClassParams = {
		&UHTTPRequestClient::StaticClass,
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
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UHTTPRequestClient_Statics::Class_MetaDataParams), Z_Construct_UClass_UHTTPRequestClient_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_UHTTPRequestClient()
	{
		if (!Z_Registration_Info_UClass_UHTTPRequestClient.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UHTTPRequestClient.OuterSingleton, Z_Construct_UClass_UHTTPRequestClient_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UHTTPRequestClient.OuterSingleton;
	}
	template<> HTTPREQUESTFORBLUEPRINTS_API UClass* StaticClass<UHTTPRequestClient>()
	{
		return UHTTPRequestClient::StaticClass();
	}
	UHTTPRequestClient::UHTTPRequestClient(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UHTTPRequestClient);
	UHTTPRequestClient::~UHTTPRequestClient() {}
	struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_HTTPRequestForBlueprints_Source_HTTPRequestForBlueprints_Public_HTTPRequestClient_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_HTTPRequestForBlueprints_Source_HTTPRequestForBlueprints_Public_HTTPRequestClient_h_Statics::EnumInfo[] = {
		{ EMethod_StaticEnum, TEXT("EMethod"), &Z_Registration_Info_UEnum_EMethod, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1609545185U) },
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_HTTPRequestForBlueprints_Source_HTTPRequestForBlueprints_Public_HTTPRequestClient_h_Statics::ScriptStructInfo[] = {
		{ FJSONObject::StaticStruct, Z_Construct_UScriptStruct_FJSONObject_Statics::NewStructOps, TEXT("JSONObject"), &Z_Registration_Info_UScriptStruct_JSONObject, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FJSONObject), 3210041870U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_HTTPRequestForBlueprints_Source_HTTPRequestForBlueprints_Public_HTTPRequestClient_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UHTTPRequestClient, UHTTPRequestClient::StaticClass, TEXT("UHTTPRequestClient"), &Z_Registration_Info_UClass_UHTTPRequestClient, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UHTTPRequestClient), 584053150U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_HTTPRequestForBlueprints_Source_HTTPRequestForBlueprints_Public_HTTPRequestClient_h_3046574846(TEXT("/Script/HTTPRequestForBlueprints"),
		Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_HTTPRequestForBlueprints_Source_HTTPRequestForBlueprints_Public_HTTPRequestClient_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_HTTPRequestForBlueprints_Source_HTTPRequestForBlueprints_Public_HTTPRequestClient_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_HTTPRequestForBlueprints_Source_HTTPRequestForBlueprints_Public_HTTPRequestClient_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_HTTPRequestForBlueprints_Source_HTTPRequestForBlueprints_Public_HTTPRequestClient_h_Statics::ScriptStructInfo),
		Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_HTTPRequestForBlueprints_Source_HTTPRequestForBlueprints_Public_HTTPRequestClient_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_HTTPRequestForBlueprints_Source_HTTPRequestForBlueprints_Public_HTTPRequestClient_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
