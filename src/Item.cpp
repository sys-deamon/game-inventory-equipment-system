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

json Item::ToJson()
{
    return
    {
        {"ItemName", itemName},
        {"ItemDamage (1-100)", itemDamage},
        {"ItemProtection", itemProtection},
        {"ItemCondition", itemCondition},
        {"upgradable", isUpgradable}
    };
}