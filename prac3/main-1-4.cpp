#include <iostream>
#include "Person.h"


using namespace std;

extern PersonList shallowCopyPersonList(PersonList pl);


int main(){
    PersonList pl;
    pl.people = new Person[1];
    pl.numPeople = 1;
    pl.people[0].age = 0;
    pl.people[0].name = string("John Doe");
    PersonList pl2 = shallowCopyPersonList(pl);

}