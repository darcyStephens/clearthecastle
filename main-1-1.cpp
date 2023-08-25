#include <iostream>

#include "Bike.h"

int main() {

Bike b1; //creating instance with default constructor
b1.get_brand();
b1.get_code();

Bike b2("brand", 1);
b2.get_brand();
b2.get_code();

return 0;

}