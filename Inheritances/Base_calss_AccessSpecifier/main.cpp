#include<iostream>
#include"person.h"
#include "player.h"
#include "nurse.h"
#include "engineer.h"

int main()
{
    std::cout << "Hi Rajesh Welcome to freecodecamp" << std::endl;

    Person p1("Rajesh",28,"Basaladoddi village kurnool, AP");
    std::cout<<"Person1: "<<p1<<std::endl;
    std::cout<<std::endl;

    std::cout<<"------------------------------------"<<std::endl;

    Player player;
    player.m_fullname = "Sowmya";
    // player.m_address = "Basladoddi Andhra pradesh";
    // player.m_age = 5;
    std::cout<<player<<std::endl;

    std::cout<<std::endl;
    std::cout<<"--------------------------------"<<std::endl;

    Nurse nurse1;
    // nurse1.m_fullname = "Prasoon";// compiler error
    // nurse1.m_age = 20;//error
    //nurse1.m_address = "bashbhsdfh";

    std::cout<<"---------------------------"<<std::endl;

    Engineer engineer1;
    // engineer1.m_fullname = "Mareppa";//compiler error
    // engineer1.m_age = 20;//error
    // engineer1.m_address = "dnvbdjdnf";//error
    std::cout<<"Enginner: "<<engineer1<<std::endl;
    
    return 0;
}