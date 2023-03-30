#pragma once
#include <iostream>
using namespace std;

#include "Transport.h"

class Airplane : public Transport
{
public:
	Airplane();
	Airplane(string name, double weight, double speed,
		double fuelConsumptionPer100Km);

	double FuelConsumption(double time);
	void Print();
};
