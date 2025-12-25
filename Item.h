#pragma once
#include <string>
#include <iostream>

class Item
{
    private:
    std::string itemName;
    int itemDamage;
    int itemCondition;
    int itemProtection;
    bool isUpgradable;

    std::string Indent(int level);

    public:
    // Default Constructor
    Item();

    // Custom Constructor
    Item(std::string itemName, int itemDamage, int itemCondition, int itemProtection, bool isUpgradable);

    // Functions
    void DisplayInfo(int indent);
    void SetItemName(std::string itemName);
    void SetItemDamage(int damage);
    void SetItemCondition(int condition);
    void SetItemProtection(int protection);
    void SetUpgradeStatus(bool status);
};