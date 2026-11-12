
#pragma once

// Rectangle-luokka suorakulmion laskemista varten
class Rectangle
{
private:
    // Suorakulmion leveys ja korkeus
    double width;
    double height;

public:
    // Asetetaan suorakulmion mitat
    void setWidth(double);
    void setHeight(double);

    // Lasketaan pinta-ala ja ympärysmitta
    double getArea();
    double getCircum();
};
