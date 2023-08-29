#ifndef BUS_H
#define BUS_H
#include <string>
#include <iostream>
#include <ctime>
#include "Vehicle.h"

class Bus: public Vehicle
{
    public:
    Bus();
    Bus(int ID);
    int getParkingDuration();
};

#endif