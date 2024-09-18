#include<iostream>
#include "player.h"

int main()
{
    std::cout << "Hi Rajesh Welcome to freecodecamp" << std::endl;
    Player p("Cricket");
    p.set_firstname("Sannekki");
    p.set_secondname("Rajesh");
    std::cout<<"Player: "<<p<<std::endl;
    
    return 0;
}