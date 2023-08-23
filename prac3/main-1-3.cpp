#include <iostream>
#include "Person.h"

using namespace std;

extern PersonList deepCopyPersonList(PersonList pl);


int main(){
    PersonList pl;
    pl.people = new Person();
    pl.people[0].age = 0;
    pl.people[0].name = "John Doe";
    pl.numPeople = 1;
    PersonList pl2 = deepCopyPersonList(pl);

    for(int i = 0; i < 1; i++){
        cout << "Name " << pl2.people[i].name << " " <<  "Age " << pl2.people[i].age << endl;
    }

}