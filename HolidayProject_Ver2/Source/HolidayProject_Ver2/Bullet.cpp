// Fill out your copyright notice in the Description page of Project Settings.

#include "Bullet.h"

void ABullet::MoveBullet()
{
	FVector newPosition;
	FVector originalPosition = this->GetActorLocation();
	newPosition = originalPosition;
	newPosition.X += movementSpeed;

	this->SetActorLocation(FMath::Lerp(originalPosition, newPosition, 0.5f));
}
