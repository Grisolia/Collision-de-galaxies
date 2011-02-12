#include "boite.h"
#include <iostream>

using namespace std;

boite::boite(int d)
{
    niveau = d;
    centre.resize(2); centre[0] = 0.5 ; centre[1] = 0.5 ;
    masse = 0;
    pointeurParticule = NULL;
    premiereFille = NULL;
    boiteSoeur = NULL;
    printf("ok");
}
