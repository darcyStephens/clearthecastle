#include <string>
#include <iostream>
#include <ctime>
#include "Vehicle.h"
#include "Car.h"

Car::Car()
{
    ID = 0;
    timeOfEntry = time(0);
}

Car::Car(int pID)
{
    ID = pID;
    timeOfEntry = time(0);
}

int Car::getParkingDuration()
{
    int timeNow = time(0);
    int parkingDuration = (timeNow - timeOfEntry) * 0.9;
    return parkingDuration;

}


