#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x48 (0x478 - 0x430)
// WidgetBlueprintGeneratedClass WBP_Option_Note.WBP_Option_Note_C
class UWBP_Option_Note_C : public UPalUserWidgetOverlayUI
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x430(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                      Anm_Open;                                          // 0x438(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UBP_PalTextBlock_C*                    BP_PalTextBlock_NoteCount;                         // 0x440(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_NoData_C*                         WBP_NoData;                                        // 0x448(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Option_NoteContent_C*             WBP_Option_NoteContent;                            // 0x450(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_PalCommonScrollList_C*            WBP_PalCommonScrollList;                           // 0x458(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class FName                                  CurrentNoteTitle;                                  // 0x460(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWBP_PalInvisibleButton_C*             FocusTarget;                                       // 0x468(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class FName                                  CloseActionName;                                   // 0x470(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UWBP_Option_Note_C* GetDefaultObj();

	struct FEventReply OnAnalogValueChanged(const struct FGeometry& MyGeometry, const struct FAnalogInputEvent& InAnalogInputEvent, const struct FKeyEvent& CallFunc_GetKeyEventFromAnalogInputEvent_ReturnValue, float CallFunc_GetAnalogValue_ReturnValue, const struct FKey& CallFunc_GetKey_ReturnValue, bool CallFunc_EqualEqual_KeyKey_ReturnValue, const struct FEventReply& CallFunc_Handled_ReturnValue, double CallFunc_ChangeOffset_NewOffset_ImplicitCast);
	class UWidget* BP_GetDesiredFocusTarget(bool CallFunc_IsValid_ReturnValue);
	void ChangeNoteContent(class FName NoteTitle, class APalPlayerState* CallFunc_GetLocalPlayerState_ReturnValue, const struct FDataTableRowHandle& K2Node_MakeStruct_DataTableRowHandle, class UPalPlayerLocalRecordData* CallFunc_GetLocalRecordData_ReturnValue, class FText CallFunc_GetLocalizedTextFromHandle_Text, bool Temp_bool_Variable, bool CallFunc_NotEqual_NameName_ReturnValue, class UPalNoteDataAsset* CallFunc_GetNoteDataAsset_ReturnValue, class UPalNoteData* CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue);
	void Setup(int32 NoteUnlockedCount, bool Temp_bool_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable, bool Temp_bool_Has_Been_Initd_Variable, class APalPlayerState* CallFunc_GetLocalPlayerState_ReturnValue, class UPalPlayerLocalRecordData* CallFunc_GetLocalRecordData_ReturnValue, class UWBP_Option_NoteListContent_C* CallFunc_SpawnObject_ReturnValue, class UScrollBoxSlot* CallFunc_SlotAsScrollBoxSlot_ReturnValue, bool Temp_bool_IsClosed_Variable, int64 CallFunc_Conv_IntToInt64_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, class UPalPlayerRecordData* CallFunc_GetLocalRecordData_ReturnValue_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FMargin& K2Node_MakeStruct_Margin, class FName Temp_name_Variable, class UPalNoteDataAsset* CallFunc_GetNoteDataAsset_ReturnValue, int32 CallFunc_Map_Length_ReturnValue, int64 CallFunc_Conv_IntToInt64_ReturnValue_1, TArray<class FName>& CallFunc_Map_Keys_Keys, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_1, class FName CallFunc_Array_Get_Item, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, const struct FDataTableRowHandle& K2Node_MakeStruct_DataTableRowHandle, class FText CallFunc_Format_ReturnValue, class FText CallFunc_GetLocalizedTextFromHandle_Text, bool CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, bool CallFunc_GetRecordData_Bool_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, class FName K2Node_Select_Default, int32 CallFunc_SelectInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_1);
	void Finished_793C14214599C67575C16AB5C1CD4F27();
	void OnSetup();
	void ClosePanel();
	void ExecuteUbergraph_WBP_Option_Note(int32 EntryPoint, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, bool CallFunc_IsAnimationPlaying_ReturnValue, class UUMGSequencePlayer* CallFunc_CreatePlayAnimationProxyObject_Result, class UWidgetAnimationPlayCallbackProxy* CallFunc_CreatePlayAnimationProxyObject_ReturnValue, bool CallFunc_IsValid_ReturnValue, const struct FPalUIActionBindData& CallFunc_RegisterActionBinding_ReturnValue);
};

}


