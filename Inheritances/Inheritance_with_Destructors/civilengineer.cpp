#include<iostream>
#include"civilengineer.h"

CivilEngineer::CivilEngineer()
{
   std::cout<<"Default Arg constructor called for CivilEngineer"<<std::endl;
}
CivilEngineer::CivilEngineer(std::string_view fullname,int age,std::string_view address,int contractcount,int amount):Engineer(fullname,age,address,contractcount),m_amount(amount)
 {
    std::cout<<"Custom constructor called for CivilEngineer"<<std::endl;
 }

 CivilEngineer::CivilEngineer(const CivilEngineer&source):Engineer(source),m_amount(source.m_amount)
 {
   std::cout<<"Copy constructor called for CivilEngineer"<<std::endl;
 }
CivilEngineer::~CivilEngineer(){
   std::cout<<"Destructor called for CivilEngineer"<<std::endl;
}

std::ostream& operator<<(std::ostream& out,CivilEngineer& civilengineer)
{
    out<<"[Engineer: fullanme:"<<civilengineer.get_fullname()<<"  age: "<<civilengineer.get_age()<<" Address :"<<civilengineer.get_address()<<" Amount: "<<civilengineer.m_amount<<"]";
    return out;
}