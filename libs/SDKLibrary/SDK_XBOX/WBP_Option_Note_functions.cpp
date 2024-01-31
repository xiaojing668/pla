#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass WBP_Option_Note.WBP_Option_Note_C
// (None)

class UClass* UWBP_Option_Note_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WBP_Option_Note_C");

	return Clss;
}


// WBP_Option_Note_C WBP_Option_Note.Default__WBP_Option_Note_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWBP_Option_Note_C* UWBP_Option_Note_C::GetDefaultObj()
{
	static class UWBP_Option_Note_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWBP_Option_Note_C*>(UWBP_Option_Note_C::StaticClass()->DefaultObject);

	return Default;
}


// Function WBP_Option_Note.WBP_Option_Note_C.OnAnalogValueChanged
// (Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry                   MyGeometry                                                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// struct FAnalogInputEvent           InAnalogInputEvent                                               (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FEventReply                 ReturnValue                                                      (Parm, OutParm, ReturnParm)
// struct FKeyEvent                   CallFunc_GetKeyEventFromAnalogInputEvent_ReturnValue             (None)
// float                              CallFunc_GetAnalogValue_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FKey                        CallFunc_GetKey_ReturnValue                                      (HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_KeyKey_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FEventReply                 CallFunc_Handled_ReturnValue                                     (None)
// double                             CallFunc_ChangeOffset_NewOffset_ImplicitCast                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

struct FEventReply UWBP_Option_Note_C::OnAnalogValueChanged(const struct FGeometry& MyGeometry, const struct FAnalogInputEvent& InAnalogInputEvent, const struct FKeyEvent& CallFunc_GetKeyEventFromAnalogInputEvent_ReturnValue, float CallFunc_GetAnalogValue_ReturnValue, const struct FKey& CallFunc_GetKey_ReturnValue, bool CallFunc_EqualEqual_KeyKey_ReturnValue, const struct FEventReply& CallFunc_Handled_ReturnValue, double CallFunc_ChangeOffset_NewOffset_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Option_Note_C", "OnAnalogValueChanged");

	Params::UWBP_Option_Note_C_OnAnalogValueChanged_Params Parms{};

	Parms.MyGeometry = MyGeometry;
	Parms.InAnalogInputEvent = InAnalogInputEvent;
	Parms.CallFunc_GetKeyEventFromAnalogInputEvent_ReturnValue = CallFunc_GetKeyEventFromAnalogInputEvent_ReturnValue;
	Parms.CallFunc_GetAnalogValue_ReturnValue = CallFunc_GetAnalogValue_ReturnValue;
	Parms.CallFunc_GetKey_ReturnValue = CallFunc_GetKey_ReturnValue;
	Parms.CallFunc_EqualEqual_KeyKey_ReturnValue = CallFunc_EqualEqual_KeyKey_ReturnValue;
	Parms.CallFunc_Handled_ReturnValue = CallFunc_Handled_ReturnValue;
	Parms.CallFunc_ChangeOffset_NewOffset_ImplicitCast = CallFunc_ChangeOffset_NewOffset_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function WBP_Option_Note.WBP_Option_Note_C.BP_GetDesiredFocusTarget
// (Event, Protected, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UWidget*                     ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

class UWidget* UWBP_Option_Note_C::BP_GetDesiredFocusTarget(bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Option_Note_C", "BP_GetDesiredFocusTarget");

	Params::UWBP_Option_Note_C_BP_GetDesiredFocusTarget_Params Parms{};

	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function WBP_Option_Note.WBP_Option_Note_C.ChangeNoteContent
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        NoteTitle                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APalPlayerState*             CallFunc_GetLocalPlayerState_ReturnValue                         (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FDataTableRowHandle         K2Node_MakeStruct_DataTableRowHandle                             (NoDestructor)
// class UPalPlayerLocalRecordData*   CallFunc_GetLocalRecordData_ReturnValue                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_GetLocalizedTextFromHandle_Text                         (None)
// bool                               Temp_bool_Variable                                               (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_NameName_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPalNoteDataAsset*           CallFunc_GetNoteDataAsset_ReturnValue                            (ConstParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPalNoteData*                CallFunc_Map_Find_Value                                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Map_Find_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Option_Note_C::ChangeNoteContent(class FName NoteTitle, class APalPlayerState* CallFunc_GetLocalPlayerState_ReturnValue, const struct FDataTableRowHandle& K2Node_MakeStruct_DataTableRowHandle, class UPalPlayerLocalRecordData* CallFunc_GetLocalRecordData_ReturnValue, class FText CallFunc_GetLocalizedTextFromHandle_Text, bool Temp_bool_Variable, bool CallFunc_NotEqual_NameName_ReturnValue, class UPalNoteDataAsset* CallFunc_GetNoteDataAsset_ReturnValue, class UPalNoteData* CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Option_Note_C", "ChangeNoteContent");

	Params::UWBP_Option_Note_C_ChangeNoteContent_Params Parms{};

	Parms.NoteTitle = NoteTitle;
	Parms.CallFunc_GetLocalPlayerState_ReturnValue = CallFunc_GetLocalPlayerState_ReturnValue;
	Parms.K2Node_MakeStruct_DataTableRowHandle = K2Node_MakeStruct_DataTableRowHandle;
	Parms.CallFunc_GetLocalRecordData_ReturnValue = CallFunc_GetLocalRecordData_ReturnValue;
	Parms.CallFunc_GetLocalizedTextFromHandle_Text = CallFunc_GetLocalizedTextFromHandle_Text;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.CallFunc_NotEqual_NameName_ReturnValue = CallFunc_NotEqual_NameName_ReturnValue;
	Parms.CallFunc_GetNoteDataAsset_ReturnValue = CallFunc_GetNoteDataAsset_ReturnValue;
	Parms.CallFunc_Map_Find_Value = CallFunc_Map_Find_Value;
	Parms.CallFunc_Map_Find_ReturnValue = CallFunc_Map_Find_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_Option_Note.WBP_Option_Note_C.Setup
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              NoteUnlockedCount                                                (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Has_Been_Initd_Variable                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APalPlayerState*             CallFunc_GetLocalPlayerState_ReturnValue                         (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPalPlayerLocalRecordData*   CallFunc_GetLocalRecordData_ReturnValue                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UWBP_Option_NoteListContent_C*CallFunc_SpawnObject_ReturnValue                                 (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UScrollBoxSlot*              CallFunc_SlotAsScrollBoxSlot_ReturnValue                         (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_IsClosed_Variable                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int64                              CallFunc_Conv_IntToInt64_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData                             (HasGetValueTypeHash)
// class UPalPlayerRecordData*        CallFunc_GetLocalRecordData_ReturnValue_1                        (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FMargin                     K2Node_MakeStruct_Margin                                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FName                        Temp_name_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPalNoteDataAsset*           CallFunc_GetNoteDataAsset_ReturnValue                            (ConstParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Map_Length_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int64                              CallFunc_Conv_IntToInt64_ReturnValue_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class FName>                CallFunc_Map_Keys_Keys                                           (ReferenceParm)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData_1                           (HasGetValueTypeHash)
// class FName                        CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array                                           (ReferenceParm)
// struct FDataTableRowHandle         K2Node_MakeStruct_DataTableRowHandle                             (NoDestructor)
// class FText                        CallFunc_Format_ReturnValue                                      (None)
// class FText                        CallFunc_GetLocalizedTextFromHandle_Text                         (None)
// bool                               CallFunc_Map_Find_Value                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Map_Find_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetRecordData_Bool_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_SelectInt_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Option_Note_C::Setup(int32 NoteUnlockedCount, bool Temp_bool_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable, bool Temp_bool_Has_Been_Initd_Variable, class APalPlayerState* CallFunc_GetLocalPlayerState_ReturnValue, class UPalPlayerLocalRecordData* CallFunc_GetLocalRecordData_ReturnValue, class UWBP_Option_NoteListContent_C* CallFunc_SpawnObject_ReturnValue, class UScrollBoxSlot* CallFunc_SlotAsScrollBoxSlot_ReturnValue, bool Temp_bool_IsClosed_Variable, int64 CallFunc_Conv_IntToInt64_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, class UPalPlayerRecordData* CallFunc_GetLocalRecordData_ReturnValue_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FMargin& K2Node_MakeStruct_Margin, class FName Temp_name_Variable, class UPalNoteDataAsset* CallFunc_GetNoteDataAsset_ReturnValue, int32 CallFunc_Map_Length_ReturnValue, int64 CallFunc_Conv_IntToInt64_ReturnValue_1, TArray<class FName>& CallFunc_Map_Keys_Keys, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_1, class FName CallFunc_Array_Get_Item, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, const struct FDataTableRowHandle& K2Node_MakeStruct_DataTableRowHandle, class FText CallFunc_Format_ReturnValue, class FText CallFunc_GetLocalizedTextFromHandle_Text, bool CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, bool CallFunc_GetRecordData_Bool_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, class FName K2Node_Select_Default, int32 CallFunc_SelectInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Option_Note_C", "Setup");

	Params::UWBP_Option_Note_C_Setup_Params Parms{};

	Parms.NoteUnlockedCount = NoteUnlockedCount;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_bool_Has_Been_Initd_Variable = Temp_bool_Has_Been_Initd_Variable;
	Parms.CallFunc_GetLocalPlayerState_ReturnValue = CallFunc_GetLocalPlayerState_ReturnValue;
	Parms.CallFunc_GetLocalRecordData_ReturnValue = CallFunc_GetLocalRecordData_ReturnValue;
	Parms.CallFunc_SpawnObject_ReturnValue = CallFunc_SpawnObject_ReturnValue;
	Parms.CallFunc_SlotAsScrollBoxSlot_ReturnValue = CallFunc_SlotAsScrollBoxSlot_ReturnValue;
	Parms.Temp_bool_IsClosed_Variable = Temp_bool_IsClosed_Variable;
	Parms.CallFunc_Conv_IntToInt64_ReturnValue = CallFunc_Conv_IntToInt64_ReturnValue;
	Parms.K2Node_MakeStruct_FormatArgumentData = K2Node_MakeStruct_FormatArgumentData;
	Parms.CallFunc_GetLocalRecordData_ReturnValue_1 = CallFunc_GetLocalRecordData_ReturnValue_1;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_MakeStruct_Margin = K2Node_MakeStruct_Margin;
	Parms.Temp_name_Variable = Temp_name_Variable;
	Parms.CallFunc_GetNoteDataAsset_ReturnValue = CallFunc_GetNoteDataAsset_ReturnValue;
	Parms.CallFunc_Map_Length_ReturnValue = CallFunc_Map_Length_ReturnValue;
	Parms.CallFunc_Conv_IntToInt64_ReturnValue_1 = CallFunc_Conv_IntToInt64_ReturnValue_1;
	Parms.CallFunc_Map_Keys_Keys = CallFunc_Map_Keys_Keys;
	Parms.K2Node_MakeStruct_FormatArgumentData_1 = K2Node_MakeStruct_FormatArgumentData_1;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.K2Node_MakeStruct_DataTableRowHandle = K2Node_MakeStruct_DataTableRowHandle;
	Parms.CallFunc_Format_ReturnValue = CallFunc_Format_ReturnValue;
	Parms.CallFunc_GetLocalizedTextFromHandle_Text = CallFunc_GetLocalizedTextFromHandle_Text;
	Parms.CallFunc_Map_Find_Value = CallFunc_Map_Find_Value;
	Parms.CallFunc_Map_Find_ReturnValue = CallFunc_Map_Find_ReturnValue;
	Parms.CallFunc_GetRecordData_Bool_ReturnValue = CallFunc_GetRecordData_Bool_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_SelectInt_ReturnValue = CallFunc_SelectInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue_1 = CallFunc_Add_IntInt_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_Option_Note.WBP_Option_Note_C.Finished_793C14214599C67575C16AB5C1CD4F27
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_Option_Note_C::Finished_793C14214599C67575C16AB5C1CD4F27()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Option_Note_C", "Finished_793C14214599C67575C16AB5C1CD4F27");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_Option_Note.WBP_Option_Note_C.OnSetup
// (Event, Protected, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_Option_Note_C::OnSetup()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Option_Note_C", "OnSetup");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_Option_Note.WBP_Option_Note_C.ClosePanel
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_Option_Note_C::ClosePanel()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Option_Note_C", "ClosePanel");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_Option_Note.WBP_Option_Note_C.ExecuteUbergraph_WBP_Option_Note
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_2                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue                               (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsAnimationPlaying_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_CreatePlayAnimationProxyObject_Result                   (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UWidgetAnimationPlayCallbackProxy*CallFunc_CreatePlayAnimationProxyObject_ReturnValue              (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FPalUIActionBindData        CallFunc_RegisterActionBinding_ReturnValue                       (NoDestructor)

void UWBP_Option_Note_C::ExecuteUbergraph_WBP_Option_Note(int32 EntryPoint, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, bool CallFunc_IsAnimationPlaying_ReturnValue, class UUMGSequencePlayer* CallFunc_CreatePlayAnimationProxyObject_Result, class UWidgetAnimationPlayCallbackProxy* CallFunc_CreatePlayAnimationProxyObject_ReturnValue, bool CallFunc_IsValid_ReturnValue, const struct FPalUIActionBindData& CallFunc_RegisterActionBinding_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Option_Note_C", "ExecuteUbergraph_WBP_Option_Note");

	Params::UWBP_Option_Note_C_ExecuteUbergraph_WBP_Option_Note_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.K2Node_CreateDelegate_OutputDelegate_2 = K2Node_CreateDelegate_OutputDelegate_2;
	Parms.CallFunc_PlayAnimation_ReturnValue = CallFunc_PlayAnimation_ReturnValue;
	Parms.CallFunc_IsAnimationPlaying_ReturnValue = CallFunc_IsAnimationPlaying_ReturnValue;
	Parms.CallFunc_CreatePlayAnimationProxyObject_Result = CallFunc_CreatePlayAnimationProxyObject_Result;
	Parms.CallFunc_CreatePlayAnimationProxyObject_ReturnValue = CallFunc_CreatePlayAnimationProxyObject_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_RegisterActionBinding_ReturnValue = CallFunc_RegisterActionBinding_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


