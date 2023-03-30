#pragma once
#include <iostream>
#include <string>
#include <vector>
using namespace std;

#include "Transport.h"

class TransportMenu
{
	vector<Transport*> transport;
public:
	TransportMenu();
	TransportMenu(vector<Transport*> transport);

	void Menu();
	void AddTransport();
	void DeleteTransport();
	void PrintTransport();
};

