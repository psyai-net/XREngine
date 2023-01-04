// Fill out your copyright notice in the Description page of Project Settings.


#include "PublicContactFunctionLibrary.h"
#include "Kismet/GameplayStatics.h"
#include "PublicContactManager.h"

void UPublicContactFunctionLibrary::SwitchCharacter(const UObject* WorldContextObject, const FString& CharacterName)
{
	TArray<AActor*> ManagerList;
	UGameplayStatics::GetAllActorsOfClass(WorldContextObject, APublicContactManager::StaticClass(), ManagerList);
	for (AActor* Item : ManagerList)
	{
		APublicContactManager* Manager = Cast<APublicContactManager>(Item);
		if (Manager)
		{
			Manager->SwitchCharacter(CharacterName);
		}
	}
}

void UPublicContactFunctionLibrary::AddWidgetToHome(const UObject* WorldContextObject, UUserWidget* WidgetRef)
{
	TArray<AActor*> ManagerList;
	UGameplayStatics::GetAllActorsOfClass(WorldContextObject, APublicContactManager::StaticClass(), ManagerList);
	for (AActor* Item : ManagerList)
	{
		APublicContactManager* Manager = Cast<APublicContactManager>(Item);
		if (Manager)
		{
			Manager->AddWidgetToHome(WidgetRef);
		}
	}
}

void UPublicContactFunctionLibrary::SetControllerDefaultPawn(const UObject* WorldContextObject, APawn* Pawn)
{
	TArray<AActor*> ManagerList;
	UGameplayStatics::GetAllActorsOfClass(WorldContextObject, APublicContactManager::StaticClass(), ManagerList);
	for (AActor* Item : ManagerList)
	{
		APublicContactManager* Manager = Cast<APublicContactManager>(Item);
		if (Manager)
		{
			Manager->SetControllerDefaultPawn(Pawn);
		}
	}
}

void UPublicContactFunctionLibrary::SetHiddenHomeWidget(const UObject* WorldContextObject, bool bSetHidden)
{
	TArray<AActor*> ManagerList;
	UGameplayStatics::GetAllActorsOfClass(WorldContextObject, APublicContactManager::StaticClass(), ManagerList);
	for (AActor* Item : ManagerList)
	{
		APublicContactManager* Manager = Cast<APublicContactManager>(Item);
		if (Manager)
		{
			Manager->SetHiddenHomeWidget(bSetHidden);
		}
	}
}

void UPublicContactFunctionLibrary::TestFunction()
{

}
