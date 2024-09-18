#ifndef CAT_H
#define CAT_H
#include<iostream>
#include"feline.h"
class Cat:public Feline{
    public:
    Cat() = default;
    Cat(std::string_view fur_style, std::string_view description);
    virtual ~Cat();

    virtual void bark()
    {
        std::cout<<"Cat bark called : meow!"<<std::endl;
    }
    virtual void breath()
    {
        std::cout<<"Cat breath called for: "<<m_description<<std::endl;
    }
};
#endif
