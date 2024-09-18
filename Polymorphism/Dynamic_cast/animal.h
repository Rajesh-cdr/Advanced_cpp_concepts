#ifndef ANIMAL_H
#define ANIMAL_H
#include<iostream>
#include<string_view>
#include<string>
class Animal{
    protected:
    std::string m_description{""};
    public:
    Animal() = default;
    Animal(std::string_view description);
    virtual ~Animal();
    virtual void breath()
    {
        std::cout<<"Animal breath called for: "<<m_description<<std::endl;
    }

};
#endif