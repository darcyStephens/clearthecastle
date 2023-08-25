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

     yard.get_Total_Stock_Count();
     yard.get_Stock_Quantity(1);
    yard.get_Stock_Quantity(2);

    Bike *stockList = yard.get_Current_Stock_List();
    for (int i = 0; i < yard.get_Total_Stock_Count(); i++) {
        stockList[i].getBrand();
        stockList[i].getCode();
    }

    return 0;
}
