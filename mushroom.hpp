#ifndef MUSHROOM_H
#define MUSHROOM_H
#include <string>

using namespace std ;

class Mushroom
{
    
    public:
        string name ;
        int height ;
        int stemDiameter ;
        int capDiameter ;
        bool isPoisonous ;
        bool isPsychedelic ;
        int healthEffect ;
        int brainEffect ;
        int hungerEffect ;
        
        Mushroom() ;
        void printMushStats() ;
        void printHealthEffect() ;
        void printBrainEffect() ;
    
} ;

#endif //Ends MUSHROOM_H
