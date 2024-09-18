#ifndef RECTANGLE_H
#define RECTANGLE_H
#include<iostream>
#include"shape.h"
#include<string_view>

class Rectangle:public Shape
{
    private:
    double m_width{0.0};
    double m_height{0.0};
    public:
    Rectangle() = default;
    Rectangle(double width,double height,std::string_view description);
    virtual ~Rectangle() = default;

    virtual double perimeter() override
    {
        return (2*m_width + 2*m_height);
    }
    virtual double surface() override
    {
        return (m_width*m_height);
    }
};
#endif