#include "ParkingLot.h"
#include <iostream>
#include <typeinfo>
#include "Bus.h"
#include "Car.h"
#include "Motorbike.h"
#include "Vehicle.h"
using namespace std;

ParkingLot::ParkingLot(int maximum) {
  this->_maximum = maximum;
  this->_count=0;
  vehicles = new Vehicle[maximum];
}

int ParkingLot::getCount() { return _count; }

void ParkingLot::parkVehicle(Vehicle* vehicleOBJ) {
  if (_count < _maximum) {
    vehicles[_count] = *vehicleOBJ;
    _count++;
  } else {
    cout << "The lot is full" << endl;
  }
}
void ParkingLot::unparkVehicle(int ID) {
 int index = -1;
  for (int i = 0; i < _count; i++) {
    if (vehicles[i].getID() == ID) {
      index = i;
      break;
    }
  }

  if (index != -1) {
    for (int i = index; i < _count - 1; i++) {
      vehicles[i] = vehicles[i + 1];
    }
    _count--;
  } else {
    cout << "Vehicle not in the lot" << endl;
  }
}

int ParkingLot::countOverstayingVehicles(int maxDuration) {
    int count = 0;

    for (int i = 0; i < _count; i++) {
        if (vehicles[i].getParkingDuration() > maxDuration) {
            count++;
        }
    }

    return count;
}


ParkingLot::~ParkingLot() {
  delete[] vehicles;
}