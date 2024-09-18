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
            height = 5.56;             
        }

        double volume()
        {
            return PI*radius*radius*height;
        }

};

int main()
{
    std::cout << "Hi Rajesh Welcome to freecodecamp" << std::endl;
    Cylinder c1;
    std::cout<<"Volume of Cylinder1: "<<c1.volume()<<std::endl;
    //c1.radius = 5050; 
    return 0;
}