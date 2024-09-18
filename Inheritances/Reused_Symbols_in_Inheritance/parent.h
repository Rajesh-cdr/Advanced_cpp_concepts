#ifndef PARENT_H
#define PARENT_H
#include<iostream>
/// @brief 
class Parent{
    protected:
    int m_member_val{100};
    public:
    Parent() = default;
    Parent(int memberval):m_member_val(memberval)
    {

    }
    ~Parent() = default;

    void print_val()
    {
        std::cout<<"value of member varaible: "<<m_member_val<<std::endl;
    }

};
#endif