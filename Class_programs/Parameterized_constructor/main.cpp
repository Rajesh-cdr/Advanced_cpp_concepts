#include<iostream>
const double PI{3.1456};

class Cylinder{
    private:
    double radius{1};
    double height{1};
    public:
    Cylinder()
    {
        radius = 2.34;
        height = 4.56;
    }
    Cylinder(double _radius,double _height)
    {
        radius = _radius;
        height = _height;
    }
    double volume()
    {
        return PI*radius*radius*height;
    }
};

int main()
{
    std::cout << "Hi Rajesh Welcome to freecodecamp" << std::endl;
    Cylinder c1(10,20);
    std::cout<<"Volume of Cylinder1: "<<c1.volume()<<std::endl;
    
    return 0;
}