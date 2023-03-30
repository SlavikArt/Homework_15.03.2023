#include "Car.h"

Car::Car() : numOfWheels(0), numOfDoors(0) {}

Car::Car(int numOfWheels, int numOfDoors, 
    string wheelBrand, double wheelDiameter, bool wheelForWinter,
    string engineFuelType, double engineFuelLevel, double engineOilLevel,
    double engineMaxPower, int engineMaxTorque, int engineNumCylinders,
    int doorHeight, int doorLength)
    : numOfWheels(numOfWheels), numOfDoors(numOfDoors),
    Wheels(wheelBrand, wheelDiameter, wheelForWinter), 
    Engine(engineFuelType, engineFuelLevel, engineOilLevel,
        engineMaxPower, engineMaxTorque, engineNumCylinders), 
    Door(doorHeight, doorLength) {}

void Car::Print()
{
    cout << "Number of Wheels: " << numOfWheels << "\n";
    Wheels::Print();
    Engine::Print();
    cout << "Number of Doors: " << numOfDoors << "\n";
    Door::Print();
}
