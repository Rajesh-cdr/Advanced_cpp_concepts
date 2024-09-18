#include<iostream>
#include"player.h"
#include "person.h"

Player::Player()
{

}
Player::~Player()
{

}

std::ostream& operator<<(std::ostream& out , Player& player){
    out<<"person [Fullname: "<<player.getfullname()<<" Age: "<<player.getage()<<" Address: "<<player.getaddress()<<" ]";
    return out;
 }