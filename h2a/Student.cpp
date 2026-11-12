
#include "Student.h"

// Asetetaan opiskelijan nimi
void Student::setName(string n)
{
    name = n;
}

// Asetetaan opiskelijanumero
void Student::setStudentNumber(int number)
{
    studentNumber = number;
}

// Asetetaan opiskelijan keskiarvo
void Student::setAverage(double avg)
{
    average = avg;
}

// Palautetaan opiskelijan nimi
string Student::getName()
{
    return name;
}

// Palautetaan opiskelijanumero
int Student::getStudentNumber()
{
    return studentNumber;
}

// Palautetaan opiskelijan keskiarvo
double Student::getAverage()
{
    return average;
}
