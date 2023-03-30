#pragma once
#include <iostream>
using namespace std;

class Engine
{
protected:
	string fuelType;
	double fuelLevel;
	double oilLevel;
	double maxPower;
	int maxTorque;
	int numCylinders;
public:
	Engine();
	Engine(string fuelType, double fuelLevel, double oilLevel,
		double maxPower, int maxTorque, int numCylinders);

	void Print();
};
