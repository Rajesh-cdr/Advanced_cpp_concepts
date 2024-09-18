#include<iostream>
#include"person.h"
#ifndef ENGINEER_H
#define ENGINEER_H

class Engineer:private Person{
    friend std::ostream& operator<<(std::ostream& out, Engineer&engineer);
    public:
    Engineer();
    ~Engineer();

    void build_something()
    {
         m_fullname = "Prasoon";
         m_age = 20;
         //m_address = "dbbvdbmdbdb";
    }
    int get_contractcount()
    {
        return m_contract_count;
    }
    using Person::m_fullname;
    //using Person::m_address;
    using Person::m_age;
    private:
    int m_contract_count{0};

protected:
    using Person::get_address;
    using Person::get_age;
    using Person::get_fullname;


};
#endif 