#ifndef TRAIN_H
#define TRAIN_H

#include "vehicle.h"

class Train : public Vehicle 
{
private:
    int power, maxSpeed, number_of_wagons, length;
public:
    Train(std::string brand, int releaseYear, int power, int maxSpeed, int number_of_wagons, int length);
    bool isGround() const { return true; }
    bool isMotorized() const { return false; }
    int maxPassengers() const { return 600; }
    std::string type() const { return "TRAIN"; }

    void PrintInfo(std::ostream& os) const override;
    friend std::ostream& operator<<(std::ostream& os, const Train& train);
};

#endif