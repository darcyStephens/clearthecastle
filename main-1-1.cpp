#include "AirVehicle.h"

int main()
{
    AirVehicle plane(20);


    plane.set_fuel(50);
    plane.get_fuel();
    plane.refuel();
    plane.set_numberOfFlights(5);
    plane.get_numberOfFlights();
    plane.set_weight(22);
    return 0;

}