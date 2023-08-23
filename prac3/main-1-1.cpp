#include <iostream>
#include "Person.h"

using namespace std;

extern Person* createPersonArray(int n);


int main(){
    Person *people = createPersonArray(3);

    for(int i = 0; i < 3; i++){
        cout << "Name " << people[i].name << " " <<  "Age " << people[i].age << endl;
    }

    delete [] people;
}