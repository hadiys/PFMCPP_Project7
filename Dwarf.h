#pragma once
#include "Character.h"

struct Dwarf : Character
{
    std::string getStats() override;
    
private:
    const std::string name;
};