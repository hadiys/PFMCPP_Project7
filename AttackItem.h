#include "Item.h"

struct AttackItem : Item
{
    AttackItem(int boost);
    void use(Character* character) override;
};

