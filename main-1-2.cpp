#include "Bike.h"
#include "Bike_yard.h"
#include <iostream>

int main() {
    Bike_yard yard(5);

    Bike bike1("BrandA", 1);
    Bike bike2("BrandB", 2);
    Bike bike3("BrandA", 1);

    yard.add_Stock(bike1);
    yard.add_Stock(bike2);
    yard.add_Stock(bike3);

    std::cout << "Total Stock Count: " << yard.get_Total_Stock_Count() << std::endl;
    std::cout << "BrandA Count: " << yard.get_Stock_Quantity(1) << std::endl;
    std::cout << "BrandB Count: " << yard.get_Stock_Quantity(2) << std::endl;

    Bike *stockList = yard.get_Current_Stock_List();
    for (int i = 0; i < yard.get_Total_Stock_Count(); ++i) {
        std::cout << "Bike " << i + 1 << ": Brand = " << stockList[i].get_brand() << ", Code = " << stockList[i].get_code() << std::endl;
    }

    return 0;
}
