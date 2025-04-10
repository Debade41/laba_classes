#include "ship.h"

Ship::Ship(std::string brand, int releaseYear, int displacement, int maxSpeed, int crewSize, int length)
    : Vehicle(brand, "Titanic", releaseYear), displacement(displacement), maxSpeed(maxSpeed), crewSize(crewSize), length(length) {}

void Ship::PrintInfo(std::ostream& os) const 
{
    os << "Type: " << type() << ", Brand: " << brand << ", Release Year: " << releaseYear
    << ", Displacement: " << displacement << " tons"
    << ", Max Speed: " << maxSpeed << " knots"
    << ", Crew Size: " << crewSize
    << ", Length: " << length << " meters" << "\n";
}

std::ostream& operator<<(std::ostream& os, const Ship& ship) 
{
    ship.PrintInfo(os);
    return os;
}