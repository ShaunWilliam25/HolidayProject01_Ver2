// Fill out your copyright notice in the Description page of Project Settings.

#include "MyPlayerController.h"

void AMyPlayerController::ShootBullet()
{
	FActorSpawnParameters spawnDetail;
	spawnDetail.SpawnCollisionHandlingOverride = ESpawnActorCollisionHandlingMethod::AlwaysSpawn;
	spawnDetail.Owner = Cast<AActor>(this->GetCharacter());

	FRotator rotation(0, 0, 0);
	FVector position = GetCharacter()->GetActorLocation();
	position.X += bulletOffset;

	GetWorld()->SpawnActor<ABullet>(bullet, position, rotation, spawnDetail);
}