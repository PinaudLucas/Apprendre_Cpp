#include "barre.h"
#include <iostream>

using namespace std;

/**
 * @brief Barre::Barre
 * @details instancie les paramètres
 * @param _reference
 * @param _longueur
 * @param _densite
 * @param _nomAlliage
 */
Barre::Barre(string _reference, const unsigned int _longueur, const double _densite, string _nomAlliage)
{
    longueur = _longueur;
    densite = _densite;
    nomAlliage = _nomAlliage;
}
/**
 * @brief Barre::AfficherCaracteristique
 * @details Permet l'affichage des paramètres
 * @param longueur
 * @param densite
 * @param nomAlliage
 */
void Barre::AfficherCaracteristique()
{
    cout << "Longueur : " << longueur << " cm" << endl;
    cout << "Densite : " << densite << " kg/cm3" << endl;
    cout << "Nom de l'Alliage : " << nomAlliage << endl;
}

