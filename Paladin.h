#pragma once
#include "Character.h"

struct Paladin : public Character
{
    Paladin(std::string name_, int hitPoints, int armor);
    
    std::string getStats() override;
    const std::string& getName() override;
    
private:
    const std::string name;
};
