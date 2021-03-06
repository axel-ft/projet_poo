#ifndef DEF_COMMERCIAL
#define DEF_COMMERCIAL

#include <string>
#include "employe.h"

class Commercial : public Employe {
    public:
        Commercial();
        int getNombreDePrimes();
        void setNombreDePrimes(int nombreDePrimes);

        int getPrime();
        void setPrime(int prime);

    private:
        int m_nombreDePrimes;
        int m_prime;
};


class Vendeur : public Commercial {
    public:
        Vendeur();
        Vendeur(std::string name, std::string fName, int Age);
        double calculSalaire();
};

class Representant : public Commercial {
    public:
        Representant();
        Representant(std::string name, std::string fName, int Age);
        int getFraisParDeplacement();
        void setFraisParDeplacement(int fraisParDeplacement);

        int getNombreDeDeplacements();
        void setNombreDeDeplacements(int nombreDeDeplacements);

        double calculSalaire();

    private:
        int m_fraisParDeplacement;
        int m_nombreDeDeplacements;
};

#endif
