#include "Grade.h"
#include <iostream>
#include <string>

Grade::Grade(int student_ID, int course_ID , std::string assignment, int value)
{
    this->assignment = assignment;
    this->value = value;
    this-> studentID = studentID;
    this->courseID = courseID;

};

Grade::Grade()
{
    this->assignment = "";
    this->value = 0;

};