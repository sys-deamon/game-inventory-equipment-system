#include "Player.h"

// Default Constructor
Player::Player()
{
    playerName = "Unknown Player";
    inventorySize = 5;
    inventory = nullptr;
    currentIndex = 0;
}

// Custom Constructor
Player::Player(std::string playerName, int inventorySize)
{
    this->playerName = playerName;
    this->inventorySize = inventorySize - 1;
    inventory = new Item[this->inventorySize];
    currentIndex = 0;
}

// Custom Destructor
Player::~Player()
{
    delete inventory;
    inventory = nullptr;
}

void Player::SetPlayerName(std::string playerName)
{
    this->playerName = playerName;
}

void Player::AddItem(Item newItem)
{
    if (currentIndex == inventorySize)
    {
        std::cout<< "No more space left in the inventory" << std::endl;
        return;
    }
    // the following left side is similar to *(inventory + currentIndex) just a shorter and simplified version
    inventory[currentIndex] = newItem;
    currentIndex++;
}

void Player::DisplayInventory()
{
    std::cout << "[\n";

    for (int i = 0; i < currentIndex; i++)
    {
        inventory[i].DisplayInfo(1);

        if (i < currentIndex - 1)
            std::cout << ",";

        std::cout << "\n";
    }

    std::cout << "]\n";
}