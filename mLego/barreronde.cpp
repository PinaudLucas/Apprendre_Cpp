#include "barreronde.h"
#include <math.h>

/**
 * @brief BarreRonde::BarreRonde
 * @details instancie les paramètre
 * @param _reference
 * @param _diametreCercle
 * @param _longueur
 * @param _densite
 * @param _nomAlliage
 */
BarreRonde::BarreRonde(string _reference,
                       const double _diametreCercle,
                       const unsigned int _longueur,
                       const double _densite,
                       string _nomAlliage)
{
    reference = _reference;
    diametreCercle = _diametreCercle;
    longueur = _longueur;
    densite = _densite;
}

/**
 * @brief BarreRonde::CalculerSectionRonde
 * @details Calcule la section de la barre cerculaire
 * @param diamtreCercle
 * @return
 */
double BarreRonde::CalculerSectionRonde()
{
    return (M_PI *(diametreCercle * diametreCercle)) / 4;
}

/**
 * @brief BarreRonde::CalculerMasseRonde
 * @details Calcule la masse de la barre cerculaire
 * @param longueur
 * @param densite
 * @return
 */
double BarreRonde::CalculerMasseRonde()
{
    return longueur * densite * CalculerSectionRonde();
}

