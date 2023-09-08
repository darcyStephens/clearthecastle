#ifndef AIRFLEET_H
#define AIRFLEET_H
#include "AirVehicle.h"
#include "Helicopter.h"
#include "Airplane.h"
#include <iostream>
#include <string>
class AirFleet: public AirVehicle
{

    protected:
   
    

    public:
    AirVehicle **fleet;
    AirFleet();

    

    AirVehicle **get_fleet();


};

#endif