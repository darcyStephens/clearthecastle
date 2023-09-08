#include "AirVehicle.h"
#include "Helicopter.h"
#include <iostream>
#include <string>

int main()
{
    Helicopter choppa(1000, "ram");
    choppa.fly(30, 10);
    return 0;

}