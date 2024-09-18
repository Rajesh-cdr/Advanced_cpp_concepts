#ifndef PIGEON_H
#define PIGEON_H
#include<iostream>
#include "bird.h"
#include<string_view>
#include<string>
#include"animal.h"

class Pigeon:public Bird{
    public:
    Pigeon() = default;
    Pigeon(std::string_view wing_color, std::string_view description);
    virtual ~Pigeon();
    virtual void coo()
    {
        std::cout<<"pigeon coo called for : "<<m_description<<std::endl;
    }

    virtual void breath()
    {
        std::cout<<"pigeon breath called for: "<<m_description<<std::endl;
    }
};
#endif