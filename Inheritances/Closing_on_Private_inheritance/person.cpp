#include"person.h"
#include <iostream>


Person::Person(std::string_view fullname,int age,std::string_view address): m_fullname(fullname),m_age(age),m_address(address)
{
     
}

Person::~Person()
{}

std::ostream& operator<<(std::ostream& out,Person& person)
{
    out<<"[Person: fullanme:"<<person.get_fullname()<<"  age: "<<person.get_age()<<" Address :"<<person.get_address()<<" ]";
    return out;
}
