#include "AttackItem.h"
#include "Utility.h"

AttackItem::AttackItem(int boost) : Item("attack item", boost) {}

void AttackItem::use(Character* character)
{
    useAttackItem(character, this);
}