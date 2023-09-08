#include "AirVehicle.h"
#include "Helicopter.h"
#include <string>

Helicopter::Helicopter()
{
    int _weight = 0;
    int _numberOfFlights = 0;
    int _fuel = 0;
    std::string name = "";
}

Helicopter::Helicopter(int w, std::string n)
{
    int _weight = w;
    int _numberOfFlights = 0;
    int _fuel = 100;
    std::string name = n;
}

void Helicopter::fly(int headwind, int minutes)
{
    int sub40_fuel = (minutes * 0.18);
    int _fuelUsed = (minutes * 0.4);
    double excessWeight = 0;

    for (int j = 5670; j < _weight; j++)
    {
        excessWeight += 0.01;
    }

    int heavySub40 = (0.18 * minutes) - (excessWeight * minutes);
    int heavyAbove40 = (minutes * 0.4) - (excessWeight * minutes);

    // Calculate remaining fuel after the flight
    int remainingFuel1 = _fuel - _fuelUsed;
    int remainingFuel2 = _fuel - sub40_fuel;
    int remainingFuel3 = _fuel - heavySub40;
    int remainingFuel4 = _fuel -heavyAbove40;

    if (remainingFuel1 < (_fuel * 0.2))
    {
        // Helicopter won't take off if it finishes with less than 20% fuel
        return;
    }
     if (remainingFuel2 < (_fuel * 0.2))
    {
        // Helicopter won't take off if it finishes with less than 20% fuel
        return;
    }
     if (remainingFuel3 < (_fuel * 0.2))
    {
        // Helicopter won't take off if it finishes with less than 20% fuel
        return;
    }
      if (remainingFuel4 < (_fuel * 0.2))
    {
        // Helicopter won't take off if it finishes with less than 20% fuel
        return;
    }

    if(headwind < 40 && _weight < 5670 )
    {
        _fuel -= sub40_fuel;
    }

     if(headwind > 40 && _weight < 5670 )
    {
        _fuel -= _fuelUsed;
    }

    if(headwind < 40 && _weight > 5670 )
    {
        _fuel -= heavySub40;
    }

    if(headwind > 40 && _weight > 5670 )
    {
        _fuel -= heavyAbove40;
    }


    _numberOfFlights++;
}

std::string Helicopter::get_name()
{
    return _name;
}

 void Helicopter::set_name(std::string n)
 {
    _name = n;
 }
