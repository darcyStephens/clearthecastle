#include <iostream>
#include <string>
#include "Gradebook.h"

Gradebook::Gradebook()
{
    GradesArray = {};
}

Gradebook::Gradebook(int student_ID)
{
    GradesArray = {};
    this->student_ID = student_ID;
}



void Gradebook::addGrade(int student_ID, int course_ID , std::string assignment, int value)
{
    Grade grade(student_ID,course_ID ,assignment, value);

    GradesArray.push_back(grade);
}
