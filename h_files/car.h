#ifndef CAR_H
#define CAR_H

#include "vehicle.h"
#include <string>

class Car : public Vehicle 
{
private:

    int enginePower;          // мощность двигателя в л.с.
    bool isElectric;          // true - электрический, false - бензиновый
    std::string bodyType;     // "седан", "хэтчбек", "универсал", "внедорожник" и т.д.
    std::string transmission; // "автомат", "механика", "робот", "вариатор"
    std::string driveType;    // "передний", "задний", "полный"
    int seatingCapacity;      // количество мест (2-9)
    double length;            // длина в метрах
    double width;             // ширина в метрах
    double height;            // высота в метрах

public:
    Car() = default;
    Car(std::string brand, int releaseYear, int enginePower, bool isElectric,
        std::string bodyType, std::string transmission, std::string driveType,
        int seatingCapacity, double length, double width, double height);
    
    bool isGround() const override { return true; }
    bool isMotorized() const override { return true; }
    int maxPassengers() const override { return seatingCapacity; }
    std::string type() const override { return "CAR"; }
    virtual ~Car() = default;

    double calculatePowerToWeightRatio(double weight) const;
    bool isSportCar() const;
    std::string getEngineType() const;
    double calculateVolume() const;

    void PrintInfo(std::ostream& os) const override;
    friend std::ostream& operator<<(std::ostream& os, const Car& car);
};

#endif