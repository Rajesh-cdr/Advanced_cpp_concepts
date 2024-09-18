#include<iostream>
#include"animal.h"
#include "bird.h"
#include"pigeon.h"
#include"cat.h"
#include"dog.h"
#include"crow.h"
#include"feline.h"

int main()
{
    std::cout << "Hi Rajesh Welcome to freecodecamp" << std::endl;

    //Animal polymorphism
    std::cout<<"----Animal polymorphism-----"<<std::endl;
    Dog dog1("dark gray","dog1");
    Cat cat1("balck strippes","cat1");
    Pigeon pigeon1("white","pigeon1");
    Crow crow1("black","crow1");

    Animal *animals[]{&dog1,&cat1,&pigeon1,&crow1};
    for(auto &animal_ptr:animals)
    {
        animal_ptr->breath();
    }

    std::cout<<std::endl;
    std::cout<<"------feline polymorphism---"<<std::endl;

    Dog dog2("blue","dog2");
    Cat cat2("yellow","cat2");

    Feline *felins[]{&dog2,&cat2};
    for(auto &felin_ptr:felins)
    {
        felin_ptr->run();
    }

    std::cout<<std::endl;
    std::cout<<"------birds polymorphism-----"<<std::endl;

    Pigeon pigeon2("full white","pigeon2");
    Crow crow2("full balck","crow2");
    Bird *birds[]{&pigeon2,&crow2};
    for(auto &birds_ptr:birds)
    {
        birds_ptr->fly();
    }
    
    return 0;
}