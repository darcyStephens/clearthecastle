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

void University::addCourse(int id, std::string name)
{
    Course course(id, name);
    CourseArray.push_back(course);

}