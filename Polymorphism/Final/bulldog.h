#ifndef BULLDOG_H
#ifdef BULLDOG_H
#include"dog.h"
class BullDog:public Dog
{
    public:
     BullDog();
     virtual ~BullDog();

 virtual void run() override 
   {
       std::cout<<"Bull:Dog::run is called"<<std::endl;
   }
};
#endif