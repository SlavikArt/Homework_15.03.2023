#pragma once
#include <iostream>
using namespace std;

class Transport
{
protected:
    string name;
    double weight;
    double speed;
    double fuelConsumptionPer100Km;
public:
    Transport();
    Transport(string name, double weight, double speed, double fuelConsumptionPer100Km);

    virtual double FuelConsumption(double time);
    virtual void Print();
};
