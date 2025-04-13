#include "train.h"
#include "plane.h"
#include "ship.h"
#include "bus.h"
#include "car.h"
#include <iostream>

int main() 
{
    
    Train train("Sapsan", 2009, 8000, 250, 10, 250);
    Plane plane("Boeing", 1916, 4, 11277, 850, 59);
    Ship ship("Titanic", 1912, 52310, 23, 892, 269);
    Bus bus("Volvo", 2015, 50, 20, true, 12.5, "Diesel", true, false, "CityBus", 3);
    Car car("Tesla", 2022, 500, true, "Sedan", "Automatic", "AWD", 5, 4.7, 1.85, 1.44);

    std::cout << train << std::endl;
    std::cout << plane << std::endl;
    std::cout << ship << std::endl;
    std::cout << bus << std::endl;
    std::cout << car << std::endl;  
}