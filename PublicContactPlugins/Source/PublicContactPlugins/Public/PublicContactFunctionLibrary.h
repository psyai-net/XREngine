// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "PublicContactFunctionLibrary.generated.h"

/**
 *
 */
UCLASS()
class PUBLICCONTACTPLUGINS_API UPublicContactFunctionLibrary : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()

public:
	//对外切换角色时调用，传入需要切换的角色名
	UFUNCTION(BlueprintCallable, Category = "PublicContact", meta = (WorldContext = "WorldContextObject"))
		static void SwitchCharacter(const UObject* WorldContextObject, const FString& CharacterName);

	//在主页面添加自己的UMG
	UFUNCTION(BlueprintCallable, Category = "PublicContact", meta = (WorldContext = "WorldContextObject"))
		static void AddWidgetToHome(const UObject* WorldContextObject, UUserWidget* WidgetRef);

	//切换控制器默认控制的pawn
	UFUNCTION(BlueprintCallable, Category = "PublicContact", meta = (WorldContext = "WorldContextObject"))
		static void SetControllerDefaultPawn(const UObject* WorldContextObject, APawn* Pawn);

	//隐藏主界面的UMG
	UFUNCTION(BlueprintCallable, Category = "PublicContact", meta = (WorldContext = "WorldContextObject"))
		static void SetHiddenHomeWidget(const UObject* WorldContextObject, bool bSetHidden);

	//Test
	UFUNCTION(BlueprintCallable, Category = "PublicContact", meta = (WorldContext = "WorldContextObject"))
		static void TestFunction();
};