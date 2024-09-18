#include "vehicle_factory.h"
#include<iostream>

int main()
{
    string vehicleType;
    std::cin>>vehicleType;

    vehicle * vehicle = vehiclefactory::getvehicle(vehicleType);
    vehicle->createvehicle();
    return 0;
}