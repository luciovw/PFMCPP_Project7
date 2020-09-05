#pragma once

#include "Item.h"
#include "Character.h"

struct DefensiveItem : Item
{
    DefensiveItem() : Item("Defensive Item", 3) { }
    void use(Character* character) override;
};

