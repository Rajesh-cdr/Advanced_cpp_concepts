#include<iostream>

int main()
{
    std::cout << "Hi Rajesh Welcome to freecodecamp" << std::endl;
    std::string fullname;//empty string
    std::cout<<"std::string fullname: "<<fullname<<std::endl;
    std::string planet{"Earth , Where the sky is blue"};//intialize with string literals
    std::cout<<"Planet: "<<planet<<std::endl;
    std::string prefered_planet{planet};//intialize with other string
    std::cout<<"prefered planet: "<<prefered_planet<<std::endl;
    std::string message{"Hello there",5};//Intialize with string part of first five indexes like Hello
    std::cout<<"message: "<<message<<std::endl;
    std::string weird_message(5,'R');//intialize with multiple char of R like RRRRR
    std::cout<<"Weird_message: "<<weird_message<<std::endl;
    std::string greetings{"Hello world"};
    std::cout<<"greetings: "<<greetings<<std::endl;
    std::string saying_hello{greetings,6,5};//intialize with part of existing string starting at index 6 and contian 5 characters from 6 index
    std::cout<<"Saying hello: "<<saying_hello<<std::endl;
    planet = "heloo palnet how are you";
    std::cout<<"Planet after changing: "<<planet<<std::endl;
    std::cout<<prefered_planet<<std::endl;

    const char* planet1 {new char[]{"Sun where are you earth i am waiting for u"}};
    std::cout<<planet1<<std::endl;
    return 0;
}