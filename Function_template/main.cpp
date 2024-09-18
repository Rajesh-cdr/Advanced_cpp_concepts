#include<iostream>
#include<string>
template<typename T>
T max(T a, T b)
{
    return (a>b)?a:b;
}

int main()
{
    std::cout << "Hi Rajesh Welcome to freecodecamp" << std::endl;

    int inta{10};
    int intb{20};

    double doublea{10.45};
    double doubleb{20.45};

    std::string x{"Hello"};
    std::string y{"World"};

    std::cout<<"Int result is: "<<max<int>(inta,intb)<<std::endl;
    std::cout<<"Double result is: "<<max<double>(doublea,doubleb)<<std::endl;
    std::cout<<"Double and integer is: "<<max<double>(inta,doublea)<<std::endl;
    //std::cout<<"String reuslt: "<<max(x,y)<<std::endl;

    //template with pointers

    int *p_x{&inta};
    int *p_y{&intb};

    auto result = max(p_x,p_y);
    std::cout<<"Result of Pointer is: "<<*result<<std::endl;
    
    return 0;
}