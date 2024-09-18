#include<iostream>
void call_by_vlaue(int *age,int *date)
{
    ++*age;
    ++*date;
    std::cout<<"Age inside value: "<<*age<<std::endl;
    std::cout<<"Date inside value: "<<*date<<std::endl;
}

int main()
{
    std::cout << "Hi Rajesh Welcome to freecodecamp" << std::endl;
    int age{20};
    int date{30};
    std::cout<<"Intial Value of age: "<<age<<std::endl;
    std::cout<<"Intial Value of date: "<<date<<std::endl;
    call_by_vlaue(&age,&date);
    std::cout<<"After function vlaue of age: "<<age<<std::endl;   
     std::cout<<"After function vlaue of date: "<<date<<std::endl;   
    return 0;
}