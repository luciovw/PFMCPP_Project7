#include "Dwarf.h"
#include "Utility.h"

//Dwarf::Dwarf
Dwarf::Dwarf (std::string name_, int health_, int armor_) :
Character(health_, armor_, 4), name(name_)
{

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

