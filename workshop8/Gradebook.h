#ifndef GRADEBOOK_H
#define GRADEBOOK_H
#include <iostream>
#include <string>
#include <vector>

#include "Grade.h"


class Gradebook
{
    private:
    int student_ID;
    std::vector<Grade> GradesArray;

    public:

    Gradebook();
    Gradebook(int student_ID);
    void addGrade(int student_ID, int course_ID , std::string assignment, int value);

};

#endif