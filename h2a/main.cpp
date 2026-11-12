
#include <iostream>
#include <memory>
#include "Car.h"
#include "Rectangle.h"
#include "Student.h"

using namespace std;

int main()
{
    // Luodaan Car-olio pinomuistiin
    Car car;

    // Asetetaan auton tiedot
    car.setBrand("Volkswagen");
    car.setModel("Golf GTI");
    car.setYearModel(2001);

    // Tulostetaan auton tiedot
    car.printData();

    cout << endl;

    // Luodaan Rectangle-olio kekomuistiin
    Rectangle* rectangle = new Rectangle();

    // Asetetaan suorakulmion mitat
    rectangle->setWidth(5.0);
    rectangle->setHeight(3.0);

    // Tulostetaan pinta-ala ja ympärysmitta
    cout << "Pinta-ala: " << rectangle->getArea() << endl;
    cout << "Ymparysmitta: " << rectangle->getCircum() << endl;

    // Tuhotaan Rectangle-olio
    delete rectangle;

    cout << endl;

    // Luodaan Student-olio smart pointerilla
    unique_ptr<Student> student = make_unique<Student>();

    // Asetetaan opiskelijan tiedot
    student->setName("Matti Meikalainen");
    student->setStudentNumber(12345);
    student->setAverage(4.2);

    // Tulostetaan opiskelijan tiedot gettereilla
    cout << "Opiskelijan nimi: " << student->getName() << endl;
    cout << "Opiskelijanumero: " << student->getStudentNumber() << endl;
    cout << "Keskiarvo: " << student->getAverage() << endl;

    // Smart pointer vapauttaa muistin automaattisesti

    return 0;
}
