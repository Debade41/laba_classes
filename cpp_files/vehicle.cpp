#include "vehicle.h"

Vehicle::Vehicle(std::string brand, std::string model, int releaseYear)
    : brand(brand), model(model), releaseYear(releaseYear) {}

std::ostream& operator<<(std::ostream& os, const Vehicle& vehicle) 
{
    vehicle.PrintInfo(os);
    return os;
}