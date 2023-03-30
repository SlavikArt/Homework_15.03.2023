#pragma once
#include <iostream>
using namespace std;

#include "Transport.h"

class Bicycle : public Transport
{
public:
	Bicycle();
	Bicycle(string name, double weight, double speed,
		double fuelConsumptionPer100Km);

	double FuelConsumption(double time);
	void Print();
};
