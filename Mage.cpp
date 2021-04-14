#ifndef MAGE_CPP
#define MAGE_CPP

#include "Mage.h"
#include "Monster.h"
#include <iostream>

Mage::Mage(){
    _nom = "Gégé";
    _pv = 40;
}

int Mage::getPv(){
    return _pv;
}

void Mage::afficherMage(){
    std::cout << "Nom : " << _nom << std::endl;
    std::cout << "PV : " << _pv << std::endl;
}

#endif