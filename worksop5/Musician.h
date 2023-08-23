#ifndef MUSICIAN_H

#define MUSICIAN_H

#include <string>

 

using namespace std;

 

class Musician {

private:

    std::string _instrument;

    int _experience;

public:

Musician(); //default constructor

Musician(std::string instrument, int experience); //constructor with members

std::string get_instrument(); // defining get_instrument function

int get_experience(); // defining get_experience function

};

#endif