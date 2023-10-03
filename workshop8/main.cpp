#include <iostream>
#include <string>
#include <vector>
#include "University.h"
#include "Course.h"
#include "Instructor.h"
#include "Student.h"
#include "Grade.h"
#include "Gradebook.h"
#include "Person.h"


int main()
{
    Person *p1 = new Person("Darcy");
    Student s1(188, "Darcy");
    Instructor I1("john");
    Course oop = Course(1012, "OOP");
    oop.addPerson(p1);
    Grade G1(188, 1012, "workshop", 96);
    Gradebook GB1 = Gradebook(188);
    GB1.addGrade(188,1012,"workshop", 95);

    return 0;





}