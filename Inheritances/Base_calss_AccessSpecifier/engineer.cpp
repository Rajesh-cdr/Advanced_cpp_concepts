#include<iostream>
#include"person.h"
#include "engineer.h"

Engineer::Engineer(){}
Engineer::~Engineer(){}

std::ostream& operator<<(std::ostream& out , Engineer& engineer){
    out<<"person [Fullname: "<<engineer.getfullname()<<" Age: "<<engineer.getage()<<" Address: "<<engineer.getaddress()<<" ]"<<"engineer contract count: "<<engineer.contract_count;
    return out;
 }