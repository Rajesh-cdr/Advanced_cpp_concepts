#include<iostream>
int max(int a, int b)
{
    return a>b?a:b;
}

double max(double a, double b)
{
    return a>b?a:b;
}

std::string_view max(std::string_view fisrt,std::string_view second)
{
    return fisrt>second?fisrt:second;
}

int main()
{
    std::cout << "Hi Rajesh Welcome to freecodecamp" << std::endl;
    int x{20},y{30};
    std::cout<<"Value of intiger: "<<max(x,y)<<std::endl;
    double c{10.45},d{11.24};
    std::cout<<"Value of double : "<<max(c,d)<<std::endl;

    std::string_view fisrt{"Hello"};
    std::string_view second{"World"};

    std::cout<<"output od string_view: "<<max(fisrt,second)<<std::endl;

    
    return 0;
}