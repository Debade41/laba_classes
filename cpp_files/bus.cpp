#include "bus.h"
#include <iostream>

Bus::Bus(std::string brand, int releaseYear, int passengerCapacity,
         int standingPlaces, bool hasWheelchairAccess, double length,
         std::string fuelType, bool hasAirConditioning, bool hasWifi,
         std::string busType, int totalDoors)
    : Vehicle(brand, "BUS", releaseYear),
      passengerCapacity(passengerCapacity),
      standingPlaces(standingPlaces),
      hasWheelchairAccess(hasWheelchairAccess),
      length(length),
      fuelType(fuelType),
      hasAirConditioning(hasAirConditioning),
      hasWifi(hasWifi),
      busType(busType),
      totalDoors(totalDoors) {}

void Bus::PrintInfo(std::ostream& os) const {
    os << "Type: " << type() 
       << "\nBrand: " << brand
       << "\nRelease Year: " << releaseYear
       << "\nCapacity: " << passengerCapacity << " seats + " 
       << standingPlaces << " standing places"
       << "\nWheelchair Access: " << (hasWheelchairAccess ? "Yes" : "No")
       << "\nLength: " << length << " meters"
       << "\nFuel Type: " << fuelType
       << "\nAir Conditioning: " << (hasAirConditioning ? "Yes" : "No")
       << "\nWiFi: " << (hasWifi ? "Yes" : "No")
       << "\nBus Type: " << busType
       << "\nNumber of Doors: " << totalDoors << "\n";
}

std::ostream& operator<<(std::ostream& os, const Bus& bus) {
    bus.PrintInfo(os);
    return os;
}