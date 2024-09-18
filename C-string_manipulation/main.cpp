#include<iostream>
#include<cstring>

int main()
{
    std::cout << "Hi Rajesh Welcome to freecodecamp" << std::endl;
    std::cout<<std::endl;

    // lenth of string:std::strlen
    std::cout<<"<------Lenth of string->std::strlen---->"<<std::endl;

    const char message1[]{"Hello GoodMorning Everyone"};
    std::cout<<"Lenth of message1: "<<std::strlen(message1)<<std::endl;//it igoner the null characters
    std::cout<<"Size of message1: "<<sizeof(message1)<<std::endl;//it include the null characters

    std::cout<<std::endl;
    //Character pointers
    std::cout<<"<---Character pointers---->"<<std::endl;
    const char* message2{"How are you!"};
    std::cout<<"Lenth of message2: "<<std::strlen(message2)<<std::endl;
    std::cout<<"size of message2: "<<sizeof(message2)<<std::endl;

    std::cout<<std::endl;
    //string comparing
    std::cout<<"<-----String comparing--->"<<std::endl;
    std::cout<<"std::strcmp"<<std::endl;
    char message3[]{"Blabama"};
    char message4[]{"Alabama"};
    std::cout<<std::strcmp(message3,message4)<<std::endl;

    std::cout<<"Const pointer characters:"<<std::endl;
    std::cout<<std::endl;

    const char* message5{"Alabama"};
    const char* message6{"Blabama"};
    std::cout<<"String compare: "<<std::strcmp(message5,message6)<<std::endl;

    message5 = "Rajehs";
    message6 = "Lakshmaiah"; 

     std::cout<<"String compare: "<<std::strcmp(message5,message6)<<std::endl;

     std::cout<<std::endl;
     //string cancatenation and copying
     std::cout<<"<-----std::strcat->string cancatenation and copying--->"<<std::endl;

     char dest[50]{"Hello"};
     char src[50]{"World"};
     std::cout<<"Concatenation of string: "<<std::strcat(dest,src)<<std::endl;;
     //std::cout<<"After concatenation :"<<dest<<std::endl;

     std::strcat(dest," Goodbye world");
     std::cout<<"After concatenation :"<<dest<<std::endl;

     char *dest1{new char[30]{'F','o','r','e','!','3','\0'}};
     char *src1{new char[30]{'H','e','l','l','o','w','o','r','l','d','!'}};

     std::cout<<"String concatenation: "<<std::strcat(dest1,src1)<<std::endl;
     std::cout<<"Manully printing string: "<<std::strcat(dest1," This is Rajesh")<<std::endl;
     std::cout<<"Source of string: "<<std::strcat(src1," Learing code of C++ ")<<std::endl;

     //string n concatenation
     char dest2[]{"Hi Rajesh"};
     char src2[]{"How are you"};
     std::cout<<"string n concatenation: "<<std::strncat(dest2,src2,5)<<std::endl;

     std::cout<<std::endl;
     //string copy
     std::cout<<"<-----String copying:std::strcpy----->"<<std::endl;

     const char* src3 = {"C++ is a multipurpose programing"};
     char *dest3 = new char[std::strlen(src3)+1];

     std::cout<<"String copying: "<<std::strcpy(dest3,src3)<<std::endl;
     std::cout<<"Destination char: "<<dest3<<std::endl;
     
     std::cout<<std::endl;
     //with out using char pointers
     std::cout<<std::strcpy(dest2,src2)<<std::endl;

     //strncpy
     std::cout<<std::endl;
     std::cout<<"<-----String n copying---->"<<std::endl;

     const char* src4 = "Hello";
     char dest4[] = {'a','b','c','d','e','f','\0'};
     std::cout<<"string n copying : "<<std::strncpy(dest4,src4,5)<<std::endl;
     std::cout<<"Destination 4: "<<dest4<<std::endl;

    return 0;
}