#include "Paladin.h"
#include "Utility.h"

// Paladin::Paladin
Paladin::Paladin (std::string name_, int health_, int armor_) : 
Character(health_,armor_, 10), name(name_)
{

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

