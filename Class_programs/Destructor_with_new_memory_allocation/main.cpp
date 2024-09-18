#include<iostream>
#include<string_view>
class Dog{
    private:
    std::string name;
    std::string breed;
    int *page{nullptr};
    public:
    Dog() = default;
    Dog(std::string_view _name,std::string_view _breed,int _page);
    ~Dog();

};
Dog::Dog(std::string_view _name,std::string_view _breed,int _page)
{
    name = _name;
    breed = _breed;
    page = new int;
    *page = _page;
    std::cout<<"Parameterized constructor called: "<<name<<std::endl;
}

Dog::~Dog()
{
    delete page;
    std::cout<<"Destructor called: "<<name<<std::endl;
}

//  void somefun()
//  {
//     Dog *dog = new Dog("Chimtu","Hybrid",2);
//     delete dog;
//  }

int main()
{
    std::cout << "Hi Rajesh Welcome to freecodecamp" << std::endl;
    //somefun();
    Dog *dog = new Dog("Chimtu","Hybrid",2);
    delete dog;
    std::cout<<"Done!"<<std::endl;
    
    return 0;
}
