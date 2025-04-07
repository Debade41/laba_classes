#include "train.h"
#include <iostream>

int main() 
{
    Train train("Sapsan", 2009, 8000, 250, 10, 250);
    std::cout << train << std::endl;
    return 0;
}