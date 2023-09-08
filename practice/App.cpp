#include "App.h"
#include <string>
#include <iostream>

App::App()
{
    _powerRating = 0;
    _isOn = false;
}

App::App(int powerRating)
{
    _powerRating = powerRating;
    _isOn = false;

}

void App::turnOn()
{
    _isOn = true;
}

void App::turnOff()
{
    _isOn = false;
}

int App::get_powerRating()
{
    return _powerRating;
}

void App::set_powerRating(int powerRating)
{
    _powerRating = powerRating;
}

bool App::get_isOn()
{
    return _isOn;

}

void App::set_isOn(bool state)
{
    _isOn = state;
}


