// Fill out your copyright notice in the Description page of Project Settings.

#include "MyCamera.h"

void AMyCamera::AdjustCamera(AMyPlayerCharacter* player)
{
	FVector newPosition;
	newPosition = player->GetActorLocation();
	if (newPosition.X < LeftBorderLimit)
	{
		newPosition.X = LeftBorderLimit;
	}
	if (newPosition.X > RightBorderLimit)
	{
		newPosition.X = RightBorderLimit;
	}
	if (newPosition.Z < BottomBorderLimit)
	{
		newPosition.Z = BottomBorderLimit;
	}
	if (newPosition.Z > TopBorderLimit)
	{
		newPosition.Z = TopBorderLimit;
	}
	this->SetActorLocation(FMath::Lerp(this->GetActorLocation(), newPosition, CameraDelay));
}