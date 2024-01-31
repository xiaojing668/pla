#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x63 (0x2B3 - 0x250)
// BlueprintGeneratedClass BP_ActionGeneralAttackFarBase.BP_ActionGeneralAttackFarBase_C
class UBP_ActionGeneralAttackFarBase_C : public UBP_ActionGeneralAttackBase_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x250(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	bool                                         IsBullet;                                          // 0x258(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         IsHoming;                                          // 0x259(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3F3B[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       BulletSpeed;                                       // 0x260(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         HasStartedAction;                                  // 0x268(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash)
	bool                                         RotPitchTowardTarget;                              // 0x269(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         RotPitchTowardReticle;                             // 0x26A(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3F3C[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        ReadyTargetingSpeed;                               // 0x26C(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        ProcessTargetingSpeed;                             // 0x270(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         HasSpawnedEffect;                                  // 0x274(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash)
	uint8                                        Pad_3F3D[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class APalSkillEffectBase*                   Effect;                                            // 0x278(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, AdvancedDisplay, HasGetValueTypeHash)
	bool                                         DoPredict_;                                        // 0x280(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3F3E[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UClass*                                PredictedTargetClass;                              // 0x288(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class AActor*                                PredictedTarget;                                   // 0x290(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	float                                        PredictPowerRate;                                  // 0x298(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3F3F[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       PredictWeekDistance;                               // 0x2A0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         EnableDestroyEffectOnBreakAction;                  // 0x2A8(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3F40[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        CurrentMeshPitch;                                  // 0x2AC(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         IsInitialUpdateMeshPitch;                          // 0x2B0(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         OnAfterAnimation;                                  // 0x2B1(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         DestroyPredictedTargetOnEndAction;                 // 0x2B2(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UBP_ActionGeneralAttackFarBase_C* GetDefaultObj();

	void SetEffectVelocityTowardNearestEnemy(bool* Success, bool CallFunc_IsValid_ReturnValue, class APalCharacter* CallFunc_GetTargetEnemy_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_1, const struct FVector& CallFunc_Subtract_VectorVector_ReturnValue, const struct FVector& CallFunc_Conv_DoubleToVector_ReturnValue, const struct FVector& CallFunc_Normal_ReturnValue, const struct FVector& CallFunc_Multiply_VectorVector_ReturnValue, class UProjectileMovementComponent* CallFunc_GetComponentByClass_ReturnValue, bool CallFunc_IsValid_ReturnValue_2);
	void SetEffectVelocityTowardReticle(bool CallFunc_IsValid_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, const struct FVector& CallFunc_Conv_DoubleToVector_ReturnValue, const struct FVector& CallFunc_GetActionTargetLocation_ReturnValue, class UProjectileMovementComponent* CallFunc_GetComponentByClass_ReturnValue, const struct FVector& CallFunc_Subtract_VectorVector_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, const struct FVector& CallFunc_Normal_ReturnValue, const struct FVector& CallFunc_Multiply_VectorVector_ReturnValue);
	class APalCharacter* GetTargetEnemy(class APalPlayerCharacter* CallFunc_GetRiderPlayer_ReturnValue, class APalCharacter* CallFunc_GetActionCharacter_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, class APalCharacter* CallFunc_GetNearestEnemyByLocation_FrontPlayerCamera_ReturnValue, float CallFunc_GetNearestEnemyByLocation_FrontPlayerCamera_InHeight_ImplicitCast, float CallFunc_GetNearestEnemyByLocation_FrontPlayerCamera_InDegree_ImplicitCast, float CallFunc_GetNearestEnemyByLocation_FrontPlayerCamera_InDistance_ImplicitCast);
	void SetHomingTarget(class APalSkillEffectBase* Effect, class ABP_SkillEffectBase_C* BPSkillEffect, class UProjectileMovementComponent* ProjectileMovementComponent, class ABP_SkillEffectBase_C* K2Node_DynamicCast_AsBP_Skill_Effect_Base, bool K2Node_DynamicCast_bSuccess, bool CallFunc_HasProjectileMoveComp_ReturnValue, bool CallFunc_HasProjectileMoveComp_ReturnValue_1, bool CallFunc_SetHomingTarget_Success, class APalCharacter* CallFunc_GetTargetEnemy_ReturnValue, class APalCharacter* CallFunc_GetTargetEnemy_ReturnValue_1, bool CallFunc_SetHomingTarget_Success_1, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_SetHomingTarget_Success_2, class APalCharacter* CallFunc_GetActionCharacter_ReturnValue, class APalCharacter* CallFunc_GetActionCharacter_ReturnValue_1, bool CallFunc_IsPlayerControlled_ReturnValue, bool CallFunc_IsPlayerControlled_ReturnValue_1, bool CallFunc_Not_PreBool_ReturnValue, class AActor* CallFunc_GetActionTarget_ReturnValue, bool CallFunc_SetHomingTarget_Success_3, bool CallFunc_IsValid_ReturnValue_2);
	bool IsSpecificEffect(class APalSkillEffectBase* Effect, enum class EEffectSpawnParametersType ParametersType, int32 Index, bool CallFunc_EqualEqual_ByteByte_ReturnValue, class UClass* CallFunc_GetObjectClass_ReturnValue, const struct FSkillEffectSpawnParameter& CallFunc_Array_Get_Item, bool CallFunc_EqualEqual_ByteByte_ReturnValue_1, bool CallFunc_EqualEqual_ClassClass_ReturnValue, class UClass* CallFunc_GetObjectClass_ReturnValue_1, const struct FSkillEffectSpawnParameter& CallFunc_Array_Get_Item_1, bool CallFunc_EqualEqual_ClassClass_ReturnValue_1);
	void OnStartAfterAnimation();
	void RestorePalPitch(double CallFunc_GetWorldDeltaSeconds_ReturnValue, class APalCharacter* CallFunc_GetActionCharacter_ReturnValue, double CallFunc_FInterpTo_ReturnValue, class UPalSkeletalMeshComponent* CallFunc_GetMainMesh_ReturnValue, double CallFunc_FInterpTo_Current_ImplicitCast, float K2Node_VariableSet_CurrentMeshPitch_ImplicitCast);
	void GetPredictedTargetLocation(struct FVector* Location, const struct FVector& CallFunc_GetTargetLocation_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, bool CallFunc_IsValid_ReturnValue);
	void UpdatePredictedTargetLocation(class AActor* CallFunc_GetActionTarget_ReturnValue, const struct FVector& CallFunc_GetTargetLocation_ReturnValue, bool CallFunc_IsValid_ReturnValue, class AActor* CallFunc_GetActionTarget_ReturnValue_1, const struct FVector& CallFunc_GetVelocity_ReturnValue, const struct FVector& CallFunc_GetTargetLocation_ReturnValue_1, const struct FVector& CallFunc_Conv_FloatToVector_ReturnValue, const struct FVector& CallFunc_GetTargetLocation_ReturnValue_2, const struct FVector& CallFunc_Multiply_VectorVector_ReturnValue, const struct FVector& CallFunc_GetTargetLocation_ReturnValue_3, class USceneComponent* CallFunc_K2_GetRootComponent_ReturnValue, class USceneComponent* CallFunc_K2_GetRootComponent_ReturnValue_1, class APalCharacter* CallFunc_GetActionCharacter_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, const struct FVector& CallFunc_Subtract_VectorVector_ReturnValue, double CallFunc_VSize_ReturnValue, const struct FVector& CallFunc_Conv_DoubleToVector_ReturnValue, const struct FVector& CallFunc_Conv_DoubleToVector_ReturnValue_1, const struct FVector& CallFunc_Divide_VectorVector_ReturnValue, class APalCharacter* CallFunc_GetActionCharacter_ReturnValue_1, const struct FVector& CallFunc_Multiply_VectorVector_ReturnValue_1, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_1, const struct FVector& CallFunc_Add_VectorVector_ReturnValue, const struct FVector& CallFunc_Subtract_VectorVector_ReturnValue_1, const struct FHitResult& CallFunc_K2_SetWorldLocation_SweepHitResult, double CallFunc_VSize_ReturnValue_1, class AActor* CallFunc_GetActionTarget_ReturnValue_2, bool CallFunc_GreaterEqual_DoubleDouble_ReturnValue, const struct FVector& CallFunc_GetVelocity_ReturnValue_1, const struct FVector& CallFunc_Conv_FloatToVector_ReturnValue_1, const struct FVector& CallFunc_Multiply_VectorVector_ReturnValue_2, const struct FVector& CallFunc_Add_VectorVector_ReturnValue_1, const struct FHitResult& CallFunc_K2_SetWorldLocation_SweepHitResult_1);
	void SetPredictedTarget(const struct FTransform& CallFunc_MakeTransform_ReturnValue, class APalCharacter* CallFunc_GetActionCharacter_ReturnValue, const struct FTimerHandle& CallFunc_K2_SetTimer_ReturnValue, int32 CallFunc_Array_Add_ReturnValue, class AActor* CallFunc_GetActionTarget_ReturnValue, class APalCharacter* CallFunc_GetActionCharacter_ReturnValue_1, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsPlayerControlled_ReturnValue, class AActor* CallFunc_GetActionTarget_ReturnValue_1, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue, class AActor* CallFunc_FinishSpawningActor_ReturnValue);
	void AdjustEffectRotPitchToTarget(bool CallFunc_IsValid_ReturnValue, const struct FRotator& CallFunc_K2_GetActorRotation_ReturnValue, float CallFunc_BreakRotator_Roll, float CallFunc_BreakRotator_Pitch, float CallFunc_BreakRotator_Yaw, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, const struct FVector& CallFunc_GetTargetLocation_ReturnValue, const struct FRotator& CallFunc_FindLookAtRotation_ReturnValue, float CallFunc_BreakRotator_Roll_1, float CallFunc_BreakRotator_Pitch_1, float CallFunc_BreakRotator_Yaw_1, const struct FRotator& CallFunc_MakeRotator_ReturnValue, bool CallFunc_K2_SetActorRotation_ReturnValue);
	void UpdatePalYawAndPitchToTarget(const struct FVector& CallFunc_GetPredictedTargetLocation_Location, double CallFunc_GetWorldDeltaSeconds_ReturnValue, class APalCharacter* CallFunc_GetActionCharacter_ReturnValue, class UPalSkeletalMeshComponent* CallFunc_GetMainMesh_ReturnValue, float CallFunc_BreakRotator_Roll, float CallFunc_BreakRotator_Pitch, float CallFunc_BreakRotator_Yaw, const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue, const struct FRotator& CallFunc_FindLookAtRotation_ReturnValue, const struct FVector& CallFunc_GetPredictedTargetLocation_Location_1, float CallFunc_BreakRotator_Roll_1, float CallFunc_BreakRotator_Pitch_1, float CallFunc_BreakRotator_Yaw_1, double CallFunc_FInterpTo_ReturnValue, double CallFunc_GetWorldDeltaSeconds_ReturnValue_1, double CallFunc_Abs_ReturnValue, bool CallFunc_Greater_DoubleDouble_ReturnValue, class APalCharacter* CallFunc_GetActionCharacter_ReturnValue_1, const struct FRotator& CallFunc_K2_GetActorRotation_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, const struct FRotator& CallFunc_FindLookAtRotation_ReturnValue_1, const struct FRotator& CallFunc_RInterpTo_ReturnValue, float CallFunc_BreakRotator_Roll_2, float CallFunc_BreakRotator_Pitch_2, float CallFunc_BreakRotator_Yaw_2, const struct FRotator& CallFunc_MakeRotator_ReturnValue, bool CallFunc_K2_SetActorRotation_ReturnValue, double CallFunc_FInterpTo_Current_ImplicitCast, double CallFunc_FInterpTo_Target_ImplicitCast, float K2Node_VariableSet_CurrentMeshPitch_ImplicitCast, float CallFunc_RInterpTo_DeltaTime_ImplicitCast);
	void SetBulletSpeed(class APalSkillEffectBase** Effect, bool CallFunc_IsValid_ReturnValue, class UProjectileMovementComponent* CallFunc_GetComponentByClass_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, const struct FVector& CallFunc_MakeVector_ReturnValue, double CallFunc_MakeVector_X_ImplicitCast, float K2Node_VariableSet_MaxSpeed_ImplicitCast);
	void UpdateEffectPitchToTarget(double CallFunc_GetWorldDeltaSeconds_ReturnValue, const struct FVector& CallFunc_GetTargetLocation_ReturnValue, bool CallFunc_IsValid_ReturnValue, const struct FRotator& CallFunc_K2_GetActorRotation_ReturnValue, float CallFunc_BreakRotator_Roll, float CallFunc_BreakRotator_Pitch, float CallFunc_BreakRotator_Yaw, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, const struct FRotator& CallFunc_FindLookAtRotation_ReturnValue, float CallFunc_BreakRotator_Roll_1, float CallFunc_BreakRotator_Pitch_1, float CallFunc_BreakRotator_Yaw_1, double CallFunc_FInterpTo_ReturnValue, const struct FRotator& CallFunc_MakeRotator_ReturnValue, bool CallFunc_K2_SetActorRotation_ReturnValue, double CallFunc_FInterpTo_InterpSpeed_ImplicitCast, double CallFunc_FInterpTo_Current_ImplicitCast, double CallFunc_FInterpTo_Target_ImplicitCast, float CallFunc_MakeRotator_Pitch_ImplicitCast);
	void UpdateRiddenPalYawToTarget(double CallFunc_GetWorldDeltaSeconds_ReturnValue, const struct FVector& CallFunc_GetTargetLocation_ReturnValue, class APalCharacter* CallFunc_GetActionCharacter_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, const struct FRotator& CallFunc_K2_GetActorRotation_ReturnValue, const struct FRotator& CallFunc_FindLookAtRotation_ReturnValue, float CallFunc_BreakRotator_Roll, float CallFunc_BreakRotator_Pitch, float CallFunc_BreakRotator_Yaw, float CallFunc_BreakRotator_Roll_1, float CallFunc_BreakRotator_Pitch_1, float CallFunc_BreakRotator_Yaw_1, double CallFunc_FInterpTo_ReturnValue, const struct FRotator& CallFunc_MakeRotator_ReturnValue, bool CallFunc_K2_SetActorRotation_ReturnValue, double CallFunc_FInterpTo_InterpSpeed_ImplicitCast, double CallFunc_FInterpTo_Current_ImplicitCast, double CallFunc_FInterpTo_Target_ImplicitCast, float CallFunc_MakeRotator_Yaw_ImplicitCast);
	void BulletHasShooted(class APalSkillEffectBase* Effect);
	void OnLoaded_8D503426441FF5C878F58A8373F67BE7(class UObject* Loaded);
	void CallEffect(struct FSkillEffectSpawnParameter& Parameter);
	void OnBreakAction();
	void TickAction(float DeltaTime);
	void OnStartReadyAnimation();
	void OnStartProcessAnimation();
	void OnSpawnEffect(class APalSkillEffectBase* Effect);
	void OnEndAction();
	void OnBeginAction();
	void ExecuteUbergraph_BP_ActionGeneralAttackFarBase(int32 EntryPoint, const struct FSkillEffectSpawnParameter& K2Node_Event_parameter, int32 CallFunc_Array_Length_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, float K2Node_Event_DeltaTime, class APalCharacter* CallFunc_GetActionCharacter_ReturnValue, bool CallFunc_IsPlayerControlled_ReturnValue, class APalCharacter* CallFunc_GetActionCharacter_ReturnValue_1, bool CallFunc_IsPlayerControlled_ReturnValue_1, class APalCharacter* CallFunc_GetActionCharacter_ReturnValue_2, bool CallFunc_IsPlayerControlled_ReturnValue_2, class APalSkillEffectBase* K2Node_Event_Effect, class APalSkillEffectBase* CallFunc_SetBulletSpeed_Effect, int32 Temp_int_Array_Index_Variable, TSoftObjectPtr<class APalSkillEffectBase> CallFunc_Array_Get_Item, bool CallFunc_IsValid_ReturnValue, class UObject* K2Node_CustomEvent_Loaded, class APalCharacter* CallFunc_GetActionCharacter_ReturnValue_3, class UPalSkeletalMeshComponent* CallFunc_GetMainMesh_ReturnValue, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_SetEffectVelocityTowardNearestEnemy_Success, class UObject* Temp_object_Variable, class ABP_PredictedTarget_C* K2Node_DynamicCast_AsBP_Predicted_Target, bool K2Node_DynamicCast_bSuccess, class APalSkillEffectBase* K2Node_DynamicCast_AsPal_Skill_Effect_Base, bool K2Node_DynamicCast_bSuccess_1, bool CallFunc_IsValid_ReturnValue_1, class ABP_SkillEffectBase_C* K2Node_DynamicCast_AsBP_Skill_Effect_Base, bool K2Node_DynamicCast_bSuccess_2);
};

}


