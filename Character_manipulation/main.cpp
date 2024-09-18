#include<iostream>
#include<cctype>
#include<cstring>

int main()
{
    std::cout << "Hi Rajesh Welcome to freecodecamp" << std::endl;
    std::cout<<std::endl;

    //check if the character is alphnumeric
    std::cout<<"<------Check if the character is alphanumric or not------>"<<std::endl;
    std::cout<<" std::isalnum "<<std::endl;
   // We are getting result as a boolen type like 1 0r 0, some time will get 2 also for for alphanumeric
    std::cout<<"C is alphanumeric: "<<std::isalnum('C')<<std::endl;
    std::cout<<"^ is alphanumeric: "<<std::isalnum('^')<<std::endl;

    std::cout<<"c is alphanumeric: "<<std::isalnum('c')<<std::endl;
    std::cout<<"a is alphanumeric: "<<std::isalnum('a')<<std::endl;

    std::cout<<"Z is alphanumric : "<<std::isalnum('Z')<<std::endl;

    char input_char1{'*'};
    if(std::isalnum(input_char1))
    {
     std::cout<<input_char1<<" is Alphanumric: "<<std::endl;
    }
    else{
           std::cout<<input_char1<<" is not Alphanumric: "<<std::endl;
    }

    std::cout<<std::endl;
    std::cout<<"<------Check if the character is alphabetic or not------>"<<std::endl;
    std::cout<<" std::isalpha "<<std::endl;

    std::cout<<" C is alphabetic: "<<std::isalpha('C')<<std::endl;
    std::cout<<" & is alphabetic: "<<std::isalpha('&')<<std::endl;
    std::cout<<" 7 is alphabetic: "<<std::isalpha('7')<<std::endl;

    char input_char2{'%'};
    if(std::isalpha(input_char2))
    { 
        std::cout<<input_char2<<" is a Alphabetic :"<<std::endl;
    }
    else{
        std::cout<<input_char2<<" is a not Alphabetic :"<<std::endl;
    }

    std::cout<<std::endl;
    //check if character or string blank or not
    std::cout<<"<-------check if character or string blank or not----->"<<std::endl;
    std::cout<<"std::isblank"<<std::endl;
    char message[]{"Hi hello there how are you"};
    std::cout<<"Message: "<<message<<std::endl;

    int blank_count{};
    for(size_t i{0};i<std::size(message);i++)
    {
        if(std::isblank(message[i]))
        std::cout<<"Find the blanks in this index: ["<<i<<"]"<<std::endl;
        ++blank_count;
    }
    std::cout<<"Total count of blank spaces in given message: "<<blank_count<<std::endl;

    std::cout<<std::endl;
    //check if character is lower case or upper case
    std::cout<<"<-----check if character is lower case or upper case---->"<<std::endl;

    char message2[]{"Hi Rajesh yoour need to get a job With in OneMonth and with salry 2000000"};
    std::cout<<"message2: "<<message2<<std::endl;

    int lowercase_count{};
    int uppercase_count{};
    int digit_count{};

    for(auto character:message2)
    {
        std::cout<<" character: "<<character<<std::endl;
        if(std::islower(character))
        {
            ++lowercase_count;
        }
        if(std::isupper(character))
        {
            ++uppercase_count;
        }
        if(std::isdigit(character))
        {
            ++digit_count;
        }
    }

    std::cout<<"Lower_case count: "<<lowercase_count<<"  upper_case_count: "<<uppercase_count<<std::endl;
    std::cout<<"Number of digits in given char: "<<digit_count<<std::endl;

    std::cout<<std::endl;

    //Convert lower to upper
    std::cout<<"<----Lower to upper conversion character---->"<<std::endl;
    char original_str[]{"Happy Christmass everyone"};
    char destinastion_str[std::size(original_str)];
    // Turn this to upper case 

    for(size_t i{0};i<std::size(original_str);i++)
    {
        destinastion_str[i] = std::toupper(original_str[i]);
    }

    std::cout<<"original string: "<<original_str<<std::endl;
    std::cout<<"upper destination string: "<<destinastion_str<<std::endl;
    // Turn this to lower case
    std::cout<<std::endl;
    for(size_t i{0};i<std::size(original_str);i++)
    {
        destinastion_str[i] = std::tolower(original_str[i]);
    }

    std::cout<<"original string: "<<original_str<<std::endl;
    std::cout<<" lower destination string: "<<destinastion_str<<std::endl;


    const char message3[]{"Hi GoodMoring"};
    std::cout<<"strlenth: "<<std::strlen(message3)<<std::endl;


    
    return 0;
}