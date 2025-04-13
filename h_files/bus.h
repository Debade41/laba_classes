#ifndef BUS_H
#define BUS_H

#include "vehicle.h"
#include <string>

class Bus : public Vehicle 
{
private:

    int passengerCapacity;      // Общее количество сидячих мест
    int standingPlaces;         // Количество стоячих мест
    bool hasWheelchairAccess;   // Доступность для инвалидных колясок
    double length;              // Длина автобуса в метрах
    std::string fuelType;       // Тип используемого топлива
    bool hasAirConditioning;    // Наличие системы кондиционирования
    bool hasWifi;              // Наличие WiFi подключения
    std::string busType;        // Тип автобуса (городской, междугородний и т.д.)
    int totalDoors;             // Количество дверей

public:
    Bus() = default;
    
    Bus(std::string brand, int releaseYear, int passengerCapacity, 
        int standingPlaces, bool hasWheelchairAccess, double length,
        std::string fuelType, bool hasAirConditioning, bool hasWifi,
        std::string busType, int totalDoors);
    
    bool isGround() const override { return true; }
    bool isMotorized() const override { return true; }
    int maxPassengers() const override { return passengerCapacity + standingPlaces; }
    std::string type() const override { return "BUS"; }
    virtual ~Bus() = default;

    void PrintInfo(std::ostream& os) const override;
    friend std::ostream& operator<<(std::ostream& os, const Bus& bus);
};

#endif