#ifndef PLAYER_H
#define PLAYER_H
#include <string>

using namespace std ;

class Player
{
    public:
        int totalHealth ;
        int brainPower ;
        int hunger ;
        
        Player() ;
        void eatShroom(Mushroom* shroom) ;
        void printBrainPower(Mushroom* shroom) ;
        
} ;

#endif
