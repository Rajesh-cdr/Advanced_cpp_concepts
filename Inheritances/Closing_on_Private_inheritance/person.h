#include<iostream>
#ifndef PERSON_H
#define PERSON_H
#include<cstring>

class Person{
    friend std::ostream& operator<<(std::ostream&out,Person&person);
    public:
    Person()= default;
    Person(std::string_view fullname,int age,std::string_view address);
    ~Person();

    //getters

    std::string get_fullname()
    {
        return m_fullname;
    }
    int get_age()
    {
        return m_age;
    }
   std::string get_address()
    {
        return m_address;
    }

    //setters

    void set_fullname(std::string fullname)
    {
         m_fullname = fullname;
    }

    void set_age(int age)
    {
        m_age = age;
    }

    void set_address(std::string address)
    {
        m_address = address;
    }
    public:
    std::string m_fullname{"None"};
    protected:
    int m_age{0};
    private:
    std::string m_address{"None"};
};
#endif