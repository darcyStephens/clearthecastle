#include "Entity.h"
#include <iostream>
#include <string>

std::string Entity::getName()
{
    return name;
};

int* Entity::getLocation()
{
    return location;
};