#ifndef DOG_H
#define DOG_H
#include<iostream>
#include"feline.h"
class Dog:public Feline{
    public:
    Dog() = default;
    Dog(std::string_view fur_style, std::string_view description);
    virtual ~Dog();

    virtual void bark()
    {
        std::cout<<"Dog bark called : woof!"<<std::endl;
    }
    virtual void breath()
    {
        std::cout<<"Dog breath called for: "<<m_description<<std::endl;
    }
};
#endif