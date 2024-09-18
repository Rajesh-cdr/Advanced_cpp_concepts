
#include<iostream>
#include"person.h"
#include"player.h"
#include "nurse.h"

Nurse::Nurse(){}
Nurse::~Nurse(){}

std::ostream& operator<<(std::ostream& out , Nurse& nurse){
    out<<"person [Fullname: "<<nurse.getfullname()<<" Age: "<<nurse.getage()<<" Address: "<<nurse.getaddress()<<" ]"<<"Nurse practice certificate id: "<<nurse.practice_certificate_id;
    return out;
 }