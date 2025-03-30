#include "vehicle.h"
#include <iostream>

Vehicle::Vehicle(std::string brand, std::string model, int releaseYear)
    : brand(brand), model(model), releaseYear(releaseYear) {}

void Vehicle::PrintInfo(std::ostream& os) const
{
    os << "Brand: " << brand << "\n"
    << "Model: " << model << "\n" 
    << "Release Year: " << releaseYear << std::endl;
}

std::ostream& operator<< (std::ostream& os, const Vehicle& vehicle) 
{
    vehicle.PrintInfo(os);
    return os;
}