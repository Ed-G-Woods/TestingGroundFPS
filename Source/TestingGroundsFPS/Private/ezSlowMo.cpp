// Fill out your copyright notice in the Description page of Project Settings.

#include "ezSlowMo.h"
#include "Runtime/Engine/Classes/Kismet/GameplayStatics.h"
#include "Engine/World.h"

// Sets default values for this component's properties
UezSlowMo::UezSlowMo()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	// ...
}


// Called when the game starts
void UezSlowMo::BeginPlay()
{
	Super::BeginPlay();

	// ...
	
}


// Called every frame
void UezSlowMo::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	// ...
}

void UezSlowMo::ezSlowMo_Globle(float dilation)
{
	UGameplayStatics::SetGlobalTimeDilation(GetWorld(), dilation);
}

void UezSlowMo::ezSlowMo_Actor(float dilation, AActor* targetActor)
{
	targetActor->CustomTimeDilation = dilation;
}

