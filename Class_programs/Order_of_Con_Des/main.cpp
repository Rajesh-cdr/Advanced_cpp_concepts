 #include<iostream>
#include<string_view>
class Dog{
    private:
    std::string name;
    std::string breed;
    int *page{nullptr};
    public:
    Dog(std::string_view name,std::string_view breed,int page);
    ~Dog();

};

Dog::Dog(std::string_view _name, std::string_view _breed,int _page)
{
    name = _name;
    breed = _breed;
    page = new int;
    *page = _page;
    std::cout<<"Constructor called!"<<std::endl;
}
Dog::~Dog()
{
    delete page;
    std::cout<<"Destructor called!"<<std::endl;
}

int main()
{
    std::cout << "Hi Rajesh Welcome to freecodecamp" << std::endl;
    Dog *dog1 = new Dog("Chimtu","Hybrid",2);
    Dog *dog2 = new Dog("Fluffy","Sheperd",3);
    Dog *dog3 = new Dog("StreetDog","Hybrid_2",4);
    std::cout<<"Done!"<<std::endl;
    
    return 0;
}