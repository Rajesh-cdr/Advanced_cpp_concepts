#include<iostream>

int main()
{
    std::cout << "Hi Rajesh Welcome to freecodecamp" << std::endl;
    // Memory leaks
    std::cout<<"<----Memory leaks-->"<<std::endl;

    int *p_int{new int{67}};
    std::cout<<"Address of p_int: "<<p_int<<"  value of p_int: "<<*p_int<<std::endl;

    int *p_stack = new int(80);
    p_int = p_stack;

    std::cout<<" After assign Address of p_int: "<<p_int<<"  value of p_int: "<<*p_int<<std::endl;
    delete p_int;
    p_int = nullptr;
    std::cout<<" After releasing assign Address of p_int: "<<p_int<<"  value of p_int: "<<*p_int<<std::endl;
    std::cout<<std::endl;

    //doubel allocation
    std::cout<<"<----Double allocation---->"<<std::endl;
    int *p_int1 = new int(70);
    // should release and reset
    delete p_int1;
    p_int1 = nullptr;
    p_int1 = new int(100);
    std::cout<<"Address of p_int1: "<<p_int1<<" value of p_int1: "<<*p_int1<<std::endl;
    return 0;
}