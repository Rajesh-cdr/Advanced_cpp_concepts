#include<iostream>
#include"shape.h"
#include"oval.h"
#include"circle.h"


int main()
{
    std::cout << "Hi Rajesh Welcome to freecodecamp" << std::endl; 

    //Comparing size of objects
    std::cout<<"<----Comparing size of objects------>"<<std::endl;

    std::cout<<"Sizeof(shape): "<<sizeof(Shape)<<std::endl;
    std::cout<<"Sizeof(Oval): "<<sizeof(Oval)<<std::endl;
    std::cout<<"Sizeof(circle): "<<sizeof(Circle)<<std::endl;

    std::cout<<std::endl;
    std::cout<<"<-------Object slicing------>"<<std::endl;
    Circle circle1(1.3,"Circle1");
    Shape shape = circle1;
    shape.draw();

    
    return 0;
}