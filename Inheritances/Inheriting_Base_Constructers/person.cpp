#include"person.h"
#include <iostream>
Person::Person()
{
    std::cout<<"Default arg constructor called for Person"<<std::endl;
}

Person::Person(std::string_view fullname,int age,std::string_view address): m_fullname(fullname),m_age(age),m_address(address)
{
     std::cout<<"Custom constructor called for Person"<<std::endl;
}
Person::Person(const Person&source):m_fullname(source.m_fullname),m_age(source.m_age),m_address(source.m_address)
{
   std::cout<<"Copy Constructor called for Person"<<std::endl;
}

Person::~Person()
{}

std::ostream& operator<<(std::ostream& out,Person& person)
{
    out<<"[Person: fullanme:"<<person.get_fullname()<<"  age: "<<person.get_age()<<" Address :"<<person.get_address()<<" ]";
    return out;
}
