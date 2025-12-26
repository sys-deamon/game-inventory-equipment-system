#include "Item.h"

std::string Item::Indent(int level)
{
    return std::string(level * 2, ' ');
}

// Default Constructor
Item::Item()
{
    itemName = "NoName";
    itemDamage = 0;
    itemProtection = 0;
    isUpgradable = false;
}

// Custom Constructor
Item::Item(std::string itemName, int itemDamage, int itemCondition, int itemProtection, bool isUpgradable)
{
    this->itemName = itemName;
    this->itemDamage = itemDamage;
    this->itemCondition = itemCondition;
    this->itemProtection = itemProtection;
    this->isUpgradable = isUpgradable;
}

void Item::DisplayInfo(int indent)
{
    std::string pad = Indent(indent);

    std::cout << pad << "{\n";
    std::cout << pad << Indent(1) << "\"name\": \"" << itemName << "\",\n";
    std::cout << pad << Indent(1) << "\"damage\": " << itemDamage << ",\n";
    std::cout << pad << Indent(1) << "\"condition\": " << itemCondition << ",\n";
    std::cout << pad << Indent(1) << "\"protection\": " << itemProtection << ",\n";
    std::cout << pad << Indent(1) << "\"upgradable\": " << (isUpgradable ? "true" : "false") << "\n";
    std::cout << pad << "}";
}


void Item::SetItemName(std::string itemName)
{
    this->itemName = itemName;
}

void Item::SetItemDamage(int damage)
{
    itemDamage = damage;
}

void Item::SetItemCondition(int condition)
{
    itemCondition = condition;
}

void Item::SetItemProtection(int protection)
{
    itemProtection = protection;
}

void Item::SetUpgradeStatus(bool status)
{
    isUpgradable = status;
}