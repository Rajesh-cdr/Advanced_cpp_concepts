#include"vehicle_factory.h"
vehicle *vehiclefactory::getvehicle(string vehicleType)
{
    vehicle *vehicle;
     if(vehicleType == "car")
    {
        vehicle = new car();
    }
    else if(vehicleType == "bike")
    {
        vehicle = new bike();
    }
    return vehicle;
}