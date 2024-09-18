#ifndef SHAPE_H
#define SHAPE_H
#include<iostream>
#include<string>
#include<string_view>

class Shape{
    private:
    std::string m_description{""};
    public:
    Shape() = default;
    Shape(std::string_view description);
    virtual ~Shape() = default;
    //pure virtual functions
    virtual double perimeter() = 0;
    virtual double surface() = 0;

};
#endif