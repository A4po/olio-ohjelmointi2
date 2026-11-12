
#include "Car.h"
#include <iostream>

using namespace std;

// Asetetaan auton merkki
void Car::setBrand(string b)
{
    brand = b;
}

// Asetetaan auton malli
void Car::setModel(string m)
{
    model = m;
}

// Asetetaan auton vuosimalli
void Car::setYearModel(int y)
{
    yearModel = y;
}

// Tulostetaan auton tiedot 
void Car::printData()
{
    cout << "Merkki: " << brand << endl;
    cout << "Malli: " << model << endl;
    cout << "Vuosimalli: " << yearModel << endl;
}
