#include "barrerectangle.h"

/**
 * @brief BarreRectangle::BarreRectangle
 * @details instancie les paramètre
 * @param _reference
 * @param _longueurRectangle
 * @param _largeur
 * @param _longueur
 * @param _densite
 * @param _nomAlliage
 */
BarreRectangle::BarreRectangle(string _reference,
                               const unsigned int _longueurRectangle,
                               const unsigned int _largeur,
                               const unsigned int _longueur,
                               const double _densite,
                               string _nomAlliage)
{
    reference = _reference;
    longueurRectangle = _longueurRectangle;
    largeur = _largeur;
    longueur = _longueur;
    densite = _densite;

}

/**
 * @brief BarreRectangle::CalculerSectionRectangle
 * @details Calcule la section de la barre rectangulaire
 * @param longueurRectangle
 * @param largeur
 * @return
 */
double BarreRectangle::CalculerSectionRectangle()
{
    return longueurRectangle * largeur;
}

/**
 * @brief BarreRectangle::CalculerMasseRectangle
 * @details Calcule la masse de la barre rectangulaire
 * @param longueur
 * @param densite
 * @return
 */
double BarreRectangle::CalculerMasseRectangle()
{
    return longueur * densite * CalculerSectionRectangle();
}
