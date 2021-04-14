#ifndef MONSTRE_CPP
#define MONSTRE_CPP

#include "Monster.h"
#include <iostream>

Monstre::Monstre(){
    _nom = "Monstre 1";
    _pv = 20;
    _atk = 5;
    _epuisement = false;
}

int Monstre::getPv(){
    return _pv;
}

int Monstre::attaque(){
    if(_epuisement = true){
        return 0;
    } else {
        return _atk;
        _epuisement = false;
    }
}

void Monstre::afficher(){
    std::cout << "Nom : " << _nom << std::endl;
    std::cout << "PV : " << _pv << std::endl;
    std::cout << "Attaque : " << _atk << std::endl;
    if(_epuisement = true){
        std::cout << "Etat : Indisponible"<< std::endl;
    } else {
        std::cout << "Etat : Disponible"<< std::endl;
    }
}

void Monstre::finTour(){
    _epuisement = false;
    afficher();
}

#endif