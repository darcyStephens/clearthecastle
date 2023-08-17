#include<iostream>
#include"Person.h"

PersonList createPersonList(int n){
    PersonList list;
    list.numPeople = n;
    list.people = new Person[n];
    for(int i = 0; i<n; i++){
        list.people[i].name = "Jane Doe";
        list.people[i].age =1;

    }
    return list;
}

int main() {
    int n = 3;
    PersonList List = createPersonList(n);

    // Print names and ages from the created list
    for (int i = 0; i < n; i++) {
        std::cout << "Person " << i + 1 << ": Name = " << List.people[i].name
                  << ", Age = " << List.people[i].age << std::endl;
    }

    // Clean up memory
    delete[] List.people;

    return 0;
}