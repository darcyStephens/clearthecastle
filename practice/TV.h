#ifndef TV_H
#define TV_H
#include "App.h"

class TV: public App
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