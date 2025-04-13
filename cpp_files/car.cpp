#include "car.h"
#include <cmath>

Car::Car(std::string brand, int releaseYear, int enginePower, bool isElectric,
         std::string bodyType, std::string transmission, std::string driveType,
         int seatingCapacity, double length, double width, double height)
    : Vehicle(brand, "CAR", releaseYear),
      enginePower(enginePower),
      isElectric(isElectric),
      bodyType(bodyType),
      transmission(transmission),
      driveType(driveType),
      seatingCapacity(seatingCapacity),
      length(length),
      width(width),
      height(height) {}

double Car::calculatePowerToWeightRatio(double weight) const {
    return enginePower / weight;
}

bool Car::isSportCar() const {
    return enginePower > 300 && bodyType == "coupe";
}

std::string Car::getEngineType() const {
    return isElectric ? "electric" : "gasoline";
}

double Car::calculateVolume() const {
    return length * width * height;
}

void Car::PrintInfo(std::ostream& os) const {
    os << "Type: " << type() 
       << "\nBrand: " << brand
       << "\nRelease Year: " << releaseYear
       << "\nEngine Power: " << enginePower << " hp"
       << "\nEngine Type: " << getEngineType()
       << "\nBody Type: " << bodyType
       << "\nTransmission: " << transmission
       << "\nDrive Type: " << driveType
       << "\nSeating Capacity: " << seatingCapacity
       << "\nDimensions (LxWxH): " << length << "x" << width << "x" << height << " m"
       << "\nInterior Volume: " << calculateVolume() << " m³\n";
}

std::ostream& operator<<(std::ostream& os, const Car& car) {
    car.PrintInfo(os);
    return os;
}