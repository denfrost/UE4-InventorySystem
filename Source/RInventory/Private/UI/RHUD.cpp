// Fill out your copyright notice in the Description page of Project Settings.

#include "RInventory.h"

#include "RPlayerController.h"
//#include "UI/Widgets/RInventoryWidget.h"
#include "RHUD.h"

void ARHUD::PostInitializeComponents()
{
    Super::PostInitializeComponents();

    RPlayerOwner = Cast<ARPlayerController>(GetOwner());

    if(InventoryWidgetType)
    {
        InventoryWidget = CreateWidget<URInventoryWidget>(GetWorld(), InventoryWidgetType);
    }
    else
    {
        // Blow the fuck up
    }
}

void ARHUD::ToggleInventoryScreen()
{
    if(bIsInventoryWidgetDirty) {
        // get item list from player inventory
     //   bIsInventoryWidgetDirty = false;
    }
    // Do we need to rebuild the inventory widget...?
  //  if(InventoryWidget->IsGridDirty()) {
     //   InventoryWidget->IsDirty();
   // }
    InventoryWidget->ToggleVisibility();
}

void ARHUD::AddItemToInventory(class ARItem* Item, int32 InventorySlot) {
    InventoryWidget->AddItem(Item, InventorySlot);
}