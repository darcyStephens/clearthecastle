#include "Appliance.h"
#include "TV.h"
#include <string>
#include<iostream>

TV::TV()
{
    _screenSize = 0;
}

TV::TV(int powerRating, double screenSize)
{
   _powerRating = powerRating;
    _screenSize = screenSize;
}

void TV::setScreenSize(double screenSize)
{
    _screenSize = screenSize;
}

double TV::getScreenSize()
{
    return _screenSize;
}

double TV::getPowerConsumption()
{
    double powerConsumption = _powerRating * (_screenSize/10);
    return powerConsumption;

}



