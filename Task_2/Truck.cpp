#include "Truck.h"

Truck::Truck() {}

Truck::Truck(string name, double weight, double speed,
    double fuelConsumptionPer100Km)
    : Transport(name, weight, speed, fuelConsumptionPer100Km) {}

double Truck::FuelConsumption(double time)
{
    return Transport::FuelConsumption(time);
}

void Truck::Print()
{
    cout << "-Truck-\n";
    Transport::Print();
}
