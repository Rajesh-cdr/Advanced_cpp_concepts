#include<iostream>
#include"compare.h"
#include "operation.h"
// single parameter
int fun(int age)
{
    std::cout<<"Hi there"<<std::endl;
    return age;
}
//double parameter

//int fun1 (int, int);


//function take doesn't parameter

void fun2()
{
    std::cout<<" i Dont want parameters:"<<std::endl;
    return;
}
// funtion no parameter and return something

int fun3()
{
    return 99;
}

int main()
{
    std::cout << "Hi Rajesh Welcome to freecodecamp" << std::endl;
    int result = fun(20);
    std::cout<<result<<std::endl;

    //int c = fun1(19,20);
    //std::cout<<c<<std::endl;
    fun2();
    int d = fun3();
    std::cout<<d<<std::endl;

    int min_result = min(10,20);
    std::cout<<min_result<<std::endl;

    int max_result = max(100,20);
    std::cout<<max_result<<std::endl;

    int inc_multi_result = inc_multi(1,2);
    std::cout<<inc_multi_result<<std::endl;
    
    return 0;
}