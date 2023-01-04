// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "GameFramework/PlayerInput.h"
#include "Components/Widget.h"
#include "PublicContactManager.generated.h"

UCLASS()
class PUBLICCONTACTPLUGINS_API APublicContactManager : public AActor
{
	GENERATED_BODY()

public:
	//对外切换角色时调用，传入需要切换的角色名
	virtual void SwitchCharacter(const FString& CharacterName) {};

	//在主页面添加自己的UMG
	virtual void AddWidgetToHome(UUserWidget* WidgetRef) {};

	//切换控制器默认控制的pawn
	virtual void SetControllerDefaultPawn(APawn* Pawn) {};

	//隐藏主界面的UMG
	virtual void SetHiddenHomeWidget(bool bSetHidden) {};

	//Test
	virtual void TestFunction() {};
};
