#ifndef PARTICULE_H_INCLUDED
#define PARTICULE_H_INCLUDED
#include <vector>
#include <list>

using namespace std;

class particule
{
    vector<float> position;
    vector<float> vitesse;
    float force;
    list< vector<float> > listePosition;
};
#include "particule.cpp"
#endif // PARTICULE_H_INCLUDED
