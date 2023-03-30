#include "Automobile.h"

Automobile::Automobile() {}

Automobile::Automobile(string name, double weight, double speed,
    double fuelConsumptionPer100Km)
    : Transport(name, weight, speed, fuelConsumptionPer100Km) {}

double Automobile::FuelConsumption(double time)
{
    return Transport::FuelConsumption(time);
}

void Automobile::Print()
{
    cout << "-Automobile-\n";
    Transport::Print();
}
