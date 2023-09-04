#ifndef TV_H
#define TV_H
#include "Appliance.h"
#include <string>
class TV: public Appliance
{
    protected:
    double _screenSize;


    public:
    TV();
    TV(int powerRating, double screenSize);
    void setScreenSize(double screenSize);
    double getScreenSize();
    double getPowerConsumption();


};

#endif