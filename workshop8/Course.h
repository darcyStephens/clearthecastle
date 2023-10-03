#ifndef COURSE_H
#define COURSE_H
#include <iostream>
#include <string>
#include <vector>
#include "University.h"
#include "Person.h"
class Course
{
    protected:
    Person ** persons;
    std::string CourseName;
    int courseID;
    std::vector<Person>PersonArray;

    public:
    Course();
    Course(int courseID, std::string CourseName);
    void addPerson(Person *p);
};



#endif