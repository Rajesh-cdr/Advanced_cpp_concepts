#include<iostream>
#include"animal.h"
#include"dog.h"
#include"feline.h"

int main()
{
    std::cout << "Hi Rajesh Welcome to freecodecamp" << std::endl;

    // base class pointer

    Animal *animal_ptr = new Feline("stripes","feline1");
    //animal_ptr->do_something()// we cant call the non virtual function with base class pointer


    Feline *feline = dynamic_cast<Feline*>(animal_ptr);
    feline->do_something();

    //references
std::cout<<"---------------------------"<<std::endl;
   Feline feline_r("zebra","feline2");
    Animal &animal_ref = feline_r;
    

    Feline &feline_ref = dynamic_cast<Feline&>(animal_ref);
    feline_ref.do_something();
    
    
    
    return 0;
}