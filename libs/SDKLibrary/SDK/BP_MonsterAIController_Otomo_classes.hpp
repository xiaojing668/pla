#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x8D (0x5A8 - 0x51B)
// BlueprintGeneratedClass BP_MonsterAIController_Otomo.BP_MonsterAIController_Otomo_C
class ABP_MonsterAIController_Otomo_C : public ABP_MonsterAIControllerBase_C
{
public:
	uint8                                        Pad_16BE[0x5];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x520(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	int32                                        OtomoSlotIndex;                                    // 0x528(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_16C0[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TMap<enum class EPalAIActionType, class UPalAIActionBase*> PlayingAIActionMap;                                // 0x530(0x50)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FTimerHandle                          RegeneTimer;                                       // 0x580(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FVector                               FollowInterpolatedPos;                             // 0x588(0x18)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       FollowSpeed;                                       // 0x5A0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class ABP_MonsterAIController_Otomo_C* GetDefaultObj();

	TSubclassOf<class UPalAIControllerWorkerModule> GetWorkerModuleClass();
	void OnDamageOtomo(const struct FPalDamageResult& DamageResult, bool CallFunc_IsValid_ReturnValue, class APalPlayerCharacter* K2Node_DynamicCast_AsPal_Player_Character, bool K2Node_DynamicCast_bSuccess, class APalPlayerController* CallFunc_GetPalPlayerController_ReturnValue, class UPalOtomoHolderComponentBase* CallFunc_GetComponentByClass_ReturnValue, class APawn* CallFunc_K2_GetPawn_ReturnValue, class APalCharacter* CallFunc_TryGetSpawnedOtomo_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_2, class AController* CallFunc_GetController_ReturnValue, class APalCharacter* K2Node_DynamicCast_AsPal_Character, bool K2Node_DynamicCast_bSuccess_1, bool CallFunc_IsValid_ReturnValue_3, bool CallFunc_GetActiveActorFlag_ReturnValue, bool CallFunc_GetBattleMode_ReturnValue, class ABP_MonsterAIController_Otomo_C* K2Node_DynamicCast_AsBP_Monster_AIController_Otomo, bool K2Node_DynamicCast_bSuccess_2, class APawn* CallFunc_K2_GetPawn_ReturnValue_1, class UPalBattleManager* CallFunc_GetBattleManager_ReturnValue, class APawn* CallFunc_K2_GetPawn_ReturnValue_2, class UPalBattleManager* CallFunc_GetBattleManager_ReturnValue_1);
	void CanCoop(bool* CanCoop, class APawn* CallFunc_K2_GetPawn_ReturnValue, class UPalPartnerSkillParameterComponent* CallFunc_GetComponentByClass_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsRestrictedByItems_ReturnValue, enum class EPalAIActionType Temp_byte_Variable, class APawn* CallFunc_K2_GetPawn_ReturnValue_1, class UPalStaticCharacterParameterComponent* CallFunc_GetComponentByClass_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_1, TSubclassOf<class UPalAIActionBase> CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, bool CallFunc_EqualEqual_ClassClass_ReturnValue, bool CallFunc_IsValidClass_ReturnValue, class APawn* CallFunc_K2_GetPawn_ReturnValue_2, class UPalPartnerSkillParameterComponent* CallFunc_GetComponentByClass_ReturnValue_2, bool CallFunc_CanExec_ReturnValue, bool CallFunc_IsValid_ReturnValue_2);
	void Play_Otomo_Default_Composite_Action(class UPalAIActionComponent* K2Node_DynamicCast_AsPal_AIAction_Component, bool K2Node_DynamicCast_bSuccess, class UBP_AIAction_OtomoDefault_C* CallFunc_SpawnObject_ReturnValue);
	void SetCombatAction(class UPalAIActionCombatBase** AIAction, class UPalAIActionComponent* CastedActionComp, class UPalAIActionComponent* K2Node_DynamicCast_AsPal_AIAction_Component, bool K2Node_DynamicCast_bSuccess, class UPalAIActionCombat_Standard* CallFunc_SpawnObject_ReturnValue);
	void SetHateEnemiesToOtomo(bool HitR1Enemy, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable, class APawn* CallFunc_K2_GetPawn_ReturnValue, bool CallFunc_IsValid_ReturnValue, class AController* CallFunc_GetController_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, class APalAIController* K2Node_DynamicCast_AsPal_AIController, bool K2Node_DynamicCast_bSuccess, class UPalHate* CallFunc_GetHateSystem_ReturnValue, class APawn* CallFunc_K2_GetPawn_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_2, class APawn* CallFunc_K2_GetPawn_ReturnValue_2, bool CallFunc_IsValid_ReturnValue_3, class APawn* CallFunc_K2_GetPawn_ReturnValue_3, class UPalCharacterParameterComponent* CallFunc_GetComponentByClass_ReturnValue, class UPalBattleManager* CallFunc_GetBattleManager_ReturnValue, TArray<class AActor*>& CallFunc_GetConflictEnemies_OutEnemyes, bool CallFunc_GetConflictEnemies_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, class AActor* CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_EqualEqual_ObjectObject_ReturnValue, bool CallFunc_IsValid_ReturnValue_4, class AController* CallFunc_GetController_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_5, class APalAIController* K2Node_DynamicCast_AsPal_AIController_1, bool K2Node_DynamicCast_bSuccess_1, class UPalHate* CallFunc_GetHateSystem_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_6);
	void Set_Combat_Action_and_Target(class AActor* Target, class UPalAIActionCombatBase** AIAction, class APalCharacter* K2Node_DynamicCast_AsPal_Character, bool K2Node_DynamicCast_bSuccess, class UPalAIActionCombatBase* CallFunc_SetCombatAction_AIAction);
	void Attack_For_Enemy_With_Parameter(class AActor* Target, int32 SkillSlotID, class UPalAIActionCombatBase* CallFunc_Set_Combat_Action_and_Target_AIAction, bool CallFunc_IsActive_ReturnValue, bool CallFunc_IsValid_ReturnValue);
	void AttackForEnemy(class AActor* Target, const struct FPalDamageResult& NewLocalVar, class UPalAIActionComponent* CastedActionComp, class UPalCharacterParameterComponent* CallFunc_GetComponentByClass_ReturnValue, class UPalAIActionCombatBase* CallFunc_Set_Combat_Action_and_Target_AIAction, class APalPlayerCharacter* K2Node_DynamicCast_AsPal_Player_Character, bool K2Node_DynamicCast_bSuccess, class APalCharacter* K2Node_DynamicCast_AsPal_Character, bool K2Node_DynamicCast_bSuccess_1, bool CallFunc_GetBattleMode_ReturnValue, class AController* CallFunc_GetController_ReturnValue, bool CallFunc_IsValid_ReturnValue, class ABP_MonsterAIController_Otomo_C* K2Node_DynamicCast_AsBP_Monster_AIController_Otomo, bool K2Node_DynamicCast_bSuccess_2, class APawn* CallFunc_K2_GetPawn_ReturnValue, class APawn* CallFunc_K2_GetPawn_ReturnValue_1, class UPalAIActionCombatBase* CallFunc_Set_Combat_Action_and_Target_AIAction_1, class UPalBattleManager* CallFunc_GetBattleManager_ReturnValue);
	void OnCoopCanceled(enum class EPalAIActionType Temp_byte_Variable, class UPalAIActionBase* CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, enum class EPawnActionAbortState CallFunc_K2_AbortAction_ReturnValue);
	void OnCoopFinished(class UPalAIActionBase* Action, enum class EPalAIActionType Temp_byte_Variable, bool CallFunc_Map_Remove_ReturnValue);
	void OnCoopRequest(bool CallFunc_CanCoop_CanCoop, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, enum class EPalAIActionType Temp_byte_Variable, const class FString& CallFunc_GetObjectName_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue, enum class EPalAIActionType Temp_byte_Variable_1, enum class EPalAIActionType Temp_byte_Variable_2, class APawn* CallFunc_K2_GetPawn_ReturnValue, class UPalAIActionBase* CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, class UPalStaticCharacterParameterComponent* CallFunc_GetComponentByClass_ReturnValue, bool CallFunc_IsValid_ReturnValue, TSubclassOf<class UPalAIActionBase> CallFunc_Map_Find_Value_1, bool CallFunc_Map_Find_ReturnValue_1, class UPalAIActionComponent* K2Node_DynamicCast_AsPal_AIAction_Component, bool K2Node_DynamicCast_bSuccess, const class FString& CallFunc_GetClassDisplayName_ReturnValue, bool CallFunc_IsValidClass_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_1, const class FString& CallFunc_Concat_StrStr_ReturnValue_2, const class FString& CallFunc_Concat_StrStr_ReturnValue_3, class FName CallFunc_Conv_StringToName_ReturnValue, class UPawnAction* CallFunc_CreateActionInstanceFixName_ReturnValue, class UPalAIActionBase* K2Node_DynamicCast_AsPal_AIAction_Base, bool K2Node_DynamicCast_bSuccess_1);
	void OnPressCoopButton(enum class EPalAIActionType Temp_byte_Variable, class APawn* CallFunc_K2_GetPawn_ReturnValue, class APalCharacter* K2Node_DynamicCast_AsPal_Character, bool K2Node_DynamicCast_bSuccess, bool CallFunc_GetActiveActorFlag_ReturnValue, class UPalAIActionBase* CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, bool CallFunc_IsValid_ReturnValue);
	void Setup(int32 HolderSlotID);
	void ReceiveEndPlay(enum class EEndPlayReason EndPlayReason);
	void Regene_CustomEvent();
	void OnDeadDelegate______0(const struct FPalDeadInfo& DeadInfo);
	void ShowBaseCampLog(struct FPalMonsterControllerBaseCampLogContent& Content);
	void OnSetTrainer(class APalCharacter* InCharacter);
	void FinishCoopAction();
	void ReceivePossess(class APawn* PossessedPawn);
	void OnTrainer(class APalCharacter* InCharacter);
	void ExecuteUbergraph_BP_MonsterAIController_Otomo(int32 EntryPoint, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, TSubclassOf<class UPalActionBase> Temp_class_Variable, enum class EPalWazaID Temp_byte_Variable, enum class EEndPlayReason K2Node_Event_EndPlayReason, class APawn* CallFunc_K2_GetPawn_ReturnValue, const struct FPalDeadInfo& K2Node_CustomEvent_DeadInfo, class UPalDamageReactionComponent* CallFunc_GetComponentByClass_ReturnValue, class UPalCharacterParameterComponent* CallFunc_GetComponentByClass_ReturnValue_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, const struct FPalMonsterControllerBaseCampLogContent& K2Node_Event_Content, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, class APawn* CallFunc_K2_GetPawn_ReturnValue_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_4, class UPalDamageReactionComponent* CallFunc_GetComponentByClass_ReturnValue_2, class APawn* CallFunc_K2_GetPawn_ReturnValue_2, class APalCharacter* K2Node_DynamicCast_AsPal_Character, bool K2Node_DynamicCast_bSuccess, class APalCharacter* K2Node_CustomEvent_InCharacter_1, class UPalCharacterOnCompleteInitializeParameterWrapper* CallFunc_GetOnCompleteInitializeParameterDelegate_ReturnValue, class UPalCharacterParameterComponent* CallFunc_GetComponentByClass_ReturnValue_3, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_5, class UPalDamageReactionComponent* CallFunc_GetComponentByClass_ReturnValue_4, class APawn* CallFunc_K2_GetPawn_ReturnValue_3, bool CallFunc_IsValid_ReturnValue, class UPalCharacterParameterComponent* CallFunc_GetComponentByClass_ReturnValue_5, class UPalIndividualCharacterParameter* CallFunc_TryGetIndividualParameter_ReturnValue, class APlayerController* CallFunc_GetLocalPlayerController_ReturnValue, class APalPlayerController* K2Node_DynamicCast_AsPal_Player_Controller, bool K2Node_DynamicCast_bSuccess_1, class APawn* K2Node_Event_PossessedPawn, class APawn* CallFunc_K2_GetPawn_ReturnValue_4, class APalCharacter* K2Node_DynamicCast_AsPal_Character_1, bool K2Node_DynamicCast_bSuccess_2, class APalCharacter* K2Node_CustomEvent_InCharacter, class UPalCharacterOnCompleteInitializeParameterWrapper* CallFunc_GetOnCompleteInitializeParameterDelegate_ReturnValue_1, class APalPlayerController* CallFunc_GetTrainerPlayerController_ForServer_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_6, class APawn* CallFunc_K2_GetPawn_ReturnValue_5, class ABP_NPC_Base_C* K2Node_DynamicCast_AsBP_NPC_Base, bool K2Node_DynamicCast_bSuccess_3, class UPalStaticCharacterParameterComponent* CallFunc_GetComponentByClass_ReturnValue_6, class UPalGameSetting* CallFunc_GetGameSetting_ReturnValue);
};

}


