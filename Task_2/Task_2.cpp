#include <iostream>
#include <vector>
using namespace std;

#include "Airplane.h"
#include "Ship.h"
#include "Truck.h"
#include "Bicycle.h"
#include "Automobile.h"
#include "TransportMenu.h"

int main()
{
	Transport* airplane = new Airplane("Mriya", 5000, 700, 150);
	Transport* ship = new Ship("Dantess", 3000, 100, 200);
	Transport* truck = new Truck("Big Jack", 4000, 70, 100);
	Transport* bicycle = new Bicycle("Firework", 50, 40, 20);
	Transport* automobile = new Automobile("Mercedes", 3000, 120, 80);

	vector<Transport*> transport { airplane , ship, truck, bicycle, automobile };

	TransportMenu menu(transport);

	menu.Menu();
}
