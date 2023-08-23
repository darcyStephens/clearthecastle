#include "Musician.h"

 

using namespace std;

 

Musician::Musician() { //giving meaning to the default constructor

    _instrument = "null";

    _experience = 0;

}

Musician::Musician(std::string instrument, int experience): //giving meaning to the member constructor

    _instrument(instrument), _experience(experience){

 

    }

std::string Musician::get_instrument(){ //giving meaning to the function

    return _instrument;

}

 

int Musician::get_experience(){ //giving meaning to the function

    return _experience;

}