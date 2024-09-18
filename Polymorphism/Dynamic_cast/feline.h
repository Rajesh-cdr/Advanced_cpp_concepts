#ifndef FELINE_H
#define FELINE_H
#include<iostream>
#include<string>
#include<string_view>
#include"animal.h"
class Feline:public Animal{
    public:
    Feline() = default;
    Feline(std::string_view fur_style,std::string_view description);
   virtual ~Feline();

    virtual void run()
    {
        std::cout<<"Feline: "<<m_description<<"  running"<<std::endl;
    }
    void do_something()
    {
        std::cout<<"Doing something feline class"<<std::endl;
    }

    std::string m_fur_style;

};
#endif
