#pragma once
#include "Character.h"

struct Paladin : Character
{
    std::string getStats() override;
    
private:
    const std::string name;
};