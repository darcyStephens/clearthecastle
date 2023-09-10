#ifndef HELICOPTER_H
#define HELICOPTER_H
#include "AirVehicle.h"
#include <iostream>
#include <string>


class Helicopter: public AirVehicle
{
    protected:
    std::string _name;


    public:
    Helicopter();
    Helicopter(int w, std::string n);
    void fly(int headwind, int minutes);
    std::string get_name();
    void set_name(std::string n);
    

};

#endif