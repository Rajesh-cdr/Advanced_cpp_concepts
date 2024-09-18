#ifndef NURSE_H
#define NURSE_H
#include<iostream>
#include"person.h"
#include"player.h"
class Nurse:protected Person{
friend std::ostream &operator<<(std::ostream &out , Nurse&nurse);

public:
Nurse();
~Nurse();
void treat_unwell_person(){
    // m_fullname = "rajesh";//okk
    // m_address = "ajcbkabjd";//okk
    // m_age = 20;// compiler error
}

private:
int practice_certificate_id{0};
    
};
#endif