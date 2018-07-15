// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "BehaviorTree/BTTaskNode.h"
#include "Task_NextWayPoint.generated.h"

/**
 * 
 */
UCLASS()
class TESTINGGROUNDSFPS_API UTask_NextWayPoint : public UBTTaskNode
{
	GENERATED_BODY()

public:
	virtual EBTNodeResult::Type ExecuteTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory) override;
	
private:

public:

	UPROPERTY(EditAnywhere,Category = "Blackboard")
		FBlackboardKeySelector TargetIndexKey;
	UPROPERTY(EditAnywhere,Category = "Blackboard")
		FBlackboardKeySelector TargetActorKey;
	
};
