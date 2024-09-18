#ifndef PERSON_H
#define PERSON_H
#include<iostream>
#include<string>
#include<string_view>

class Person{
    friend std::ostream &operator<<(std::ostream &out , Person&person);
    public:
    std::string m_fullname{"None"};
    private:
    int m_age{0};
    protected:
    std::string m_address{"None"};

    public:
    Person()= default;
    Person(std::string_view fullname, int age, std::string_view address);

    //setters

    void setfullname(std::string fullname)
    {
        m_fullname = fullname;
    }
    void setage(int age)
    {
        m_age = age;
    }
    void setaddress(std::string address)
    {
        m_address = address;
    }

    //getters

    std::string getfullname()
    {
        return m_fullname;
    }
    int getage()
    {
        return m_age;
    }
    std::string getaddress()
    {
        return m_address;
    }
    ~Person();
};
#endif