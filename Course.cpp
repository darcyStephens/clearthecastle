#include <iostream>
#include <string>
#include "Course.h"

Course::Course()
{
    
    PersonArray = {};
    CourseName = "";
    courseID = 0;

}

Course::Course(int courseID, std::string CourseName)
{
   
    PersonArray = {};
    this -> CourseName  = CourseName;
    this -> courseID = courseID;

}

void Course::addPerson(Person *p)
{
    PersonArray.push_back(*p);
}


