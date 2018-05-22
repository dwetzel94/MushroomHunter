#include <iostream>
#include <string>
#include <cstdlib>
#include "mushroom.hpp" 
#include "player.hpp"

using namespace std ;

Player::Player()
{
    totalHealth = 100 ;
    brainPower = 10 ;
}

void Player::eatShroom(Mushroom* shroom)
{
    totalHealth = 100 + shroom->healthEffect ;
    
    if(totalHealth <= 0)
    {
        cout << "you dead nibba" << endl ;
    }
    
    cout << totalHealth ;
}

void Player::printBrainPower(Mushroom* shroom)
{
    brainPower = 10 + shroom->brainEffect ;
    cout << brainPower ;
}
