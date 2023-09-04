#ifndef FRIDGE_H
#define FRIDGE_H
#include "Appliance.h"
#include <string>

class Fridge : public Appliance
{
protected:
    double _volume;

public:
    Fridge();
    Fridge(int powerRating, double volume);
    void setVolume(double volume);
    double getVolume();
    double get_volume();
    double set_volume(double volume);
    double getPowerConsumption();
    
};

#endif