#ifndef BUS_H
#define BUS_H

#include "vehicle.h"
#include <string>

class Bus : public Vehicle 
{
private:

    int passengerCapacity;      
    int standingPlaces;         
    bool hasWheelchairAccess;   
    double length;              
    std::string fuelType;       
    bool hasAirConditioning;    
    bool hasWifi;              
    std::string busType;        
    int totalDoors;             

public:
    Bus() = default;
    
    Bus(std::string brand, int releaseYear, int passengerCapacity, 
        int standingPlaces, bool hasWheelchairAccess, double length,
        std::string fuelType, bool hasAirConditioning, bool hasWifi,
        std::string busType, int totalDoors);
    
    bool isGround() const { return true; }
    bool isMotorized() const { return true; }
    int maxPassengers() const { return passengerCapacity + standingPlaces; }
    std::string type() const { return "BUS"; }
    virtual ~Bus() = default;

    void PrintInfo(std::ostream& os) const override;
    friend std::ostream& operator<<(std::ostream& os, const Bus& bus);
};

#endif