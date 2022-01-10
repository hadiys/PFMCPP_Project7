#pragma once
#include "Character.h"
#include "Utility.h"

struct DragonSlayer : Character
{
    DragonSlayer(std::string name_, int hitPoints, int armor);
    
    void attack(Character& other) override;
    std::string getStats() override;
    const std::string& getName() override;
    
private:
    const std::string name;
    AttackItem attackItem(10);
};