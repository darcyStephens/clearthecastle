#ifndef MOTORBIKE_H
#define MOTORBIKE_H
#include <string>
#include <iostream>
#include <ctime>
#include "Vehicle.h"

class Motorbike: public Vehicle
{
    public:
    Motorbike();
    Motorbike(int ID);
    int getParkingDuration();
};

#endif