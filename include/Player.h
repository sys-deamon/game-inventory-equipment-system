#pragma once
#include <iostream>
#include <string>
#include "Item.h"

class Player
{
    private:
    std::string playerName;
    int inventorySize;
    Item *inventory;
    int currentIndex;

    public:
    // Default Constructor
    Player();

    // Custom Constructor
    Player(std::string playerName, int inventorySize = 5);

    // Custom Destructor
    ~Player();

    void SetPlayerName(std::string playerName);
    void AddItem(Item newItem);
    void DisplayInventory();
};