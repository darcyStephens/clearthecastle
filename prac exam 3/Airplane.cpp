#include "AirVehicle.h"
#include "Airplane.h"
#include <iostream>
#include <string>

Airplane::Airplane()
{
    int _weight;
    int _numberOfFlights;
    int _fuel;
    int numPassengers;
}

Airplane::Airplane(int w, int p)
{
    int _weight = w;
    int _numberOfFlights = 0;
    int _fuel = 100;
    int numPassengers = p;
}

void Airplane::reducePassengers(int x)
{
    int remaining_passengers = numPassengers - x;
    if(remaining_passengers < 0)
    {
        numPassengers = 0;
    }
    numPassengers -= x;
    

}


  int Airplane::get_numPassengers()
  {
    return numPassengers;
  }

  void Airplane::fly(int headwind, int minutes )
  { double excessWeight = 0;

    for (int j = 0; j < numPassengers; j++)
    {
        excessWeight += 0.001;
    }
    
    int sub60_fuel = (minutes * 0.25) - (excessWeight * minutes);
    int _fuelUsed = (minutes * 0.5) - (excessWeight * minutes);
   

   

    // Calculate remaining fuel after the flight
    int remainingFuel1 = _fuel - _fuelUsed;
    int remainingFuel2 = _fuel - sub60_fuel;
    

    if (remainingFuel1 < (_fuel * 0.2))
    {
        // plane won't take off if it finishes with less than 20% fuel
        return;
    }
     if (remainingFuel2 < (_fuel * 0.2))
    {
        // plane won't take off if it finishes with less than 20% fuel
        return;
    }
    

    if(headwind < 60)
    {
        _fuel -= sub60_fuel;
    }

     if(headwind > 60 )
    {
        _fuel -= _fuelUsed;
    }

   


    _numberOfFlights++;
  }