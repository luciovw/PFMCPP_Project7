#include "HelpfulItem.h"
#include "Utility.h"

void HelpfulItem::use(Character *character)
{
    //from Utility
    useHelpfulItem(character, this);
}
