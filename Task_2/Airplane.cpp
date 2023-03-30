#include "Airplane.h"

Airplane::Airplane() {}

Airplane::Airplane(string name, double weight, double speed, 
    double fuelConsumptionPer100Km) 
    : Transport(name, weight, speed, fuelConsumptionPer100Km) {}

double Airplane::FuelConsumption(double time)
{
    return Transport::FuelConsumption(time);
}

void Airplane::Print()
{
    cout << "-Airplane-\n";
    Transport::Print();
}
