
#pragma once
#include <string>

using namespace std;

// Student-luokka opiskelijan tietojen tallentamiseen
class Student
{
private:
    // Opiskelijan jäsenmuuttujat
    string name;
    int studentNumber;
    double average;

public:
    // Setterit opiskelijan tietojen asettamiseen
    void setName(string);
    void setStudentNumber(int);
    void setAverage(double);

    // Getterit opiskelijan tietojen hakemiseen
    string getName();
    int getStudentNumber();
    double getAverage();
};
