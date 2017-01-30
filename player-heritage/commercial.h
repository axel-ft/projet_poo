#ifndef DEF_COMMERCIAL
#define DEF_COMMERCIAL

#include <string>
#include "employe.h"

class Commercial : public Employe {
	public:
		int getSalaireDeBase();
		void setSalaireDeBase(int newSalaireDeBase);

	private:
		int salaireDeBase = 2500;
};


class Vendeur : public Commercial {
	public:
		int getPrime();
		void setPrime(int newPrime);

	private:
		int prime = 100;
};

class Representant : public Commercial {
	public:
		int getPrime();
		void setPrime(int newPrime);
		void setFraisParDeplacement(int newFrais);

	private:
		int prime = 250;
		int fraisParDeplacement = 50;
};

#endif
