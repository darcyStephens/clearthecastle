#include <iostream>
#include "Addition.h"

class UnitTest
{
public:
    void runTests()
    {
        testAddition();
    }

private:
    void testAddition()
    {
        Addition addition;

        if (addition.add(1, 2) != 3)
        {
            std::cout << "Test 1 failed!" << std::endl;
        }
        else
        {
            std::cout << "Test 1 passed!" << std::endl;
        }

        if (addition.add(2, 2) != 4)
        {
            std::cout << "Test 2 failed!" << std::endl;
        }
        else
        {
            std::cout << "Test 2 passed!" << std::endl;
        }
        if (addition.add(2, 3) != 4)
        {
            std::cout << "Test 3 passed!" << std::endl;
        }
        else
        {
            std::cout << "Test 3 failed!" << std::endl;
        }
    }
};