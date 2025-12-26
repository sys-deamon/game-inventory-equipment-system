#include "Player.h"
#include "Item.h"

int main()
{
    Player SixEyes("SixEyes", 5);

    Item ace32("Ace 32", 75, 100, 0, false);
    Item m416("M416", 50, 100, 0, true);
    Item medKit("Med Kit", 0, 100, 100, false);

    SixEyes.AddItem(ace32);
    SixEyes.AddItem(m416);
    SixEyes.AddItem(medKit);

    SixEyes.DisplayInventory();
    return 0;
}