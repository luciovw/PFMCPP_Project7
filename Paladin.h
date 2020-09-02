#pragma once
#include "Character.h"

struct Paladin : Character
{
    Paladin (std::string name_, int health_, int armor_); 

    const std::string& getName() override;

    std::string getStats() override;

private:
    const std::string name;
};

