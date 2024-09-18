#include<iostream>
#include"shape.h"
#include"rectangle.h"
#include"circle.h"

int main()
{
    std::cout << "Hi Rajesh Welcome to freecodecamp" << std::endl;

    // Shape *shape_ptr = new Shape;// we cant create a object from shape class
    // shape_ptr->perimeter();
    // shape_ptr->surface();

   Shape *shape_ptr = new Rectangle(23.4,45.5,"rect1");
   double result_perim = shape_ptr->perimeter();
   double result_surf = shape_ptr->surface();
   std::cout<<"Dynamic type of shape rect: "<<typeid(*shape_ptr).name()<<std::endl;
   std::cout<<"result of perimeter: "<<result_perim<<std::endl;
   std::cout<<"result of surface: "<<result_surf<<std::endl;

   std::cout<<"--------------------------------------"<<std::endl;

  Shape *shape_ptr1 = new Circle(23.4,"Circle1");
  double result_perim1 = shape_ptr1->perimeter();
  double result_surf1 = shape_ptr1->surface();
  std::cout<<"Dynamic type of shape rect: "<<typeid(*shape_ptr1).name()<<std::endl;
   std::cout<<"result of perimeter1: "<<result_perim1<<std::endl;
   std::cout<<"result of surface1: "<<result_surf1<<std::endl;
    

    
    return 0;
}