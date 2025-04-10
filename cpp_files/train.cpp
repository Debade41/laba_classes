#include "train.h"

Train::Train(std::string brand, int releaseYear, int power, int maxSpeed, int number_of_wagons, int length)
    : Vehicle(brand, "Sapsan", releaseYear), power(power), maxSpeed(maxSpeed), number_of_wagons(number_of_wagons), length(length) {}

void Train::PrintInfo(std::ostream& os) const 
{
    os << "Type: " << type() << ", Brand: " << brand << ", Release Year: " << releaseYear
    << ", Power: " << power << " kWt " << ", Max Speed: " << maxSpeed << " km/h"
    << ", Number of Wagons: " << number_of_wagons << ", Length: " << length << " meters" <<"\n";
}

std::ostream& operator<<(std::ostream& os, const Train& train) 
{
    train.PrintInfo(os);
    return os;
}