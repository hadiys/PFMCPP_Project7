#include "Paladin.h"
#include "Utility.h"

// Paladin::Paladin
Paladin::Paladin(std::string name_, int hitPoints, int armor) 
    : name(name_), Character(hitPoints, armor, 10)
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