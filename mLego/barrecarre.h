#ifndef BARRECARRE_H
#define BARRECARRE_H
#include <barre.h>

/**
 * @brief The BarreCarre class
 */

class BarreCarre
{
public:
    BarreCarre(string _reference,
               const unsigned int _cote,
               const unsigned int _longueur,
               const double _densite,
               string _nomAlliage);

    double CalculerSectionCarre();
    double CalculerMasseCarre();

private:
    string reference;
    unsigned int cote;
    unsigned int longueur;
    double densite;
};

#endif // BARRECARRE_H
