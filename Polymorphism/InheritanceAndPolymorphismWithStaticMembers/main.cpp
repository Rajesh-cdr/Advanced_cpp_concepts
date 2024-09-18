#include<iostream>
#include"shape.h"
#include"ellipse.h"

int main()
{
    std::cout << "Hi Rajesh Welcome to freecodecamp" << std::endl;
    Shape shape1("shape1");
    std::cout<<"Shape1 count: "<<Shape::m_count<<std::endl;
    
    Shape shape2("shape2");
    std::cout<<"Shape2 count: "<<Shape::m_count<<std::endl;
    
    Shape shape3("shape2");
    std::cout<<"Shape3 count: "<<Shape::m_count<<std::endl;

    std::cout<<"----------------------------"<<std::endl;

    Ellipse ellipse1(1.0,25.6,"ellipse1");
    std::cout<<"Ellipse1 count: "<<Ellipse::m_count<<std::endl;
    std::cout<<"Shape count: "<<Shape::m_count<<std::endl;

    Ellipse ellipse2(2.3,56.7,"ellipse2");
    std::cout<<"ellipse2 count: "<<Ellipse::m_count<<std::endl;
    std::cout<<"Shape count: "<<Shape::m_count<<std::endl;

    std::cout<<"-----------------------------------"<<std::endl;

    Shape *shapes[]{&shape1,&ellipse1};
    for(auto &sh:shapes)
    {
        std::cout<<"Count: "<<sh->get_count()<<std::endl;
    }
    
    return 0;
}