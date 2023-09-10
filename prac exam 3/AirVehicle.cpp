#include "AirVehicle.h"
#include <iostream>
#include <string>
AirVehicle::AirVehicle()
{
    int _weight;
    int _numberOfFlights;
    int _fuel;
}

AirVehicle::AirVehicle(int w)
{
    int _weight = w;
    int _numberOfFlights = 0;
    int _fuel = 100;
}

void AirVehicle::refuel()
{
    _fuel = 100;
}

int AirVehicle::get_weight()
{
    return _weight;
}

void AirVehicle::set_weight(int w)
{
    _weight = w;
}

int AirVehicle::get_fuel()
{
    return _fuel;
}

void AirVehicle::set_fuel(int f)
{
    _fuel = f;
}

int AirVehicle::get_numberOfFlights()
{
    return _numberOfFlights;
}

void AirVehicle::set_numberOfFlights(int n)
{
    _numberOfFlights = n;
}
