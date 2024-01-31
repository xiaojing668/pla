#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x158 (0x5A8 - 0x450)
// WidgetBlueprintGeneratedClass WBP_CommonRadialMenuBase.WBP_CommonRadialMenuBase_C
class UWBP_CommonRadialMenuBase_C : public UPalUIRadialMenuWidgetBase
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x450(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                      CursorLoop;                                        // 0x458(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                      Default_In;                                        // 0x460(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UBackgroundBlur*                       BackgroundBlur;                                    // 0x468(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                          CanvasPanel_Inner;                                 // 0x470(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Image_Cursor;                                      // 0x478(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Image_radialBase;                                  // 0x480(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_RadialMenu_base_C*                WBP_RadialMenu_base;                               // 0x488(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                SelectedMenuImage;                                 // 0x490(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UImage*                                SelectedMenuInnerImage;                            // 0x498(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_            OnSelectedIndex_forBP;                             // 0x4A0(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	double                                       MenuOffSetLength;                                  // 0x4B0(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_            OnDecideIndex_forBP;                               // 0x4B8(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	double                                       AdditionalWidgetOffsetLength;                      // 0x4C8(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         IsEnableCheck;                                     // 0x4D0(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_55CC[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UImage*                                SelectedMenuLeftBorderImage;                       // 0x4D8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UImage*                                SelectedMenuRightBorderImage;                      // 0x4E0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                         IsDIsplayOnly;                                     // 0x4E8(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_55CD[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UMaterialInterface*                    SelectedPlateMaterial;                             // 0x4F0(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UMaterialInterface*                    SelectedBorderMaterial;                            // 0x4F8(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UMaterialInterface*                    BackGroundPlateMaterial;                           // 0x500(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         IsUseLocalControllerInput;                         // 0x508(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_55CE[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       MouseDetectDelta;                                  // 0x510(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWidget*                               CenterWidget;                                      // 0x518(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	struct FPalUIActionBindData                  DecideActionHandle;                                // 0x520(0x4)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	struct FPalUIActionBindData                  DummyPressedActionHandle;                          // 0x524(0x4)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	class UPalUserWidget*                        InputParentWidget;                                 // 0x528(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	TMap<int32, class UWidget*>                  AdditionalWidget;                                  // 0x530(0x50)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)
	struct FVector2D                             CenterOffset;                                      // 0x580(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       MenuScale;                                         // 0x590(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAkAudioEvent*                         HoveredSound;                                      // 0x598(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UAkAudioEvent*                         ClickedSound;                                      // 0x5A0(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UWBP_CommonRadialMenuBase_C* GetDefaultObj();

	void OnChangedInputMethod(enum class ECommonInputType bNewInputType, bool K2Node_SwitchEnum_CmpSuccess);
	void OnPressed_Dummy();
	struct FEventReply OnPreviewMouseButtonDown(const struct FGeometry& MyGeometry, struct FPointerEvent& MouseEvent, const struct FEventReply& CallFunc_Unhandled_ReturnValue, bool CallFunc_PointerEvent_IsMouseButtonDown_ReturnValue, const struct FEventReply& CallFunc_Handled_ReturnValue);
	void GetCenterPosition(struct FVector2D* Position, const struct FGeometry& CallFunc_GetTickSpaceGeometry_ReturnValue, const struct FVector2D& CallFunc_GetLocalSize_ReturnValue, const struct FVector2D& CallFunc_Multiply_Vector2DVector2D_ReturnValue, const struct FVector2D& CallFunc_LocalToViewport_PixelPosition, const struct FVector2D& CallFunc_LocalToViewport_ViewportPosition);
	struct FEventReply OnMouseMove(const struct FGeometry& MyGeometry, struct FPointerEvent& MouseEvent, const struct FVector2D& CallFunc_GetMousePositionOnViewport_ReturnValue, const struct FVector2D& CallFunc_PointerEvent_GetCursorDelta_ReturnValue, const struct FVector2D& CallFunc_GetCenterPosition_position, double CallFunc_VSize2D_ReturnValue, const struct FVector2D& CallFunc_Subtract_Vector2DVector2D_ReturnValue, bool CallFunc_GreaterEqual_DoubleDouble_ReturnValue, double CallFunc_RadiansToDegrees_ReturnValue, const struct FEventReply& CallFunc_Unhandled_ReturnValue, double CallFunc_RadiansToDegrees_A_ImplicitCast);
	void OnDecided(class UPalHUDService* CallFunc_GetHUDService_ReturnValue);
	void RecalcMenuNum(int32 NewMenuNum, float CallFunc_GetRenderTransformAngle_ReturnValue);
	void ClearCenterWidget(bool CallFunc_IsValid_ReturnValue);
	void Set_Center_Widget(class UWidget* Widget, const struct FVector2D& CanvasSize, const struct FVector2D& Offset, bool CallFunc_IsValid_ReturnValue, const struct FAnchors& K2Node_MakeStruct_Anchors, class UCanvasPanelSlot* CallFunc_AddChildToCanvas_ReturnValue);
	void Close(bool CallFunc_IsValid_ReturnValue);
	void Open(class UPalUserWidget* ParentWidget, const struct FPalDataTableRowName_UIInputAction& DecideAction, bool CallFunc_IsValid_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FPalUIActionBindData& CallFunc_RegisterActionBinding_ReturnValue, const struct FVector2D& CallFunc_GetMousePositionOnViewport_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, const struct FPalUIActionBindData& CallFunc_RegisterActionBinding_ReturnValue_1, bool CallFunc_IsVisible_ReturnValue);
	void ClearAdditionalWidgets(int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, TArray<class UWidget*>& CallFunc_Map_Values_Values, int32 CallFunc_Array_Length_ReturnValue, class UWidget* CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue);
	void SetSelectedImageVisibility(bool IsVisible, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_2, bool CallFunc_IsValid_ReturnValue_3);
	void SetArrowVisibility(bool IsVisible);
	void CalcAdditionalWidgetPosition(int32 Index, struct FVector2D* Offset, double CallFunc_GetPI_ReturnValue, double CallFunc_Calc_Image_Angle_OutAngle, double CallFunc_Multiply_DoubleDouble_ReturnValue, double CallFunc_DegreesToRadians_ReturnValue, float CallFunc_Conv_IntToFloat_ReturnValue, double CallFunc_Divide_DoubleDouble_ReturnValue, double CallFunc_Multiply_DoubleDouble_ReturnValue_1, double CallFunc_Add_DoubleDouble_ReturnValue, double CallFunc_Cos_ReturnValue, double CallFunc_Sin_ReturnValue, double CallFunc_Multiply_DoubleDouble_ReturnValue_2, double CallFunc_Multiply_DoubleDouble_ReturnValue_3, double CallFunc_Multiply_DoubleDouble_ReturnValue_4, const struct FVector2D& CallFunc_MakeVector2D_ReturnValue, double CallFunc_Divide_DoubleDouble_B_ImplicitCast);
	void Set_Additional_Widget(int32 Index, class UUserWidget* AddWidget, class UCanvasPanelSlot** Canvas, const struct FVector2D& CallFunc_CalcAdditionalWidgetPosition_offset, const struct FAnchors& K2Node_MakeStruct_Anchors, class UCanvasPanelSlot* CallFunc_AddChildToCanvas_ReturnValue, bool CallFunc_GreaterEqual_IntInt_ReturnValue);
	void CheckMouse_LocalController(const struct FVector2D& CallFunc_GetMousePositionOnViewport_ReturnValue, const struct FVector2D& CallFunc_GetCenterPosition_position, const struct FVector2D& CallFunc_GetMousePositionOnViewport_ReturnValue_1, class APlayerController* CallFunc_GetLocalPlayerController_ReturnValue, float CallFunc_GetInputMouseDelta_DeltaX, float CallFunc_GetInputMouseDelta_DeltaY, bool CallFunc_IsValid_ReturnValue, const struct FVector2D& CallFunc_MakeVector2D_ReturnValue, double CallFunc_VSize2D_ReturnValue, bool CallFunc_IsInputKeyDown_ReturnValue, bool CallFunc_Greater_DoubleDouble_ReturnValue, double CallFunc_MakeVector2D_X_ImplicitCast, double CallFunc_MakeVector2D_Y_ImplicitCast);
	void CalcOffsetPosition(int32 Index, struct FVector2D* Offset, double CallFunc_GetPI_ReturnValue, double CallFunc_Calc_Image_Angle_OutAngle, double CallFunc_Multiply_DoubleDouble_ReturnValue, double CallFunc_DegreesToRadians_ReturnValue, float CallFunc_Conv_IntToFloat_ReturnValue, double CallFunc_Divide_DoubleDouble_ReturnValue, double CallFunc_Multiply_DoubleDouble_ReturnValue_1, double CallFunc_Add_DoubleDouble_ReturnValue, double CallFunc_Cos_ReturnValue, double CallFunc_Sin_ReturnValue, double CallFunc_Multiply_DoubleDouble_ReturnValue_2, double CallFunc_Multiply_DoubleDouble_ReturnValue_3, double CallFunc_Multiply_DoubleDouble_ReturnValue_4, const struct FVector2D& CallFunc_MakeVector2D_ReturnValue, double CallFunc_Divide_DoubleDouble_B_ImplicitCast);
	void SetSelectedImageAngle(double InAngle, double CallFunc_GetPI_ReturnValue, double CallFunc_Multiply_DoubleDouble_ReturnValue, double CallFunc_RadiansToDegrees_ReturnValue, double CallFunc_Add_DoubleDouble_ReturnValue, float CallFunc_SetRenderTransformAngle_Angle_ImplicitCast, float CallFunc_SetRenderTransformAngle_Angle_ImplicitCast_1);
	void CreateBgPlateImage(bool CallFunc_IsValid_ReturnValue, class UImage* CallFunc_SpawnObject_ReturnValue, class UCanvasPanelSlot* CallFunc_SlotAsCanvasSlot_ReturnValue, float CallFunc_Conv_IntToFloat_ReturnValue, double CallFunc_Divide_DoubleDouble_ReturnValue, class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue, int32 Temp_int_Variable, const struct FVector2D& CallFunc_CalcOffsetPosition_offset, double CallFunc_Calc_Image_Angle_OutAngle, int32 CallFunc_Add_IntInt_ReturnValue, const struct FVector2D& CallFunc_GetDesiredSize_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue, bool CallFunc_LessEqual_IntInt_ReturnValue, class UPanelSlot* CallFunc_AddChild_ReturnValue, double CallFunc_Divide_DoubleDouble_B_ImplicitCast, float CallFunc_SetScalarParameterValue_Value_ImplicitCast, float CallFunc_SetRenderTransformAngle_Angle_ImplicitCast);
	void Calc_Image_Angle(int32 Index, double* OutAngle, float CallFunc_Array_Get_Item, double CallFunc_RadiansToDegrees_ReturnValue, double CallFunc_Add_DoubleDouble_ReturnValue, double CallFunc_RadiansToDegrees_A_ImplicitCast);
	void CreateSelectedMenuImage(double CallFunc_GetPI_ReturnValue, double CallFunc_Multiply_DoubleDouble_ReturnValue, float CallFunc_Conv_IntToFloat_ReturnValue, double CallFunc_Divide_DoubleDouble_ReturnValue, class UImage* CallFunc_SpawnObject_ReturnValue, class UPanelSlot* CallFunc_AddChild_ReturnValue, class UCanvasPanelSlot* CallFunc_SlotAsCanvasSlot_ReturnValue, class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue, float CallFunc_Conv_IntToFloat_ReturnValue_1, double CallFunc_Divide_DoubleDouble_ReturnValue_1, class UImage* CallFunc_SpawnObject_ReturnValue_1, double CallFunc_Add_DoubleDouble_ReturnValue, class UCanvasPanelSlot* CallFunc_SlotAsCanvasSlot_ReturnValue_1, class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue_1, class UPanelSlot* CallFunc_AddChild_ReturnValue_1, double CallFunc_Divide_DoubleDouble_B_ImplicitCast, float CallFunc_SetScalarParameterValue_Value_ImplicitCast, double CallFunc_Divide_DoubleDouble_B_ImplicitCast_1, float CallFunc_SetScalarParameterValue_Value_ImplicitCast_1);
	void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
	void BuildRadialMenuWidget();
	void OnInitialized();
	void OnChangedIndex(int32 NewIndex, int32 PrevIndex);
	void Construct();
	void Destruct();
	void PreConstruct(bool IsDesignTime);
	void SetMouseCursorPositionCenter();
	void ExecuteUbergraph_WBP_CommonRadialMenuBase(int32 EntryPoint, const struct FGeometry& K2Node_Event_MyGeometry, float K2Node_Event_InDeltaTime, int32 K2Node_CustomEvent_newIndex, int32 K2Node_CustomEvent_prevIndex, bool CallFunc_GreaterEqual_IntInt_ReturnValue, double CallFunc_Calc_Image_Angle_OutAngle, float CallFunc_GetRenderTransformAngle_ReturnValue, double CallFunc_RadiansToDegrees_ReturnValue, int32 Temp_int_Loop_Counter_Variable, int32 Temp_int_Array_Index_Variable, int32 CallFunc_Add_IntInt_ReturnValue, class UCommonInputSubsystem* CallFunc_GetLocalPlayerSubsystem_ReturnValue, enum class ECommonInputType CallFunc_GetCurrentInputType_ReturnValue, bool CallFunc_GreaterEqual_IntInt_ReturnValue_1, const struct FVector2D& CallFunc_GetMousePositionOnViewport_ReturnValue, class UCanvasPanelSlot* CallFunc_SlotAsCanvasSlot_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, bool K2Node_Event_IsDesignTime, const struct FGeometry& CallFunc_GetTickSpaceGeometry_ReturnValue, const struct FGeometry& CallFunc_GetViewportWidgetGeometry_ReturnValue, const struct FVector2D& CallFunc_GetLocalSize_ReturnValue, class APlayerController* CallFunc_GetLocalPlayerController_ReturnValue, const struct FVector2D& CallFunc_Multiply_Vector2DVector2D_ReturnValue, const struct FVector2D& CallFunc_LocalToAbsolute_ReturnValue, const struct FVector2D& CallFunc_AbsoluteToViewport_PixelPosition, const struct FVector2D& CallFunc_AbsoluteToViewport_ViewportPosition, double CallFunc_BreakVector2D_X, double CallFunc_BreakVector2D_Y, int32 CallFunc_FTrunc_ReturnValue, int32 CallFunc_FTrunc_ReturnValue_1, TArray<class UWidget*>& CallFunc_GetAllChildren_ReturnValue, class UWidget* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, class UBackgroundBlur* K2Node_DynamicCast_AsBackground_Blur, bool K2Node_DynamicCast_bSuccess, bool CallFunc_Less_IntInt_ReturnValue, class UCanvasPanelSlot* CallFunc_SlotAsCanvasSlot_ReturnValue_1, class UPalHUDService* CallFunc_GetHUDService_ReturnValue, const struct FVector2D& CallFunc_MakeVector2D_ReturnValue, double CallFunc_RadiansToDegrees_A_ImplicitCast);
	void OnDecideIndex_forBP__DelegateSignature(int32 Index);
	void OnSelectedIndex_forBP__DelegateSignature(int32 NewIndex, int32 LastIndex);
};

}


