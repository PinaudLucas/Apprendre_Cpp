#include "menu.h"

using namespace std;

menu::menu(const std::string &_nom):nom(_nom), longueurMax(0)
{
    nom = _nom;

    ifstream fichierMenu(nom.c_str());

    if (fichierMenu.fail())
    {
        cerr << "Erreur lors de l'ouverture du fichier : "<< nom << endl;
        nbOption = 0;
    }
    else
    {
        nbOption = static_cast<int>(count(istreambuf_iterator<char>(fichierMenu),istreambuf_iterator<char>(),'\n'));
        fichierMenu.seekg(0,ios::beg);
        option = new string[nbOption];
        for (unsigned int i = 0; i < nbOption; i++)
        {
            std::getline (fichierMenu, option[i]);
            if(option[i].length() > longueurMax)
                longueurMax = option[i].length();
        }
    }
}

menu::~menu()
{
    delete option;
}

int menu::Afficher()
{
    int choix;
    if(nbOption == 0)
    {
        choix = -1;
    }else {
        cout << setfill('-');
        cout << "+-" << setw(4) << "-+-" <<setw(longueurMax + 2) << "+" << endl;
        cout<<setfill(' ');
        for (unsigned int i = 0; i < nbOption; i++)
        {
            cout << "| " << i << " | " << setw(longueurMax) << option[i] << " |" << endl;
        }
        cout << setfill('-');
        cout << "+-" << setw(4) << "-+-" << setw(longueurMax + 2) << "-+" << endl;
        cout << setfill(' ');
        do
        {
            cout << "Votre choix entre 0 et  " << nbOption - 1 << endl;
            cin >> choix;
        }while(choix != nbOption -1);
    }


    return choix;
}

void menu::AttendreAppuiTouche()
{
    string uneChaine;
    cout << endl << "appuyer sur la touche Entrée pour continuer...";
    getline(cin,uneChaine);
    cin.ignore( std::numeric_limits<streamsize>::max(), '\n' );
    system("clear");
}
