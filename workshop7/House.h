#ifndef HOUSE_H
#define HOUSE_H
#include "Appliance.h"
#include <string>

class House: public Appliance
{
    protected:
    int _numAppliances;
    int _maxNumOfAppliances;
    int _count;

    public:
    Appliance** appliance;
    House();
    House(int numOfAppliances);
    bool addAppliance(Appliance* appliance);
    double getTotalPowerConsumption();



};

#endif