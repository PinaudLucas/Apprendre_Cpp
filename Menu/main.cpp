#include <iostream>
#include <menu.h>

using namespace std;

int main()
{
    int choix;

    menu leMenu("menu.txt");
    choix = leMenu.Afficher();
    cout << "vous avez choisie l'option : " << choix <<endl;

    return 0;
}
