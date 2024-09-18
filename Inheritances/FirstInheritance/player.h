#ifndef PLAYER_H
#define PLAYER_H
#include<iostream>
#include "person.h"
#include<string>
#include<string_view>

class Player:public Person{
    friend std::ostream& operator<<(std::ostream& out, Player&player);
    private: 
        std::string m_game{"None"};
    public:
    Player() = default;
    Player(std::string_view game);
    ~Player();


};

#endif