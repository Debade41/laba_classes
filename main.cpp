#include "train.h"
#include "plane.h"
#include "ship.h"
#include <iostream>

int main() 
{
    Train train("Sapsan", 2009, 8000, 250, 10, 250);
    Plane plane("Boeing", 1916, 4, 11277, 850, 59);
    Ship ship("Titanic", 1912, 52310, 23, 892, 269);
    
    std::cout << train << std::endl;
    std::cout << plane << std::endl;
    std::cout << ship << std::endl;
    return 0;
}