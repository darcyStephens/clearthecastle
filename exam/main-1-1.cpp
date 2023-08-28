#include <iostream>

#include "Bike.h"

int main() {

Bike b1; //creating instance with default constructor
b1.getBrand();
b1.getCode();

Bike b2("brand", 1);
b2.getBrand();
b2.getCode();

return 0;

}