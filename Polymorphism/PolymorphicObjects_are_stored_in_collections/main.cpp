#include<iostream>
#include"shape.h"
#include"oval.h"
#include"circle.h"
#include<memory>


int main()
{
    std::cout << "Hi Rajesh Welcome to freecodecamp" << std::endl; 

    //Comparing size of objects
   /* std::cout<<"<----Comparing size of objects------>"<<std::endl;

    std::cout<<"Sizeof(shape): "<<sizeof(Shape)<<std::endl;
    std::cout<<"Sizeof(Oval): "<<sizeof(Oval)<<std::endl;
    std::cout<<"Sizeof(circle): "<<sizeof(Circle)<<std::endl;

    std::cout<<std::endl;
    std::cout<<"<-------Object slicing------>"<<std::endl;
    Circle circle1(1.3,"Circle1");
    Shape shape = circle1;
    shape.draw();*/

    Circle circle1(3.3,"circle1");
    Oval oval1(2.2,3.3,"oval1");
    Circle circle2(4.4,"circle2");
    Oval oval2(5.5,6.6,"oval2");
    std::cout<<"<---Through normal objects--->"<<std::endl;
    //if we store raw object data in array set upto store base class objects the data is going to be sliced off
    std::cout<<"Sizeof(circle1):"<<sizeof(circle1)<<std::endl;
    Shape shape1[]{circle1,oval1,circle2,oval2};
 for(Shape s:shape1)
    {
        std::cout<<"Sizeof(object): "<<sizeof(s)<<std::endl;
        s.draw();
    }

    std::cout<<std::endl;
     std::cout<<"Sizeof(circle1):"<<sizeof(circle1)<<std::endl;
    std::cout<<"<---Through base pointer--->"<<std::endl;// it will work perfectly without slicing the data
    Shape *shape2[]{&circle1,&oval1,&circle2,&oval2};

    for(Shape* s2:shape2)
    {
        std::cout<<"Sizeof(object): "<<sizeof(*s2)<<std::endl;
        s2->draw();
    }

    std::cout<<std::endl;
    std::cout<<"<----through smart pointers--->"<<std::endl;
    std::shared_ptr<Shape>shape3[] {std::make_shared<Circle>(3.7,"circle4"),std::make_shared<Oval>(6.7,9.0,"oval4")};

    for (auto& s3:shape3)
    {
        s3->draw();
    }

    
    return 0;
}