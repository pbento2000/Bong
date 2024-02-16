// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "Math/Rotator.h"
#include "LogicAndMaths.generated.h"


/**
 * 
 */
UCLASS()
class PONGNEW_API ULogicAndMaths : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()

	UFUNCTION(BlueprintCallable)
	static bool PlayerMovementCheckup(FVector2D Input, float Position);

	UFUNCTION(BlueprintCallable)
	static FVector RotateBall(float HitLocation, int Player);

	UFUNCTION(BlueprintCallable)
	static float ApplyChargeDebuff(float SpeedMofidier, float LastRoundSpeedModifier, float DebuffMultiplier);

	UFUNCTION(BlueprintCallable)
	static FVector ReduceBallSpeedOverTime(float baseSpeed, float Percentage, FVector SpeedVector);

};
