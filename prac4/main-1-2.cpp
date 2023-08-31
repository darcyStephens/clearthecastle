#include <iostream>
#include <vector>
#include "Vehicle.h"
#include "Motorbike.h"
#include "Car.h"
#include "Bus.h"
#include "ParkingLot.h"

int main()
{
    int maximum = 10;
    int unparkID;
    std::cout << "Enter the 10 vehicles: ";

    ParkingLot parkingLot(maximum);

    // Vehicle** vehicles = new Vehicle*[10]; // Dynamically allocate an array of pointers

    for (int i = 0; i < maximum; i++)
    {
        int vehicleType, ID;
        std::cout << "Enter vehicle type (1: Motorbike, 2: Car, 3: Bus): ";
        std::cin >> vehicleType;
        std::cout << "Enter vehicle ID: ";
        std::cin >> ID;

        // Create a new Vehicle object based on user input
        if (vehicleType == 1)
        {
            Vehicle *newVehicle = new Motorbike(ID);
            parkingLot.parkVehicle(newVehicle);
        }
        else if (vehicleType == 2)
        {
            Vehicle *newVehicle = new Car(ID);
            parkingLot.parkVehicle(newVehicle);
        }
        else if (vehicleType == 3)
        {
            Vehicle *newVehicle = new Bus(ID);
            parkingLot.parkVehicle(newVehicle);
        }
    }

    std::cout << "enter a vehicle ID to unpark it: ";
    std::cin >> unparkID;
    parkingLot.unparkVehicle(unparkID);

    



    return 0;
}