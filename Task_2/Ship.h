#pragma once
#include <iostream>
using namespace std;

#include "Transport.h"

class Ship : public Transport
{
public:
	Ship();
	Ship(string name, double weight, double speed,
		double fuelConsumptionPer100Km);

	double FuelConsumption(double time);
	void Print();
};
