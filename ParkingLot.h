#ifndef PARKINGLOT_H
#define PARKINGLOT_H
#include <string>
#include <iostream>
#include <ctime>
#include "Vehicle.h"
class ParkingLot: public Vehicle
{
    private:
    int _maximum;
    int _count;
    Vehicle** vehicles;
    

    public:
    ParkingLot();
    ParkingLot(int maximum, int capacity);
    ~ParkingLot();
    int getCount();
    bool parkVehicle(Vehicle* vehicleOBJ);
    bool unparkVehicle(int ID);



    //Vehicle** vehicles = new Vehicle*[_maximum];   put in cpp



};


#endif