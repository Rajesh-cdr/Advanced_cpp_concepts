#include"person.h"

Person::Person(std::string firstname,std::string secondname):m_fisrtname(firstname),m_secondname(secondname)
{

}
Person::~Person()
{

}

std::ostream& operator<<(std::ostream& out, Person&person){
    out<<"Person [ "<<person.m_fisrtname<<"  "<<person.m_secondname<<" ]";
    return out;
}