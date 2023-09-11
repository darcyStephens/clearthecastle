#ifndef GRADE_H
#define GRADE_H
#include <iostream>
#include <string>


class Grade
{
    private:
    std::string assignment;
    int value;
    int studentID;
    int courseID;
    

    public:
    Grade();
    Grade(int student_ID, int course_ID , std::string assignment, int value);

};

#endif