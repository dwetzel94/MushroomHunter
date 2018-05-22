#include <cstdlib>
#include "math.hpp"


using namespace std ;


int randoNum(int minvalue, int maxvalue)
{
   int randomNumb = rand() % (maxvalue - minvalue) + minvalue ;
    return randomNumb ;
}
