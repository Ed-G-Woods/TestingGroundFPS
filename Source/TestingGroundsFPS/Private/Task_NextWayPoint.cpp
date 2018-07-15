// Fill out your copyright notice in the Description page of Project Settings.

#include "Task_NextWayPoint.h"
#include "Runtime/AIModule/Classes/BehaviorTree/BlackboardComponent.h"
#include "Runtime/AIModule/Classes/AIController.h"
#include "Runtime/Engine/Classes/Engine/TargetPoint.h"
#include "MyTempTP_ThirdPersonCharacter.h"



EBTNodeResult::Type UTask_NextWayPoint::ExecuteTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory)
{
	//UE_LOG(LogTemp, Warning, TEXT("Your message"));

	//Get Points Array
	auto pawn = OwnerComp.GetAIOwner()->GetPawn();
	AMyTempTP_ThirdPersonCharacter* player = Cast<AMyTempTP_ThirdPersonCharacter>(pawn);
	TArray<ATargetPoint*> PointsArray = player->PatrolPointArray;

	//Get index now
	UBlackboardComponent* BBC = OwnerComp.GetBlackboardComponent();
	int32 index = BBC->GetValueAsInt(TargetIndexKey.SelectedKeyName);

 	BBC->SetValueAsObject(TargetActorKey.SelectedKeyName, PointsArray[index]);

	int32 NextIndex = (++index) % PointsArray.Num() ;
	BBC->SetValueAsInt(TargetIndexKey.SelectedKeyName, NextIndex);

	UE_LOG(LogTemp, Warning, TEXT("NextIndex : %s"),*FString::FromInt(NextIndex));


	return EBTNodeResult::Succeeded;
}
