#ifndef PLAYER_H
#define PLAYER_H
#include<iostream>
#include"person.h"

class Player: public Person{
     friend std::ostream &operator<<(std::ostream &out , Player&player);
    private:
    int m_career_start_year{0};
    double m_salary{0.0};
    int m_health_factor{0};

    public:
    Player();
    ~Player();
   void play(){
    
   }
};
#endif