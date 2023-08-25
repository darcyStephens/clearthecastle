#ifndef BIKE_H

#define BIKE_H

#include <string>

 
using namespace std;



 

class Bike {

private:

    std::string _brand;

    int _code;

public:

Bike(); //default constructor

Bike(std::string brand, int code); //constructor with members

std::string getBrand(); // defining get_instrument function

int getCode(); // defining get_experience function

};

#endif