#pragma once
#include <iostream>
using namespace std;

#include "Transport.h"

class Automobile : public Transport
{
public:
	Automobile();
	Automobile(string name, double weight, double speed,
		double fuelConsumptionPer100Km);

	double FuelConsumption(double time);
	void Print();
};
