#ifndef MONSTRE_H
#define MONSTRE_H

#include <string>


class Monstre{
    private:
        std::string _nom;
        int _pv;
        int _atk;
        bool _epuisement;
    public:
        Monstre(std::string _nom, int _pv, int _atk);
        int getPv();
        int attaque();
        void afficher();
        void finTour();
        Monstre();
        
};

#endif