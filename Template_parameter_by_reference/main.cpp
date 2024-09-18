#include<iostream>
template<typename T> const T& max(const T& a, const T& b);

int main()
{
    std::cout << "Hi Rajesh Welcome to freecodecamp" << std::endl;
    int a{10};
    int b{20};
    auto result = max(a,b);
    std::cout<<"Result is: "<<result<<std::endl;

    
    return 0;
}

template <typename T>const T& max(const T& a,const T& b)//const is for not modify the varaible in future
{
    //++a;
    std::cout<<a<<std::endl;
    return a>b?a:b;
}