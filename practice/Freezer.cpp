#include "App.h"
#include "Freezer.h"
#include <string>
#include <iostream>

Freezer::Freezer()
{
    _volume = 0;
}

Freezer::Freezer(int powerRating, double volume)
{
    _powerRating = powerRating;
    _volume = volume;
}

void Freezer::setVolume(double volume)
{
    _volume = volume;
}

double Freezer::getVolume()
{
    return _volume;
}

double Freezer::getPowerConsumption()
{
    double powerConsumption = _powerRating * 24 * (_volume/100);
    return powerConsumption;
}
