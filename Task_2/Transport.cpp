#include "Transport.h"

Transport::Transport() 
	: name(""), weight(0), speed(0),
	fuelConsumptionPer100Km(0) {}

Transport::Transport(string name, double weight, double speed, double fuelConsumptionPer100Km)
	: name(name), weight(weight), speed(speed), 
	fuelConsumptionPer100Km(fuelConsumptionPer100Km) {}

double Transport::FuelConsumption(double time)
{
	return time * speed * fuelConsumptionPer100Km;
}

void Transport::Print()
{
    cout << "Name: " << name << "\n";
    cout << "Weight: " << weight << "\n";
    cout << "Speed: " << speed << "\n";
    cout << "Fuel consumption per 100 km: " << fuelConsumptionPer100Km << "\n";
}
