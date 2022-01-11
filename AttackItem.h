#pragma once
#include "Item.h"

struct AttackItem : public Item
{
    AttackItem();
    void use(Character* character) override;
};

