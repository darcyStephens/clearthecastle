#include <string>
#include <iostream>
#include <ctime>
#include "Vehicle.h"
#include "Motorbike.h"

Motorbike::Motorbike()
{
    ID = 0;
    timeOfEntry = time(0);
}

Motorbike::Motorbike(int pID)
{
    ID = pID;
    timeOfEntry = time(0);
}

int Motorbike::getParkingDuration()
{
    int timeNow = time(0);
    int parkingDuration = (timeNow - timeOfEntry) * 0.85;
    return parkingDuration;

}


