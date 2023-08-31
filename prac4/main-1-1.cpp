#include <iostream>
#include <vector>
#include "Vehicle.h"
#include "Motorbike.h"
#include "Car.h"
#include "Bus.h"

int main() {
    int numVehicles;
    std::cout << "Enter the number of vehicles: ";
    std::cin >> numVehicles;

    Vehicle** vehicles = new Vehicle*[numVehicles]; // Dynamically allocate an array of pointers

    for (int i = 0; i < numVehicles; ++i) {
        int vehicleType, ID;
        std::cout << "Enter vehicle type (1: Motorbike, 2: Car, 3: Bus): ";
        std::cin >> vehicleType;
        std::cout << "Enter vehicle ID: ";
        std::cin >> ID;

        // Create a new Vehicle object based on user input
        if (vehicleType == 1) {
            vehicles[i] = new Motorbike(ID);
        } else if (vehicleType == 2) {
            vehicles[i] = new Car(ID);
        } else if (vehicleType == 3) {
            vehicles[i] = new Bus(ID);
        }
    }

    // Iterate over the array and call getParkingDuration for each vehicle
    for (int i = 0; i < numVehicles; ++i) {
        int parkingDuration = vehicles[i]->getParkingDuration();
        int vehicleID = vehicles[i]->getID();
        std::cout << "Vehicle ID: " << vehicleID
                  << ", Parking Duration: " << parkingDuration << " seconds" << std::endl;
        delete vehicles[i]; // Remember to delete dynamically allocated objects
    }

    delete[] vehicles; // Don't forget to delete the array itself

    return 0;
}
