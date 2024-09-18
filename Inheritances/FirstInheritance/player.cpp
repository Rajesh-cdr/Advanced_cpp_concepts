#include"player.h"
#include"person.h"

Player::Player(std::string_view game):m_game(game)
{

}
Player::~Player()
{

}

std::ostream& operator<<(std::ostream & out, Player&player)
{
    out<<"Player: [game: "<<player.m_game<<" "<<" Name : "<<player.get_firstname()<<" "<<player.get_secondname()<<" ]";
    return out;
}
