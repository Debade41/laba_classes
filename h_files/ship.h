#ifndef SHIP_H
#define SHIP_H

#include "vehicle.h"

class Ship : public Vehicle 
{
private:
    int displacement, maxSpeed, crewSize, length;
public:
    Ship() = default;
    Ship(std::string brand, int releaseYear, int displacement, int maxSpeed, int crewSize, int length);
    bool isGround() const { return false; }
    bool isMotorized() const { return true; }
    int maxPassengers() const { return 300; }
    std::string type() const { return "SHIP"; }
    virtual ~Ship() = default;

    void PrintInfo(std::ostream& os) const override;
    friend std::ostream& operator<<(std::ostream& os, const Ship& ship);
};

#endif