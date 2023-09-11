#ifndef STUDENT_H
#define STUDENT_H
#include <iostream>
#include <string>
#include "Person.h"
#include "Grade.h"

class Student: public Person
{
    private:
    int ID;

    public:
    Student();
    Student(int ID, std::string name);
};

#endif