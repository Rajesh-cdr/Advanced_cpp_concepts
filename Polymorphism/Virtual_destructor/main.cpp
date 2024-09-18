#include<iostream>
#include"animal.h"
#include"dog.h"
#include"feline.h"

int main()
{
    std::cout << "Hi Rajesh Welcome to freecodecamp" << std::endl;

    //Animal polymorphism
    std::cout<<"----Animal polymorphism-----"<<std::endl;
   // Dog dog1("dark gray","dog1");//it will call all destructor in reverse order

    Animal *animals = new Dog("dark gray","dog1");// it will call only base destructor unless u dont put as a virtual keywird in destrutor
    //animals->breath();
    delete animals;
    
    
    return 0;
}