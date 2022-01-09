#pragma once
#include "Character.h"

struct DragonSlayer : Character
{
    void attack(Character& other) override;
    std::string getStats() override;
    
private:
    const std::string name;
};