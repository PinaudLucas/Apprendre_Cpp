#ifndef BARRERONDE_H
#define BARRERONDE_H
#include <barre.h>

/**
 * @brief The BarreRonde class
 */

class BarreRonde
{
public:
    BarreRonde(string _reference,
               const double _diametreCercle,
               const unsigned int _longueur,
               const double _densite,
               string _nomAlliage);

    double CalculerSectionRonde();
    double CalculerMasseRonde();

private:
    string reference;
    double diametreCercle;
    unsigned int longueur;
    double densite;
};

#endif // BARRERONDE_H
