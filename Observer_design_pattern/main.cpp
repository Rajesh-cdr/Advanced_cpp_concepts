#include<iostream>
using namespace std;
#include<string>
#include<list>
class ISubscriber{
    public:
    virtual void notify(string msg) = 0;
};

class user: public ISubscriber{

    private :l
         int userId;
         public:
         user(int userId)
         {
            this->userId = userId;
         }

         void notify(string msg)
         {
            std::cout<<"userID: "<<userId<<"recieved message: "<<msg<<std::endl;
         }

};

class Group
{
    private:
    list<ISubscriber*>users;
    public:

    void Subscriber(ISubscriber*user)
    {
        users.push_back(user);
    }
    void Unsubscribe(ISubscriber*user )
    {
        users.remove(user);
    }
    void notify(string msg)
    {
        for(auto user:users)
        {
             user->notify(msg);
        }
    }

};

int main()
{
    std::cout << "Hi Rajesh Welcome to freecodecamp" << std::endl;

    Group *group = new Group();

    user *user1 = new user(1);
    user *user2 = new user(2);
    user *user3 = new user(3);

    group->Subscriber(user1);
    group->Subscriber(user2);
    group->Subscriber(user3);

    group->notify("new message");
    group->Unsubscribe(user1);
    group->notify("New New message");
    
    return 0;
}