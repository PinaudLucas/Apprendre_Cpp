#ifndef BARRERECTANGLE_H
#define BARRERECTANGLE_H
#include <barre.h>

/**
 * @brief The BarreRectangle class
 */

class BarreRectangle
{
public:
    BarreRectangle(string _reference,
                   const unsigned int _longueurRectangle,
                   const unsigned int _largeur,
                   const unsigned int _longueur,
                   const double _densite,
                   string _nomAlliage);

    double CalculerSectionRectangle();
    double CalculerMasseRectangle();

private:
    string reference;
    unsigned int longueurRectangle;
    unsigned int largeur;
    unsigned int longueur;
    double densite;

};

#endif // BARRERECTANGLE_H
