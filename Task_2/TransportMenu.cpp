#include "Airplane.h"
#include "Ship.h"
#include "Truck.h"
#include "Bicycle.h"
#include "Automobile.h"
#include "TransportMenu.h"

TransportMenu::TransportMenu() : transport(0) {}

TransportMenu::TransportMenu(vector<Transport*> transport) 
	: transport(transport) {}

void TransportMenu::Menu()
{
    int choice;
    do
    {
        system("cls");

        cout << "--Transport Menu--" << "\n";
        cout << "1. Add transport" << "\n";
        cout << "2. Delete transport" << "\n";
        cout << "3. Print all transport" << "\n";
        cout << "0. Exit" << "\n\n";

        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            AddTransport();
            break;
        case 2:
            DeleteTransport();
            break;
        case 3:
            PrintTransport();
            break;
        case 0:
            exit(0);
        default:
            cout << "Invalid choice, please try again." << "\n";
            break;
        }
    } while (choice != 0);
}

void TransportMenu::AddTransport()
{
    int choice;
    do
    {
        system("cls");

        cout << "Select transport type to add:" << "\n";
        cout << "1. Airplane" << "\n";
        cout << "2. Ship" << "\n";
        cout << "3. Truck" << "\n";
        cout << "4. Bicycle" << "\n";
        cout << "5. Automobile" << "\n";
        cout << "\n0. Back to main menu" << "\n\n";

        cout << "Enter your choice: ";
        cin >> choice;

        if (choice == 0)
            break;

        string name;
        double weight;
        double speed;
        double fuelConsumptionPer100Km;

        cout << "Enter a Name: ";
        cin.ignore();
        getline(cin, name);
        cout << "Enter a Weight: ";
        cin >> weight;
        cout << "Enter a Speed: ";
        cin >> speed;
        cout << "Enter a Fuel Consumption: ";
        cin >> fuelConsumptionPer100Km;

        switch (choice)
        {
        case 1:
            transport.push_back(new Airplane(name, weight, speed, fuelConsumptionPer100Km));
            break;
        case 2:
            transport.push_back(new Ship(name, weight, speed, fuelConsumptionPer100Km));
            break;
        case 3:
            transport.push_back(new Truck(name, weight, speed, fuelConsumptionPer100Km));
            break;
        case 4:
            transport.push_back(new Bicycle(name, weight, speed, fuelConsumptionPer100Km));
            break;
        case 5:
            transport.push_back(new Automobile(name, weight, speed, fuelConsumptionPer100Km));
            break;
        case 0:
            return;
        default:
            cout << "Invalid choice, please try again." << "\n";
            break;
        }
    } while (choice != 0);
}

void TransportMenu::DeleteTransport()
{
    int choice;
    do
    {
        system("cls");

        for (int i = 0; i < transport.size(); i++)
        {
            cout << "---" << i << "---\n";
            transport[i]->Print();
        }

        cout << "\n-1. Back to main menu" << "\n\n";

        cout << "Enter your choice: ";
        cin >> choice;

        if (choice == -1)
            break;

        if (choice < 0 || choice >= transport.size())
        {
            cout << "Invalid index, please try again." << "\n";
        }
        else
        {
            delete transport[choice];
            transport.erase(transport.begin() + choice);
        }
    } while (choice != -1);
}

void TransportMenu::PrintTransport()
{
    int choice;
    do
    {
        system("cls");

        for (int i = 0; i < transport.size(); i++)
		        transport[i]->Print();

        cout << "\n0. Back to main menu" << "\n\n";

        cout << "Enter your choice: ";
        cin >> choice;
    } while (choice != 0);
}
