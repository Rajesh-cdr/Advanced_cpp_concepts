#include"player.h"
#include"person.h"

Player::Player(std::string_view game,std::string_view firstname,std::string_view secondname)
{
     m_game = game;
     m_fisrtname = firstname;
     m_secondname = secondname;
}
Player::~Player()
{

}

std::ostream& operator<<(std::ostream & out, Player&player)
{
    out<<"Player: [game: "<<player.m_game<<" "<<" Name : "<<player.m_fisrtname<<" "<<player.m_secondname<<" ]";
    return out;
}
