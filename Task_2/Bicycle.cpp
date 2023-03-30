#include "Bicycle.h"

Bicycle::Bicycle() {}

Bicycle::Bicycle(string name, double weight, double speed,
    double fuelConsumptionPer100Km)
    : Transport(name, weight, speed, fuelConsumptionPer100Km) {}

double Bicycle::FuelConsumption(double time)
{
    return Transport::FuelConsumption(time);
}

void Bicycle::Print()
{
    cout << "-Bicycle-\n";
    Transport::Print();
}
