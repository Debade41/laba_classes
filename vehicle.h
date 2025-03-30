#ifndef VEHICLE_H
#define VEHICLE_H
#include <string>

class Vehicle
{
    private:
        std::string brand;
        std::string model;
        int releaseYear;
    public:
        virtual bool isGround() = 0;
        virtual bool isMotorized() = 0;
        virtual int maxPassengers() = 0;
        virtual std::string type() = 0;

        friend std::ostream& operator<< (std::ostream& os, const Vehicle& vehicle);
        virtual void PrintInfo(std::ostream& os) const;
        
        Vehicle(std::string brand, std::string model, int releaseYear);
};

#endif 