#include<iostream>
#include"engineer.h"

Engineer::Engineer()
{

}
Engineer::~Engineer(){}

std::ostream& operator<<(std::ostream& out,Engineer& engineer)
{
    out<<"[Engineer: fullanme:"<<engineer.get_fullname()<<"  age: "<<engineer.get_age()<<" Address :"<<engineer.get_address()<<" Contractcount: "<<engineer.m_contract_count<<"]";
    return out;
}