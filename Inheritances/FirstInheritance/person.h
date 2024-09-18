#ifndef PERSON_H
#define  PERSON_H
#include<iostream>
#include<string>
class Person
{
    friend std::ostream& operator<<(std::ostream& out , Person&person);
    private:
    std::string m_fisrtname{"Chinna"};
    std::string m_secondname{"Rajesh"};
    public:
    Person() = default;
    Person(std::string firstname,std::string secondname);

    //Getters

    std::string get_firstname()
    {
        return m_fisrtname;
    }
    std::string get_secondname()
    {
        return m_secondname;
    }

    //Setters

    void set_firstname(std::string firstname)
    {
        m_fisrtname = firstname;
    }

    void set_secondname(std::string secondname)
    {
        m_secondname = secondname;
    }
    ~Person();

};
#endif