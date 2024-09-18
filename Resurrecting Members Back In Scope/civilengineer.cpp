#include<iostream>
#include"civilengineer.h"

CivilEngineer::CivilEngineer()
{

}
CivilEngineer::~CivilEngineer(){}

std::ostream& operator<<(std::ostream& out,CivilEngineer& civilengineer)
{
    out<<"[Engineer: fullanme:"<<civilengineer.get_fullname()<<"  age: "<<civilengineer.get_age()<<" Address :"<<civilengineer.get_address()<<" Amount: "<<civilengineer.m_amount<<"]";
    return out;
}