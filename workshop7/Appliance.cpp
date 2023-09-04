#include "Appliance.h"
#include <string>
#include <iostream>

Appliance::Appliance()
{
    int _powerRating = 0;
    bool _isOn = false;
}

Appliance::Appliance(int powerRating)
{
    _powerRating = powerRating;
    _isOn = false;
    
}

void Appliance::turnOn()
{
    _isOn = true;
}

void Appliance::turnOff()
{
    _isOn = false;
}

int Appliance::get_powerRating()
{
    return _powerRating;
}

bool Appliance::get_isOn()
{
    return _isOn;
}

int Appliance::set_powerRating(int number)
{
    _powerRating = number;
    return _powerRating;

}

bool Appliance::set_isOn(bool state)
{
    return _isOn = state;

}

double Appliance::getPowerConsumption(){
    return 0;
}