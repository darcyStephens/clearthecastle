#include <iostream>
#include <string>
#include <vector>
#include "University.h"
#include "Course.h"
University::University(std::string name, std::string location)
{
    this -> name = name;
    this -> location = location;
    CourseArray = {};
}

void University::addCourse(int id, std::string name, int courseID, std::string courseName)
{
    Course course(courseID, courseName);
    CourseArray.push_back(course);

}