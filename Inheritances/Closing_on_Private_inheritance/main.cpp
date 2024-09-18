#include<iostream>
#include"person.h"
#include"engineer.h"
#include"civilengineer.h"

int main()
{
    std::cout << "Hi Rajesh Welcome to freecodecamp" << std::endl;
    Engineer e1;
    e1.m_fullname = "Lakshmaiah";
    e1.m_age = 30;
    //e1.m_address ="mcbfbfbd"; error
    std::cout<<e1<<std::endl;

    Person p1;
    p1.m_fullname = "Rajesh";
    //p1.m_age = 28;//error
    //p1.m_address = " Basaladoddi village kurnool dist AP state";//error

    std::cout<<p1<<std::endl;

    CivilEngineer ce1;
    ce1.m_fullname = "Sannekki Grace";
    ce1.m_age = 3;
    //ce1.m_address = " Basaladoddi village kurnool dist AP state";//error
    std::cout<<"Civilengineer: "<<ce1<<std::endl;
    
    return 0;
}