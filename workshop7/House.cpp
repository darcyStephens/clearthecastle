#include "Appliance.h"
#include "House.h"
#include <string>
#include <iostream>

House::House()
{
    _numAppliances = 0;
    _maxNumOfAppliances = 0;
    _count = 0;
    appliance = nullptr;
}

House::House(int numOfAppliances, int maxNumOfAppliances)
{
    _count = 0;
    _numAppliances = numOfAppliances;
    _maxNumOfAppliances = maxNumOfAppliances;
    appliance = new Appliance*[maxNumOfAppliances];
}

bool House::addAppliance(Appliance* app)
{
    if (_numAppliances < _maxNumOfAppliances) 
    {
        appliance[_count] = app;
        _count++;
        
        return true;
    }
    return false;
}

double House::getTotalPowerConsumption()
{
    double totalPowerConsumption;
    for(int i = 0; i< _count; i++)
    {
        totalPowerConsumption += appliance[i]->getPowerConsumption();
        
    }
    return totalPowerConsumption;
}