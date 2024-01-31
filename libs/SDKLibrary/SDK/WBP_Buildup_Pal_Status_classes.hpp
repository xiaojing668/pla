#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x130 (0x3A8 - 0x278)
// WidgetBlueprintGeneratedClass WBP_Buildup_Pal_Status.WBP_Buildup_Pal_Status_C
class UWBP_Buildup_Pal_Status_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x278(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UCanvasPanel*                          Canvas_ResetInfo;                                  // 0x280(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBP_PalTextBlock_C*                    Text_PossessedMoney_Num;                           // 0x288(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBP_PalTextBlock_C*                    Text_RequireMoney_Num;                             // 0x290(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Buildup_Pal_Item_C*               WBP_Buildup_Pal_Item;                              // 0x298(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Buildup_Pal_Item_C*               WBP_Buildup_Pal_Item_1;                            // 0x2A0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Buildup_Pal_Item_C*               WBP_Buildup_Pal_Item_2;                            // 0x2A8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Buildup_Pal_StatusContent_C*      WBP_Buildup_Pal_StatusContent;                     // 0x2B0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Buildup_Pal_StatusContent_C*      WBP_Buildup_Pal_StatusContent_1;                   // 0x2B8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Buildup_Pal_StatusContent_C*      WBP_Buildup_Pal_StatusContent_2;                   // 0x2C0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Buildup_Pal_StatusContent_C*      WBP_Buildup_Pal_StatusContent_3;                   // 0x2C8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_CommonButton_C*                   WBP_CommonButton;                                  // 0x2D0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	TArray<class UWBP_Buildup_Pal_StatusContent_C*> StatusContents;                                    // 0x2D8(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)
	TArray<enum class EPalCharacterStatusOperationName> StatusTypes;                                       // 0x2E8(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)
	enum class EPalCharacterStatusOperationName  CurrentStatus;                                     // 0x2F8(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_539F[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FDataTableRowHandle                   RankupMsgId;                                       // 0x300(0x10)(Edit, BlueprintVisible, NoDestructor)
	struct FDataTableRowHandle                   ResetMsgId;                                        // 0x310(0x10)(Edit, BlueprintVisible, NoDestructor)
	struct FDataTableRowHandle                   RankupButtonMsgID;                                 // 0x320(0x10)(Edit, BlueprintVisible, NoDestructor)
	struct FDataTableRowHandle                   ResetButtonMsgID;                                  // 0x330(0x10)(Edit, BlueprintVisible, NoDestructor)
	struct FDataTableRowHandle                   ResetResultMsgId;                                  // 0x340(0x10)(Edit, BlueprintVisible, NoDestructor)
	int32                                        Target_Rank;                                       // 0x350(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_53A0[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	FMulticastInlineDelegateProperty_            InvokeRankUp;                                      // 0x358(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	bool                                         BlockInvoke;                                       // 0x368(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Is_Upgrade;                                        // 0x369(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_53A1[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class UWBP_Buildup_Pal_Item_C*>       Upgrade_Items;                                     // 0x370(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)
	int32                                        RequiredMoney;                                     // 0x380(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_53A2[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	FMulticastInlineDelegateProperty_            InvokeReset;                                       // 0x388(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	TArray<class FName>                          Item_Ids;                                          // 0x398(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)

	static class UClass* StaticClass();
	static class UWBP_Buildup_Pal_Status_C* GetDefaultObj();

	void UpdateItemSufficiency(class UPalIndividualCharacterHandle* Handle, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, class UWBP_Buildup_Pal_StatusContent_C* CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, enum class EPalCharacterStatusOperationName CallFunc_Get_Status_Status, bool CallFunc_EqualEqual_ByteByte_ReturnValue, class FName CallFunc_GetRequiredItemCountForCharacterStatus_OutStaticItemId, int32 CallFunc_GetRequiredItemCountForCharacterStatus_OutItemNum, TArray<class FName>& K2Node_MakeArray_Array, TArray<struct FPalStaticItemIdAndNum>& CallFunc_CollectLocalPlayerControllableItemInfos_OutItemInfos, const struct FPalStaticItemIdAndNum& CallFunc_Array_Get_Item_1, bool CallFunc_GreaterEqual_IntInt_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_BooleanAND_ReturnValue);
	void Predict_Status(enum class EPalCharacterStatusOperationName Status, int32 TargetRank, bool CallFunc_NotEqual_ByteByte_ReturnValue, bool CallFunc_NotEqual_ByteByte_ReturnValue_1, int32 CallFunc_Array_Find_ReturnValue, bool CallFunc_NotEqual_ByteByte_ReturnValue_2, class UWBP_Buildup_Pal_StatusContent_C* CallFunc_Array_Get_Item, int32 CallFunc_Array_Find_ReturnValue_1, class UWBP_Buildup_Pal_StatusContent_C* CallFunc_Array_Get_Item_1);
	void Update_Confirm_Button_State(bool CallFunc_EqualEqual_ByteByte_ReturnValue, class UPalMoneyData* CallFunc_GetLocalMoneyData_ReturnValue, bool CallFunc_IsValid_ReturnValue, int64 CallFunc_GetNowMoney_ReturnValue, int64 CallFunc_Conv_IntToInt64_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue, bool CallFunc_Less_Int64Int64_ReturnValue, bool CallFunc_BooleanOR_ReturnValue);
	void GetFocusTarget(class UUserWidget** Widget);
	void On_Money_Changed(int64 NewMoney, bool Temp_bool_Variable, class FText CallFunc_Conv_Int64ToText_ReturnValue, class UMaterialInterface* Temp_object_Variable, class UMaterialInterface* Temp_object_Variable_1, int64 CallFunc_Conv_IntToInt64_ReturnValue, bool CallFunc_Less_Int64Int64_ReturnValue, class UMaterialInterface* K2Node_Select_Default);
	void Setup(class UPalIndividualCharacterHandle* Handle, TArray<class FName>& ItemIds, int32 Temp_int_Array_Index_Variable, class UPalIndividualCharacterParameter* CallFunc_TryGetIndividualParameter_ReturnValue, TMap<class FName, int32> CallFunc_GetReturnItemsForResetCharacterStatusAll_ReturnValue, class FText CallFunc_Conv_IntToText_ReturnValue, bool CallFunc_IsValid_ReturnValue, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable_1, int32 Temp_int_Loop_Counter_Variable_1, int32 CallFunc_Add_IntInt_ReturnValue_1, class UMaterialInterface* Temp_object_Variable, int64 CallFunc_Conv_IntToInt64_ReturnValue, class UPalMoneyData* CallFunc_GetLocalMoneyData_ReturnValue, class UMaterialInterface* Temp_object_Variable_1, bool CallFunc_IsValid_ReturnValue_1, int64 CallFunc_GetNowMoney_ReturnValue, bool CallFunc_Less_Int64Int64_ReturnValue, class FName CallFunc_Array_Get_Item, class FText CallFunc_Conv_Int64ToText_ReturnValue, int32 CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, class UWBP_Buildup_Pal_Item_C* CallFunc_Array_Get_Item_1, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_GetRequiredMoneyCountForResetCharacterStatusAll_ReturnValue, bool Temp_bool_Variable, class UWBP_Buildup_Pal_StatusContent_C* CallFunc_Array_Get_Item_2, enum class EPalCharacterStatusOperationName CallFunc_Get_Status_Status, class UMaterialInterface* K2Node_Select_Default, int32 CallFunc_GetCurrentStatusRank_ReturnValue, class FName CallFunc_GetRequiredItemCountForCharacterStatus_OutStaticItemId, int32 CallFunc_GetRequiredItemCountForCharacterStatus_OutItemNum, int32 CallFunc_Array_Length_ReturnValue_1, TArray<class FName>& K2Node_MakeArray_Array, bool CallFunc_Less_IntInt_ReturnValue_1, TArray<struct FPalStaticItemIdAndNum>& CallFunc_CollectLocalPlayerControllableItemInfos_OutItemInfos, const struct FPalStaticItemIdAndNum& CallFunc_Array_Get_Item_3, int32 CallFunc_Array_Find_ReturnValue, bool CallFunc_LessEqual_IntInt_ReturnValue);
	void SwitchPanel(bool IsUpgrade);
	void Construct();
	void BndEvt__WBP_Buildup_Pal_Status_WBP_CommonButton_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature();
	void ConfirmDialog(bool Confirmed);
	void EmptyEvent(bool bResult);
	void ShowResult();
	void ExecuteUbergraph_WBP_Buildup_Pal_Status(int32 EntryPoint, int32 Temp_int_Loop_Counter_Variable, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable, bool Temp_bool_Variable, int32 Temp_int_Array_Index_Variable_1, int32 Temp_int_Loop_Counter_Variable_1, int32 CallFunc_Add_IntInt_ReturnValue_1, int32 Temp_int_Array_Index_Variable_2, bool K2Node_CustomEvent_IsUpgrade, TArray<class UWBP_Buildup_Pal_StatusContent_C*>& K2Node_MakeArray_Array, class UWBP_Buildup_Pal_StatusContent_C* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, enum class ESlateVisibility Temp_byte_Variable, enum class EPalCharacterStatusOperationName CallFunc_Array_Get_Item_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, bool K2Node_CustomEvent_Confirmed, bool CallFunc_NotEqual_ByteByte_ReturnValue, enum class ESlateVisibility Temp_byte_Variable_1, int32 Temp_int_Loop_Counter_Variable_2, class UWBP_Buildup_Pal_StatusContent_C* CallFunc_Array_Get_Item_2, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_2, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue_1, class FText CallFunc_GetLocalizedTextFromHandle_Text, class FText CallFunc_GetLocalizedTextFromHandle_Text_1, class FText CallFunc_SelectText_ReturnValue, const struct FDataTableRowHandle& K2Node_Select_Default, class FText CallFunc_GetLocalizedTextFromHandle_Text_2, TArray<class UWBP_Buildup_Pal_Item_C*>& K2Node_MakeArray_Array_1, class UWBP_Buildup_Pal_Item_C* CallFunc_Array_Get_Item_3, int32 CallFunc_Array_Length_ReturnValue_2, bool CallFunc_Less_IntInt_ReturnValue_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, class UPalMoneyData* CallFunc_GetLocalMoneyData_ReturnValue, class UUserWidget* CallFunc_GetFocusTarget_Widget, int32 CallFunc_Array_Find_ReturnValue, bool Temp_bool_Variable_1, int32 CallFunc_Max_ReturnValue, class UWBP_Buildup_Pal_StatusContent_C* CallFunc_Array_Get_Item_4, enum class ESlateVisibility K2Node_Select_Default_1, int32 CallFunc_GetItemAndNum_ItemIndex, int32 CallFunc_GetItemAndNum_Num, class FName CallFunc_Array_Get_Item_5, class FText CallFunc_GetItemName_outName, class FName CallFunc_StaticItemID_Money_ReturnValue, int32 CallFunc_SelectInt_ReturnValue, class FText CallFunc_GetItemName_outName_1, int64 CallFunc_Conv_IntToInt64_ReturnValue, class FText CallFunc_SelectText_ReturnValue_1, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_1, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array_2, class FText CallFunc_Format_ReturnValue, int32 CallFunc_Array_Find_ReturnValue_1, class UWBP_Buildup_Pal_StatusContent_C* CallFunc_Array_Get_Item_6, bool CallFunc_NotEqual_ByteByte_ReturnValue_1, bool K2Node_CustomEvent_bResult, class FText CallFunc_GetLocalizedTextFromHandle_Text_3);
	void InvokeReset__DelegateSignature();
	void InvokeRankup__DelegateSignature(enum class EPalCharacterStatusOperationName Status, int32 TargetRank);
};

}


