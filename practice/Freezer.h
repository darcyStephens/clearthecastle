#ifndef FREEZER_H
#define FREEZER_H
#include "App.h"
#include <string>


class Freezer: public App
{
    protected:
    double _volume;


    public:
    Freezer();
    Freezer(int powerRating, double volume);
    void setVolume(double volume);
    double getVolume();
    double getPowerConsumption();



};

#endif