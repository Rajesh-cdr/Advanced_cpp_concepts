#include<iostream>
#include"bike.h"
#include "car.h"

int main()
{
    std::cout << "Hi Rajesh Welcome to freecodecamp" << std::endl;
    string vehicleType;
    std::cin>>vehicleType;
    vehicle *vehicle;
    if(vehicleType == "car")
    {
        vehicle = new car();
    }
    else if(vehicleType == "bike")
    {
        vehicle = new bike();
    }
    vehicle->createvehicle();
    
    return 0;
}