#ifndef PLANE_H
#define PLANE_H

#include "vehicle.h"

class Plane : public Vehicle 
{
private:
    int engineCount, maxAltitude, maxSpeed, wingspan;
public:
    Plane() = default;
    Plane(std::string brand, int releaseYear, int engineCount, int maxAltitude, int maxSpeed, int wingspan);
    bool isGround() const { return false; }
    bool isMotorized() const { return false; }
    int maxPassengers() const { return 180; }
    std::string type() const { return "PLANE"; }
    virtual ~Plane() = default;

    void PrintInfo(std::ostream& os) const override;
    friend std::ostream& operator<<(std::ostream& os, const Plane& plane);
};

#endif