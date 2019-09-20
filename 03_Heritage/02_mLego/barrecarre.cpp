#include "barrecarre.h"

using namespace std;
/**
 * @brief BarreCarre::BarreCarre
 * @details instancie les paramètre
 * @param _reference
 * @param _cote
 * @param _longueur
 * @param _densite
 * @param _nomAlliage
 */
BarreCarre::BarreCarre(string _reference,
                       const unsigned int _cote,
                       const unsigned int _longueur,
                       const double _densite,
                       string _nomAlliage)
{
    reference = _reference;
    cote = _cote;
    longueur = _longueur;
    densite = _densite;
}

/**
 * @brief BarreCarre::CalculerSectionCarre
 * @details Calcule la section de la barre carre
 * @param cote
 * @return
 */
double BarreCarre::CalculerSectionCarre()
{
    return cote * cote;
}

/**
 * @brief BarreCarre::CalculerMasseCarre
 * @details Calcule la masse de la barre carre
 * @param longueur
 * @param densite
 * @return
 */
double BarreCarre::CalculerMasseCarre()
{
     return longueur * densite * CalculerSectionCarre();
}
