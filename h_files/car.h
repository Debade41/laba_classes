#ifndef CAR_H
#define CAR_H

#include "vehicle.h"
#include <string>

class Car : public Vehicle 
{
private:

    int enginePower;          
    bool isElectric;          
    std::string bodyType;     
    std::string transmission; 
    std::string driveType;    
    int seatingCapacity;      
    double length;            
    double width;             
    double height;            

public:
    Car() = default;
    Car(std::string brand, int releaseYear, int enginePower, bool isElectric,
        std::string bodyType, std::string transmission, std::string driveType,
        int seatingCapacity, double length, double width, double height);
    
    bool isGround() const { return true; }
    bool isMotorized() const { return true; }
    int maxPassengers() const { return seatingCapacity; }
    std::string type() const { return "CAR"; }
    virtual ~Car() = default;

    double calculatePowerToWeightRatio(double weight) const;
    bool isSportCar() const;
    std::string getEngineType() const;
    double calculateVolume() const;

    void PrintInfo(std::ostream& os) const override;
    friend std::ostream& operator<<(std::ostream& os, const Car& car);
};

#endif