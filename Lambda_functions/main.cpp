#include<iostream>

int main()
{
    std::cout << "Hi Rajesh Welcome to freecodecamp" << std::endl;

    //call lambda function with function name
    std::cout<<"<----Call Lambda function with function name---->"<<std::endl;
    auto fun = []()
    {
        std::cout<<"Hello Rajesh: "<<std::endl;
    };fun();
    std::cout<<std::endl;

    //call Lambda function directly after defination
    std::cout<<"<---call Lambda function directly after defination--->"<<std::endl;
    [](){
        std::cout<<"Hi Prasoon: "<<std::endl;
    }();

    std::cout<<std::endl;
    // Lambda function that takes parameters

    std::cout<<"<----Lambda function that takes parameters---->"<<std::endl;

    [](double a, double b){
        std::cout<<"Addition of a+b: "<<a+b<<std::endl;
    }(12.5,45.7);

    std::cout<<std::endl;

    //Lambda function that return something
    std::cout<<"<----Lambda function that return something---->"<<std::endl;

    auto result = [](int a, int b){
        return a+b;
    }(10,20);
    std::cout<<"Addition of a+b: result is: "<<result<<std::endl;

    // print result directly
    std::cout<<std::endl;
    std::cout<<"<----Print result directly---->"<<std::endl;
    std::cout<<"Result: "<<[](double x, double y){
        return x+y;
    }(30.5,60.00)<<std::endl;

    std::cout<<std::endl;
    //specify the return type explicitly
    std::cout<<"<---specify the return type explicitly---->"<<std::endl;

    auto resultA = [](double x, double y)->double{
        return x+y;
    }(40.6,50.8);
    std::cout<<"result is :"<<resultA<<std::endl;

    //calling multiple times lambda function

    auto fun1 = [](double a,double b){
        std::cout<<"Multiplication A*B: "<<a*b<<std::endl;
    } ;

    fun1(60,70);
    fun1(10,10);

    //capture list:
    std::cout<<std::endl;
    std::cout<<"<----Capture List---->"<<std::endl;

    double dbl{10.6};
    double db2{40.78};

    auto fun2 = [dbl,db2]()
    {
        std::cout<<"Addition of db1+db2: "<<dbl+db2<<std::endl;
    }; fun2();

    std::cout<<std::endl;
    //Capture by value
    std::cout<<"<--- Capture by value--->"<<std::endl;

    int cap{40};
    auto fun3 = [cap](){
        std::cout<<"Inner: Address of cap is: "<<&cap<<"  Value of Cap is: "<<cap<<std::endl;
    };

    for(size_t i{}; i<5;i++)
    {
        std::cout<<"Outer: Address of cap is :"<<&cap<<"  value of cap is :"<<cap<<std::endl;
        fun3();
        ++cap;
    }

    std::cout<<std::endl;
    //Capture by reference
    std::cout<<"<--- Capture by reference--->"<<std::endl;

    int cap1{40};
    auto fun4 = [&cap1](){
        std::cout<<"Inner: Address of cap is: "<<&cap1<<"  Value of Cap is: "<<cap1<<std::endl;
    };

    for(size_t i{}; i<5;i++)
    {
        std::cout<<"Outer: Address of cap is :"<<&cap1<<"  value of cap is :"<<cap1<<std::endl;
        fun4();
        ++cap1;
    }

    std::cout<<std::endl;

    // Capture all in Context
    //1.Capture everything by value
    std::cout<<"<-----Capture everything by value---->"<<std::endl;
     int cap2{40};
    auto fun5 = [=](){
        std::cout<<"Inner: Address of cap is: "<<&cap2<<"  Value of Cap is: "<<cap2<<std::endl;
    };

    for(size_t i{}; i<5;i++)
    {
        std::cout<<"Outer: Address of cap is :"<<&cap2<<"  value of cap is :"<<cap2<<std::endl;
        fun5();
        ++cap2;
    }

    std::cout<<std::endl;

    // Capture all in Context
    //1.Capture everything by reference
    std::cout<<"<-----Capture everything by reference---->"<<std::endl;
     int cap3{40},cap4{50};
    auto fun6 = [&](){
        std::cout<<"Inner: Address of cap is: "<<&cap3<<"  Value of Cap is: "<<cap3<<std::endl;
        std::cout<<"Inner: Address of cap4 is: "<<&cap4<<" Value of Cap4 is: "<<cap4<<std::endl;
    };

    for(size_t i{}; i<5;i++)
    {
        std::cout<<"Outer: Address of cap3 is :"<<&cap3<<"  value of cap3 is :"<<cap3<<std::endl;
        fun6();
        ++cap3;
        ++cap4;
    }

    
    return 0;
}