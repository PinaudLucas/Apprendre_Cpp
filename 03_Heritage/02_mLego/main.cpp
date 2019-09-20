#include <iostream>
#include <iomanip>

#include <barre.h>
#include <barreronde.h>
#include <barrerectangle.h>
#include <barrecarre.h>

using namespace std;

/**
 * @brief main
 * @details Affiche les caratéristque de la barre
 *          et affiche les sections et les masse des differents type de barre en fonction de la barre
 * @return
 */

int main()
{
    cout << "Caractéristique de la Barre" << endl;
    Barre laBarre("0001",100,0.000008125,"Invar");
    laBarre.AfficherCaracteristique();
    cout << setfill('-');
    cout << "+-" << setw(50) << "-+" << endl;
    cout << setfill(' ');

    cout << "Caractéristique de la Barre Ronde" << endl;
    BarreRonde laBarreRonde("0001",5,100,0.000008125,"Invar");
    cout << "Section de la Barre Ronde : " <<laBarreRonde.CalculerSectionRonde() << " cm2" << endl;
    cout << "Masse de la barre Ronde : " << laBarreRonde.CalculerMasseRonde() << " kg" << endl;
    cout << setfill('-');
    cout << "+-" << setw(50) << "-+" << endl;
    cout << setfill(' ');

    cout << "Caractéristique de la barre Carré" << endl;
    BarreRectangle laBarreRectangle("0002",10,5,100,0.000008125,"Invar");
    cout << "Section de la Barre Rectangle : "<< laBarreRectangle.CalculerSectionRectangle() << " cm2" << endl;
    cout << "Masse de la barre Rectangle : " << laBarreRectangle.CalculerMasseRectangle() << " kg" << endl;
    cout << setfill('-');
    cout << "+-" << setw(50) << "-+" << endl;
    cout << setfill(' ');

    cout << "Caractéristique de la barre Carré" << endl;
    BarreCarre laBarreCarre("0003",10,100,0.000008125,"Invar");
    cout << "Section de la Barre Carre : "<< laBarreCarre.CalculerSectionCarre() << " cm2" << endl;
    cout << "Masse de la barre Carre : " << laBarreCarre.CalculerMasseCarre() << " kg" << endl;
    cout << setfill('-');
    cout << "+-" << setw(50) << "-+" << endl;
    cout << setfill(' ');
    return 0;
}
