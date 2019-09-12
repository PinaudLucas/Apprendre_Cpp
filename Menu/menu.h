#ifndef MENU_H
#define MENU_H
#include <string>
#include <algorithm>
#include <iostream>
#include <fstream>
#include <iomanip>


class menu
{
private:
    std::string nom;
    std::string *option;
    unsigned int nbOption;
    int longueurMax;
public:
    menu(const std::string &_nom);
    ~menu();
    int Afficher();
    static void AttendreAppuiTouche();
};

#endif // MENU_H

