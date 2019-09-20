#include <iostream>
#include <contenant.h>
#include "carton.h"

using namespace std;

int main()
{
    Contenant leContenant(10,10,10);
    Carton leCarton(10,10,10,50);

    cout << "Volume = " << leContenant.CalculerVolume() << " cm3" << endl;
    cout << "Poids maxi = " << leCarton.ObtenirPoidsMaxi() << " kg" << endl;
    return 0;
}
