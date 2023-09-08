#include "AirVehicle.h"
#include "Airplane.h"

int main()
{
    Airplane ces(100, 12);
    ces.fly(40, 10);
    ces.reducePassengers(1);
    return 0;
}