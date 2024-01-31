#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xF2 (0x24A - 0x158)
// BlueprintGeneratedClass BP_AIAction_WildLife.BP_AIAction_WildLife_C
class UBP_AIAction_WildLife_C : public UBP_AIAction_CanCombatBase_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x158(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	struct FVector                               SpawnedPosition;                                   // 0x160(0x18)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               GoalPosition;                                      // 0x178(0x18)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         InitEnd;                                           // 0x190(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3A5F[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               PrePos;                                            // 0x198(0x18)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FTimerHandle                          StackTimerHandle;                                  // 0x1B0(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FVector                               SpawnerLocation;                                   // 0x1B8(0x18)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       WalkingTimer;                                      // 0x1D0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       TempDeltaTime;                                     // 0x1D8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         RestMode;                                          // 0x1E0(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3A60[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       FollowRandomDistance;                              // 0x1E8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FTimerHandle                          StateUpdateTimerHandle;                            // 0x1F0(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FVector                               RestStartPosition;                                 // 0x1F8(0x18)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EWildPalAIMoveMode                MoveMode;                                          // 0x210(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EWildPalAIRestType                RestType;                                          // 0x211(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3A61[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       WalkingRadius;                                     // 0x218(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         IsGroupBehavior;                                   // 0x220(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         IsCancelThisAIAction;                              // 0x221(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         IsTickStop;                                        // 0x222(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3A62[0x5];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTimerHandle                          TickStopTimer;                                     // 0x228(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FTimerHandle                          DrinkWaterTimerHandle;                             // 0x230(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	bool                                         DrinkWaterCheckFlag;                               // 0x238(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3A63[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AActor*                                CurrentTarget;                                     // 0x240(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	enum class EPalAIResponseType                CurrentResponse;                                   // 0x248(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         IsSleep;                                           // 0x249(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UBP_AIAction_WildLife_C* GetDefaultObj();

	void ActionTickAnyThread(class APawn* ControlledPawn, float DeltaSeconds, class AActor* CallFunc_SightCheck_Target, enum class EPalAIResponseType CallFunc_SightCheck_ResponseType);
	void CheckDrinkWater_ForNotLeader(bool* ChangeAction, class UBP_PalAIBlackboard_Common_C* CallFunc_GetSelfPalBlackBoard_PalBlackBoard, class UBP_PalAIBlackboard_Common_C* CallFunc_GetLeaderPalBrackBoard_BB, bool CallFunc_IsLeader_Leader, const struct FPalAIActionDynamicParameter& K2Node_MakeStruct_PalAIActionDynamicParameter, class UPalAIActionComponent* CallFunc_GetAIActionComponent_ReturnValue, class UPalAIActionBase* CallFunc_SetActionClassParameter_ReturnValue, class UBP_PalAIBlackboard_Common_C* CallFunc_GetLeaderPalBrackBoard_BB_1);
	void SetDrinkWaterFlag();
	void CheckDrinkWater_ForLeader(bool* ChangeState, const struct FGuid& SpotID, const TArray<class AActor*>& MemberActor, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_IsLeader_Leader, class UPalCharacterManager* CallFunc_GetCharacterManager_ReturnValue, class APalAIController* CallFunc_GetPalAIController_ReturnValue, class UPalSquad* CallFunc_GetSquad_ReturnValue, class UPalNPCManager* CallFunc_GetNPCManager_ReturnValue, TArray<struct FPalInstanceID>& CallFunc_GetMemberID_OutList, class UPalWildPalDrinkWaterSpotProvider* CallFunc_GetDrinkWaterSpotProvider_ReturnValue, const struct FPalInstanceID& CallFunc_Array_Get_Item, class UPalWildDrinkWaterSpot* CallFunc_FindSpot_ReturnValue, class UPalIndividualCharacterHandle* CallFunc_GetIndividualHandle_ReturnValue, bool CallFunc_SetAssignPointToMember_ReturnValue, class APalCharacter* CallFunc_TryGetIndividualActor_ReturnValue, int32 CallFunc_Array_Add_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, const struct FPalAIActionDynamicParameter& K2Node_MakeStruct_PalAIActionDynamicParameter, bool CallFunc_Less_IntInt_ReturnValue, class UPalAIActionComponent* CallFunc_GetAIActionComponent_ReturnValue, class UPalAIActionBase* CallFunc_SetActionClassParameter_ReturnValue, class UBP_PalAIBlackboard_Common_C* CallFunc_GetSelfPalBlackBoard_PalBlackBoard, class APalAIController* CallFunc_GetPalAIController_ReturnValue_1, class UPalSquad* CallFunc_GetSquad_ReturnValue_1, TArray<struct FPalInstanceID>& CallFunc_GetMemberID_OutList_1, int32 CallFunc_Array_Length_ReturnValue_1, class APalCharacter* CallFunc_GetCharacter_ReturnValue, class UPalNPCManager* CallFunc_GetNPCManager_ReturnValue_1, class UPalWildPalDrinkWaterSpotProvider* CallFunc_GetDrinkWaterSpotProvider_ReturnValue_1, const struct FGuid& CallFunc_RequestReservation_OutSpotID, bool CallFunc_RequestReservation_ReturnValue);
	void IsSleepTime(bool* Sleep, class AController* CallFunc_GetController_ReturnValue, class UPalTimeManager* CallFunc_GetTimeManager_ReturnValue, TScriptInterface<class IBPI_GetPalAIBlackboard_C> K2Node_DynamicCast_AsBPI_Get_Pal_AIBlackboard, bool K2Node_DynamicCast_bSuccess, float CallFunc_GetCurrentPalWorldHoursFloat_ReturnValue, class UBP_PalAIBlackboard_Common_C* CallFunc_GetLeaderBB_LeaderPalBrackboard, bool CallFunc_GreaterEqual_DoubleDouble_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_LessEqual_DoubleDouble_ReturnValue, bool CallFunc_BooleanOR_ReturnValue, double CallFunc_GreaterEqual_DoubleDouble_A_ImplicitCast, double CallFunc_LessEqual_DoubleDouble_A_ImplicitCast);
	void ResetSelfAction(bool CallFunc_IsLeader_Leader);
	void PlayNightSleep(const struct FPalAIActionDynamicParameter& K2Node_MakeStruct_PalAIActionDynamicParameter, class AController* CallFunc_GetController_ReturnValue, class UPalAIActionComponent* CallFunc_GetComponentByClass_ReturnValue, class UPalAIActionBase* CallFunc_SetActionClassParameter_ReturnValue);
	void RandomRestModeStart(const struct FVector& CallFunc_GetMyLocation_NewParam, int32 CallFunc_RandomInteger_ReturnValue, uint8 CallFunc_Conv_IntToByte_ReturnValue, uint8 CallFunc_GetValidValue_ReturnValue);
	void GetLeaderRestMode(bool* Rest, class UBP_PalAIBlackboard_Common_C* CallFunc_GetLeaderPalBrackBoard_BB);
	void StateUpdate(double ReturnStartDistance, double ReturnEndDistance, class APalCharacter* TempLeader, class APalCharacter* CallFunc_GetLeader_Leader, bool K2Node_SwitchEnum_CmpSuccess, class AController* CallFunc_GetController_ReturnValue, bool CallFunc_GetLeaderRestMode_Rest, class APawn* CallFunc_K2_GetPawn_ReturnValue, class UPalActionComponent* CallFunc_GetComponentByClass_ReturnValue, bool CallFunc_GetLeaderRestMode_Rest_1, const struct FVector& CallFunc_GetMyLocation_NewParam, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, const struct FVector& CallFunc_GetMyLocation_NewParam_1, bool CallFunc_IsNearTwoPoint_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_1, bool CallFunc_IsNearTwoPoint_ReturnValue_1, bool CallFunc_IsValid_ReturnValue, float CallFunc_IsNearTwoPoint_distance_ImplicitCast, float CallFunc_IsNearTwoPoint_distance_ImplicitCast_1);
	void FollowLeader(const struct FVector& GoalPoint, double RunDistance, double StopDistance, class APalAIController* TempAI, class UBP_PalAIBlackboard_Common_C* CallFunc_GetLeaderPalBrackBoard_BB, class APalCharacter* CallFunc_GetLeader_Leader, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, class APalCharacter* CallFunc_GetLeader_Leader_1, class AController* CallFunc_GetController_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, class APawn* CallFunc_K2_GetPawn_ReturnValue, const struct FVector& CallFunc_GetMyLocation_NewParam, class UCharacterMovementComponent* CallFunc_GetComponentByClass_ReturnValue, const struct FVector& CallFunc_Subtract_VectorVector_ReturnValue, const struct FVector& CallFunc_Vector_Normal2D_ReturnValue, const struct FVector& CallFunc_GetMyLocation_NewParam_1, bool CallFunc_CheckDrinkWater_ForNotLeader_ChangeAction, bool CallFunc_IsNearTwoPoint_ReturnValue, class UBP_PalAIBlackboard_Common_C* CallFunc_GetLeaderPalBrackBoard_BB_1, class AController* CallFunc_GetController_ReturnValue_1, class APalAIController* K2Node_DynamicCast_AsPal_AIController, bool K2Node_DynamicCast_bSuccess);
	void SoundEvent(const struct FVector& EmitLocation);
	void GetMyLocation(struct FVector* NewParam, class AController* CallFunc_GetController_ReturnValue, class APawn* CallFunc_K2_GetPawn_ReturnValue, bool CallFunc_IsValid_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue);
	void ChangeNextMovePosition(double Radius, const struct FVector& CenterPos, TArray<class AActor*>& Temp_object_Variable, double CallFunc_RandomFloat_ReturnValue, double CallFunc_Multiply_DoubleDouble_ReturnValue, double CallFunc_DegCos_ReturnValue, double CallFunc_DegSin_ReturnValue, const struct FVector& CallFunc_MakeVector_ReturnValue, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue, const struct FVector& CallFunc_Add_VectorVector_ReturnValue, const struct FVector& CallFunc_Add_VectorVector_ReturnValue_1, const struct FVector& CallFunc_Add_VectorVector_ReturnValue_2, const struct FHitResult& CallFunc_LineTraceSingle_OutHit, bool CallFunc_LineTraceSingle_ReturnValue, bool CallFunc_BreakHitResult_bBlockingHit, bool CallFunc_BreakHitResult_bInitialOverlap, float CallFunc_BreakHitResult_Time, float CallFunc_BreakHitResult_Distance, const struct FVector& CallFunc_BreakHitResult_Location, const struct FVector& CallFunc_BreakHitResult_ImpactPoint, const struct FVector& CallFunc_BreakHitResult_Normal, const struct FVector& CallFunc_BreakHitResult_ImpactNormal, class UPhysicalMaterial* CallFunc_BreakHitResult_PhysMat, class AActor* CallFunc_BreakHitResult_HitActor, class UPrimitiveComponent* CallFunc_BreakHitResult_HitComponent, class FName CallFunc_BreakHitResult_HitBoneName, class FName CallFunc_BreakHitResult_BoneName, int32 CallFunc_BreakHitResult_HitItem, int32 CallFunc_BreakHitResult_ElementIndex, int32 CallFunc_BreakHitResult_FaceIndex, const struct FVector& CallFunc_BreakHitResult_TraceStart, const struct FVector& CallFunc_BreakHitResult_TraceEnd);
	void OnFail_D878AC8F4430A5C3183029AD1B4F53CF(enum class EPathFollowingResult MovementResult);
	void OnSuccess_D878AC8F4430A5C3183029AD1B4F53CF(enum class EPathFollowingResult MovementResult);
	void OnFail_B707D59048A2C3D7CD1D13834143E5F8(enum class EPathFollowingResult MovementResult);
	void OnSuccess_B707D59048A2C3D7CD1D13834143E5F8(enum class EPathFollowingResult MovementResult);
	void ActionStart(class APawn* ControlledPawn);
	void ActionTick(class APawn* ControlledPawn, float DeltaSeconds);
	void ActionPause(class APawn* ControlledPawn);
	void ActionResume(class APawn* ControlledPawn);
	void ActionFinished(class APawn* ControlledPawn, enum class EPawnActionResult WithResult);
	void _________Stack();
	void RestModeUpdate(bool Nest);
	void MoveAndAction(enum class EPalActionType Action);
	void RestModeWalk();
	void ActionAbort(class APawn* ControlledPawn);
	void Event_StopFalse();
	void ActionPostTick(class APawn* ControlledPawn, float DeltaSeconds);
	void ExecuteUbergraph_BP_AIAction_WildLife(int32 EntryPoint, enum class EPathFollowingResult Temp_byte_Variable, enum class EPathFollowingResult K2Node_CustomEvent_MovementResult_1, enum class EPathFollowingResult K2Node_CustomEvent_MovementResult, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, enum class EPathFollowingResult Temp_byte_Variable_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, enum class EPathFollowingResult K2Node_CustomEvent_MovementResult_2, class APawn* K2Node_Event_ControlledPawn_6, class APawn* K2Node_Event_ControlledPawn_5, float K2Node_Event_DeltaSeconds_1, class AController* CallFunc_GetController_ReturnValue, TScriptInterface<class IBPI_GetPalAIBlackboard_C> K2Node_DynamicCast_AsBPI_Get_Pal_AIBlackboard, bool K2Node_DynamicCast_bSuccess, double CallFunc_RandomFloatInRange_ReturnValue, class UBP_PalAIBlackboard_Common_C* CallFunc_GetMyBB_PalBrackboard, bool CallFunc_IsValid_ReturnValue, class APawn* K2Node_Event_ControlledPawn_4, class APawn* K2Node_Event_ControlledPawn_3, class APawn* K2Node_Event_ControlledPawn_2, enum class EPawnActionResult K2Node_Event_WithResult, const struct FVector& CallFunc_GetMyLocation_NewParam, const struct FVector& CallFunc_GetMyLocation_NewParam_1, bool CallFunc_IsNearTwoPoint_ReturnValue, const struct FVector& CallFunc_GetMyLocation_NewParam_2, class AController* CallFunc_GetController_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_1, double CallFunc_Add_DoubleDouble_ReturnValue, double CallFunc_RandomFloatInRange_ReturnValue_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, bool K2Node_CustomEvent_Nest, const struct FVector& CallFunc_GetMyLocation_NewParam_3, bool CallFunc_IsNearTwoPoint_ReturnValue_1, enum class EPalActionType K2Node_CustomEvent_Action, class AController* CallFunc_GetController_ReturnValue_2, class APawn* CallFunc_K2_GetPawn_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, class UPalActionComponent* CallFunc_GetComponentByClass_ReturnValue, class AController* CallFunc_GetController_ReturnValue_3, class UAIAsyncTaskBlueprintProxy* CallFunc_CreateMoveToProxyObject_ReturnValue, bool CallFunc_IsValid_ReturnValue_2, bool CallFunc_IsValid_ReturnValue_3, class APawn* CallFunc_K2_GetPawn_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_4, class UPalActionComponent* CallFunc_GetComponentByClass_ReturnValue_1, class AController* CallFunc_GetController_ReturnValue_4, bool CallFunc_IsValid_ReturnValue_5, class APawn* CallFunc_K2_GetPawn_ReturnValue_2, class UAIAsyncTaskBlueprintProxy* CallFunc_CreateMoveToProxyObject_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_6, bool CallFunc_IsValid_ReturnValue_7, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_4, class AController* CallFunc_GetController_ReturnValue_5, bool CallFunc_IsValid_ReturnValue_8, class APawn* CallFunc_K2_GetPawn_ReturnValue_3, bool CallFunc_IsValid_ReturnValue_9, class UPalActionComponent* CallFunc_GetComponentByClass_ReturnValue_2, enum class EPathFollowingResult K2Node_CustomEvent_MovementResult_3, bool CallFunc_EqualEqual_ByteByte_ReturnValue, class UBP_PalAIBlackboard_Common_C* CallFunc_GetSelfPalBlackBoard_PalBlackBoard, class UBP_PalAIBlackboard_Common_C* CallFunc_GetSelfPalBlackBoard_PalBlackBoard_1, bool CallFunc_IsValid_ReturnValue_10, class UBP_PalAIBlackboard_Common_C* CallFunc_GetSelfPalBlackBoard_PalBlackBoard_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_5, class AController* CallFunc_GetController_ReturnValue_6, bool CallFunc_SearchDeadEdibleBody_ChangeNextAction, bool CallFunc_IsValid_ReturnValue_11, class UPalAISensorComponent* CallFunc_GetComponentByClass_ReturnValue_3, class AController* CallFunc_GetController_ReturnValue_7, class APalAIController* K2Node_DynamicCast_AsPal_AIController, bool K2Node_DynamicCast_bSuccess_1, bool CallFunc_GetIsSquadBehaviour_ReturnValue, class APawn* K2Node_Event_ControlledPawn_1, double CallFunc_RandomFloat_ReturnValue, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue_1, class APalCharacter* CallFunc_GetCharacter_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, double CallFunc_RandomFloatInRange_ReturnValue_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_6, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue_2, bool CallFunc_CheckDrinkWater_ForLeader_ChangeState, bool CallFunc_Greater_DoubleDouble_ReturnValue, bool CallFunc_IsLeader_Leader, class APawn* K2Node_Event_ControlledPawn, float K2Node_Event_DeltaSeconds, bool CallFunc_SightResponse_ChangeNextAction, int32 CallFunc_RandomInteger_ReturnValue, const struct FActionDynamicParameter& K2Node_MakeStruct_ActionDynamicParameter, class UPalActionBase* CallFunc_PlayActionByTypeParameter_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_7, class APalAIController* CallFunc_GetPalAIController_ReturnValue, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue_3, TScriptInterface<class IBPI_GetPalAIBlackboard_C> K2Node_DynamicCast_AsBPI_Get_Pal_AIBlackboard_1, bool K2Node_DynamicCast_bSuccess_2, class UBP_PalAIBlackboard_Common_C* CallFunc_GetLeaderBB_LeaderPalBrackboard, bool CallFunc_IsValid_ReturnValue_12, bool CallFunc_IsSleepTimeForWildLife_ReturnValue, float CallFunc_Delay_Duration_ImplicitCast, float CallFunc_K2_SetTimerDelegate_InitialStartDelay_ImplicitCast, float CallFunc_K2_SetTimerDelegate_InitialStartDelay_ImplicitCast_1, double K2Node_VariableSet_tempDeltaTime_ImplicitCast, float CallFunc_IsSleepTimeForWildLife_sleepStartHours_ImplicitCast, float CallFunc_IsSleepTimeForWildLife_sleepEndHours_ImplicitCast);
};

}

