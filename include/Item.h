#pragma once
#include <string>
#include <iostream>
#include "nlohmann/json.hpp"

using json = nlohmann::json;

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
    void SetItemName(std::string itemName);
    void SetItemDamage(int damage);
    void SetItemCondition(int condition);
    void SetItemProtection(int protection);
    void SetUpgradeStatus(bool status);
    json ToJson();
};