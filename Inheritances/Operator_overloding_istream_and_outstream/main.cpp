#include<iostream>
class Test
{
    friend std::istream& operator>>(std::istream& input, Test&obj);
    friend std::ostream& operator<<(std::ostream& output, Test& obj);

    private:
    int x;
    public:
    Test(int x = 0):x(x)
    {

    }
};
    std::istream& operator>>(std::istream& input, Test&obj){
        input>>obj.x;
        return input;
    }
    std::ostream& operator<<(std::ostream& output, Test& obj){
        output<<obj.x;
        return output;
     }


int main()
{
    std::cout << "Hi Rajesh Welcome to freecodecamp" << std::endl;

    Test t;
    std::cin>>t;
    std::cout<<t;
    
    return 0;
}