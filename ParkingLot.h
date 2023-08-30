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
    ParkingLot(int maximum);
    ~ParkingLot();
    int getCount();
    void parkVehicle(Vehicle* vehicleOBJ);
    void unparkVehicle(int ID);
    int countOverstayingVehicles(int maxParkingDuration);



    //Vehicle** vehicles = new Vehicle*[_maximum];   put in cpp



};


#endif