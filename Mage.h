#ifndef MAGE_H
#define MAGE_H

#include "Monster.h"
#include <string>
#include <vector>

class Mage{
    private:
        std::string _nom;
        int _pv;
        std::vector<Monstre> _zoneJeu;
    public:
        int getPv();
        void afficherMage();
        void finTour();
        void utiliserMonstre();
        Mage();
        Mage(std::string _nom, int _pv);
};

#endif
