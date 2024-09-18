#include<iostream>
#include "parent.h"
#include"child.h"

int main()
{
    std::cout << "Hi Rajesh Welcome to freecodecamp" << std::endl;
    Child ch1(20);
    ch1.print_val();
    ch1.Parent::print_val();

    std::cout<<"-------------"<<std::endl;
    ch1.show_val();
    
    
    return 0;
}