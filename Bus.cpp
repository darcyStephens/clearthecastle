#include <string>
#include <iostream>
#include <ctime>
#include "Vehicle.h"
#include "Bus.h"

Bus::Bus()
{
    ID = 0;
    timeOfEntry = time(0);
}

Bus::Bus(int pID)
{
    ID = pID;
    timeOfEntry = time(0);
}

int Bus::getParkingDuration()
{
    int timeNow = time(0);
    int parkingDuration = (timeNow - timeOfEntry) * 0.75;
    return parkingDuration;

}


