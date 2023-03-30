#include "Door.h"

Door::Door() : height(0), length(0) {}

Door::Door(int height, int length) : height(height), length(length) {}

void Door::Print()
{
    cout << "Door Height: " << height << "\n";
    cout << "Door Length: " << length << "\n";
}
