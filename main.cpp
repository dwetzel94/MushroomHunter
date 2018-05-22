#include <iostream>
#include "mushroom.hpp"
#include "math.hpp"
#include "player.hpp"
#include <string>
#include <ctime>
#include <vector>

using namespace std ;

void printActionsMenu()
{
    cout << "Eat mushroom [1]" << endl << "Collect mushroom [2]" << "Sort mushrooms [3]" << endl << endl ;
}

void printSortOptionsMenu()
{
    cout << "Cap Size [1]" << endl << "Stem Height [2]" << endl << "Stem Girth [3]" << endl << endl ;
}

int main() 
{ 
    srand (time(NULL)) ;
    Player player ;
    vector<Mushroom*> mushrooms ;  
    
    string adventureAnswer ;
    string eatAnswer ;
    
    
    cout << "let's go shroom hunting" << endl << "you get to harvest your own mushrooms from the wild and do with them as you please" << endl << endl << "are you ready for dis [y/n]" << endl << endl ;
    
    cin >> adventureAnswer ;
    
    if(adventureAnswer == "y")
    {
        cout << "cool. let's go into the woods then." << endl << endl ;
        
        
        while(player.totalHealth > 0)
        {
            Mushroom* shroom = new Mushroom() ;
            mushrooms.push_back(shroom) ;            
            
            cout << "oh, here's a mushroom. upon examination, we discover these characteristics about it: " << endl << endl ;
            shroom->printMushStats();
            
            cout << "What would you like to do with this mushroom?" << endl;
            printActionsMenu() ;
            cout << endl ;
            
            string printActionsMenuAnswer ;
            cin >> printActionsMenuAnswer ;
            
            if(printActionsMenuAnswer == "1")
            {
                cout << "damb what a tasty mushroom. it affected your health by " ;
                shroom->printHealthEffect();
                cout << endl << "and your brain by " ;
                shroom->printBrainEffect() ;
                cout << endl << endl << "your health is now " ;
                player.eatShroom(shroom) ;
                cout << " and your brain is at " ;
                player.printBrainPower(shroom) ;
                cout << ". Let's keep walking." << endl << endl ;
                
                mushrooms.pop_back() ;
                delete shroom ;
            }
            
            if(printActionsMenuAnswer == "2")
            {
                cout << "Okay, it's in your shroom pouch now. You have " << mushrooms.size() << " mushrooms now. Let's keep walking." << endl ;
            }
            
            if(printActionsMenuAnswer == "3")
            {
                cout << "Sick. You have " << mushrooms.size() << " mushrooms. How do you want to sort these bad boys?" << endl ;
                printSortOptionsMenu();
                
                string sortAnswer ;
                cin >> sortAnswer ;
                
                if(sortAnswer == "1")
                {
                    
                }
                
                if(sortAnswer == "2")
                {
                    
                }
                
                if(sortAnswer == "3")
                {
                    
                }
                
                
            }
        }
    }
            
            
            
        
//             cout << "are you going to eat it? [y/n]" << endl ;
//             cin >> eatAnswer ;
//             cout << endl << endl ;
//             
//             if(eatAnswer == "y")
//             {
//                 cout << "damb what a tasty mushroom. it affected your health by " ;
//                 shroom.printHealthEffect();
//                 cout << endl << "and your brain by " ;
//                 shroom.printBrainEffect() ;
//                 cout << endl << endl << "your health is now " ;
//                 player.eatShroom(shroom) ;
//                 cout << " and your brain is at " ;
//                 player.printBrainPower(shroom);
//                 cout << "." << endl << endl ;
//             }
        

//         }
    
    
    if(adventureAnswer == "n")
    {
        cout << "fine i'll find a better mushroom hunting friend" ;
    }
    
   
    

}
