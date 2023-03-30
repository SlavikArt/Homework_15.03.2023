#include "Wheels.h"

Wheels::Wheels() : brand(""), diameter(0.0), forWinter(false) {}

Wheels::Wheels(string brand, double diameter, bool forWinter)
    : brand(brand), diameter(diameter), forWinter(forWinter) {}

void Wheels::Print()
{
    cout << "Brand: " << brand << "\n";
    cout << "Diameter: " << diameter << "\n";
    cout << "For winter: " << boolalpha << forWinter << "\n";
}
