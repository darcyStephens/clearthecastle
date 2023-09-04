#include "Appliance.h"

#include <iostream>
int main()
{
    Appliance spork(9);
    spork.turnOn();
    spork.get_isOn();
    spork.set_powerRating(7);
    spork.get_powerRating();
    
}