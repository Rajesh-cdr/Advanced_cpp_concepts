#include<iostream>
#include "player.h"

int main()
{
    std::cout << "Hi Rajesh Welcome to freecodecamp" << std::endl;
    Player p("Cricket","Sannekki","Prasoon");
    std::cout<<"Player:"<<p<<std::endl;
    std::cout<<std::endl;
    p.set_firstname("Chinna");
    p.set_secondname("Lakshmaiah");
    std::cout<<"Player: "<<p<<std::endl;
    
    return 0;
}