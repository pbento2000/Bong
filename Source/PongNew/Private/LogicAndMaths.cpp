// Fill out your copyright notice in the Description page of Project Settings.


#include "LogicAndMaths.h"

bool ULogicAndMaths::PlayerMovementCheckup(FVector2D Input, float Position)
{
	
	if (Input.Y < 0 && Position > -500) {
		return true;
	}

	if (Input.Y > 0 && Position < 500) {
		return true;
	}
	
	return false;
}

FVector ULogicAndMaths::RotateBall(float HitLocation, int Player)
{
	float Angle = HitLocation / 150 * 75.0;
	FVector DirectionInit = FVector(-Player, 0, 0);

	FVector Direction = DirectionInit.RotateAngleAxis(Angle * Player, FVector(0, 0, 1));

	return Direction;
}

float ULogicAndMaths::ApplyChargeDebuff(float SpeedMofidier, float LastRoundSpeedModifier, float DebuffMultiplier)
{
	return FMath::Clamp((SpeedMofidier - LastRoundSpeedModifier) * DebuffMultiplier,0.0f, 0.5f);
}

FVector ULogicAndMaths::ReduceBallSpeedOverTime(float baseSpeed, float Percentage, FVector SpeedVector)
{

	float newSpeed = (SpeedVector.Y - baseSpeed)*(1.0f-Percentage);
	

	return FVector(newSpeed + 0.93f, newSpeed + 0.93f, newSpeed + 0.93f);
}
