
#pragma once
#include <string>

using namespace std;

// Car luokka sisältää auton tiedot
class Car
{
private:
    // Auton jäsenmuuttujat
    string brand;
    string model;
    int yearModel;

public:
    // Metodit auton tietojen asettamiseen
    void setBrand(string);
    void setModel(string);
    void setYearModel(int);

    // Tulostaa auton tiedot
    void printData();
};
