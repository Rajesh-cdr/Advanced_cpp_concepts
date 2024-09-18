
#include"rectangle.h"
#include<string_view>


Rectangle::Rectangle(double width,double height,std::string_view description):Shape(description),m_width(width),m_height(height)
    {

    }