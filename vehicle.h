#ifndef VEHICLE_H
#define VEHICLE_H

#include <iostream>
#include <string>

class Vehicle 
{
protected:
    std::string brand;
    std::string model;
    int releaseYear;
public:
    Vehicle() = default;
    Vehicle(std::string brand, std::string model, int releaseYear);
    virtual void PrintInfo(std::ostream& os) const = 0;
    virtual ~Vehicle() = default;
};

std::ostream& operator<<(std::ostream& os, const Vehicle& vehicle);

#endif