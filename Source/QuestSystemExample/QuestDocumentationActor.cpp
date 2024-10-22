﻿// Fill out your copyright notice in the Description page of Project Settings.


#include "QuestDocumentationActor.h"


// Sets default values
AQuestDocumentationActor::AQuestDocumentationActor()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = false;
	
#if WITH_EDITOR
	DocumentLink = "https://dmitriy-vergasov.gitbook.io/ultimate-quest-system/";
#endif
}


void AQuestDocumentationActor::OpenLink()
{
	OpenDocumentLink();
}
