#include<iostream>
#include"shape.h"
#include"oval.h"
#include"circle.h"
#include<memory>


int main()
{
    std::cout << "Hi Rajesh Welcome to freecodecamp" << std::endl; 

    

   /*Circle circle1(3.3,"circle1");
    Oval oval1(2.2,3.3,"oval1");
    Circle circle2(4.4,"circle2");
    Oval oval2(5.5,6.6,"oval2");

    circle1.draw();
    circle1.draw(100);*/

    Shape *shape_ptr = new Circle(4.5,"Circle1");
    shape_ptr->draw();
    shape_ptr->draw(100);
    
    return 0;
}