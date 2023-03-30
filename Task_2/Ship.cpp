#include "Ship.h"

Ship::Ship() {}

Ship::Ship(string name, double weight, double speed,
    double fuelConsumptionPer100Km)
    : Transport(name, weight, speed, fuelConsumptionPer100Km) {}

double Ship::FuelConsumption(double time)
{
    return Transport::FuelConsumption(time);
}

void Ship::Print()
{
    cout << "-Ship-\n";
    Transport::Print();
}
