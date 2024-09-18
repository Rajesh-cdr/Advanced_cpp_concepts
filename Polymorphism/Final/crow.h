#ifndef CROW_H
#define CROW_H
#include<iostream>
#include "bird.h"
#include<string_view>
#include<string>
#include"animal.h"

class Crow:public Bird{
    public:
    Crow() = default;
    Crow(std::string_view wing_color, std::string_view description);
    virtual ~Crow();
    virtual void cow()
    {
        std::cout<<"Crow cow called for : "<<m_description<<std::endl;
    }
    /// @brief 
    virtual void breath()
    {
        std::cout<<"Crow breath called for: "<<m_description<<std::endl;
    }
};
#endif