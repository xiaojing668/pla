#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xFA (0x502 - 0x408)
// WidgetBlueprintGeneratedClass WBP_Ingame_Incubator.WBP_Ingame_Incubator_C
class UWBP_Ingame_Incubator_C : public UPalUIMapObjectStatusIndicatorBase
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x408(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                      Anm_DetailToSimple;                                // 0x410(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                      Anm_Buff_OnToOff;                                  // 0x418(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UBP_PalRichTextBlock_C*                BP_PalRichTextBlock_HatchState;                    // 0x420(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBP_PalRichTextBlock_C*                BP_PalRichTextBlock_RemainTime_Hour;               // 0x428(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBP_PalRichTextBlock_C*                BP_PalRichTextBlock_RemainTime_Hour_1;             // 0x430(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBP_PalRichTextBlock_C*                BP_PalRichTextBlock_RemainTime_Minute;             // 0x438(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBP_PalRichTextBlock_C*                BP_PalRichTextBlock_RemainTime_Minute_1;           // 0x440(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBP_PalRichTextBlock_C*                BP_PalRichTextBlock_RemainTime_Second;             // 0x448(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBP_PalRichTextBlock_C*                BP_PalRichTextBlock_RemainTime_Second_1;           // 0x450(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                CircleGauge_Progress;                              // 0x458(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHorizontalBox*                        HorizontalBox_RemainTime;                          // 0x460(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                              OverlayBuff;                                       // 0x468(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                              OverlayStatus;                                     // 0x470(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                StatusBase;                                        // 0x478(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBP_PalTextBlock_C*                    Text_Buff_Value;                                   // 0x480(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBP_PalTextBlock_C*                    Text_EggName;                                      // 0x488(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBP_PalTextBlock_C*                    Text_Status;                                       // 0x490(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_DroppedPalInfoWIdget_C*           WBP_DroppedPalInfoWIdget;                          // 0x498(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_PalCommonItemIcon_C*              WBP_PalCommonItemIcon;                             // 0x4A0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UPalMapObjectHatchingEggModel*         Model;                                             // 0x4A8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	int32                                        LastNum;                                           // 0x4B0(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_48F7[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FDataTableRowHandle                   UnusedMsgId;                                       // 0x4B8(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NoDestructor)
	struct FDataTableRowHandle                   CompleteMsgID;                                     // 0x4C8(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NoDestructor)
	struct FTimerHandle                          DisplayCheckTimer;                                 // 0x4D8(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	bool                                         IsDisplayedDetail;                                 // 0x4E0(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_48F8[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  CachedItemId;                                      // 0x4E4(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_48F9[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FDataTableRowHandle>           TemperatureMsgIds;                                 // 0x4F0(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance)
	bool                                         HasEgg;                                            // 0x500(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         HasChara;                                          // 0x501(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UWBP_Ingame_Incubator_C* GetDefaultObj();

	void RatioToPersentOffsetText(double Ratio, class FText* Persent, class FText CallFunc_MakeLiteralText_ReturnValue, double CallFunc_Subtract_DoubleDouble_ReturnValue, class FText CallFunc_MakeLiteralText_ReturnValue_1, double CallFunc_Multiply_DoubleDouble_ReturnValue, bool CallFunc_Greater_DoubleDouble_ReturnValue, int32 CallFunc_Round_ReturnValue, class FText CallFunc_SelectText_ReturnValue, int32 CallFunc_Abs_Int_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, int64 CallFunc_Conv_IntToInt64_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_1, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue);
	void UpdateEggDisplay(bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, bool Temp_bool_Variable_1, enum class ESlateVisibility Temp_byte_Variable_2, enum class ESlateVisibility Temp_byte_Variable_3, bool Temp_bool_Variable_2, enum class ESlateVisibility Temp_byte_Variable_4, enum class ESlateVisibility Temp_byte_Variable_5, bool Temp_bool_Variable_3, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, enum class ESlateVisibility K2Node_Select_Default, enum class ESlateVisibility K2Node_Select_Default_1, class FText CallFunc_MakeLiteralText_ReturnValue, class FText CallFunc_GetItemName_outName, bool CallFunc_BooleanOR_ReturnValue, enum class ESlateVisibility K2Node_Select_Default_2, class FText CallFunc_SelectText_ReturnValue, const struct FDataTableRowHandle& K2Node_Select_Default_3, class FText CallFunc_GetLocalizedTextFromHandle_Text);
	void Set_Second(int32 RemainingSecond, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_SelectInt_ReturnValue, bool CallFunc_NotEqual_IntInt_ReturnValue, int32 CallFunc_Percent_IntInt_ReturnValue, int32 CallFunc_Divide_IntInt_ReturnValue, int32 CallFunc_Percent_IntInt_ReturnValue_1, int32 CallFunc_Divide_IntInt_ReturnValue_1, int32 CallFunc_Divide_IntInt_ReturnValue_2, bool CallFunc_EqualEqual_IntInt_ReturnValue, class FText CallFunc_Conv_IntToText_ReturnValue, const class FString& CallFunc_SelectString_ReturnValue, const class FString& CallFunc_Conv_TextToString_ReturnValue, class FText CallFunc_Conv_IntToText_ReturnValue_1, int32 CallFunc_Percent_IntInt_ReturnValue_2, const class FString& CallFunc_Conv_TextToString_ReturnValue_1, class FText CallFunc_Conv_IntToText_ReturnValue_2, const class FString& CallFunc_Replace_ReturnValue, const class FString& CallFunc_Conv_TextToString_ReturnValue_2, class FText CallFunc_Conv_StringToText_ReturnValue, int32 CallFunc_Percent_IntInt_ReturnValue_3, int32 CallFunc_Divide_IntInt_ReturnValue_3, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Divide_IntInt_ReturnValue_4, bool CallFunc_EqualEqual_IntInt_ReturnValue_1, int32 CallFunc_Add_IntInt_ReturnValue_1, const class FString& CallFunc_SelectString_ReturnValue_1, bool CallFunc_EqualEqual_IntInt_ReturnValue_2, class FText CallFunc_Conv_IntToText_ReturnValue_3, const class FString& CallFunc_SelectString_ReturnValue_2, const class FString& CallFunc_Conv_TextToString_ReturnValue_3, int32 CallFunc_Percent_IntInt_ReturnValue_4, const class FString& CallFunc_Replace_ReturnValue_1, int32 CallFunc_Add_IntInt_ReturnValue_2, class FText CallFunc_Conv_StringToText_ReturnValue_1, int32 CallFunc_Add_IntInt_ReturnValue_3, bool CallFunc_EqualEqual_IntInt_ReturnValue_3, bool CallFunc_EqualEqual_IntInt_ReturnValue_4, const class FString& CallFunc_SelectString_ReturnValue_3, const class FString& CallFunc_SelectString_ReturnValue_4, const class FString& CallFunc_Replace_ReturnValue_2, const class FString& CallFunc_Replace_ReturnValue_3, class FText CallFunc_Conv_StringToText_ReturnValue_2, class FText CallFunc_Conv_StringToText_ReturnValue_3, class FText CallFunc_Conv_IntToText_ReturnValue_4, const class FString& CallFunc_Conv_TextToString_ReturnValue_4, class FText CallFunc_Conv_IntToText_ReturnValue_5, const class FString& CallFunc_Replace_ReturnValue_4, const class FString& CallFunc_Conv_TextToString_ReturnValue_5, class FText CallFunc_Conv_StringToText_ReturnValue_4, const class FString& CallFunc_Replace_ReturnValue_5, class FText CallFunc_Conv_StringToText_ReturnValue_5);
	void OnUpdateHatchTemperature(int32 TempDiff, int32 MsgId, bool CallFunc_Greater_IntInt_ReturnValue, bool K2Node_SwitchInteger_CmpSuccess, class UPalGameSetting* CallFunc_GetGameSetting_ReturnValue, int32 CallFunc_Abs_Int_ReturnValue, float CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, class FText CallFunc_RatioToPersentOffsetText_Persent, const struct FDataTableRowHandle& CallFunc_Array_Get_Item, class FText CallFunc_GetLocalizedTextFromHandle_Text, bool CallFunc_LessEqual_IntInt_ReturnValue, bool CallFunc_GreaterEqual_IntInt_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, const struct FLinearColor& CallFunc_SelectColor_ReturnValue, double CallFunc_RatioToPersentOffsetText_Ratio_ImplicitCast);
	void OnUpdateHatchedCharacter(class UPalMapObjectHatchingEggModel* Model, bool CallFunc_IsValid_ReturnValue, class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue);
	void OnUpdateItemContainer(class UPalItemContainer* Container, class UPalItemSlot* CallFunc_Get_ReturnValue, bool CallFunc_IsValid_ReturnValue, const struct FPalItemId& CallFunc_GetItemId_ReturnValue, bool CallFunc_NotEqual_NameName_ReturnValue);
	void OnUpdateWorkAmount(class UPalWorkProgress* WorkProgress, int32 CallFunc_GetRemainWorkPredicateTime_ReturnValue, bool CallFunc_IsValid_ReturnValue, float CallFunc_GetProgressRate_ReturnValue, double CallFunc_SelectFloat_ReturnValue, class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue, double CallFunc_SelectFloat_B_ImplicitCast, float CallFunc_SetScalarParameterValue_Value_ImplicitCast);
	void OnSetup();
	void DisplayCheck();
	void Destruct();
	void Construct();
	void ExecuteUbergraph_WBP_Ingame_Incubator(int32 EntryPoint, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool Temp_bool_Variable, enum class EUMGSequencePlayMode Temp_byte_Variable, enum class EUMGSequencePlayMode Temp_byte_Variable_1, enum class EUMGSequencePlayMode K2Node_Select_Default, class UPalHUDDispatchParameterBase* CallFunc_GetParam_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, class UPalUIMapObjectStatusIndicatorParameterBase* K2Node_DynamicCast_AsPal_UIMap_Object_Status_Indicator_Parameter_Base, bool K2Node_DynamicCast_bSuccess, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, class UPalMapObjectConcreteModelBase* CallFunc_GetConcreteModel_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, class UPalMapObjectHatchingEggModel* K2Node_DynamicCast_AsPal_Map_Object_Hatching_Egg_Model, bool K2Node_DynamicCast_bSuccess_1, class UPalMapObjectWorkeeModule* CallFunc_GetWorkeeModule_ReturnValue, class UPalWorkProgress* CallFunc_GetWorkProgress_ReturnValue, class UPalMapObjectItemContainerModule* CallFunc_GetItemContainerModule_ReturnValue, class UPalItemContainer* CallFunc_GetContainer_ReturnValue, int32 CallFunc_GetTemperatureDiff_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_4, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, class APalPlayerCharacter* CallFunc_GetPalmi_ReturnValue, class UPalGameSetting* CallFunc_GetGameSetting_ReturnValue, bool CallFunc_IsValid_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, float CallFunc_GetEndTime_ReturnValue, const struct FVector& CallFunc_GetMapObjectLocation_outVector, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_1, double CallFunc_Vector_Distance_ReturnValue, bool CallFunc_Less_DoubleDouble_ReturnValue, bool CallFunc_NotEqual_BoolBool_ReturnValue, double CallFunc_Less_DoubleDouble_B_ImplicitCast);
};

}


