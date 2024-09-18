#include<iostream>
#include"person.h"
#include"engineer.h"
//#include"civilengineer.h"

int main()
{
   /* std::cout << "Hi Rajesh Welcome to freecodecamp" << std::endl;
    Person p1("Sannekki Rajesh",28,"Basaladoddi Village Kurnool");
    std::cout<<"Person1: "<<p1<<std::endl;
    Person p2(p1);
    std::cout<<"Person2: "<<p2<<std::endl;

    std::cout<<std::endl;
    std::cout<<"--------------------------------"<<std::endl;
    Engineer e1("Sannekki Prasoon",8,"Basaladoddi village Kurnool,AP",20);
    std::cout<<"Engineer1: "<<e1<<std::endl;

    std::cout<<"====================="<<std::endl;
    Engineer e2(e1);
    std::cout<<"Engineer2: "<<e2<<std::endl;

    std::cout<<std::endl;
    std::cout<<"--------------------------------"<<std::endl;
    CivilEngineer ce1("Sannekki Grace",4,"Basaldoddi village TN",13,200000);
    std::cout<<"CivilEngineer1: "<<ce1<<std::endl;

    CivilEngineer ce2(ce1);
    std::cout<<"CivilEngineer2: "<<ce2<<std::endl;*/

    Engineer e1("Sannekki Rajesh",28,"Basaladoddi village");
    std::cout<<"Engineer1: " <<e1<<std::endl;
    Engineer e2 = e1;
    std::cout<<"Engineer2: "<<e2<<std::endl;
    
    return 0;
}