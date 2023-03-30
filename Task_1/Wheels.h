#pragma once
#include <iostream>
using namespace std;

class Wheels
{
protected:
	string brand;
	double diameter;
	bool forWinter;

public:
	Wheels();
	Wheels(string brand, double diameter, bool forWinter);

	void Print();
};
