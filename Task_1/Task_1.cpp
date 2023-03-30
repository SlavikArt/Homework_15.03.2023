#include "Car.h"

int main()
{
	Car car(
		4, 5, // num of wheels, doors
		"Mercedes", 17, true, // Wheels
		"Petrol", 50, 25, 200, 350, 6, // Engine
		180, 80 // Door
	);
	car.Print();
}
