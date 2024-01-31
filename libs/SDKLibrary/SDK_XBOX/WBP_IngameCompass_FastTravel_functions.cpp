#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass WBP_IngameCompass_FastTravel.WBP_IngameCompass_FastTravel_C
// (None)

class UClass* UWBP_IngameCompass_FastTravel_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WBP_IngameCompass_FastTravel_C");

	return Clss;
}


// WBP_IngameCompass_FastTravel_C WBP_IngameCompass_FastTravel.Default__WBP_IngameCompass_FastTravel_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWBP_IngameCompass_FastTravel_C* UWBP_IngameCompass_FastTravel_C::GetDefaultObj()
{
	static class UWBP_IngameCompass_FastTravel_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWBP_IngameCompass_FastTravel_C*>(UWBP_IngameCompass_FastTravel_C::StaticClass()->DefaultObject);

	return Default;
}


// Function WBP_IngameCompass_FastTravel.WBP_IngameCompass_FastTravel_C.SetupTexture
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// TSoftObjectPtr<class UTexture2D>   SoftTexture                                                      (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void UWBP_IngameCompass_FastTravel_C::SetupTexture(TSoftObjectPtr<class UTexture2D> SoftTexture)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_IngameCompass_FastTravel_C", "SetupTexture");

	Params::UWBP_IngameCompass_FastTravel_C_SetupTexture_Params Parms{};

	Parms.SoftTexture = SoftTexture;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_IngameCompass_FastTravel.WBP_IngameCompass_FastTravel_C.SetDistanceText
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// double                             Length                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Multiply_DoubleDouble_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int64                              CallFunc_Conv_DoubleToInt64_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_Int64ToText_ReturnValue                            (None)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData                             (HasGetValueTypeHash)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array                                           (ReferenceParm)
// class FText                        CallFunc_Format_ReturnValue                                      (None)

void UWBP_IngameCompass_FastTravel_C::SetDistanceText(double Length, double CallFunc_Multiply_DoubleDouble_ReturnValue, int64 CallFunc_Conv_DoubleToInt64_ReturnValue, class FText CallFunc_Conv_Int64ToText_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_IngameCompass_FastTravel_C", "SetDistanceText");

	Params::UWBP_IngameCompass_FastTravel_C_SetDistanceText_Params Parms{};

	Parms.Length = Length;
	Parms.CallFunc_Multiply_DoubleDouble_ReturnValue = CallFunc_Multiply_DoubleDouble_ReturnValue;
	Parms.CallFunc_Conv_DoubleToInt64_ReturnValue = CallFunc_Conv_DoubleToInt64_ReturnValue;
	Parms.CallFunc_Conv_Int64ToText_ReturnValue = CallFunc_Conv_Int64ToText_ReturnValue;
	Parms.K2Node_MakeStruct_FormatArgumentData = K2Node_MakeStruct_FormatArgumentData;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_Format_ReturnValue = CallFunc_Format_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


