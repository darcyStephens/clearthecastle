#include <iostream>

#include "Bike.h"

int main() {

Bike b1; //creating instance with default constructor

std::cout << "Default brand: " << b1.get_brand() << ", Default code: " << b1.get_code() << std::endl; // calling functions of instance made with default constructor

Bike b2("super", 56); // creating instance with constructor with members

std::cout << "Brand: " << b2.get_brand() << ", Code: " << b2.get_code() << std::endl;// calling get functions to display instrument



return 0;

}