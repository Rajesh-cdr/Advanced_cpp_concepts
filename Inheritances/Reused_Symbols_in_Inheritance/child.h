#ifndef CHILD_H
#define CHILD_H
#include<iostream>
#include"parent.h"
class Child:public Parent{
    private:
    int m_member_val{100};
    public:
    Child() = default;
    Child(int memberval):m_member_val(memberval)
    {

    }
    ~Child() = default;

    void print_val()const
    {
        std::cout<<"value of member varaible: "<<m_member_val<<std::endl;
    }
    void show_val()const
    {
        std::cout<<"value of child is: "<<m_member_val<<std::endl;
        std::cout<<"value of Parent is : "<<Parent::m_member_val<<std::endl;
    }

};
#endif