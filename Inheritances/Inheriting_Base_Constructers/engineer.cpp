#include<iostream>
#include"engineer.h"

/*Engineer::Engineer()
{
   std::cout<<"Default Arg contructor called for Engineer"<<std::endl;
}
 Engineer::Engineer(std::string_view fullname,int age,std::string_view address,int contractcount):Person(fullname,age,address),m_contract_count(contractcount)
 {
     std::cout<<"Custom constructor called for Engineer"<<std::endl;
 }
  Engineer::Engineer(const Engineer&source): Person(source),m_contract_count(source.m_contract_count)
  {
    std::cout<<"Copy constructor called for Engineer"<<std::endl;
  }*/
Engineer::~Engineer(){}

std::ostream& operator<<(std::ostream& out,Engineer& engineer)
{
    out<<"[Engineer: fullanme:"<<engineer.get_fullname()<<"  age: "<<engineer.get_age()<<" Address :"<<engineer.get_address()<<" Contractcount: "<<engineer.m_contract_count<<"]";
    return out;
}