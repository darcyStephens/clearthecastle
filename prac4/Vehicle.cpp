#include <string>
#include <iostream>
#include <ctime>
#include "Vehicle.h"

// creating default constructor
Vehicle::Vehicle()
{
    std::time_t timeOfEntry = time(0);
    ID = 0;
}

//creating the constuctor passing in ID
Vehicle::Vehicle(int pID)
{
    timeOfEntry = time(0);
    ID = pID;
}

int Vehicle::getID()
{
    return ID;
}

int Vehicle::getParkingDuration()
{
    int timeNow = time(0);
    int parkingDuration = (timeNow - timeOfEntry) * 0.85;
    return parkingDuration;

}
