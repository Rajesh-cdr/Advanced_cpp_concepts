#include"person.h"
#include<iostream>

 Person::Person(std::string_view fullname, int age, std::string_view address):m_fullname(fullname),m_age(age),m_address(address)
 {}

 std::ostream& operator<<(std::ostream& out , Person& person){
    out<<"person [Fullname: "<<person.getfullname()<<" Age: "<<person.getage()<<" Address: "<<person.getaddress()<<" ]";
    return out;
 }

 Person::~Person()
 {

 }