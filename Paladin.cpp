#include "Paladin.h"
#include "Utility.h"

// Paladin::Paladin
Paladin::Paladin(std::string name_, int hitPoints, int armor) 
    : Character(hitPoints, armor, 10), name(name_)
{
    helpfulItems = makeHelpfulItems(1);
    defensiveItems = makeDefensiveItems(3);
}

// Paladin::getName
const std::string& Paladin::getName()
{
    return name;
}

// Paladin::getStats
std::string Paladin::getStats()
{
    return getCharacterStats(this);
}
