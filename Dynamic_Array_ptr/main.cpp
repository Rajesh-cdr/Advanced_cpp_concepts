#include<iostream>

int main()
{
    std::cout<<"Welcome to the Rajesh FreecodeC++: "<<std::endl;
   /* size_t size{10};
    double *p_arr{new double[size]};
    double *p_arr1{new(std::nothrow) double[size]{}};
    double *p_arr2{new(std::nothrow) double[size]{1,2,3,4}};
    std::cout<<"Value of p_arr: "<<*p_arr<<std::endl;
    std::cout<<"value of p_arr1: "<<*p_arr1<<std::endl;
    std::cout<<"value of p_arr2: "<<*p_arr2<<std::endl;

    if(p_arr2)
    {
        std::cout<<"size of p_arr2: "<<sizeof(p_arr2)<<std::endl;
        std::cout<<"Successfully allocated memory for p_arr"<<std::endl;
        for(size_t i{0}; i<size;i++)
        {
            std::cout<<"value of p_arr2: "<<p_arr2[i]<<"  "<<*(p_arr2+i)<<std::endl;
        }
    }

    double *temp = new double[size]{1.1,2.2,3.3,4.4,5.5,6.6}
    // std::size
    /*std::cout<<"std::size of p_arr2: "<<std::size(temp)<<std::endl;

    // range based forloop
    for(auto value:temp)
    {
        std::cout<<"values :"<<value<<std::endl;
    }*///--> it wont work for pointers*/

     //it work for stack array

     int stackarr[8]{1,2,3,4,5,5,6,7};

     std::cout<<"Size of stackarr: "<<std::size(stackarr)<<std::endl;

     for(auto s:stackarr)
     {
        std::cout<<"Value of S: "<<s<<std::endl;
     }


    return 0;

}