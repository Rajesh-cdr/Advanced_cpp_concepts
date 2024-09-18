#include"circle.h"
#include "oval.h"
#include<iostream>

Circle::Circle(double radius, std::string_view description):Oval(radius,radius,description)
{

}
Circle::~Circle()
{

}