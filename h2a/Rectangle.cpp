
#include "Rectangle.h"

// Asetetaan suorakulmion leveys
void Rectangle::setWidth(double w)
{
    width = w;
}

// Asetetaan suorakulmion korkeus
void Rectangle::setHeight(double h)
{
    height = h;
}

// Lasketaan ja palautetaan pinta-ala
double Rectangle::getArea()
{
    return width * height;
}

// Lasketaan ja palautetaan ympärysmitta
double Rectangle::getCircum()
{
    return 2 * (width + height);
}
