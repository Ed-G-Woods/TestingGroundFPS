// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "ezSlowMo.generated.h"


UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class TESTINGGROUNDSFPS_API UezSlowMo : public UActorComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	UezSlowMo();

protected:
	// Called when the game starts
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

	UFUNCTION(BlueprintCallable, category = "i")
		void ezSlowMo_Globle(float dilation);
	UFUNCTION(BlueprintCallable, category = "i")
		void ezSlowMo_Actor(float dilation,AActor* targetActor);
	
};
