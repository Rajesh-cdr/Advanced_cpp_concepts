 #include<iostream>
const double PI = 3.14;

class Cylinder{
    
    double radius{1.0};
    double height{1.0};
    public:
    Cylinder()
    {

    }
    Cylinder(Cylinder&obj)
    {
        radius = obj.radius;
        height = obj.height;
    }

    double getradius()
    {
        return radius;
    }
    double getheight()
    {
        return height;
    }
    
    double volume()
    {
        return PI*radius*height;
    }

};

int main()
{
    Cylinder c1;
    std::cout<<"Volume of Cylinder1 is: "<<c1.volume()<<std::endl;

   std::cout<<c1.getradius()<<std::endl;
   std::cout<<c1.getheight()<<std::endl;
   Cylinder c2(c1);
   std::cout<<"Volume of Cylinder2 is: "<<c1.volume()<<std::endl;

   std::cout<<c2.getradius()<<std::endl;
   std::cout<<c2.getheight()<<std::endl;
    return 0;
}