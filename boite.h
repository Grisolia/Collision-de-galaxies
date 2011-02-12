#ifndef BOITE_H_INCLUDED
#define BOITE_H_INCLUDED
#include <vector>
#include "particule.h"

using namespace std;

class boite
{
    int niveau;
    vector<float> centre;
    vector<float> centreMasse;
    float masse;
    particule *pointeurParticule;
    boite *premiereFille;
    boite *boiteSoeur;

    public:
        boite(int d=0);
};

#include "boite.cpp"
#endif // BOITE_H_INCLUDED
