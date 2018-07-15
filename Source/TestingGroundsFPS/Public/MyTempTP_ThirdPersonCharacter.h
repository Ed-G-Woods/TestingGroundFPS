// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "TP_ThirdPerson/TP_ThirdPersonCharacter.h"
#include "MyTempTP_ThirdPersonCharacter.generated.h"

class ATargetPoint;

/**
 * 
 */
UCLASS()
class TESTINGGROUNDSFPS_API AMyTempTP_ThirdPersonCharacter : public ATP_ThirdPersonCharacter
{
	GENERATED_BODY()
	
public:

	UPROPERTY(EditAnywhere,category = "AI")
	TArray<ATargetPoint*> PatrolPointArray;
	
	
};
