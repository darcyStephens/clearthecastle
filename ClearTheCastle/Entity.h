#ifndef ENTITY_H
#define ENTITY_H
#include <string>

class Entity
{
    protected:
    std::string name;
    int location[2];

    public:
    std::string getName();
    int* getLocation();
};

#endif // ENTITY_H
