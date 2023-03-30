#pragma once
#include <iostream>
using namespace std;

class Door
{
protected:
	int height;
	int length;

public:
	Door();
	Door(int height, int length);

	void Print();
};
