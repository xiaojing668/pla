#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xB9 (0x209 - 0x150)
// BlueprintGeneratedClass BP_ActionUniqueAttackBase.BP_ActionUniqueAttackBase_C
class UBP_ActionUniqueAttackBase_C : public UPalActionWazaBase
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x150(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	double                                       RotateSpeed;                                       // 0x158(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAnimMontage*                          CurrentMontage;                                    // 0x160(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class AActor*                                UniqueActionTarget;                                // 0x168(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	double                                       FindFrontTargetDegree;                             // 0x170(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       FindFrontTargetDistance;                           // 0x178(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       FindFrontTargetHeight;                             // 0x180(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  FlagName;                                          // 0x188(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         IsTargetInFrontCamera;                             // 0x190(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4409[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<TSoftObjectPtr<class APalSkillEffectBase>> SpawnedEffects;                                    // 0x198(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)
	TMap<class FName, struct FSkillEffectSpawnParameter> SkillEffectSpawnParameters;                        // 0x1A8(0x50)(Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                         IsHoldTarget;                                      // 0x1F8(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_440A[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UClass*                                SkillModuleClass;                                  // 0x200(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	bool                                         IsUseDummy;                                        // 0x208(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UBP_ActionUniqueAttackBase_C* GetDefaultObj();

	void GetCapsuleHalfRadius(double* HalfRadius, class APalCharacter* CallFunc_GetActionCharacter_ReturnValue, float CallFunc_GetScaledCapsuleRadius_ReturnValue, double K2Node_FunctionResult_HalfRadius_ImplicitCast);
	void GetCapsuleHalfHeight(double* HalfHeight, class APalCharacter* CallFunc_GetActionCharacter_ReturnValue, float CallFunc_GetScaledCapsuleHalfHeight_ReturnValue, double K2Node_FunctionResult_HalfHeight_ImplicitCast);
	void GetPalAnimInstance(class UPalAnimInstance** AnimInstance, class APalCharacter* CallFunc_GetActionCharacter_ReturnValue, class UPalSkeletalMeshComponent* CallFunc_GetMainMesh_ReturnValue, class UAnimInstance* CallFunc_GetAnimInstance_ReturnValue, class UPalAnimInstance* K2Node_DynamicCast_AsPal_Anim_Instance, bool K2Node_DynamicCast_bSuccess);
	void CreateSkillActionModule(class UClass* UniqueSkillModuleClass, class UBP_UniqueSkillModule_Tackle_C** Module, bool CallFunc_IsValidClass_ReturnValue, const class FString& CallFunc_Conv_NameToString_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue, class APalCharacter* CallFunc_GetActionCharacter_ReturnValue, class UPalUniqueSkillModule* CallFunc_SpawnObject_ReturnValue, class UBP_UniqueSkillModule_Tackle_C* K2Node_DynamicCast_AsBP_Unique_Skill_Module_Tackle, bool K2Node_DynamicCast_bSuccess);
	void FindEffectByClass(class UClass* EffectClass, class APalSkillEffectBase** Effect, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, TSoftObjectPtr<class APalSkillEffectBase> CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, class UObject* CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue, class APalSkillEffectBase* K2Node_DynamicCast_AsPal_Skill_Effect_Base, bool K2Node_DynamicCast_bSuccess, class UClass* CallFunc_GetObjectClass_ReturnValue, bool CallFunc_EqualEqual_ClassClass_ReturnValue, bool CallFunc_IsValid_ReturnValue);
	void OnSpawnEffect(class APalSkillEffectBase* Effect);
	void AttachToOwner(class APalSkillEffectBase* Effect, const struct FVector& Offset, class FName SocketName, class APalCharacter* CallFunc_GetActionCharacter_ReturnValue, class UPalSkeletalMeshComponent* CallFunc_GetMainMesh_ReturnValue, class APalCharacter* CallFunc_GetActionCharacter_ReturnValue_1, const struct FVector& CallFunc_K2_GetComponentScale_ReturnValue, bool CallFunc_NotEqual_NameName_ReturnValue, const struct FVector& CallFunc_Multiply_VectorVector_ReturnValue, const struct FHitResult& CallFunc_K2_SetActorLocation_SweepHitResult, bool CallFunc_K2_SetActorLocation_ReturnValue, class APalCharacter* CallFunc_GetActionCharacter_ReturnValue_2, class UPalSkeletalMeshComponent* CallFunc_GetMainMesh_ReturnValue_1);
	void SetMoveState_Gravity(double GravityRate, class APalCharacter* CallFunc_GetActionCharacter_ReturnValue, class UPalCharacterMovementComponent* CallFunc_GetPalCharacterMovementComponent_ReturnValue, float CallFunc_SetGravityZMultiplier_rate_ImplicitCast);
	void SetMoveState_Rotate(bool IsDisable, double CallFunc_SelectFloat_ReturnValue, class APalCharacter* CallFunc_GetActionCharacter_ReturnValue, class UPalCharacterMovementComponent* CallFunc_GetComponentByClass_ReturnValue, float CallFunc_SetYawRotatorMultiplier_rate_ImplicitCast);
	void SetMoveState_Common(bool IsDisable, class APalCharacter* CallFunc_GetActionCharacter_ReturnValue, class UPalSkeletalMeshComponent* CallFunc_GetMainMesh_ReturnValue, class APalCharacter* CallFunc_GetActionCharacter_ReturnValue_1, class UAnimInstance* CallFunc_GetAnimInstance_ReturnValue, class UPalCharacterMovementComponent* CallFunc_GetComponentByClass_ReturnValue, class UPalAnimInstance* K2Node_DynamicCast_AsPal_Anim_Instance, bool K2Node_DynamicCast_bSuccess);
	void GetFootLocation(struct FVector* Location, class APalCharacter* CallFunc_GetActionCharacter_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, double CallFunc_BreakVector_X, double CallFunc_BreakVector_Y, double CallFunc_BreakVector_Z, double CallFunc_Subtract_DoubleDouble_ReturnValue, const struct FVector& CallFunc_MakeVector_ReturnValue, double CallFunc_Subtract_DoubleDouble_B_ImplicitCast);
	void GetHeightToFloor(double* Height, const struct FVector& CallFunc_GetFootLocation_Location, class APalCharacter* CallFunc_GetActionCharacter_ReturnValue, double CallFunc_BreakVector_X, double CallFunc_BreakVector_Y, double CallFunc_BreakVector_Z, const struct FVector& CallFunc_GetFloorHitLocationByActor_ReturnValue, double CallFunc_BreakVector_X_1, double CallFunc_BreakVector_Y_1, double CallFunc_BreakVector_Z_1, double CallFunc_Subtract_DoubleDouble_ReturnValue);
	void IsMontagePlaying(class UAnimMontage* Montage, bool* IsPlaying, class APalCharacter* CallFunc_GetActionCharacter_ReturnValue, class UPalSkeletalMeshComponent* CallFunc_GetMainMesh_ReturnValue, class UAnimInstance* CallFunc_GetAnimInstance_ReturnValue, bool CallFunc_Montage_IsPlaying_ReturnValue);
	void GetUniqueActionTarget(class AActor** TargetActor);
	void GetAttackTargetLocation(bool IsFrontLocation, double FrontDistance, struct FVector* Location, const struct FVector& CallFunc_Conv_DoubleToVector_ReturnValue, const struct FVector& CallFunc_GetTargetLocation_ReturnValue, class APalCharacter* CallFunc_GetActionCharacter_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, const struct FVector& CallFunc_GetActorForwardVector_ReturnValue, class APalCharacter* CallFunc_GetActionCharacter_ReturnValue_1, const struct FVector& CallFunc_Multiply_VectorVector_ReturnValue, class AActor* CallFunc_GetUniqueActionTarget_TargetActor, const struct FVector& CallFunc_Add_VectorVector_ReturnValue, bool CallFunc_IsValid_ReturnValue, const struct FVector& CallFunc_GetAttackTargetLocation_ReturnValue);
	void GetRotation(double DeltaTime, bool NoInterp, struct FRotator* Rotation, class APalCharacter* CallFunc_GetActionCharacter_ReturnValue, class AActor* CallFunc_GetActionTarget_ReturnValue, const struct FRotator& CallFunc_K2_GetActorRotation_ReturnValue, const struct FVector& CallFunc_GetAttackTargetLocation_ReturnValue, float CallFunc_BreakRotator_Roll, float CallFunc_BreakRotator_Pitch, float CallFunc_BreakRotator_Yaw, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, const struct FRotator& CallFunc_FindLookAtRotation_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_1, float CallFunc_BreakRotator_Roll_1, float CallFunc_BreakRotator_Pitch_1, float CallFunc_BreakRotator_Yaw_1, class APalCharacter* CallFunc_GetActionCharacter_ReturnValue_1, const struct FRotator& CallFunc_MakeRotator_ReturnValue, const struct FRotator& CallFunc_K2_GetActorRotation_ReturnValue_1, float CallFunc_BreakRotator_Roll_2, float CallFunc_BreakRotator_Pitch_2, float CallFunc_BreakRotator_Yaw_2, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_2, const struct FRotator& CallFunc_FindLookAtRotation_ReturnValue_1, float CallFunc_BreakRotator_Roll_3, float CallFunc_BreakRotator_Pitch_3, float CallFunc_BreakRotator_Yaw_3, const struct FRotator& CallFunc_MakeRotator_ReturnValue_1, class APalCharacter* CallFunc_GetActionCharacter_ReturnValue_2, bool CallFunc_IsApplicableDamage_ReturnValue, bool CallFunc_IsValid_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_3, class APalCharacter* CallFunc_GetActionCharacter_ReturnValue_3, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_4, const struct FRotator& CallFunc_K2_GetActorRotation_ReturnValue_2, const struct FRotator& CallFunc_FindLookAtRotation_ReturnValue_2, float CallFunc_BreakRotator_Roll_4, float CallFunc_BreakRotator_Pitch_4, float CallFunc_BreakRotator_Yaw_4, const struct FRotator& CallFunc_MakeRotator_ReturnValue_2, const struct FRotator& CallFunc_RInterpTo_ReturnValue, float CallFunc_RInterpTo_DeltaTime_ImplicitCast, float CallFunc_RInterpTo_InterpSpeed_ImplicitCast);
	void FindActionTarget(class AActor* CallFunc_GetActionTarget_ReturnValue, class APalActionDummyTargetActor* K2Node_DynamicCast_AsPal_Action_Dummy_Target_Actor, bool K2Node_DynamicCast_bSuccess, class AActor* CallFunc_GetActionTarget_ReturnValue_1, class APalPlayerCharacter* CallFunc_GetRiderPlayer_ReturnValue, class APalPlayerCharacter* CallFunc_GetRiderPlayer_ReturnValue_1, class APalCharacter* CallFunc_GetActionCharacter_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsPlayerControlled_ReturnValue, class APalCharacter* CallFunc_GetActionCharacter_ReturnValue_1, class AActor* CallFunc_GetActionTarget_ReturnValue_2, bool CallFunc_IsApplicableDamage_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, class APalCharacter* CallFunc_GetActionCharacter_ReturnValue_2, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, class APalCharacter* CallFunc_GetNearestEnemyByLocation_FrontPlayerCamera_ReturnValue, bool CallFunc_IsValid_ReturnValue_2, float CallFunc_GetNearestEnemyByLocation_FrontPlayerCamera_InHeight_ImplicitCast, float CallFunc_GetNearestEnemyByLocation_FrontPlayerCamera_InDistance_ImplicitCast, float CallFunc_GetNearestEnemyByLocation_FrontPlayerCamera_InDegree_ImplicitCast);
	void OnEndAction();
	void OnBeginAction();
	void TickAction(float DeltaTime);
	void SpawnEffect(class FName EffectKey);
	void ExecuteUbergraph_BP_ActionUniqueAttackBase(int32 EntryPoint, class APalCharacter* CallFunc_GetActionCharacter_ReturnValue, class APalCharacter* CallFunc_GetActionCharacter_ReturnValue_1, class FName K2Node_CustomEvent_EffectKey, float K2Node_Event_DeltaTime, const class FString& CallFunc_Conv_NameToString_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue, const struct FSkillEffectSpawnParameter& CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, const struct FRandomStream& CallFunc_GetRandomStream_ReturnValue, const struct FTransform& CallFunc_MakeTransform_ReturnValue, class AActor* CallFunc_GetUniqueActionTarget_TargetActor, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue, class APalSkillEffectBase* CallFunc_FinishSpawningActor_ReturnValue, bool CallFunc_IsValid_ReturnValue, TSoftObjectPtr<class APalSkillEffectBase> CallFunc_Conv_ObjectToSoftObjectReference_ReturnValue, int32 CallFunc_Array_Add_ReturnValue);
};

}


