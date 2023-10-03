#ifndef UNIVERSITY_H
#define UNIVERSITY_H
#include <iostream>
#include <string>
#include <vector>
#include "Course.h"

class University
{

private:
   std::string name;
   std::string location;
   std::vector<Course> CourseArray;
   

public:
   University(std::string name, std::string location);
   void addCourse(int id, std::string name);
};

#endif