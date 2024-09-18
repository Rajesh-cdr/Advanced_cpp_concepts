#include<iostream>
#include"shape.h"
#include"oval.h"
#include"circle.h"

void draw_shape(Shape *s)
{
    std::cout<<"draw_shape_called"<<std::endl;
    s->draw();
}
void draw_shape1(Shape &sh)
{
    std::cout<<"draw_shape1_called"<<std::endl;
    sh.draw();
}

int main()
{
    std::cout << "Hi Rajesh Welcome to freecodecamp" << std::endl;
    Shape shape1("shape1");
    //shape1.draw();

    Oval oval1(10.0,20.0,"Oval1");
    //oval1.draw();

    Circle circle1(3.3,"Circle1");
    //circle1.draw();
    std::cout<<std::endl;
    std::cout<<"------Base pointers---------"<<std::endl;

    //Base Pointers
    Shape *shape_ptr = &shape1;
    //shape_ptr->draw();//shape draw
    shape_ptr = &circle1;
    //shape_ptr->draw();//Circle draw

    shape_ptr = &oval1;
    //shape_ptr->draw();// oval drwa


    std::cout<<std::endl;
    std::cout<<"------Base references-----"<<std::endl;
    //Base reference
    Shape& shape_ref = oval1;
    shape_ref.draw();

    std::cout<<std::endl;
    std::cout<<"-----Drawing shapes---------"<<std::endl;
    draw_shape(&shape1);
    draw_shape(&oval1);
    draw_shape(&circle1);

    std::cout<<std::endl;
    std::cout<<"-----Drawing shapes1---------"<<std::endl;

    draw_shape1(shape1);
    draw_shape1(oval1);
    draw_shape1(circle1);

    std::cout<<std::endl;
    std::cout<<"------shapes stored in collections---"<<std::endl;
    Shape *shape_collection[]{&shape1,&oval1,&circle1};
    for(Shape* s_ptr:shape_collection)
    {
        s_ptr->draw();
    }

   
    
    return 0;
}