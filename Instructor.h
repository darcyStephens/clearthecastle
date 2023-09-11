#ifndef INSTRUCTOR_H
#define INSTRUCTOR_H
#include <iostream>
#include <string>
#include "Person.h"

class Instructor: public Person
{
    private:
    std::string name;

    public:
    Instructor(std::string name);


};

#endif