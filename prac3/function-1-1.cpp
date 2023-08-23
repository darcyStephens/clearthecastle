#include<iostream>
#include "Person.h"
Person* createPersonArray(int n){
    Person* new_person = new Person[n];
    for(int i =0; i<n; i++){
        new_person[i].name = "John Doe";
        new_person[i].age = 0;
    }
    return new_person;
}

