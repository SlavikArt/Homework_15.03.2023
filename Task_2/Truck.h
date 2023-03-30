#pragma once
#include <iostream>
using namespace std;

#include "Transport.h"

class Truck : public Transport
{
public:
	Truck();
	Truck(string name, double weight, double speed,
		double fuelConsumptionPer100Km);

	double FuelConsumption(double time);
	void Print();
};
