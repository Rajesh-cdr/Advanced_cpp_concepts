#include"shape.h"
#include<iostream>

int Shape::m_count{0};

Shape::Shape(std::string_view description):m_description(description)
{
    m_count++;
}

Shape::~Shape()
{

}