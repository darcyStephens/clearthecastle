#include "House.h"
#include "Appliance.h"
#include <iostream>

int main()
{
    Appliance appliance1(100);
    Appliance appliance2(200);
    Appliance appliance3(50);

    House myHouse(3, 3);

    myHouse.addAppliance(&appliance1);
    myHouse.addAppliance(&appliance2);
    myHouse.addAppliance(&appliance3);

    appliance1.turnOn();
    appliance2.turnOn();

    double totalConsumption = myHouse.getTotalPowerConsumption();

    std::cout << "Total Power Consumption in the house: " << totalConsumption << " watts" << std::endl;

    return 0;
}
