// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/DocumentationActor.h"
#include "QuestDocumentationActor.generated.h"

UCLASS()
class QUESTSYSTEMEXAMPLE_API AQuestDocumentationActor : public ADocumentationActor
{
	GENERATED_BODY()

public:
	AQuestDocumentationActor();

	UFUNCTION(BlueprintCallable)
	void OpenLink();
};
