#ifndef SHAPE_H
#define SHAPE_H
#include<iostream>
#include<string_view>
#include<string>
class Shape{
    protected:
    std::string m_description{""};
    public:
    Shape() = default;
    Shape(std::string_view description);
    ~Shape();
    void draw()
    {
        std::cout<<"Shape Draw  Called: "<<m_description<<std::endl;
    }
};
#endif