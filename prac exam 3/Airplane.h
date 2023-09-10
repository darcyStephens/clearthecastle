#ifndef AIRPLANE_H
#define AIRPLANE_H
#include "AirVehicle.h"
#include <iostream>
#include <string>


class Airplane: public AirVehicle
{
    protected:
    int numPassengers;


    public:
    Airplane();
    Airplane(int w, int p);
    void fly(int headwind, int minutes);
    void reducePassengers(int x);

    int get_numPassengers();
    
    

};

#endif