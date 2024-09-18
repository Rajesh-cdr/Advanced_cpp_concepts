#ifndef ELLIPSE_H
#define ELLIPSE_H
#include<iostream>
#include<string_view>
#include "shape.h"

class Ellipse:public Shape{
    private:
    double m_x_radius;
    double m_y_radius;

    public:
    Ellipse() = default;
    Ellipse(double x_radius , double y_radius, std::string_view description);
    virtual ~Ellipse();
    void draw()
    {
        std::cout<<"Drawing a Ellipse for: "<<m_description<<std::endl;
    }
    
    virtual int get_count() override
    {
        return m_count;
    }
    static int m_count; //if we declare static member in derived class it counts from here its not going to take from base member static variable
};
#endif