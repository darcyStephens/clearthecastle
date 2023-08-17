#include<iostream>
#include"Person.h"

PersonList shallowCopyPersonList(PersonList pl){
    PersonList A;
    A.numPeople = pl.numPeople;
    A.people = pl.people;
}