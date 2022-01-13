#include "Dwarf.h"
#include "Utility.h"

//Dwarf::Dwarf
Dwarf::Dwarf(std::string name_, int hitPoints, int armor) 
    : Character(hitPoints, armor, 4), name(name_)
{
    helpfulItems = makeHelpfulItems(6);
    defensiveItems = makeDefensiveItems(4);
}

//Dwarf::getName
const std::string& Dwarf::getName()
{
    return name;
}

//Dwarf::getStats
std::string Dwarf::getStats()
{
    return getCharacterStats(this);
}
