#include<iostream>
#include"person.h"
#ifndef ENGINEER_H
#define ENGINEER_H

class Engineer:public Person{
    friend std::ostream& operator<<(std::ostream& out, Engineer&engineer);
    public:
    Engineer();
    Engineer(std::string_view fullname,int age,std::string_view address,int contractcount);
    Engineer(const Engineer&source);
    ~Engineer();

    void build_something()
    {
         m_fullname = "Prasoon";
         m_age = 20;
         //m_address = "dbbvdbmdbdb";
    }
    private:
    int m_contract_count{0};

};
#endif 