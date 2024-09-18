#ifndef ENGINEER_H
#define ENGINEER_H
#include<iostream>
#include"person.h"

class Engineer:private Person{
friend std::ostream &operator<<(std::ostream &out , Engineer&engineer);

public:
Engineer();
~Engineer();
void build_something(){
     m_fullname = "rajesh";//okk
     m_address = "ajcbkabjd";//okk
     //m_age = 20;// compiler error
}

private:
int contract_count{0};
};
#endif