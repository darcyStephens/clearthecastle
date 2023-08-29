#ifndef VEHICLE_H
#define VEHICLE_H
#include <string>
#include <iostream>
#include <ctime>

class Vehicle
{
    protected:
    //define member variables
    std::time_t timeOfEntry;
    int ID;

    public:
    // create constructors
    Vehicle();
    Vehicle(int pID);
    // create methods
    int getID();
    int getParkingDuration();

};
#endif