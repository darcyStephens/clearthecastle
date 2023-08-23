#include <iostream>

#include "Musician.h"

int main() {

Musician m1; //creating instance with default constructor

std::cout << "Default instrument: " << m1.get_instrument() << ", Default experience: " << m1.get_experience() << std::endl; // calling functions of instance made with default constructor

Musician m2("guitar", 5); // creating instance with constructor with members

std::cout << "Instrument: " << m2.get_instrument() << ", Experience: " << // calling get functions to display instrument

m2.get_experience() << std::endl;

return 0;

}