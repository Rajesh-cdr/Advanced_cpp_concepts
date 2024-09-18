#include<iostream>
class Dog{
    std::string name;
    std::string breed;
    int *age;
public:
Dog() = default;
Dog(std::string _name,std::string _breed,int _age)
{
    name = _name;
    breed = _breed;
    age = new int;
    *age = _age;
}
~Dog()
{
    delete age;
    std::cout<<"Dog Constructor called: "<<name<<std::endl;
}
};

int main()
{
    std::cout << "Hi Rajesh Welcome to freecodecamp" << std::endl;

    Dog *d1 = new Dog("Cichhu","Hybrid",2);
    
    return 0;
}