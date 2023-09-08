#include "App.h"
#include "Freezer.h"
#include <string>
#include <iostream>

int main()
{
    Freezer chest(4, 3.3);
    chest.setVolume(5);
    chest.getVolume();
    chest.getPowerConsumption();
}