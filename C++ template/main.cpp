#include<iostream>
#include<thread>
#include<mutex>
#include<chrono>
//#include<struct>
using namespace std;

std::mutex m1;
int x = 0;
/// @brief 
/// @param x 

struct myStruct{
    int z;
    int y;
    char c;
    bool b;
};
void threadChecking(int x)
{
    m1.lock();
    ++x;
    std::cout << "value of X: " << x << std::endl;
    m1.unlock();
}
int main()
{
    std::cout << "Hi Rajesh Welcome to freecodecamp" << std::endl;
    std::thread t1(threadChecking,10);
    std::this_thread::sleep_for(chrono::seconds(5));
    std::thread t2(threadChecking,20);
       
    t1.join();
    t2.join();
    std::cout << x << std::endl;

    myStruct s;
    s.b = true;
    s.c = 'a';
    s.y = 10;
    s.z = 5;

    int *p = reinterpret_cast<int*>(&s);
    std::cout<<"value of P:"<<*p<<std::endl;
    p++;
    std::cout<<"value of P1:"<<*p<<std::endl;
     p++;

    std::cout<<"value of P2:"<<*p<<std::endl;

    char *ch = reinterpret_cast<char*>(p);
    std::cout<<"Value of char:"<<*ch<<std::endl;

    // ++ch;
    //  std::cout<<"Value of char1:"<<*ch<<std::endl;
    bool *tru = reinterpret_cast<bool*>(++ch);
    std::cout<<"Value of tru:"<<*tru<<std::endl;
    
    



    return 0;
}