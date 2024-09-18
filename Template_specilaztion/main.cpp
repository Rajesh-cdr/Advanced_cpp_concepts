#include<iostream>
#include<cstring>
template<typename T> T maximum(T a, T b){
    return a>b?a:b;
}

template<>
const char* maximum<const char*>(const char *a,const char *b)
{
    return (std::strcmp(a,b)>0)?a:b;
}

int main()
{
    std::cout << "Hi Rajesh Welcome to freecodecamp" << std::endl;
    const char *x{"Hello"};
    const char *y{"World"};

     const char *result = maximum(x,y);
    std::cout<<"result is: "<<result<<std::endl;
    
    return 0;
}