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

ParkingLot::ParkingLot(int maximum, int capacity)
{
    _maximum = maximum;
    _count = capacity;
    vehicles = new Vehicle*[_maximum];
}

ParkingLot::~ParkingLot()
{
    // Deallocate memory for each Vehicle object pointer
    for (int i = 0; i < _count; ++i)
    {
        delete vehicles[i];
    }
    delete[] vehicles; // Deallocate the array of pointers
}

int ParkingLot::getCount()
{
    return _count;
}

bool ParkingLot::parkVehicle(Vehicle* vehicleOBJ)
{
    if(_count < _maximum)
    {
        vehicles[_count] = vehicleOBJ;
        _count++;
        return true;

    }
    else
    {
        std::cout<< "The lot is full" << std::endl;;
        return false;

    }
}

bool ParkingLot::unparkVehicle(int ID)
{
    for(int i = 0; i < _maximum; i++)
    {
        if(vehicles[i]->getID() == ID)
        {
            std::cout<<"unparked vehicle " << ID << std::endl;
            delete vehicles[i];
            return true;
        }


    }
    return false;
}
