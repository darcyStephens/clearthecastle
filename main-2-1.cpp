#include<iostream>
#include<string>
extern void print_binary_str(std::string decimal_number);

int main(void){
    std::string str1 = "11";
    print_binary_str(str1);
    return 0;
}