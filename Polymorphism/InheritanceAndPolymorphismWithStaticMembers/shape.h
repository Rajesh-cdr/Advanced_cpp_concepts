#ifndef SHAPE_H
#define SHAPE_H
#include<iostream>
#include<string_view>
class Shape{
    protected:
    std::string m_description{""};
    public:
    Shape() = default;
    Shape(std::string_view description);
    virtual ~Shape();
    void draw()
    {
        std::cout<<"Shape drawing called for: "<<m_description<<std::endl;
    }

    virtual int get_count()
    {
        return m_count;
    }
    static int m_count;

};
#endif