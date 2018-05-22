#include <iostream>
#include <string>
#include "mushroom.hpp" 
#include "math.hpp"

using namespace std ;

Mushroom::Mushroom()
{
    capDiameter = randoNum(1, 9) ;
    height = randoNum(1, 9) ;
    stemDiameter = randoNum(1, 4) ;
    healthEffect = randoNum(-20, 20) ;
    brainEffect = randoNum(-2, 2) ;
}

void Mushroom::printMushStats()
{
    cout << this->name << endl << "Cap Diameter: " << this->capDiameter << endl << "Stem height: " << this->height << endl << "Stem Diameter: " << this->stemDiameter << endl << endl ;
}

void Mushroom::printHealthEffect()
{
    cout << this->healthEffect ;
}

void Mushroom::printBrainEffect()
{
    cout << this->brainEffect ;
}

 
//  
//  string isPoisonousString ;
//     string isPsychedelicString ;
//     
//     if(this->isPoisonous == true)
//     {
//         isPoisonousString = "yes" ;
//     } 
//     else 
//     {
//         isPoisonousString = "no" ;
//     }
//     
//     if(this->isPsychedelic == true)
//     {
//         isPsychedelicString = "yes" ;
//     } 
//     else 
//     {
//         isPsychedelicString = "no" ;
//     }


