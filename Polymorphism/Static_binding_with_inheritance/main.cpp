#include<iostream>
#include"shape.h"
#include"oval.h"
#include"circle.h"

int main()
{
    std::cout << "Hi Rajesh Welcome to freecodecamp" << std::endl;
    Shape shape1("shape1");
    //shape1.draw();

    Oval oval1(10.0,20.0,"Oval1");
    //oval1.draw();

    Circle circle1(3.3,"Circle1");
    //circle1.draw();


    //Base Pointers
    Shape *shape_ptr = &shape1;
    //shape_ptr->draw();
    shape_ptr = &circle1;
    shape_ptr->draw();



    //Base reference
    Shape& shape_ref = shape1;
    //shape_ref.draw();

    shape_ref = oval1;
    //shape_ref.draw();

    shape_ref = circle1;
    //shape_ref.draw();

    //drwaing shapes

    //draw_circle(circle1);

    
    
    return 0;
}