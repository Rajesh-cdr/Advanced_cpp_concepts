#include<iostream>
#include"person.h"
#include"engineer.h"
#include"civilengineer.h"

int main()
{
    std::cout << "Hi Rajesh Welcome to freecodecamp" << std::endl;
    Person p1("Sannekki Rajesh",28,"Basaladoddi Village Kurnool");
    std::cout<<"Person1: "<<p1<<std::endl;

    std::cout<<std::endl;
    std::cout<<"--------------------------------"<<std::endl;
    Engineer e1("Sannekki Prasoon",8,"Basaladoddi village Kurnool,AP",20);
    std::cout<<"Engineer1: "<<e1<<std::endl;

    std::cout<<std::endl;
    std::cout<<"--------------------------------"<<std::endl;
    CivilEngineer ce1("Sannekki Grace",4,"Basaldoddi village TN",13,200000);
    std::cout<<"CivilEngineer1: "<<ce1<<std::endl;
    
    return 0;
}