#include "App.h"
#include "TV.h"
#include <iostream>

TV::TV()
{
    _powerRating = 0;
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
    std::cout << powerConsumption << std::endl;
    return powerConsumption;
}