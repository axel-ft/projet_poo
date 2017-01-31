#ifndef DEF_COMMERCIAL
#define DEF_COMMERCIAL

#include <string>
#include "employe.h"

class Commercial : public Employe {
	public:
        Employe();
		int getSalaireDeBase();
		void setSalaire(int newSalaire);

		int getPrime();
		void setPrime(int newPrime);

	private:
		salaire = 2500;
        int nombreDePrimes;
        int const prime;
};


class Vendeur : public Commercial {
	public:
        Commercial();

	private:
		prime = 100;
};

class Representant : public Commercial {
	public:
        Representant();
        int getFraisParDeplacement();
		void setFraisParDeplacement(int newFrais);

	private:
		prime = 250;
		int const fraisParDeplacement = 50;
        int nombreDeDeplacements;
};

#endif
