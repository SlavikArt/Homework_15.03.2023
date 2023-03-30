#include "Engine.h"

Engine::Engine() : fuelType(""), fuelLevel(0), oilLevel(0),
	maxPower(0), maxTorque(0), numCylinders(0) {}

Engine::Engine(string fuelType, double fuelLevel, double oilLevel,
	double maxPower, int maxTorque, int numCylinders)
{
	this->fuelType = fuelType;
	this->fuelLevel = fuelLevel;
	this->oilLevel = oilLevel;
	this->maxPower = maxPower;
	this->maxTorque = maxTorque;
	this->numCylinders = numCylinders;
}

void Engine::Print()
{
	cout << "Fuel Type: " << fuelType << "\n";
	cout << "Fuel Level: " << fuelLevel << " liters" << "\n";
	cout << "Oil Level: " << oilLevel << " liters" << "\n";
	cout << "Max Power: " << maxPower << " hp" << "\n";
	cout << "Max Torque: " << maxTorque << " Nm" << "\n";
	cout << "Number of Cylinders: " << numCylinders << "\n";
}
