#ifndef CAR_H
#define CAR_H
#include <string>
#include <iostream>
#include <ctime>
#include "Vehicle.h"

class Car: public Vehicle
{
    public:
    Car();
    Car(int ID);
    int getParkingDuration();
};

#endif