#include "plane.h"

Plane::Plane(std::string brand, int releaseYear, int engineCount, int maxAltitude, int maxSpeed, int wingspan)
    : Vehicle(brand, "Boeing", releaseYear), engineCount(engineCount), maxAltitude(maxAltitude), maxSpeed(maxSpeed), wingspan(wingspan) {}

void Plane::PrintInfo(std::ostream& os) const 
{
    os << "Type: " << type() << ", Brand: " << brand << ", Release Year: " << releaseYear
    << ", Engine Count: " << engineCount << ", Max Altitude: " << maxAltitude << " m"
    << ", Max Speed: " << maxSpeed << " km/h"
    << ", Wingspan: " << wingspan << " meters" << "\n";
}

std::ostream& operator<<(std::ostream& os, const Plane& plane) 
{
    plane.PrintInfo(os);
    return os;
}