 #include<iostream>
const double PI{3.1456};

class Cylinder{
    private:
    double radius{1};
    double height{1};
    public:
    Cylinder() = default;
    
    Cylinder(double _radius,double _height)
    {
        radius = _radius;
        height = _height;
    }
    double volume()
    {
        return PI*radius*radius*height;
    }
    ~Cylinder()
    {
        std::cout<<"Called Destructor: "<<std::endl;
    }
};

int main()
{
    std::cout << "Hi Rajesh Welcome to freecodecamp" << std::endl;
    Cylinder c1(10,20);
    std::cout<<"Volume of Cylinder1: "<<c1.volume()<<std::endl;

    //Managing object through pointer:
    Cylinder *pc1 = &c1;
    std::cout<<"Volume of Cylinder PC1: "<<pc1->volume()<<std::endl;

    Cylinder *pc2 = new Cylinder(100,200);
    std::cout<<"Volume of Cylinder2: "<<pc2->volume()<<std::endl;
    
    return 0;
}