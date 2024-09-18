#include<iostream>
void fun( const int input1,const int input2, int *output)
{
    if(input1>input2)
    *output = input1;
    else
    *output = input2;
}
void fun1( const int input1,const int input2, int &output)
{
    if(input1>input2)
    output = input1;
    else
    output = input2;
}

void fun_str(const std::string &input1, const std::string input2, std::string &output)
{
    if(input1>input2)
    output = input1;
    else
    output = input2;

}

int sum(int a,int b)
{
     int result = a + b;
     std::cout<<"Address of result is "<<&result<<std::endl;
     return result;
}

std::string add_string(std::string str1, std::string str2)
{
    std::string str_result = str1 + str2;
    std::cout<<"inside of str_result address is: "<<&str_result<<std::endl;
    return str_result;

}
int main()
{
    std::cout << "Hi Rajesh Welcome to freecodecamp" << std::endl;
    int input1{20},input2{30},output;
    std::cout<<"Value input and output: "<<input1<<" "<<input2<<std::endl;
    fun(input1,input2,&output);
    std::cout<<" after function Value input and output: "<<input1<<" "<<input2<<std::endl;
    std::cout<<"Output: "<<output<<std::endl;
    std::cout<<std::endl;
    std::cout<<"<-----References------>"<<std::endl;
    fun1(input1,input2,output);
    std::cout<<" after function Value input and output: "<<input1<<" "<<input2<<std::endl;
    std::cout<<"Output: "<<output<<std::endl;

    std::cout<<std::endl;
    std::cout<<"<-----String function--->"<<std::endl;
    std::string string1{"Rajesh"};
    std::string string2{"Prasoon"};
    std::string string_out;

    fun_str(string1,string2,string_out);
    std::cout<<"output of string: "<<string_out<<std::endl;

    int result = sum(input1,input2);
    std::cout<<"Value of result: "<<result<<std::endl;
    std::cout<<"address of result is :"<<&result<<std::endl;

    std::cout<<std::endl;
    std::cout<<"<------string concatation with same address---->"<<std::endl;
    std::string str1{"Hello"};
    std::string str2{"World"};
    std::string str_result = add_string(str1,str2);
    std::cout<<"str_result is: "<<str_result<<std::endl;
    std::cout<<"Address of str_result is: "<<&str_result<<std::endl;


    
    return 0;
}