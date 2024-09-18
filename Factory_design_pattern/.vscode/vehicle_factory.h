#include"car.h"
#include "bike.h"

class vehiclefactory{
    public:
    static vehicle* getvehicle(string vehicleType);

};