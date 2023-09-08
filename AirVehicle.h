#ifndef AIRVEHICLE_H
#define AIRVEHICLE_H
#include <iostream>
#include <string>
class AirVehicle
{
    protected:
    int _weight;
    int _numberOfFlights;
    float _fuel;


    public:
    AirVehicle();
    AirVehicle(int w);
    void refuel();
    void virtual fly(int headwind, int minutes)
    {
        _numberOfFlights++;
    };
    int get_weight();
    void set_weight(int w);
    int get_fuel();
    void set_fuel(int f);
    int get_numberOfFlights();
    void set_numberOfFlights(int n);

};

#endif