#ifndef DWELLING_H
#define DWELLING_H
#include "App.h"

class Dwelling: public App
{
    protected:
    int _numApp;
    int _maximum;
    int _count;
    App ** apps;

    public:
    Dwelling();
    Dwelling(int numApp);
    bool addApp(App * app);
    double getTotalPowerConsumption();


};
#endif DWELLING_H
