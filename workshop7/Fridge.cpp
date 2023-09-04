#include "Appliance.h"
#include "Fridge.h"
#include <string>
#include <iostream>

Fridge::Fridge()
{
    _volume = 0;
}

Fridge::Fridge(int powerRating, double volume)
{
    _powerRating = powerRating;
    _volume = volume;
}

void Fridge::setVolume(double volume)
{
    _volume = volume;
}

double Fridge::getVolume()
{
    return _volume;
}

double Fridge::getPowerConsumption()
{
    double powerConsumption = _powerRating * 24 * (_volume/100);
    return powerConsumption;
}