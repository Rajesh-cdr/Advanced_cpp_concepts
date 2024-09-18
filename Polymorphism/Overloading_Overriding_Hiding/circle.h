#ifndef CIRCLE_H
#define CIRCLE_H
#include<iostream>
#include"shape.h"
#include"oval.h"

class Circle:public Oval{
    public:
    Circle()= default;
    Circle(double radius,std::string_view description);
    ~Circle();

     virtual void draw(int color_depth)
    {
        std::cout<<"Circle drawing with color depth: "<<color_depth<<std::endl;
    }
    virtual void draw() override
    {
        std::cout<<"Circle draw is called: m_description: "<<m_description<<" with radius: "<<get_x_radius()<<std::endl;
    }
};
#endif