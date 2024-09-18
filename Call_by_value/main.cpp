#include<iostream>
void call_by_vlaue(int age)
{
    ++age;
    std::cout<<"Age inside value: "<<age<<std::endl;
}

int main()
{
    std::cout << "Hi Rajesh Welcome to freecodecamp" << std::endl;
    int age{20};
    std::cout<<"Intial Value of age: "<<age<<std::endl;
    call_by_vlaue(age);
    std::cout<<"After function vlaue of age: "<<age<<std::endl;   
    return 0;
}