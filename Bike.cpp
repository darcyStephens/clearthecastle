#include "Bike.h"

 

using namespace std;

 

Bike::Bike() { //giving meaning to the default constructor

    _brand = "";

    _code = 0;

}

Bike::Bike(std::string brand, int code): //giving meaning to the member constructor

    _brand(brand), _code(code){

 

    }

std::string Bike::get_brand(){ //giving meaning to the function

    return _brand;

}

 

int Bike::get_code(){ //giving meaning to the function

    return _code;

}