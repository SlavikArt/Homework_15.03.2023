#pragma once
#include <iostream>
using namespace std;

#include "Wheels.h"
#include "Engine.h"
#include "Door.h"

class Car : protected Wheels, protected Engine, protected Door
{
protected:
	int numOfWheels;
	int numOfDoors;
public:
	Car();
	Car(int numOfWheels, int numOfDoors, 
		string wheelBrand, double wheelDiameter, bool wheelForWinter,
		string engineFuelType, double engineFuelLevel, double engineOilLevel,
		double engineMaxPower, int engineMaxTorque, int engineNumCylinders,
		int doorHeight, int doorLength); // Что то я переборщил с параметрами...
	
	void Print();
};

