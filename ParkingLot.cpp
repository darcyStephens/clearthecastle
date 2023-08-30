#include <string>
#include <iostream>
#include <ctime>
#include "ParkingLot.h"

ParkingLot::ParkingLot()
{
    _maximum = 0;
    _count = 0;
    vehicles = nullptr;

}

ParkingLot::ParkingLot(int maximum)
{
    _maximum = maximum;
    _count = 0;
    vehicles = new Vehicle*[_maximum];
}

ParkingLot::~ParkingLot()
{
    // Deallocate memory for each Vehicle object pointer
    for (int i = 0; i < _count; i++)
    {
        delete vehicles[i];
    }
    delete[] vehicles; // Deallocate the array of pointers
}

int ParkingLot::getCount()
{
   // std::cout<< "Number of vehicles parked: " << _count << std::endl;
    return _count;
}

void ParkingLot::parkVehicle(Vehicle* vehicleOBJ)
{
    if(_count < _maximum)
    {
        vehicles[_count] = vehicleOBJ;
        _count++;
        //std::cout<<"Number of vehicles parked: " << _count <<std::endl;
        

    }
    if(_count == _maximum)
    {
        std::cout<< "The lot is full" << std::endl;;
        

    }
}

void ParkingLot::unparkVehicle(int ID)
{
    for(int i = 0; i < _maximum; i++)
    {
        if(vehicles[i]->getID() == ID)
        {
            delete vehicles[i];
            //std::cout<<"unparked vehicle " << ID << std::endl;
            
           
        }
        


    }
    
}

int ParkingLot::countOverstayingVehicles(int maxParkingDuration)
{
    int numOfOvers = 0;
    for(int i = 0; i < _maximum; i++)
    {
        if(vehicles[i]->getParkingDuration() > maxParkingDuration)
        {
            numOfOvers++;
           
        }


    }
    return numOfOvers;
   

}
