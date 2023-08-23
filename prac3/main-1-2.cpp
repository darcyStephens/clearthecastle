#include <iostream>
#include "Person.h"

using namespace std;

extern PersonList createPersonList(int n);


int main(){
    PersonList personList = createPersonList(3);

    for(int i = 0; i < 3; i++){
        cout << "Name " << personList.people[i].name << " " <<  "Age " << personList.people[i].age << endl;
    }

}