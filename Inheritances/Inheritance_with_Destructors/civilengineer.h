#include<iostream>
#include"person.h"
#include"engineer.h"
#ifndef CIVILENGINEER_H
#define CIVILENGINEER_H

class CivilEngineer:public Engineer{
    friend std::ostream& operator<<(std::ostream& out, CivilEngineer&civilengineer);
    public:
    CivilEngineer();
    CivilEngineer(std::string_view fullname,int age,std::string_view address,int contractcount,int amount);
    CivilEngineer(const CivilEngineer&source);
    ~CivilEngineer();

    void build_road()
    {
        // m_fullname = "Prasoon";
         //m_age = 20;
         //m_address = "dbbvdbmdbdb";
         add(10,20);
         add(1,2,3);
    }

    private:
    int m_amount{0};

};
#endif 