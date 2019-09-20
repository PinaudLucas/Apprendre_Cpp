#ifndef BARRE_H
#define BARRE_H
#include <string>
#include <iostream>

using namespace std;

/**
 * @brief The Barre class
 */

class Barre
{
public:    
    Barre(string _reference,
          const unsigned int _longueur,
          const double _densite,
          string _nomAlliage);

    void AfficherCaracteristique();

private:
    string reference;
    unsigned int longueur;
    double densite;
    string nomAlliage;
};

#endif // BARRE_H
