#include <iostream>
#include <string>
extern void print_binary_str(std::string decimal_number)
{
    int divisor;
    int remainder[20];
    int i = 0, counter = 0;

    int int_num = stoi(decimal_number);
    divisor = 2;

    while (int_num > 0)
    {

       // std::cout << " Quotient =  " << int_num << std::endl;

        remainder[i] = int_num % divisor;
        int_num = int_num / divisor;

        i++;
        counter++;
    }
    for (int j = counter; j--; j > 0)
    {
        std::cout << remainder[j];
    }
    std::cout << "\n"
              << std::endl;


}