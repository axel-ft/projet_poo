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

    private:
};

class Representant : public Commercial {
    public:
        Representant();
        int getFraisParDeplacement();
        void setFraisParDeplacement(int fraisParDeplacement);

        int getNombreDeDeplacements();
        void setNombreDeDeplacements(int nombreDeDeplacements);

    private:
        int m_fraisParDeplacement;
        int m_nombreDeDeplacements;
};

#endif
